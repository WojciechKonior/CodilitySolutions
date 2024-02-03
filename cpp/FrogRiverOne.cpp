#include <vector>
#include <set>

using namespace std;

// int solution(int X, vector<int> &A) {

//     set<int>  positions;
//     for(unsigned i = 0; i<A.size(); i++)
//     {
//         positions.insert(A[i]);
//         if(positions.size()==unsigned(X)) return i;
//     }
//     return -1;
// }

int solution(int X, vector<int> &A) {
    vector<int> vec(X, 0);
    int cnt = 0;
    for(unsigned i = 0; i<A.size(); i++)
    {
        if(A[i]<=X && A[i]>0)
        {
            vec[A[i]-1]++;
            if(vec[A[i]-1] == 1) 
            {
                cnt++;
                if (cnt==X) return int(i);
            }
        }
    }
    return -1;
}
