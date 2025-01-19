#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
    int remainingTime;
    int waitingTime;
    int turnaroundTime;
    int completionTime;
};

int main() {
    int n, quantum;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);
    queue<int> readyQueue;
    int currentTime = 0;

    // Input arrival time and burst time for each process
    for (int i = 0; i < n; ++i) {
        processes[i].id = i + 1;
        cout << "Enter arrival time and burst time for process " << processes[i].id << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
        processes[i].remainingTime = processes[i].burstTime;
    }

    cout << "Enter time quantum: ";
    cin >> quantum;

    vector<bool> inQueue(n, false);
    int completed = 0;
    while (completed < n) {
        for (int i = 0; i < n; ++i) {
            if (processes[i].arrivalTime <= currentTime && !inQueue[i]) {
                readyQueue.push(i);
                inQueue[i] = true;
            }
        }

        if (!readyQueue.empty()) {
            int index = readyQueue.front();
            readyQueue.pop();
            if (processes[index].remainingTime > quantum) {
                processes[index].remainingTime -= quantum;
                currentTime += quantum;
                readyQueue.push(index);
            } else {
                currentTime += processes[index].remainingTime;
                processes[index].completionTime = currentTime;
                processes[index].turnaroundTime = processes[index].completionTime - processes[index].arrivalTime;
                processes[index].waitingTime = processes[index].turnaroundTime - processes[index].burstTime;
                processes[index].remainingTime = 0;
                completed++;
            }
        } else {
            currentTime++;
        }
    }

    float totalWT = 0, totalTAT = 0;
    cout << "\nP\tAT\tBT\tCT\tTAT\tWT\n";
    for (const auto &process : processes) {
        cout << "P" << process.id << "\t" << process.arrivalTime << "\t" << process.burstTime << "\t" << process.completionTime << "\t" << process.turnaroundTime << "\t" << process.waitingTime << "\n";
        totalWT += process.waitingTime;
        totalTAT += process.turnaroundTime;
    }

    cout << "\nAverage Waiting Time: " << totalWT / n;
    cout << "\nAverage Turnaround Time: " << totalTAT / n;

    cout << "\n\nGantt Chart:\n|";
    currentTime = 0;
    for (const auto &process : processes) {
        if (process.completionTime > 0) {
            cout << " P" << process.id << " |";
            currentTime = process.completionTime;
        }
    }
    cout << "\n0";
    for (const auto &process : processes) {
        if (process.completionTime > 0) {
            cout << "   " << process.completionTime;
        }
    }
    cout << "\n";

    return 0;
}
