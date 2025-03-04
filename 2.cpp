// LEETCODE 2186. Minimum Number of Steps to Make Two Strings Anagram II

class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> arr1(26, 0);
        vector<int> arr2(26, 0);
        int ans=0;
        for(int i=0;i<s.size();i++){
            arr1[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            arr2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i]) ans+=abs(arr1[i]-arr2[i]);
        }
        return ans;
    }
};
