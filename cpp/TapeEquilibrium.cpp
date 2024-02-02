#include <limits.h>
#include <math.h>

int solution(vector<int> &A) {
    // Implement your solution here
    int first = 0;
    int second = 0;
    int min_diff = INT_MAX;
    for(auto &a : A)
        second += a;

    for(unsigned i = 1; i<A.size(); i++)
    {
        first += A[i-1];
        second -= A[i-1];
        int diff = abs(first - second);
        if (diff < min_diff) 
            min_diff = diff;
    }

    return min_diff;
}
