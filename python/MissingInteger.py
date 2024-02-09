def solution(A):
    B = [0 for i in range(0, int(1e6+1))]

    for a in A:
        if a<0:
            continue
        B[a] = 1

    for i in range(1, len(B)):
        if B[i]==0:
            return i

    return 1
