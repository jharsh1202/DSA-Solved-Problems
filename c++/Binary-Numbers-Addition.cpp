#include <iostream>
#include <vector>
#include <math.h>
#include <typeinfo>
typedef long long ll;
using namespace std;

string addBinary(string a, string b) {
	string result = ""; 
	int s = 0, i = a.size() - 1, j = b.size() - 1;

	while (i >= 0 || j >= 0 || s == 1)	{
		s += (i >= 0)? a[i] - '0': 0;
		s += (j >= 0)? b[j] - '0': 0;
    	result = char(s % 2 + '0') + result;
		s /= 2;
		i--; j--;
	}
	return result;
}

int main() {
	string a = "101", b="011";
	cout << addBinary(a, b) << endl<<INT_MAX;
    return 0;
}


// vector<int> createVector(int n) { 
//     vector<int> v;
//     while(n>0) {
//         int rem=n%10;
//         v.push_back(rem);
//         n=n/10;
//     }
//     reverse(v.begin(), v.end());
//     return v;
// }

// vector<int> adjust(vector<int> &v2, int n) {
//     vector<int> res;
//     for(int i=0; i<n-v2.size(); i++) res.push_back(0);
//     for(int i=0; i<v2.size(); i++) res.push_back(v2[i]);
//     return res;
// }

// int binaryAddition(int a, int b) {
//     vector<int> v1 = createVector(a);
//     vector<int> v2 = createVector(b);

//     vector<int> res; int result=0;
//     if( v1.size() < v2.size() ) swap(v1, v2);
//     v2 = adjust(v2, v1.size());
//     int ext = 0;

//     for(int i=v1.size()-1; i>=0; i--) {
//             a=v1[i], b = v2[i];
//             if(a+b+ext==3) {
//                 ext=1; res.push_back(1);
//             } else if(a+b+ext==2){
//                 ext=1; res.push_back(0);
//             } else if(a+b+ext==1){
//                 ext=0; res.push_back(1);
//             } else {
//                 ext=0; res.push_back(0);
//             }
//     }
//     res.push_back(ext);

//     for(int i=0; i<res.size(); i++) { result += res[i]*pow(10, i);}
//     return result;
// }

// int main () {
//     cout<<binaryAddition(1010111, 101101)<<" "; 
//     cout<<"check " << 48 - '0';
//     //1010111
//     //0101101
//     //10000100
// }