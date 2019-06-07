/* rearrange element at its correct location arr[i]=i*/
//inefficient solution
// main program 
void rearrange(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]==i){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

//efficient solution
 for (int i = 0; i < n;)  
        { 
            if (arr[i] >= 0 && arr[i] != i)  
            arr[arr[i]] = (arr[arr[i]] + arr[i]) -  
                            (arr[i] = arr[arr[i]]); 
            else
                i++; 
        } 
//romba nice concept they have used but seriousl
