
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {

        string prefix = str[0];

        for(int i = 1; i < str.size(); i++) {

            while(str[i].find(prefix) != 0) {
                prefix.pop_back();
            }

        } 
        return prefix;
    }
};
