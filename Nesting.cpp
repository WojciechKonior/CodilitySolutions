#include <stack>
#include <string>

using namespace std;

using namespace std;

int solution(string &S) {
    stack<char> st;
    for(const char& c : S)
    {
        if(!st.empty() && st.top() == '(' && c==')') st.pop();
        else st.push(c);
    }

    return st.empty();
}
