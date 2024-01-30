int solution(int N) {

    int mask = 1;
    int maxgap = 0;
    int tmpgap = -1;
    for(int i = 1; i<33; i++)
    {
        if(mask & N) 
        {
            maxgap = max(maxgap, tmpgap);
            tmpgap = 0;
        }
        else if(tmpgap!=-1)
        {
            tmpgap++;
        }
        mask <<= 1;
    }

    return maxgap;
}
