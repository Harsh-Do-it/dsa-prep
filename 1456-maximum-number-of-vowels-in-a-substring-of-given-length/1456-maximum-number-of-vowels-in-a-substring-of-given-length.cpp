class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0;
        int ans=0;

        for(int i=0; i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                count++;
            }
        }
        ans = count;

        for(int right=k; right<s.size();right++){

            int left = right-k;
            if(s[left]=='a'||s[left]=='e'||s[left]=='i'||s[left]=='o'||s[left]=='u'){
                count--;
            }

            if(s[right]=='a'||s[right]=='e'||s[right]=='i'||s[right]=='o'||s[right]=='u'){
                count++;
            }

            ans = max(ans,count);


            
        }
        return ans;
        
    }
};