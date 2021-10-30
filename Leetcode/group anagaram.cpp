vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<int>> mp;
        for (int i = 0; i < strs.size(); i++)
        {
            string temp = strs[i];
            sort(begin(temp), end(temp));
            mp[temp].push_back(i);
        }
        vector<vector<string>> res;
        for (auto i : mp)
        {
            vector<string> temp;
            for (auto j : i.second)
                temp.push_back(strs[j]);
            res.push_back(temp);
        }
        return res;
    }