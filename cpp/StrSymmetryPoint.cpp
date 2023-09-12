#include <string>
using namespace std;

int solution(string &S) {
    unsigned j = S.size();
    for(unsigned i = 0; i<S.size(); i++)
    {
        j--;
        if(i==j) return i;
        else if(S[i]!=S[j]) return -1;
    }
    return -1;
}
