class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1=word1.length();
        int len2=word2.length();
        int ptr1=0,ptr2=0;
        string ans="";
        while(ptr1<len1 and ptr2<len2)
        {
            ans.push_back(word1[ptr1++]);
            ans.push_back(word2[ptr2++]);
        }
        while(ptr1<len1)
        {
            ans.push_back(word1[ptr1++]);
        }
        while(ptr2<len2)
        {
            ans.push_back(word2[ptr2++]);
        }
         return ans;
    }
};
