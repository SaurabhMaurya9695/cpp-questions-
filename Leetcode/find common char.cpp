class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
      
        vector<int>LetterCount(26,0);   //count the number of letters from the first string
        vector<int>TempCount(26,0);
        
        //counting number of times letters occured in the first : reference string
        for(auto charecter: words[0])
            LetterCount[charecter-'a']++;
        
        //for remaining strings
        for(int i=1;i<words.size();i++)
        {
            for(auto charecter: words[i])
                TempCount[charecter-'a']++;
            
            //taking the result in the main vector
            for(int i=0;i<26;i++)
            {
                LetterCount[i]=min(LetterCount[i],TempCount[i]);
                TempCount[i]=0; // assigning for the next iteration
            }
        }
        
        vector<string>answer;
        
        //converting that charecters in to the string : thats what we want for return type
        for(int i=0;i<26;i++)
        {
            if(LetterCount[i]>0)
            {
                int countDuplicates=LetterCount[i];
                
                //if duplicates present 
                while(countDuplicates--)
                {
                    char ch=i+'a';  
                    string s;
                    s=ch;
                    answer.push_back(s);
                    
                }
            }
        }
        return answer;
    }
};