#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(std::vector<int> &A) {
    sort(A.begin(), A.end());
    
    while(!A.empty())
    {
        if(A.size()==1) 
            return A.front();
        else if(*(A.begin())==*(A.begin()+1))
        {
            A.erase(A.begin()+1);
            A.erase(A.begin());
        }
        else {
            return *(A.begin());
        }
    }

    return 0;
}