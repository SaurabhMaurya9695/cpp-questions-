class Solution {
public:
    bool isAnagram(string s, string t) {
		// make an array to store count of each letter (initially all counts are zero)
        int arr[26]={};
        // letters occuring in "string s" will increase count in array
        for(int i=0;i<s.length();i++)arr[s[i]-'a']++;
		// letters occuring in "string t" will decrease count in array
        for(int i=0;i<t.length();i++)arr[t[i]-'a']--;
        // if s and t are anagrams, then, each count in array should be zero, otherwise not
        for(int i=0;i<26;i++){
            if(arr[i]!=0)return false;
        }
        return true;
    }
};