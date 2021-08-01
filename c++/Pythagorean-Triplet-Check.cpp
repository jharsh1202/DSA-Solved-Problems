#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int findMax(int a, int b, int c) {
    int max = INT_MIN;
    (a>b) ? (a>c) ? max = a : max = c : (b>c) ? max = b : max = c;
    return max;
}

bool checkPythagorean(int a, int b, int c) {
    bool isPythagorean = false;
    int max = findMax(a, b, c);
    if(a==max) swap(a,c);
    if(b==max) swap(b,c);
    return isPythagorean;
}

int main() {
    cout << checkPythagorean(6, 3, 4);
}
