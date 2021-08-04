#include <iostream>
#include <vector>
#include <math.h>
typedef long long ll;
using namespace std;

int binaryToDecimal(int num, int len) {
    int c = len;
    int decimalVal = 0;
    while (c>0) {
        decimalVal+=(num%10)*pow(2,len-c); num/=10; c--;
    }
    return decimalVal;
}

int decimalToBinary(int num) {
    int binaryVal = 0;
    for(int i=0; num>0; i++, num/=2) binaryVal += num%2*pow(10, i); 
    return binaryVal;
}

int decimalToOctal(int num) {
    int binaryOctal = 0;
    for(int i=0; num>0; i++, num/=8) binaryOctal += num%8*pow(10, i); 
    return binaryOctal;
}

string decimalToHexaDecimal(int num) {
    string binaryOctal = "";
    for(int i=0; num>0; i++, num/=16) binaryOctal += num%16*pow(10, i); 
    return binaryOctal;
}

void decToHexa(int n) {
    vector<char> hexaDeciNum;
    while (n != 0) {
        int temp = n % 16;
        if (temp < 10) hexaDeciNum.push_back( temp + 48);
        else hexaDeciNum.push_back( temp + 55);  
        n = n / 16;
    }

    for (int j = hexaDeciNum.size()-1; j >= 0; j--) cout << hexaDeciNum[j];
}

int main() {
    cout << binaryToDecimal(1110, 4)<<" ";
    cout << decimalToBinary(14)<<" ";
    cout << decimalToOctal(95)<<" ";
    cout << decimalToHexaDecimal(95)<<" ";
    decToHexa(2545);
}
