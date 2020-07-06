//better solution
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(int i=digits.size()-1;i>=0;i--)
        {
            int sum=digits[i]+carry;
            digits[i]=sum%10;
            carry=sum/10;
        }
        if(carry) digits.insert(digits.begin(),1);
        return digits;

    }
};




// Simple solution

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int> res;
        res=digits;
        reverse(res.begin(),res.end());
        
        
        int flag=true;
        for(int i=0;i<res.size();i++)
        {
            res[i]++;
            if((res[i])==10)
            {
                res[i]=0;
                flag=false;
                continue;
            }
            else
            {
                flag=true;
                break;
            }
        }
        if (flag==false) res.push_back(1);
        
        reverse(res.begin(),res.end());
      
        return res;
    }
};
