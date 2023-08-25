using namespace std;

int solution(int N) {
    int factor = 0;
    for(int i = 1; i<N+1; i++)
    {
        if(N%i == 0) factor++;
    }
    return factor;
}
