int solution(int A, int B, int K) {
    if(K==1) return B-A;
    int cnt = 0;
    for(int i = A/K; i<=B; i++)
    {
        int n = i*K;
        if(n<A) continue;
        if(n>B) break;
        cnt++;
        
    }
    return cnt;
}
