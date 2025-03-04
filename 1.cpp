// LEETCODE 1347. Minimum Number of Steps to Make Two Strings Anagram

class Solution {
    public:
        int minSteps(string s, string t) {
            vector<int> arr(26,0);
            int ans=0;
            for(int i=0;i<s.size();i++){
                arr[s[i]-'a']++;
                arr[t[i]-'a']--;
            }
            for(int i=0;i<26;i++){
                if(arr[i]>0) ans+=arr[i];
            }
            return ans;
        }
    };
