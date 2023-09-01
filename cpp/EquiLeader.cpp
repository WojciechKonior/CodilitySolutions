#include <vector>
#include <unordered_map>

#define INF 2e9

using namespace std;

int findEquiLeader(unordered_map<int, unsigned>& mp, unsigned& size){
    for(auto& m : mp){
        if(m.second > size) {
            return m.first;
        }
    }
    return INF;
}

int solution(vector<int> &A) {

    int eq_lead = 0;
    unsigned size = A.size();
    unordered_map<int, unsigned> mp2;
    
    for(unsigned i = 0; i<size; i++){
        mp2[A[i]]++;
    }

    unsigned s = mp2.size();
    int ld = findEquiLeader(mp2, s);
    if(ld==INF) return eq_lead;

    unordered_map<int, unsigned> mp1;

    for(unsigned i = 0; i<size-1; i++){
        mp1[A[i]]++;
        mp2[A[i]]--;

        unsigned size1 = (i+1)/2;
        unsigned size2 = (size-i-1)/2;
        

        if(mp2.size() < mp1.size()){
            int lead2 = findEquiLeader(mp2, size2);
            if(lead2 != INF && mp1[lead2] > size1)
                eq_lead++;
        }
        else {
            int lead1 = findEquiLeader(mp1, size1);
            if(lead1 != INF && mp2[lead1] > size2)
                eq_lead++;
        }
    }

    return eq_lead;
}
