class Solution {
public:
    int reverse(int x) {
        if(x==0)
            return 0;
        bool flag=x<0?false:true;
        x=abs(x);
        long long reversed=x%10;
        x=x/10;
        while(x!=0){
            int currNum=x%10;
            x=x/10;
            reversed=(reversed*10)+currNum;
        }
        if(reversed>INT_MAX || reversed<INT_MIN)
            return 0;
        return flag?reversed:-reversed;
    }
};