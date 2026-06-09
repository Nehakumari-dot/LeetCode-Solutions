class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
       int n=arr.size();
       int answer;
       for(int i=0,check=0;i<n;i++){
           if(arr[i]==arr[check]&&i!=check){
               answer=check+1;
               return answer;
           }
           
           if(i==n-1&&i!=0){
               check++;
               i=check;
           }
           
           if(check==n-1){
               answer=-1;
               return answer;
           }
           
       }
         
        
            
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna