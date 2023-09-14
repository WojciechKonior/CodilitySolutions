int greatestCommonDivisor(int a, int b, int res)
{
    if(a==b) return a*res;
    else if(a%2 == 0 && b%2 == 0)
        greatestCommonDivisor(a/2, b/2, 2*res);
    else if(a%2 == 0)
        greatestCommonDivisor(a/2, b, res);
    else if(b%2 == 0)
        greatestCommonDivisor(a, b/2, res);
    else if(a > b)
        greatestCommonDivisor(a-b, b, res);
    else
        greatestCommonDivisor(b, b-a, res);
}

int solution(int N, int M) {
    int gcd = greatestCommonDivisor(N,M,1);
    cout << gcd << endl;
    return N/gcd;
}
