#include <bits/stdc++.h>
using namespace std;
int find_missing(int arr[],int n){
    unordered_set <int> s;
    for(int i=0;i<n-1;i++){
        s.insert(arr[i]);
    }
    for(int i=1;i<=n;i++){
        if(s.find(i)==s.end()){
            return i;
        }
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    /*for(int i=0;i<n;i++)
	    arr[i]=0;*/
	    for(int i=0;i<n-1;i++){//please understand in their question 
	    // they have mentioned that 1 element is missing so take 
	    //input only n-1 elements in the list.
	        cin>>arr[i];
	    }
	    cout<<find_missing(arr,n)<<endl;
	}
	return 0;
}
