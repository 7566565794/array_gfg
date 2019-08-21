#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void pendulum(int arr[],int n){
    int res[n];
    sort(arr,arr+n);
    int mid=(n-1)/2;
    res[mid]=arr[0];
    int i=1;
    int j=1;
    for(i=1;i<=mid;i++){
        res[mid+i]=arr[j++];
        res[mid-i]=arr[j++];
    }
    if(n%2==0){
        res[mid+i]=arr[j];
    }
    for(int i=0;i<n;i++){
	        cout<<res[i]<<" ";
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
	    pendulum(arr,n);
	    }
	return 0;
}
