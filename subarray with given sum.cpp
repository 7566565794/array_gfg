#include <iostream>
using namespace std;

void dis_index(int arr[],int n,int sum){
    int s=0;
    int j=0;
    int flag=-1;
    for(int i=0;i<n;i++){
        s=s+arr[i];
        while(s>sum){
            s=s-arr[j];
            j++;
            // cout<<s<<" ";
        }
        if(s==sum){
            flag=1;
            cout<<j+1<<" "<<i+1;
            break;
        }
    }
    if(flag==-1){
        cout<<"-1 ";
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int sum;
	    cin>>sum;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    dis_index(arr,n,sum);
	    cout<<endl;
	}
	return 0;
}
