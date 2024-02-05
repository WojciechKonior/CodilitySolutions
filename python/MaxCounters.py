def solution(N, A):
    counters = [0 for i in range(0, N)]
    curr_max = 0
    last_max_all = 0

    for a in A:
        if(a==N+1):
            last_max_all = curr_max
        else:
            if counters[a-1]<last_max_all:
                counters[a-1] = last_max_all + 1
            else:
                counters[a-1] += 1

            curr_max = max(curr_max, counters[a-1])

    for i in range(0, len(counters)):
        if counters[i] < last_max_all:
            counters[i] = last_max_all

    return counters
