void merge(long long int arr1[],long long int arr2[],long long int n,long long int m,long long int arr3[]){
    long long int i=0;
    long long int j=0,k=0;
    while(i<n &&j<m){
        if(arr1[i]<arr2[j]){
            cout<<arr1[i++]<<" ";
        }
        else{
            cout<<arr2[j++]<<" ";
        }
    }
        while(i<n){
            cout<<arr1[i++]<<" ";
        }
        while(j<m){
            cout<<arr2[j++]<<" ";
        }
        
}
