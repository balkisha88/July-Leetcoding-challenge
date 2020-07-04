class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        
        vector<int> res;
        res=cells;
        if (cells[0]==1) res[0]=0;
        if (cells[7]==1) res[7]=0;
         // This part was done to remove the Time Limit Exceeded error
        //As there was pattern forming as day1 == day15 i.e after 14 days its the same
        //except the o and 7 index are 0
        //so similarly day2==day16 ,and so on
        //to reduce N large value mode number N to get in range 1-14 as 15 is same as 1
        //also when number N%14==0 i.e day0==day14 so set value to day 14
        if(N>14)
        {
            N=N%14;
           
        }
         if(N==0) N=14;
        for(int i=0;i<N;i++)
        {
            
            for(int j=1;j<=6;j++)
            {
                if(cells[j-1]==cells[j+1])
                    res[j]=1;
                else
                    res[j]=0; 
                
            }
            cells=res;
            
        }
        return cells;
        
    }
};
