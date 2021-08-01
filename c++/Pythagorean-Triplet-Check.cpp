#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int findMax(int a, int b, int c) {
    int max = INT_MIN;
    if (a>b) {
        if(a>c) max = a; 
        else max = c;
    } else {
        if (b>c) max = b;
        else max = c;
    }
    return max;
}

bool checkPythagorean(int a, int b, int c) {
    bool isPythagorean = false;
    int max = findMax(a, b, c);
    cout<<max;
    return isPythagorean;
}

int main() {
    cout << checkPythagorean(2, 4, 5);
}
