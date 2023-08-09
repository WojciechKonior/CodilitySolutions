#include <vector>
#include <set>

using namespace std;

int solution(int X, vector<int> &A) {

    set<int>  positions;
    for(unsigned i = 0; i<A.size(); i++)
    {
        positions.insert(A[i]);
        if(positions.size()==unsigned(X)) return i;
    }
    return -1;
}
