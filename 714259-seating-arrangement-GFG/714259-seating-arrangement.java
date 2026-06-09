class Solution {
    public boolean canSeatAllPeople(int k, int[] seats) {
        int cnt = 0;
        int n = seats.length;
        if(n==1){
            if(seats[0]==0)cnt++;
        }else{
        for(int i=0;i<n;i++){
            if(seats[i]==0){
            if(i==0){
                if(seats[i+1]==0){
                    cnt++;
                    seats[i] = 1;
                }
            }else if(i==n-1){
                if(seats[i-1]==0){
                    cnt++;
                    seats[i] = 1;
                }
            }else{
            if(seats[i-1]==0 && seats[i+1]==0){
                    cnt++;
                    seats[i] = 1;
                }
            }
            }
        }
        }
        return cnt>=k;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna