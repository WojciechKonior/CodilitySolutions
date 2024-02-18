def is_nucleotide(n, first, last, mp_idx):
    if mp_idx[n]:
        if last >= mp_idx[n][0] and first <= mp_idx[n][-1]:
            min_idx = -1
            for idx in mp_idx[n]:
                if idx >= first and idx<= last:
                    min_idx = idx
                    break
            if min_idx > 0:
                return True

    return False


def solution(S, P, Q):
    res = []
    M = len(P)
    N = len(S)

    mp = {
        'A': 1,
        'C': 2,
        'G': 3,
        'T': 4
    }

    mp_idx = {
        'A': [],
        'C': [],
        'G': [],
        'T': []
    }

    for i in range(0, N):
        mp_idx[S[i]].append(i)

    for i in range(0, M):
        first = P[i]
        last = Q[i]

        if is_nucleotide('A', first, last, mp_idx):
            res.append(mp['A'])
            continue

        if is_nucleotide('C', first, last, mp_idx):
            res.append(mp['C'])
            continue

        if is_nucleotide('G', first, last, mp_idx):
            res.append(mp['G'])
            continue
        
        res.append(mp['T'])

    return res

# def solution(S, P, Q):
#     mp = {
#         'A': 1,
#         'C': 2,
#         'G': 3,
#         'T': 4
#     }
#     res = []
#     M = len(P)
#     for i in range(0, M):
#         min_mp = S[P[i]]
#         if min_mp!='A':
#             for j in range(P[i], Q[i]+1):
#                 if S[j]=='A': 
#                     min_mp = S[j]
#                     break
#                 elif S[j]==min_mp: continue
                
#                 min_mp = min(min_mp, S[j])

#         res.append(mp[min_mp])

#     return res
