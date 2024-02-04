#include <set>
#include <vector>

using namespace std;

// int solution(vector<int> &A) {
//     set<int> perm;
//     for(auto a : A)
//         perm.insert(a);

//     unsigned max = *perm.rbegin();
//     unsigned size = A.size();
//     unsigned psize = perm.size();

//     if(max == size && size == psize) 
//         return 1;

//     return 0;
// }

int solution(vector<int> &A) {
    int S = A.size();
    vector<int> B(S, 0);
    for(auto &a : A)
    {
        if(a>S) 
            return 0;
        if(++B[a-1]>1)
            return 0;
    }
    return 1;
}
