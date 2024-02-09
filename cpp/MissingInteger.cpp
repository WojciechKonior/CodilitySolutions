#include <iostream>
#include <vector>
#include <set>

using namespace std;

// int solution(vector<int> &A) {
//     set<int> st;
  
//     for(auto& a: A) 
//       st.insert(a);
  
//     for(int i = 1; ; i++) 
//       if(st.find(i)==st.end()) 
//         return i;

//     return 1;
// }


int solution(vector<int> &A) {
    vector<bool> B(1e6, false);

    for(auto &a : A)
    {
        if(a<0) continue;
        B[a] = true;
    }

    for(unsigned i = 1; i<B.size(); i++)
        if (B[i]==false)
            return int(i);

    return 1;
}
