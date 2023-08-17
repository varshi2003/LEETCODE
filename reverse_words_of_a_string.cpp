class Solution {
public:
    string reverseVowels(string s) {
      //convert the input string to a character array 
       string word=s;
       int start = 0;
       int end = s.length()-1;
       string vowels = "aeiouAEIOU";
       //loop until the start pointer is no longer less than the end pointer
       while(start<end)
       {
             while(start<end && vowels.find(word[start])==string::npos)
             {
                 start++;
             } 
             while(start<end && vowels.find(word[end])==string::npos)
             {
                 end--;
             }
             swap(word[start],word[end]);
             start++;
             end--;
       }
       return word;
    }
};