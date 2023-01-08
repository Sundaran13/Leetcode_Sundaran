class Solution {
public:
    static bool comp(pair<int,int> a,pair<int,int> b){
        return a.second<b.second;
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int n=pairs.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({pairs[i][0],pairs[i][1]});
        }
        sort(v.begin(),v.end(),comp);
        int i=0;
        int j=1;
        int c=1;
        int lv=v.size();
        while(j<lv){
            if(v[i].second<v[j].first){
                c++;
                //we want the maximum length of chain
                //so in between choices should not disturb us.
                
                i=j;
                j++;
            }
            else j++;
        }
        return c;
    }
};
