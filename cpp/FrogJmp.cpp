int solution(int X, int Y, int D) {
    int N = (Y-X)/D;
    if(X+N*D<Y) return N+1;
    else return N;
}
