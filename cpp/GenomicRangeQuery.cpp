#include <map>

map<char, int> imp_fact = {{'A', 1}, {'C', 2}, {'G', 3}, {'T', 4}};

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    size_t M = P.size();
    vector<int> res(M, 0);

    char min_imp_fact = 'T';

    for(size_t i = 0; i<M; i++)
    {
        for(int j = P[i]; j<Q[i]; j++)
        {
            min_imp_fact = min(min_imp_fact, S[j]);
            if(min_imp_fact == 'A')
                break;
        }
        res[i] = imp_fact[min_imp_fact];
        min_imp_fact = 'T';
    }
    return res;
}
