#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

vector<vector<int> > generate(int numRows) {
        vector<vector<int> > pascalTriangle;
        for(int i=0; i<numRows; i++) {
            vector<int> pascalRow(i+1, 0);
            for(int j=0; j<=i; j++) {
                if(j==0 || j==i) pascalRow[j]=1;
                else {
                    pascalRow[j]=pascalTriangle[i-1][j-1] + pascalTriangle[i-1][j];
                }
            }
            pascalTriangle.push_back(pascalRow);
        } 
        return pascalTriangle;
    }


int main() {
    vector<vector<int> > pascals = generate(10);
    for (int i=0; i<10; i++) {
        for (int j = 0; j < pascals[i].size(); j++){
            cout<<pascals[i][j];
        }
        cout<<"\n";
    }
}