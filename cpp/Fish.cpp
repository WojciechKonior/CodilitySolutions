#include <deque>
#include <vector>

using namespace std;

int solution(vector<int> &A, vector<int> &B) {

    deque<int> up;
    deque<int> down;
    for(int i = 0; i<int(A.size()); i++)
    {
        if(B[i]==0) up.push_back(i);
        else down.push_back(i);

        if(!up.empty() && !down.empty()){
            int P = down.back();
            int Q = up.back();
            if(P<Q){
                if(A[P] > A[Q]) up.pop_back();
                else down.pop_back();
            }
        }
    }
    return up.size() + down.size();
}
