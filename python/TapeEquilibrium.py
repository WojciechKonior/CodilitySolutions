

def solution(A):
    rhs = 0
    lhs = 0

    for a in A:
        rhs += a

    min_diff = abs(lhs - rhs)
    
    for i in range(1, len(A)-1):
        lhs += A[i-1]
        rhs -= A[i-1]
        diff = abs(lhs - rhs)
        min_diff = min(min_diff, diff)

    return min_diff

