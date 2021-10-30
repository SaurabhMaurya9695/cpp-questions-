class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        
        for(char c:s)
        {
            mp[c]++;
        }
        priority_queue<pair<int,char>> pq;
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            pq.push(make_pair(it->second,it->first));
        }
        string str = "";
        
        while(!pq.empty())
        {
            int x = pq.top().first;
            while(x != 0)
            {
                str += pq.top().second;
                x--;
            }
            pq.pop();
        }
        return str;
    }
};