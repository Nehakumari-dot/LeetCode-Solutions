// User function Template for C++
class Solution {
  public:
    int trailingZeroes(int n) {
        int z=0,quot;
        while(n>=5){
            quot=n/5;
            z=z+quot;
            n=quot;
            
        }
        return z;
        
    }
};