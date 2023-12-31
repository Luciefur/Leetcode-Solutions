class Solution {
public:
    // int firstUniqChar(string s) {

    //     queue<int> q;
    //     int freq[26] = {0};

    //     for(int i = 0; i<s.length(); i++) {
    //         char ch = s[i];

    //         freq[ch - 'a']++;
    //         q.push(i);


    //         while(!q.empty()) {

    //             char frontCharacter = s[q.front()];
    //             if(freq[frontCharacter-'a'] > 1) {
    //                 q.pop();
    //             } else break;
    //         }
    //     }
        
    //     if(q.empty()) {
    //         return -1;
    //     }
    //     return q.front();

    // }

    int firstUniqChar(string s) {
        unordered_map<char, int> mp;

        for(int i = 0; i<s.length(); i++) {
            mp[s[i]]++;
        }

        for(int i = 0; i<s.length(); i++) {
            if(mp[s[i]] == 1) 
                return i;
        }

        return -1;
    }
};