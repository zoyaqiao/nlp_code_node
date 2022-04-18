#include <stdlib.h>

#include <iostream>
#include <locale>
#include <string>
using namespace std;

int main() {
    string s1 = "第一";
    wstring s2 = L"第二";
    cout << s1 << endl;
    // wcout.imbue(locale("chs"));
    char* p = setlocale(LC_ALL, "zh-CN");
    chs_china .936;
    if (p == NULL) {
        std::cout << "没有修改" << endl;
    } else {
        cout << p << endl;
    }
    // locale::global(locale(""));
    // locale china("utf-8");
    // wcout.imbue(china);
    wcout << L"中国";
    wcout << s2.c_str() << endl;
    // system("PAUSE");
    return 0;
}