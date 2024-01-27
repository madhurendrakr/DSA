
class Solution {
public:
       int mod=1e9+7;
    int kInversePairs(int n, int k) {
         vector<vector<int>> temp(n+1,vector<int>(k+1,0));
        temp[0][0]=1;
        for(int i=1;i<=n;i++)
        {
            long long data=0;
            for(int j=0;j<=k;j++)
            {
               
                data+=temp[i-1][j];


                if(j>=i)
                {
                    data=data-temp[i-1][j-i];
                }

               
                temp[i][j]=(data%mod);
            }
        }

        return temp[n][k];
    }
};
