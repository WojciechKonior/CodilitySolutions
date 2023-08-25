using namespace std;

int solution(int N) {
    unsigned n = unsigned(N);
    if(n==1) return 1;
    else if(n==2) return 2;

    int factor = 0;
    for(unsigned i = 1; ; i++)
    {
        unsigned i2 = i*i;
        if(i2>=n){
            if(i2==n) factor++;
            break;
        }
        if(n%i == 0) factor+=2;
    }
    return factor;
}
