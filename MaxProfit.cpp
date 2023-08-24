#include <vector>

using namespace std;

int solution(vector<int> &A) {
    int max_profit = 0;
    int ultimate_max_profit = 0;

    for(unsigned i = 1; i<A.size(); i++){
        int difference = A[i] - A[i-1];
        max_profit = max(0, difference + max_profit);
        ultimate_max_profit = max(max_profit, ultimate_max_profit);
    }
    return ultimate_max_profit;
}
