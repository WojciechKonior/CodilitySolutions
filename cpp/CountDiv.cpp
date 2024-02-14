int solution(int A, int B, int K) {
    int cnt = 0;

    for(int i = A; i<=B; i++)
    {
        if(i%K==0) cnt++;
    }

    return cnt;
}
