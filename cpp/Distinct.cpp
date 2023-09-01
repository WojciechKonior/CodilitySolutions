#include <vector>
#include <set>

using namespace std;

int solution(vector<int> &A) {
    set<int> st;

    for(const auto& a : A)
    {
        st.insert(a);
    }

    return st.size();
}
