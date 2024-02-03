def solution(X, A):
    x = [0]*X

    counter = 0
    i = 0

    for i in range(0, len(A)):
        if A[i]>0 and A[i]<=X:
            x[A[i]-1]+=1
            if x[A[i]-1]==1:
                counter+=1
                if counter == X:
                    return i

    return -1
