#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int fact(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) fact*=i;
    return fact;
}

vector<int> getRow(int rowIndex) {
    vector<int> pascalLastRow(rowIndex+1, 0);
    int nfact = fact(rowIndex);
    for (int j = 0; j <= rowIndex; j++) {
        pascalLastRow[j] = nfact / (fact(j)*fact(rowIndex-j));
    }
    return pascalLastRow;
}

int main() {
    vector<int> pascals = getRow(9);
    for (int i=0; i<=9; i++) {
        cout<<pascals[i];
        cout<<" ";
    }
}


// vector<int> getRow(int numRows) {
//     vector<int> pascalLastRow;
//     for(int i=0; i<=numRows; i++) {
//         vector<int> pascalRow(i+1, 0);
//         for(int j=0; j<=i; j++) {
//             if(j==0 || j==i) pascalRow[j]=1;
//             else pascalRow[j]=pascalLastRow[j-1] + pascalLastRow[j];
//         }
//         pascalLastRow=pascalRow;
//     } 
//     return pascalLastRow;
// }
