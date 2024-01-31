def solution(X, Y, D):
    N = int((Y-X)/D)
    if(X+D*N < Y):
        return N+1
    else:
        return N
