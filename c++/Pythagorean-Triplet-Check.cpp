#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int findMax(int a, int b, int c) {
    int max = INT_MIN;
    if (a>b) {
        (a>c) ? max = a : max = c;
    } else {
        (b>c) ? max = b : max = c;
    }
    return max;
}

bool checkPythagorean(int a, int b, int c) {
    bool isPythagorean = false;
    int max = findMax(a, b, c);
    
    return isPythagorean;
}

int main() {
    cout << checkPythagorean(6, 3, 4);
}
