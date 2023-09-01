#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> &A) { 
    vector<int> result(N,0);
    int minimum = 0;
    int maximum = 0;

    for(auto a : A)
    {
        if(a > N){
            minimum = maximum;
        }
        else {
            result[a-1] = max(result[a-1], minimum) + 1;
            if(result[a-1] > maximum) maximum = result[a-1];
        }
    }

    for(auto& r : result){
        r = max(r, minimum);
    }

    return result;
}
