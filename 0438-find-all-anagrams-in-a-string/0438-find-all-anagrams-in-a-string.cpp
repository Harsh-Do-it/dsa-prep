class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(s.size()<p.size()){
            return ans;
        }

        vector<int>pFreq(26,0);
        vector<int>WindowFreq(26,0);

        for(char ch:p){
            pFreq[ch - 'a']++;
        }

        int k = p.size();

        for(int i=0;i<k;i++){
            WindowFreq[s[i]-'a']++;
        }

        if(WindowFreq == pFreq){
            ans.push_back(0);
        }

        for(int right=k;right<s.size();right++){
            WindowFreq[s[right]-'a']++;

            int left = right-k;

            WindowFreq[s[left]-'a']--;

            if(WindowFreq == pFreq){
                ans.push_back(left+1);
            }

        }
        return ans;
        
    }
};