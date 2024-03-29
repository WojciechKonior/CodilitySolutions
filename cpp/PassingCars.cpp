#include <vector>
#include <iostream>

using namespace std;

// int solution(vector<int> &A) {
//     int cnt=0, e_cnt=0;
    
//     for(const auto& a : A)
//     {
//         if(a==0){
//             e_cnt++;
//         }
//         else {
//             cnt += e_cnt;
//             if(cnt>1e9){
//                 return -1;
//             }
//         }
//     }

//     return cnt;
// }

int solution(vector<int> &A) {

    unsigned long long pairs = 0;
    unsigned long long e = 0;

    for(auto &a : A)
    {
        if(a==0) 
            e++;
        else
            pairs += e;
    }

    return pairs>1e9 ? -1 : int(pairs);
}
