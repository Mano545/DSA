int maxSubArray(int* arr, int a) {
     int curr=arr[0],max = arr[0];
    for(int i=1;i<a;i++){
        if(curr<0){
            curr = 0;
        }
        curr+=arr[i];
        if(max<curr) max = curr;
    }
    return max;
}