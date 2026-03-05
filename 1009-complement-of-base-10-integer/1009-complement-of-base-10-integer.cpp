class Solution {
public:
    int bitwiseComplement(int n) {
        if (n==0)
        return 1;
        int rem,mul=1,result=0;
        while(n){
            rem=n%2;
            rem=rem^1;
            result=result+rem*mul;
            mul=mul*2;
            n/=2;


        }
        return result;
        
    }
};