class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
        return 0;
        int n=x,rem,rev=0;
        while(x!=0){
            rem=x%10;
            if(rev>INT_MAX/10)
            return 0;
            rev=rev*10+rem;
            x/=10;
        }
        if(rev==n)
        return 1;

        return 0;
        
    }
};