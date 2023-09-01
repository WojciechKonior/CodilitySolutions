#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    sort(A.begin(), A.end());

    int s = A.size()-1;
    int first = A[0]*A[1]*A[s];
    int second = A[s]*A[s-1]*A[s-2];

    return max(first, second);
}
