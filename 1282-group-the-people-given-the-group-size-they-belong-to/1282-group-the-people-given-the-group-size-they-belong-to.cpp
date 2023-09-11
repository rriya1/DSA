class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupsizes) 
    {
        //int n=groupsizes.size();
        unordered_map<int, vector<int>> groups;
        vector<vector<int>> ans;
        for(int i=0;i<groupsizes.size();i++)
            groups[groupsizes[i]].push_back(i);

        // for(auto it: groups)
        // {
        //     cout<<it.first<<": ";
        //     vector<int> temp=it.second;
        //     for(auto iit: temp)
        //     {
        //         cout<<iit<<" ";
        //     }
        //     cout<<endl;
        // }

       for(auto it: groups)
        {
            //vector<int> temp=it.second;
            //int tpeople=temp.size();
            //int gsize=it.first;
            //int gnumber=tpeople/gsize;
            //use sliding window here
            int j=0;
            vector<int> toinsert;
            while(j<it.second.size())
            {
                toinsert.push_back(it.second[j]);
                if(toinsert.size()==it.first)
                {
                    ans.push_back(toinsert);
                    toinsert.clear();
                }
                j++;
            }
       }
        return ans;
    }
};