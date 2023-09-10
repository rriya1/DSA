class Solution {
public:
    long long int MOD =1e9+7;
    int countOrders(int n) 
    {
        int curr=1;
        long long int ways=1;
        if(n==1)
            return n;
        while(curr!=n)
        {
            unsigned long long int sum=0;
            unsigned long long int ne=(2*curr)+1;
            while(ne)
            {
                sum=sum+ne;
                ne--;
            }
            
            ways=(ways*sum)%MOD;
            curr++;
            //cout<<sum<<" "<<ne<<" "<<ways<<" "<<curr<<endl;
        }
        return ways;
        // if(ways>INT_MAX)
        //     return ways%MOD;
        // else
        //     return ways;
    }
};