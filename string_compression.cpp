class Solution {
public:
    int compress(vector<char>& chars) {
        chars.push_back('~');
        vector<char>ans;
        int n = chars.size();
        int total=1;
        for(int i=1;i<n;i++)
        {
            if(chars[i]==chars[i-1])total++;
            else {
                if(total==1)
            {
                ans.push_back(chars[i-1]);
                total=1;
            }
            else 
            {
                ans.push_back(chars[i-1]);
                string len = to_string(total);
                for(auto i:len)ans.push_back((char)i);
                total=1;

            }
            }
           
        }
        chars=ans;
        return ans.size();
    }
};
