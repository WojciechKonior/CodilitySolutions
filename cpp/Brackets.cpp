#include <deque>
#include <string>

using namespace std;

int solution(string &S) {
    deque<char> deq;

    for(char& c : S)
    {
        if(!deq.empty() && ((c == deq.back() + 2) || (c == deq.back() + 1))) 
            deq.pop_back();
        else {
            deq.push_back(c);
        }
    }
    return deq.empty() ? 1 : 0;
}
