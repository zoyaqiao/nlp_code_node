#include <iostream>
#include <cstring>
#include <string>
using std::wcout;
using std::endl;
using std::wstring;
using std::locale;
 
int main()
{
	setlocale(LC_ALL, "chs");
	wstring str = L"This is str";
	wcout << str << endl;
	
	return 0;
}