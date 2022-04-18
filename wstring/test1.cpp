#include <iostream>
#include <string>
#include <locale>


using namespace std;

void test1(){
    setlocale(LC_ALL, "chs");
    wstring s1 = L"我爱你";
    // wcout.imbue(locale("chs"));
    
    wcout<<s1<<endl;
}
int main(){
    test1();
    


    return 0;
}