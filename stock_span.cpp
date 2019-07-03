simple solution:-
#include <iostream>
using namespace std;

void span(int arr[],int n,int res[]){
    for(int i=0;i<n;i++){
        res[i]=1;
    }
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0 && arr[j]<=arr[i];j--){
            res[i]++;
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
	    int res[n];
	    span(arr,n,res);
	    for(int i=0;i<n;i++){
	        cout<<res[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

//efficient_solution:
void span(int arr[],int n,int res[]){
    stack<int >s;
    s.push(0);
    res[0]=1;
    for(int i=1;i<n;i++){
        while(!s.empty() && arr[i]>=arr[s.top()]){
            s.pop();
        }
        if(s.empty()){
            res[i]=i+1;
        }
        else{
            res[i]=i-s.top();
        }
        s.push(i);
    }
}
note : only thing to remember is that stack is storing the index of elements whenever value of element is greater 
than value of element present at that index then we will simply remove that element from top of index.
	
	
efficient solution:
in this u just need to think about 1 line and that is lets traverse from rhs u have to keep largest element on to the stack 
assuming that all the elements on the right of it are less than the top element of the stack

efficient solution is corerct but i think there is some problem in gfg test case yet just keep this  in doubt if this
problem can be rectified

void leader(int arr[],int n){
    int max_elem=arr[n-1];
    cout<<max_elem<<" ";
    for(int i=n-1;i>=0;i--){
        if(arr[i]>max_elem){
            max_elem=arr[i];
            cout<<max_elem<<" ";
        }
    }
}

