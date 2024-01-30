vector<int> solution(vector<int> &A, int K) {
    int s = A.size();
    vector<int> result;
    
    if (s==0)
        return {};
    else
    {
        result.reserve(s);
        int idx = s-(K%s);

        for(int i = idx; i<s; i++)
            result.emplace_back(A[i]);
        for(int i = 0; i<idx; i++)
            result.emplace_back(A[i]);

        return result;
    }
}
