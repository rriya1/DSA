class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0 || x%10==0 && x!=0)
            return false;
        int num=x;
        long long newnum=0;
        while(num!=0){
            newnum=newnum*10+num%10;
            num=num/10;
        }    
        return (newnum==x)?true:false;
    }
};