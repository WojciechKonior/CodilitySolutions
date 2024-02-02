def solution(A):
    if(len(A)==0 or len(A)==1):
        return 0

    rhs = 0
    lhs = 0

    for a in A:
        rhs += a

    rhs -= A[0]
    lhs += A[0]
    min_diff = abs(lhs - rhs)
    
    for i in range(2, len(A)):
        lhs += A[i-1]
        rhs -= A[i-1]
        diff = abs(lhs - rhs)
        min_diff = min(min_diff, diff)

    return min_diff
