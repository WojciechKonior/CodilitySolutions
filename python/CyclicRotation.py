def solution(A, K):
    result = []
    size = len(A)

    if size==0:
        return result
    else:
        idx = size - (K%size)

        for i in range(idx, size):
            result.append(A[i])

        for i in range(0, idx):
            result.append(A[i])

        return result
