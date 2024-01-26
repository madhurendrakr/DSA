class Solution {
public:
       
     int mod = 1e9 + 7;
    map<vector<int>, int> temp;

    long long dfs(int startRow, int startColumn, int m, int n, int mm){
        if(mm == 0)
            return (startRow < 0 || startColumn < 0 || startRow >= m || startColumn >= n);
        if(startRow < 0 || startColumn < 0 || startRow >= m || startColumn >= n) 
            return 1;

        if(temp.count({startRow, startColumn, mm})) return temp[{startRow, startColumn, mm}];
        return temp[{startRow, startColumn, mm}] = (long long)(
            (dfs(startRow-1, startColumn, m, n, mm-1)%mod)+
            (dfs(startRow+1, startColumn, m, n, mm-1)%mod)+
            (dfs(startRow, startColumn-1, m, n, mm-1)%mod)+
            (dfs(startRow, startColumn+1, m, n, mm-1)%mod)
        ) % mod;
    }

    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        int  ans = dfs(startRow, startColumn, m, n, maxMove)%mod;

        return ans ;
    }
};