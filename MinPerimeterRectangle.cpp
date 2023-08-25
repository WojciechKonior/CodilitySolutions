#include <set>

using namespace std;

int solution(int N) {
    unsigned n = unsigned(N);
    set<unsigned> st;

    for(unsigned i = 1; ; i++){
        unsigned i2 = i*i;
        if(i2>=n){
            if(i2==n) {
                st.insert(4*i);
            }
            return int(*st.begin());
        }
        if(n%i==0){
            st.insert(2*(i+n/i));
        }
    }

}
