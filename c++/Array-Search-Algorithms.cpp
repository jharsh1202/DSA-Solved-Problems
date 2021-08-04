#include <iostream>
using namespace std;

string linearSearch(int len, int arr[], int key) {
    for(int i=0; i<len; i++) {
        if(arr[i]==key) return ("key: '" + to_string(arr[i]) + "' found at index: '" + to_string(i) + "'");
    }
    return "key not found";
}

string binarySearch(int len, int arr[], int key) {
    //sort(arr, arr+len);
    cout<<"please input sorted data";
    for(int i=0; i<len; i++) cout<<arr[i]<<"\n";
    int start=0, end=len-1;
    while (start<end) {
        if(arr[(start+end)/2]==key) return ("key: '" + to_string(arr[(start+end)/2]) + "' found at index: '" + to_string((start+end)/2) + "'");
        if(arr[(start+end)/2]<key) start = (start+end)/2;
        else end = (start+end)/2;
    }
    return "key not found";
}

int main()
{
    int len; cin>>len;
    int arr[len];
    int key; cin>>key;
    for(int i=0; i<len; i++) cin>>arr[i];
    cout<<binarySearch(len, arr, key);
    return 0;
}