
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
         vector<vector<int>> ans(2) ;
          unordered_map<int,int> mp ;
           
           set<int> temp1,temp2 ;

           for(int i=0;i<matches.size();i++){
               mp[matches[i][1]]++;
           }

           for(int j=0;j<matches.size();j++){
               if(mp.find(matches[j][0])==mp.end()){
                   temp1.insert(matches[j][0]);
               }

               if(mp[matches[j][1]]==1){
                  temp2.insert(matches[j][1]);
               } 
           }
           
          for(auto &a : temp1){
               ans[0].push_back(a);
           }
           for(auto &a : temp2){
               ans[1].push_back(a);
           }
            
        return ans ;  
    }
};