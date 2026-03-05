class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
        return 0;
        int i=0;

        while(n>=pow(2,i)){
            if(n==pow(2,i)){
            return 1;}

            i++;
        }
        return 0;
        
    }
};