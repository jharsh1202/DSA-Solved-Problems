#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int combination (int n, int r) {
    if (r == 0 || n == r) return 1;
    if (r == 1) return n;
    unsigned long long res = 1;
    for(int i=0; i<r; i++) {
        res=res*(n-i);
        res/=(i+1);
    }
    return res;
}

vector<int> pascalRow(int rowIndex) {
    vector<int> pascalRow;
    for (int i=0; i<rowIndex+1; i++) 
        pascalRow.push_back(combination(rowIndex, i));
    return pascalRow;
}


int main() {
    vector<int> p = pascalRow(8);
    for (int i = 0; i < p.size(); i++) 
        cout<<p[i]<<" ";
}

// class Solution {
// public:
//     unsigned long long fact(int n) {
//         unsigned long long fact = 1;
//         for (long long i = 2; i <= n; i++) 
//             fact*=i;
//         return fact;
//     }
//     vector<int> getRow(int rowIndex) {
//         vector<int> pascalLastRow(rowIndex+1, 0);
//         unsigned long long nfact = fact(rowIndex);
//         for (int j = 0; j <= rowIndex; j++) {
//             pascalLastRow[j] = nfact / (fact(j)*fact(rowIndex-j));
//         }
//         return pascalLastRow;
//     }
// };