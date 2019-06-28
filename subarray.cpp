// tr
#include <iostream>
using namespace std;
void subarr(int arr[],int n,int sum){
    int curr=arr[0];
    int j=0;
    int i;
    int flag=0;
    for( i=1;i<=n;i++){
        while(curr > sum && j<i-1){//while condition coz u have to remove elements till curr become lesser than sum
		// u need to add j<i-1 coz j can go beyond size
            curr=curr - arr[j];
            j++;
            //  cout<<"hello"<<curr;
            // if( curr == sum ){
            //     cout<<"jere";
            //     flag=1;
            //     break;
            // }
        }
        // cout<<"hello";
        // curr=curr+arr[i];
        if(curr==sum){
            // cout<<"hello";
            flag=1;
            break;
        }
        else if(i<n){
            curr +=arr[i];
            // if(curr==sum)
            //     flag = 1;
            //     break;
        }
        // else{
            
           
        // } 
        
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
}
//efficient solution is not working very large test case is not getting pass
void find_cont_sum(int arr[],int n,int sum){
  int curr_sum=0,j=0;
  int flag=0;
  for(int i=0;i<n;i++){
      curr_sum=curr_sum+arr[i];
      while(curr_sum>sum && j<i-1){//---while added
          curr_sum=curr_sum-arr[j];
          j++;
      }
      if( curr_sum == sum ){
        flag=1;
        cout<<j+1<<" "<<i+1;
        break;
      }

      
  }
  if(flag==0)
    cout<<"-1";
}
// i am using the same concept but still there program is getting accepted and mine is not getting accepted
void find_cont_sum(int arr[], int n, int sum) 
{ 
    
    int curr_sum = arr[0], start = 0, i; 
    int flag=0;
   
    for (i = 1; i <= n; i++) 
    { 
        // If curr_sum exceeds the sum, then remove the starting elements 
        while (curr_sum > sum && start < i-1) 
        { 
            curr_sum = curr_sum - arr[start]; 
            start++; 
        } 
  
        // If curr_sum becomes equal to sum, then return true 
        if (curr_sum == sum) 
        { 
            // printf ("Sum found between indexes %d and %d", start, i-1); 
            // return 1;
            flag=1;
            cout<< start+1 <<" "<< i;
            break;
        } 
  
        // Add this element to curr_sum 
        if (i < n) 
          curr_sum = curr_sum + arr[i]; 
    } 
  
    // If we reach here, then no subarray 
    if(flag==0){
        cout<<"-1";
    }
        
}
