class Solution {
public:
    int arrangeCoins(int n) {
        
       
        
        int i=1;
        for(i=1;i<=n;i++)
        {
            n=n-i;
            if(n==0)
                 return i;
            else if(n<0) 
                return --i;
                
        }
        return --i;
    }
};
