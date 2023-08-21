#include <vector>
#include <unordered_map>

using namespace std;

int compute_eq_leader(vector<int> &A, unsigned begin, unsigned end)
{
    unordered_map<int, unsigned> mp;
    unsigned half_size = (end - begin)/2;

    for(unsigned i = begin; i<end; i++) {
        auto& m = mp[A[i]];
        m++;
        if(m > half_size) return A[i];
    }

    // for(auto& m : mp) {
    //     if(m.second > half_size) return m.first;
    // }

    return -1;
}

int solution(vector<int> &A) {
    // Implement your solution here
    int eq_leaders = 0;

    for(unsigned i = 0; i<A.size(); i++) {
        unsigned one = compute_eq_leader(A, 0, i);
        unsigned two = compute_eq_leader(A, i, A.size());
        if(one==two) eq_leaders++;
    }
    // cout << one << endl;

    return eq_leaders;
}
