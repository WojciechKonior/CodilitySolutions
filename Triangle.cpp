#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    sort(A.begin(), A.end());

    for(int i = A.size()-1; i>1; i--)
    {
        if((A[i] - A[i-1] - A[i-2]) < 0) return 1;
    }
    return 0;
}
