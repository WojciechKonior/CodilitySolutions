#include <set>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    set<int> perm;
    for(auto a : A)
        perm.insert(a);

    unsigned max = *perm.rbegin();
    unsigned size = A.size();
    unsigned psize = perm.size();

    if(max == size && size == psize) 
        return 1;

    return 0;
}
