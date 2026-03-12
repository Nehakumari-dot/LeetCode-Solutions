// User function Template for C++
class Solution {
  public:
    int trailingZeroes(int n) {
        int qut=0;
        while(n>=5){
            qut=qut+n/5;
            n/=5;
            
        }
        return qut;
        
    }
};