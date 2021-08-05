#include <iostream>
using namespace std;

int matchString(string str1, string str2, int k1, int k2) {
    int len1 = str1.length();
    int len2 = str2.length();
    if(len1-k1 != len2-k2) return -1;
    else if(len1-k1 == 0 ) return 0;
    else return len1-k1;
}

int main(){
    cout<<matchString("success", "crossbreed", 4, 7);
}