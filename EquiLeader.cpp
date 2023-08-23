#include <vector>
#include <unordered_map>

using namespace std;

int computeEquiLeader(unordered_map<int, unsigned>& mp, unsigned size){
    for(auto& m : mp){
        if(m.second > size) {
            return m.first;
        }
    }
    return -11e8;
}

int solution(vector<int> &A) {

    unsigned size = A.size();
    
    int eq_lead = 0;
    unordered_map<int, unsigned> mp1;
    unordered_map<int, unsigned> mp2;

    for(unsigned i = 0; i<size; i++){
        mp2[A[i]]++;
    }

    for(unsigned i = 0; i<size-1; i++){
        mp1[A[i]]++;
        mp2[A[i]]--;

        unsigned size1 = (i+1)/2;
        unsigned size2 = (size-i-1)/2;

        int lead1 = computeEquiLeader(mp1, size1);
        int lead2 = computeEquiLeader(mp2, size2);

        if(lead1 > -11e8 && lead1 == lead2)
            eq_lead++;
    }

    return eq_lead;
}


#include <vector>
#include <unordered_map>

using namespace std;

int findEquiLeader(unordered_map<int, unsigned>& mp, unsigned& size){
    for(auto& m : mp){
        if(m.second > size) {
            return m.first;
        }
    }
    return -11e8;
}

// int solution(vector<int> &A) {

//     unsigned size = A.size();
    
//     int eq_lead = 0;
//     unordered_map<int, unsigned> mp1;
//     unordered_map<int, unsigned> mp2;

//     for(unsigned i = 0; i<size; i++){
//         mp2[A[i]]++;
//     }

//     for(unsigned i = 0; i<size-1; i++){
//         mp1[A[i]]++;
//         mp2[A[i]]--;

//         unsigned size1 = (i+1)/2;
//         unsigned size2 = (size-i-1)/2;

//         int lead2 = findEquiLeader(mp2, size2);

//         if(lead2 > -11e8 && mp1[lead2] > size1)
//             eq_lead++;
//     }

//     return eq_lead;
// }
