//replace rightmost element with the max element
#include <iostream>
using namespace std;

void replace_with_max(int arr[],int n){
   int max_from_right=arr[n-1];
   arr[n-1]=-1;
   for(int i=n-2;i>=0;i--){
        int temp=arr[i];
        arr[i]=max_from_right;
        if(temp>max_from_right)
            max_from_right=temp;//only at this line i was doing error
            //i was not able to figure out when to update the value of 
            //variable.
   }
//   arr[0]=temp;
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
	    replace_with_max(arr,n);
	    for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
