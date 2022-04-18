#include <string>
#include <vector>
#include <iostream>
// using namespace std;

int string2vec(const std::string& source, std::vector<std::string>& result){
    int i = 0;
    while (source[i] != 0) {
        int byteCount;
        if (source[i] & 0x80 && source[i] & 0x40
            && source[i] & 0x20){
            if (source[i] & 0x10){
                byteCount = 4;
            } else {
                byteCount = 3;
            }
        } else if (source[i] & 0x80 && source[i] & 0x40){
            byteCount = 2;
        } else {
            byteCount = 1;
        }
//注意c++语法的旧标准不支持emplace_back 和auto& 
//所以在g++编译时，要加上 -std=c++11
        result.emplace_back(source.substr(i, byteCount));
        i += byteCount;
    }
    return 0;
}

void test1(){
    std::string s1 = "我爱北京天安门";
    // for(auto&s : s1){
    //     std::cout << "s.size(): " << s.size() << std::endl;
    // }
/**
 * 上面的代码有问题，因为只有容器才可以用auto&s
 * 字符串类型是不可以这样用的，字符串类型需要先把文本分割成一个个的汉字
 */
    std::vector<std::string> res1;
    string2vec(s1, res1);
    for(auto&s : res1){
        std::cout << "s.size(): " << s.size() << std::endl;
    }
//输出的结果为： 3 3 3 3 3 3 3 ，说明这7个字都是3个字节
//同时验证了对于字符串来说.size()输出的单位时字节

    std::string s2 = "i love beijing";
    // for(auto&s : s2){
    //     std::cout << "s.size(): " << s.size() << std::endl;
    // }
}

int main(){

    test1();
}