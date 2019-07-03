An element in array is known as leader when all the elements to its right are less than the parent element
code:
simple and inefficient solution
#include <iostream>
using namespace std;
void leader(int arr[],int n){
    for(int i=0;i<n;i++){
        int flag=-1;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                flag=1;
            }
        }
        if(flag==-1){
            cout<<arr[i]<<" ";
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
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    leader(arr,n);   
	    cout<<endl;
	}
	return 0;
}
testcase:
3
6
16 17 4 3 5 2
5
1 2 3 4 0
5
7 4 5 7 3
Your Output is:
17 5 2 
4 0 
7 7 3 
//efficient_solution
