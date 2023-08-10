#include <iostream>

using namespace std;

int main(){
    string str1, str2, str3;
    str1.append("Wojtek");
    str2.assign(" Konior");
    str1.insert(6, str2);
    str3.push_back('M');
    str3.append("y name is Wojtek and I'm 35 years old");
    str1.replace(0, 6, str3, 0, 17);
    cout << str1 << " " << str1.compare(0,3,str3, 0,3) << endl;
    cout << str1.size() << " " << str1.length() << " " << str1.capacity() << " " << str1.max_size() << endl;
    str1.resize(10);
    str1.erase(0,3);
    str1.replace(4,1," and surname is Wojtek", 0, 13);
    str2 = "Wojtek";
    str1.swap(str2);
    cout << str1 << endl;
    cout << str2 << endl;
    str1.clear();
    str1.reserve(20);
    cout << str1.empty() << endl;
    return 0;
}
