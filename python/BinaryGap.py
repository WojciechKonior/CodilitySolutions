def solution(N):
    maxgap = 0
    tmpgap = -1
    n = 1

    for i in range(1,32):
        if n & N:
            maxgap = max(maxgap, tmpgap)
            tmpgap = 0
        elif tmpgap != -1:
            tmpgap += 1
            
        n <<= 1

    return maxgap
