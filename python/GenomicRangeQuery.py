# mp = {
#     'A': 1,
#     'C': 2,
#     'G': 3,
#     'T': 4
# }

# def solution(S, P, Q):
#     res = [0 for i in range(0, len(P))]

#     for i in range(0, len(P)):
#         res[i] = mp[min(S[P[i]:Q[i]+1])]

#     return res

# def solution(S, P, Q):
#     res = [0 for i in range(0, len(P))]

#     for i in range(0, len(P)):
#         min_mp = 'T'
#         for j in range(P[i], Q[i]+1):
#             min_mp = min(min_mp, S[j])
#             if min_mp == 'A': break

#         res[i] = mp[min_mp]
#         min_mp = 'T'

#     return res

def solution(S, P, Q):
    mp = {
        'A': 1,
        'C': 2,
        'G': 3,
        'T': 4
    }
    res = []
    M = len(P)
    for i in range(0, M):
        min_mp = S[P[i]]
        if min_mp!='A':
            for j in range(P[i], Q[i]+1):
                if S[j]=='A': 
                    min_mp = S[j]
                    break
                elif S[j]==min_mp: continue
                
                min_mp = min(min_mp, S[j])

        res.append(mp[min_mp])

    return res
