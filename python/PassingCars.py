def solution(A):
    pairs = 0
    e = 0

    for a in A:
        if a==0:
            e += 1
        else:
            pairs += e

    return -1 if pairs>int(1e9) else pairs
