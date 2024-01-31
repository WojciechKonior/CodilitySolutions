def solution(A):
    realsum = 0
    for a in A:
        realsum += a;
    
    n = len(A) + 1
    thsum = n*(n+1)//2

    return thsum - realsum
