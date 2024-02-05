#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> &A) {
    vector<int> counters(N, 0);
    int max_cnt = 0;
    int last_max = 0;

    for(auto & a : A)
    {
        if (a==N+1)
        {
            last_max = max_cnt;
        }
        else {
            if(counters[a-1]<last_max)
                counters[a-1] = last_max + 1;
            else
                counters[a-1]++;

            max_cnt = max(counters[a-1], max_cnt);
        }
    }

    for(auto &c : counters)
        if(c<last_max)
            c = last_max;

    return counters;
}

// vector<int> solution(int N, vector<int> &A) { 
//     vector<int> result(N,0);
//     int minimum = 0;
//     int maximum = 0;

//     for(auto a : A)
//     {
//         if(a > N){
//             minimum = maximum;
//         }
//         else {
//             result[a-1] = max(result[a-1], minimum) + 1;
//             if(result[a-1] > maximum) maximum = result[a-1];
//         }
//     }

//     for(auto& r : result){
//         r = max(r, minimum);
//     }

//     return result;
// }
