#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

bool checkPythagoreanTriplet(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) v[i] = v[i] * v[i];
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < v.size()-2 ; i++) { 
        if(v[i]==v[i+1]) continue;
        for (int j = i+1; j < v.size(); j++) { 
            if(v[i]==v[j]) continue;
            for (int k = j+1; k < v.size(); k++) {  
                if(v[j]==v[k]) continue;
                else if( v[i] == v[j] + v[k] ) return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {42,12,54,69,48,45,63,58,38,60,24,42,30,79,17,36,91,43,89,7,41,43,65,49,47,6,91,30,71,51,7,2,94,49,30,24,85,55,57,41,67,77,32,9,45,40,27,24,38,39,19,83,30,42,34,16,40,59,5,31,78};
    vector<int> v;
    for(int i=0; i<sizeof(arr)/(sizeof (arr[0])); i++) v.push_back(arr[i]);
    cout<< checkPythagoreanTriplet(v);
}





