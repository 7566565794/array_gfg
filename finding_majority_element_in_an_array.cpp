// an element is a majority element if it occurs more than n/2 times in an array
//o(n  ^ 2 ) solution is a simpler and easier 1
//efficient solution can be implemented using either hash map or moores majority algo
// in moore majority element algo there is no guarantee that the element u will find out will always be a 
//majority element but sometimes it can return candidate majority solution also 
//point to note here is moores algo works fine only when majority element indeed present in array.
solution : through hashset:
void majority(int arr[], int size) 
{ 
    unordered_map<int, int> m; 
    for(int i = 0; i < size; i++) 
        m[arr[i]]++; 
    int count = 0; 
    for(auto i : m) 
    { 
        if(i.second > size / 2) 
        { 
            count =1; 
            cout <<i.first<<" "; 
            break; 
        } 
    } 
    if(count == 0) 
        cout << "-1"; 
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
	    majority(arr,n);
	    cout<<endl;
	}
	return 0;
}
