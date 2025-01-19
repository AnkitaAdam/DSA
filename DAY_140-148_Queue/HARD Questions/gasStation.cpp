class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas = 0, total_cost = 0;
        int tank = 0, start = 0;

        // Calculate total gas and cost to see if a solution is possible
        for (int i = 0; i < gas.size(); ++i) {
            total_gas += gas[i];
            total_cost += cost[i];
        }
        if (total_gas < total_cost) return -1; // If total gas is less than total cost, no solution exists

        // Find the starting point
        for (int i = 0; i < gas.size(); ++i) {
            tank += gas[i] - cost[i];
            if (tank < 0) {
                // If tank is negative, reset the starting point
                start = i + 1;
                tank = 0;
            }
        }

        return start;
    }
};