def solution(A, B, K):
    if K==1:
        return B-A+1

    if K==2:
        if A%K!=0:
            A+=1
        if B%K!=0:
            B-=1
        return int((B-A)/2+1)

    cnt = 0
    for i in range(int(A/K),B+1):
        n = i*K
        if(n<A):
            continue
        if(n>B):
            break;
        cnt+=1

    return cnt
