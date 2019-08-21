#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            arr[i]=-arr[i];
        }
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            arr[i]=-arr[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    display(arr,n);
	}
	return 0;
}
