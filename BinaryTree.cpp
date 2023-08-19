#include <vector>
#include <set>
#include <string>

using namespace std;

struct tree
{
    int x;
    tree *l;
    tree *r;
};

string choose(tree **T)
{
    string x = to_string((*T)->x);
    if((*T)->l == nullptr && (*T)->r == nullptr){
        *T = nullptr;
        return x;
    }
    else if(){
    }
    else if(){
    }
    return "";
}

int solution(tree *T)
{
    set<string> st;
    while(T!=nullptr){
        string number = choose(T);
        if(number.length()==3) st.insert(number);
    }
    return st.size();
}
