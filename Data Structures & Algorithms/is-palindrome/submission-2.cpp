class Solution {
public:
    bool isPalindrome(string s) {
        string c;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                c.push_back(tolower(s[i]));
            }
        }
        int start=0;
        int end=c.size()-1;
        while(start<end){
            if(c[start]!=c[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
