// tr
#include <iostream>
using namespace std;
void subarr(int arr[],int n,int sum){
    int curr=arr[0];
    int j=0;
    int i;
    int flag=0;
    for( i=1;i<n;i++){
        // cout<<"hello";
        // curr=curr+arr[i];
        if(curr==sum){
            // cout<<"hello";
            flag=1;
            break;
        }
        else if(curr > sum){
            curr=curr - arr[j];
            j++;
             cout<<"hello"<<curr;
            if( curr == sum ){
                flag=1;
                break;
            }
           
        }
        else{
            curr=curr+arr[i];
        }
    }
    if(flag==1)
      cout<<j+1<<" "<<i<<endl;
    else
        cout<<"-1"<<endl;
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
	  /* for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;*/
	    subarr(arr,n,sum);
	}
	return 0;
}ying asking help today only
