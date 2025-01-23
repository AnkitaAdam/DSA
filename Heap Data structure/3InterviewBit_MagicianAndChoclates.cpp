int Solution::nchoc(int A, vector<int> &B) {
    priority_queue<long long> pq;
    for(int i = 0; i < B.size(); i++) {
        pq.push(B[i]);
    }

    long long maxChocos = 0; // Use long long to avoid overflow

    while(A > 0 && !pq.empty()) {
        long long chocos = pq.top();
        pq.pop();

        maxChocos += chocos;
        maxChocos %= 1000000007; // Apply modulo to prevent overflow

        pq.push(chocos / 2);
        A--;
    }

    return (int)(maxChocos % 1000000007);
}
