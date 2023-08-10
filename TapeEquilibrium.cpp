#include <math.h>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    // Implement your solution here
    unsigned size = A.size();
    vector<long long> sums;
    long long sum = 0;
    for(auto a : A){
        sum += a;
        sums.push_back(sum);
    }

    long long diff = 9223372036854775800;
    long long tmp = 0;

    for(unsigned i = 1; i<size; i++){
        tmp = abs(2*sums[i-1] - sum);
        if(tmp<diff) diff = tmp;
    }

    return diff;
}
