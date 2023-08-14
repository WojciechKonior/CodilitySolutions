int solution(string &S) {
    
    int brackets[6] = {0, 0, 0, 0, 0, 0};
    char last = S[S.size()-1];

    if(S.empty()) return 1;

    if(last == '}')
        brackets[1]++;
    else if(last == ')')
        brackets[3]++;
    else if(last == ']')
        brackets[5]++;
    else return 0;

    for(int i = 0; i<int(S.size()-1); i++)
    {
        switch(S[i]){
            case '{':
                if(S[i+1]==')' || S[i+1]==']') return 0;
                brackets[0]++;
                break;
            case '}':
                brackets[1]++;
                break;
            case '(':
                if(S[i+1]=='}' || S[i+1]==']') return 0;
                brackets[2]++;
                break;
            case ')':
                brackets[3]++;
                break;
            case '[':
                if(S[i+1]==')' || S[i+1]=='}') return 0;
                brackets[4]++;
                break;
            case ']':
                brackets[5]++;
                break;
            default:
                break;          
        }
    }

    if(
        brackets[0]!=brackets[1] || 
        brackets[2]!=brackets[3] || 
        brackets[4]!=brackets[5]
    ) 
    {
        // for(int i = 0; i<6; i++) cout << brackets[i] << " ";
        // cout << endl;
        return 0;
    }
    else{
        int found;
        auto NPOS = int(string::npos);
        do
        {
            found = S.find("()");
            if(found==NPOS){
                found = S.find("[]");
                if(found==NPOS){
                    found = S.find("{}");
                }
            }

            if(found != NPOS){
                S.erase(found,2);
            }
        }while(found != NPOS);
    }
    
    return S.empty()?1:0;
}
