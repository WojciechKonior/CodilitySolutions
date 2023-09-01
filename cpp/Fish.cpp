#include <stack>
#include <vector>

using namespace std;

int solution(vector<int> &A, vector<int> &B) {

    stack<unsigned> fish;

    for(unsigned Q = 0; Q<A.size(); Q++){
        if(fish.empty()){
            fish.push(Q);
        }
        else{
            unsigned P = fish.top();
            if(P < Q && B[P] == 1 && B[Q] == 0){
                if(A[P]<A[Q]){
                    fish.pop();
                    Q--;
                }
            }
            else{
                fish.push(Q);
            }
        }
    }
    return fish.size();
}
