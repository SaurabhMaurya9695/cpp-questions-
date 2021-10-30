class Solution 
{
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& first, vector<vector<int>>& second) 
    {
       
        vector<vector<int>>v;
        int i=0,j=0;
        while(i<first.size() && j<second.size())
        {
            //If end of the first list is less than the second
            if(first[i][1]<=second[j][1])
            {
                // Condition that the first list is totally contained by the second list
                if(first[i][0]>=second[j][0] && first[i][1]>=second[j][0])
                {
                    v.push_back(first[i]);//pushing the whole vector
                }
                // Condition that the first list is partially contained by the second list
                else if(first[i][1]>=second[j][0])
                {
                    v.push_back({second[j][0],first[i][1]});
                }
                i++;
            }
            else
            {
                // Condition that the second list is totally contained by the first list
                if(first[i][0]<=second[j][0] && first[i][0]<=second[j][1])
                {
                    v.push_back(second[j]);//pushing the whole vector
                }
                // Condition that the second list is partially contained by the first list
                else if(first[i][0]<=second[j][1])
                {
                    v.push_back({first[i][0],second[j][1]});
                }
                j++;
            }
        }
         // If one of the list is empty answer will be a null vector
        if(first.empty() || second.empty())
        {
            return {};
        }
        return v;
    }
};