#include <set>
#include <vector>
#include <math.h>

using namespace std;

int solution(vector<int> &A) {
    set<int> st;
    for(auto& a : A)
    {
        st.insert(abs(a));
    }
    return st.size();
}
