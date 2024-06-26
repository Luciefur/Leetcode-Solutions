class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        map<char, char> map1;
        map<char, char> map2;
        for(int i = 0; i < s.size(); i++) {

            if((map1[s[i]] && map1[s[i]] != t[i]) || (map2[t[i]] && map2[t[i]] != s[i])) return false;

            map1[s[i]] = t[i];
            map2[t[i]] = s[i];
        }

        return true;

    }
};