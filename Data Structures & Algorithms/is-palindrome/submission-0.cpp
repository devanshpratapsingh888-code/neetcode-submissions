class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string news;
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                news.push_back(s[i]);
            }
        }
        int start=0;
        int end=news.size()-1;
        while(start<=end){
            if(tolower(news[start])!= tolower(news[end])){
                return false;
                
            }
            start++;
            end--;
        }
        return true;
    }
};
