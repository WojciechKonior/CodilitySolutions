def solution(A):
    S = len(A)
    B = [0 for i in range(S)]

    for a in A:
        if a>S:
            return 0

        B[a-1] += 1
        
        if B[a-1]>1:
            return 0

    return 1
