mp = {
    'A': 1,
    'C': 2,
    'G': 3,
    'T': 4
}

def solution(S, P, Q):
    res = [0 for i in range(0, len(P))]

    for i in range(0, len(P)):
        res[i] = mp[min(S[P[i]:Q[i]+1])]

    return res
