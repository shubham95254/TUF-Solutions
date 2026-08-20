class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0, totalprimitive = 0;
        string ans = "";
        for(int i=0 ;i<s.size(); i++) {
            if(count==0) totalprimitive++;
                else if(!(count==1 && s[i]==')')) ans+=s[i];
            if(s[i]=='(') count ++;
                else count--;
        }
        return ans;
    }
};
