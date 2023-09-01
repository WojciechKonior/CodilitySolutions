#include <iostream>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> &A) {
    set<int> st;
  
    for(auto& a: A) 
      st.insert(a);
  
    for(int i = 1; ; i++) 
      if(st.find(i)==st.end()) 
        return i;

    return 1;
}
