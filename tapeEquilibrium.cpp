#include <math.h>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    // Implement your solution here
    unsigned size = A.size();
    long long diff = 0;
    long long tmp = 0;

    for(unsigned i = 1; i<size; i++){
        long long right = 0;
        long long left = 0;
        for(unsigned j = 0; j<i; j++) left += A[j];
        for(unsigned j = i; j<size; j++) right += A[j];

        tmp = abs(left - right);

        if(i == 1 || tmp<diff) diff = tmp;
    }

    return diff;
}