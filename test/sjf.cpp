#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
    int waitingTime;
    int turnaroundTime;
    int completionTime;
};

bool compareArrival(Process a, Process b) {
    return a.arrivalTime < b.arrivalTime;
}

bool compareBurst(Process a, Process b) {
    return a.burstTime < b.burstTime;
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    for (int i = 0; i < n; i++) {
        processes[i].id = i + 1;
        cout << "Enter arrival time and burst time for process " << processes[i].id << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
    }

    sort(processes.begin(), processes.end(), compareArrival);

    int currentTime = 0;
    int completed = 0;
    while (completed < n) {
        int minIndex = -1;
        int minBurstTime = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (processes[i].arrivalTime <= currentTime && processes[i].completionTime == 0) {
                if (processes[i].burstTime < minBurstTime) {
                    minBurstTime = processes[i].burstTime;
                    minIndex = i;
                }
            }
        }

        if (minIndex == -1) {
            currentTime++;
            continue;
        }

        processes[minIndex].completionTime = currentTime + processes[minIndex].burstTime;
        processes[minIndex].turnaroundTime = processes[minIndex].completionTime - processes[minIndex].arrivalTime;
        processes[minIndex].waitingTime = processes[minIndex].turnaroundTime - processes[minIndex].burstTime;

        currentTime += processes[minIndex].burstTime;
        completed++;
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
    for (const auto &process : processes) {
        cout << " P" << process.id << " |";
    }
    cout << "\n0";
    for (const auto &process : processes) {
        cout << "   " << process.completionTime;
    }
    cout << "\n";

    return 0;
}
