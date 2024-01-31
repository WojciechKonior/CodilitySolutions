int solution(vector<int> &A) {
    unsigned act_sum = 0;
    for(int &a : A)
        act_sum += a;

    unsigned n = A.size()+1;
    unsigned th_sum = n*(n+1)/2;

    return int(th_sum - act_sum);
}
