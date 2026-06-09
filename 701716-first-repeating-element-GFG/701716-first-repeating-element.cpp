class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        int n=arr.size();
        int f=1000001;
        int freq[f]={0};
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(freq[arr[i]]>1)
             { return i+1;}
            
        }
        return -1;
        
         
        
            
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna