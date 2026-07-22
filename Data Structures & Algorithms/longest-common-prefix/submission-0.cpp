class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(strs.empty()){
            return " ";
        }
        string result="";
        sort(strs.begin(),strs.end());
        string first=strs.front();
        string last=strs.back();
        for(int i=0;i<first.size();i++){
            if(i>=last.size() || first[i]!=last[i]){
                break;
            }
            result+=first[i];
        }
        return result;
    }
};