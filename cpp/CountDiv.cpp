int solution(int A, int B, int K) {
    if(K==1)
    {
        int diff = B-A+1;
        return diff;
    }

    int cnt = 0;
    int S = A/K;
    for(long long i = S; i<=B; i++)
    {
        long long n = i*(long long)K;
        if(n<A) continue;
        if(n>B) break;
        cnt++;
    }
    return cnt;
}
