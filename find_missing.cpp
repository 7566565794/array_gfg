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
//this code is working fine but optimization is needed ..... this is kind of raw approach..
better approach which can implement the solution to the problem in order of n-1
what do u need to do 
use mathematics calculate sum of n natural number using the formula n*n-1/2 and then calculate the sum by adding all the 
elements, after that subtract find out the number by removing the removing the sum of elements from sum of natural numbers
// above code is such a pagal panti please dont refer above code
int find_missing(int arr[],int n){
    int sum=0;
    int nat_sum=(n * (n+1) )/2;
    for(int i=0;i<n-1;i++){
        sum=sum+arr[i];
    }
    int ele=nat_sum-sum;
    /*cout<<"natu sum"<<nat_sum;
    cout<<"sum="<<sum;*/
    
    return ele;
}//------------------- correct solution................//


// most efficient solution 
int find_missing(int arr[],int n){
    int x1=0;
    int x2=0;
    for(int i=0;i<n-1;i++){
        x1=x1^arr[i];
    }
    for(int i=1;i<=n;i++){
        x2=x2^i;
    }

    return x1^x2;
}
