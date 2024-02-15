mp = {
    'A': 1,
    'C': 2,
    'G': 3,
    'T': 4
}

# def solution(S, P, Q):
#     res = [0 for i in range(0, len(P))]

#     for i in range(0, len(P)):
#         res[i] = mp[min(S[P[i]:Q[i]+1])]

#     return res

def solution(S, P, Q):
    res = [0 for i in range(0, len(P))]

    for i in range(0, len(P)):
        min_mp = 'T'
        for j in range(P[i], Q[i]+1):
            min_mp = min(min_mp, S[j])
            if min_mp == 'A': break

        res[i] = mp[min_mp]
        min_mp = 'T'

    return res
