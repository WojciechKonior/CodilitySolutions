#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> &A) {
    int result = 0;
    for(auto &a : A)
    {
        result ^= a;
    }

    return result;
}
