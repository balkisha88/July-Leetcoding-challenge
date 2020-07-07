class Solution {
public:
    // time Limit exceeded
    // bool isUgly(int n)
    // {
    //     while(n%2==0)
    //     {
    //         n=n/2;
    //     }
    //     for(int i=3;i<=5;i=i+2)
    //     {
    //         while(n%i==0)
    //             n=n/i;
    //     }
    //     if(n==1) return true;
    //     else return false;
    // }
    int nthUglyNumber(int n) {
        
//         int size=1;
        
//         int i=2;
//         while(size!=n)
//         {
//             if(isUgly(i))    //calling this fuction for n=1690 give TLE
//             { cout<<i<<" ";
//                 //temp.push_back(i);
//              size++;
//             }
//             i++;
//         }
//         return --i;
        
        vector<int> res(n,0);
        
        int two=2,three=3,five=5;
        int p2=0,p3=0,p5=0;
        
        res[0]=1;
        for(int i=1;i<n;i++)
        {
            res[i]=min(two,min(three,five));
                
            if(res[i]==two)
            {
                p2++;
                two=res[p2]*2;
                
            }
            if(res[i]==three)
            {
               p3++;
                three=res[p3]*3;
                
            }
            if(res[i]==five)
            {
                p5++;
                five=res[p5]*5;
            }
        }
        return res[n-1];
        
    }
};
