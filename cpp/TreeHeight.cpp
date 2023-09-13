using namespace std;

struct SearchTree
{
    int max_length = 0;
    void diveInto(tree **T, int i)
    {
        i++;
        if((*T)->l == nullptr && (*T)->r == nullptr)
        {
            max_length = max(max_length, i);
            return;
        }

        if((*T)->l != nullptr)
        {
            diveInto(&((*T)->l), i);
        }

        if((*T)->r != nullptr)
        {
            diveInto(&((*T)->r), i);
        }

        return;
    }
};

int solution(tree * T) {
    int i = -1;
    SearchTree search;
    search.diveInto(&T, i);
    return search.max_length;
}
