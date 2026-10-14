class Solution {
public:
    string longestNiceSubstring(string s) {
        if(s.length()<2){
            return "";
        }

        unordered_set<char>seen(s.begin(),s.end());

        for(int i=0;i<s.length();i++){
            char c = s[i];
            if(seen.count(toupper(c)) && seen.count(tolower(c))){
            continue;
            }
            string left = longestNiceSubstring(s.substr(0,i));
            string right = longestNiceSubstring(s.substr(i+1));

            return left.length() >= right.length() ? left:right;

        }
        return s;
        
    }
    
};