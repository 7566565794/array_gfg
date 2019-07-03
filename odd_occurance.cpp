// find the odd occurance of a number. this can be easily done in O(n^2) by brute force approach but it can be 
//more efficiently done in o(n) time complexity using O(n) extra space using hash table
//efficient solution.. but remember that it some cases it might not get accepted coz of higher complexity

int odd1(int arr[],int n){
    int flag=-1;
    unordered_map<int ,int >m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto it=m.begin();it!=m.end();it++){
        if(it->second % 2 == 1){
            flag=1;
            cout<<it->first;
        }
    }
    if(flag==-1){
        cout<<"0";
    }
}
