#include <bitset>
#include <iostream>

using namespace std;

int solution(int N) {
    string number = bitset<32>(N).to_string();

    while(number.front()=='0')
        number.erase(number.begin());

    while(number.back()=='0')
        number.pop_back();

    unsigned size = 0;
    string tmp;
    for(auto digit : number)
    {
        if(digit == '0') tmp.push_back('0');
        else if(digit == '1') 
        {
            if(tmp.size()>size) size = tmp.size();
            tmp.clear();
        }
    }
    
    return int(size);
    // Implement your solution here
}