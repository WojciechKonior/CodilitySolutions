def solution(A):
    result = 0
    for a in A:
        result ^= a

    return result
