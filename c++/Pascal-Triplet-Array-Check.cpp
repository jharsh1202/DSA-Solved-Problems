#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;


bool checkPythagorean(int max, int a, int b) {
    //int max = findMax(a, b, c);
    //if(a==max) swap(a,c); if(b==max) swap(b,c);
    return a*a+b*b==max*max;
}


int findMax(int a, int b, int c) {
    int max = INT_MIN;
    (a>b) ? (a>c) ? max = a : max = c : (b>c) ? max = b : max = c;
    return max;
}


bool checkPythagoreanTriplet(vector<int> &v) {
    int coun=0;
    bool pythagoreanTripletExist = false;
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < v.size()-2; i++) {
        for (int j = i+1; j < v.size() && v[i]>v[j]; j++) { 
            for (int k = j+1; k < v.size() && v[j]>v[k]; k++) { 
                cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<" "<<endl;
                coun++;
                if(checkPythagorean(v[i], v[j], v[j+1])) {
                    pythagoreanTripletExist = true;
                    cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<" "<<endl;
                }
            }
        }
    }
    // for (int i = 0; i < v.size()-2; i++) {
    //     for (int j = 1; j < v.size(); j++) {
    //         if(checkPythagorean(v[i], v[j], v[j+1])) {pythagoreanTripletExist = true;
    //         cout << i<< j<<j+1 <<"\n";}
    //     } 
    cout<<"coun: "<<coun<< "\n" ;
    return pythagoreanTripletExist;
}

int main() {
    int arr[] = {1, 5, 6, 6, 3, 4}; 
    vector<int> v;
    for(int i=0; i<sizeof arr/sizeof (arr[0]); i++) v.push_back(arr[i]);
    cout<<checkPythagoreanTriplet(v)<<"\n";
    for (int i = 0; i < v.size(); i++) cout<<v[i]<<" ";
}





