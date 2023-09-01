#include <stack>
#include <vector>

using namespace std;

int solution(vector<int> &H) {
    stack<int> st;
    int cnt = 0;
    for(const auto& h : H){
        if(!st.empty()){
            if(st.top()==h)
            {

            }
            else
            {
                if(!st.empty() && h<st.top())
                {
                    while(!st.empty() && h<st.top())
                    {
                        cnt++;
                        st.pop();
                    }
                    if(st.empty() || h!= st.top()) st.push(h);
                }

                else if(st.empty() || h>st.top()) st.push(h);
            }
        }
        else{
            st.push(h);
        }
    }

    cnt += st.size();

    return cnt;
}
