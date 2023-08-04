#include <iostream>

struct alignas(4) Str
{
    char a;

    short b;
    char c;

    int d;
};

int main(){
    std::cout << alignof(Str) << " " << sizeof(Str) << std::endl;
    return 0;
}
