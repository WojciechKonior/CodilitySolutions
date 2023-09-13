#include <vector>

using namespace std;

int solution(vector<int> &A) {
    int inv_num = 0;
    for(unsigned i = 0; i<A.size(); i++)
    {
        for(unsigned j = i+1; j<A.size();j++)
        {
            if(A[i]>A[j]) inv_num++;
        }
    }
    return inv_num;
}
