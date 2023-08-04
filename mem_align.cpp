#include <iostream>

struct Str
{
    char a;
    char c;
    short b;

    int d;
};

int main(){
    std::cout << sizeof(Str) << std::endl;
    return 0;
}
