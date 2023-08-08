#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    // Implement your solution here
    vector<int> B(A.size()+1, -1);
    for(unsigned i = 0; i<A.size(); i++)
    {
        B[A[i]-1] = 1;
    }
    
    return find(B.begin(), B.end(), -1) - B.begin() + 1;
}