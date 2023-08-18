#include <map>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    int size = A.size()/2;
    map<int, int> mp;

    for(auto& a : A){
        mp[a]++;
    }

    for(auto& m : mp){
        if(m.second>size) 
        {
            for(unsigned i = 0; i<A.size(); i++){
                if(m.first == A[i]) return i;
            }
        }
    }

    return -1;
    // Implement your solution here
}
