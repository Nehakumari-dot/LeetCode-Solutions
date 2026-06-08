class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        int n=arr.size(),i=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[j]==arr[i])
                  return i+1;
            }
        }
        return -1;
         
        
            
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna