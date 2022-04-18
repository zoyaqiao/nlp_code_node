
#include <iostream>
using namespace std;
// #include <comdef.h>
// string wstring2string(wstring wstr)
// {
//     string result;
//     int len = WideCharToMultiByte(CP_ACP, 0, wstr.c_str(), wstr.size(), NULL, 0, NULL, NULL);
//     if( len <= 0 )return result;
//     char* buffer = new char[len + 1];
//     if(buffer == NULL )return result;
//     WideCharToMultiByte(CP_ACP, 0, wstr.c_str(), wstr.size(), buffer, len, NULL, NULL);
//     buffer[len] = '\0';
//     result.append(buffer);
//     delete[] buffer;
//     return result;
// }
// wstring string2wstring(string str)
// {
//     wstring result;
//     int len = MultiByteToWideChar(CP_ACP, 0, str.c_str(), str.size(), NULL, 0);
//     if( len < 0 )return result;
//     wchar_t* buffer = new wchar_t[len + 1];
//     if( buffer == NULL )return result;
//     MultiByteToWideChar(CP_ACP, 0, str.c_str(), str.size(), buffer, len);
//     buffer[len] = '\0';
//     result.append(buffer);
//     delete[] buffer;
//     return result;
// }
int main()
{
    //string
    string str="string:C++技术网www.cjjjs.com";
    cout<<str.c_str()<<endl;
    //wstring
    wstring wstr = L"wstring:C++技术网www.cjjjs.com";
    setlocale( LC_ALL, "chs" );//设置wcout输出中文
    wcout<<wstr.c_str()<<endl;
 
    // //将wstring转为string来显示中文
    // cout<<"wstr2str:"<<wstring2string(wstr).c_str()<<endl;
 
    // //将string转为wstring
    // wstring wstr2 = string2wstring(str);
    // wcout<<"str2wstr:"<<wstr.c_str()<<endl;
 
    // int i;
    // cin>>i;
}