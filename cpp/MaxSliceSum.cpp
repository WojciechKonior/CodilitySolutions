#include <vector>

using namespace std;

int solution(vector<int> &A) {
    
    int max_sum = 0;
    int slice_max_sum = A[0];
    for(auto& a : A){
        int iMax = max_sum + a;
        slice_max_sum = max(slice_max_sum, iMax);
        max_sum = max(0, iMax);
    }

    return slice_max_sum;
}
