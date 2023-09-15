#include <deque>
#include <algorithm>

// (0, [0]) -> 1
// (10, [1, 2, 3, 3, 4, 3, 2, 5, 6, 7, 8, 9]) -> 29
// (10, [1, 2, 3, 3, 4, 3, 2, 5, 6, 5, 8, 9]) -> 28
// (1, [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]) -> 12
// (2, [1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1]) -> 14
// (3, [1, 1, 1, 1, 1, 2, 1, 1, 1, 3, 3, 2]) -> 16

int solution(int M, vector<int> &A) {
    deque<int> dek;
    int result = A.size();
    int front = 0;
    
    for(int back = 0; back<A.size(); back++)
    {   
        if(result>1e9) return 1e9;

        if(A[back] > M) continue;
        
        while(front < back && std::count(dek.begin(), dek.end(), A[back]))
        {
            dek.pop_front();
            front++;
            if(dek.size() > 1) result++;
        }

        dek.push_back(A[back]);
        if(dek.size()>1) result++;


        while(back==A.size()-1 && front < back)
        {
            dek.pop_front();
            front++;
            if(dek.size() > 1) result++;
        }
    }

    return result;
}
