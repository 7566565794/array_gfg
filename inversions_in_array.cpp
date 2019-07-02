//simple approach i understood and did
int inversion(int arr[],int n){
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j] && i<j){
                count++;
            }
        }
    }
    return count;
}
// this will not lead us amazon trust me ... okay so we are leaving this as if now later we will understand the algorithm 
//properly and will solve it.
