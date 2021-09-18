// 387. First Unique Character in a String
// https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> map ;
        for(int i = 0 ; i < s.size() ; i++){
            map[s[i]]++;
        }
        for(int i = 0 ; i < s.size() ; i++){
            if(map[s[i]] == 1) return i ;
        }
        return -1;
    }
};

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> cnt(26,0);
        for(int i = 0 ; i < s.size() ; i++){
            cnt[s[i] - 'a']++;
        }
        // uncomment to see the frequency map 
        /*
        for(int i = 0 ; i < s.size() ; i++){
            cout << s[i] <<"  " << (cnt[s[i] - 'a'] == 1)<< endl;
        } */
        for(int i = 0 ; i < s.size() ; i++){
            if(cnt[s[i] - 'a'] == 1) return i ;
        }
        
        return -1 ;
    }
};

// 383. Ransom Note
// https://leetcode.com/problems/ransom-note/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> map2 ;
        int n = ransomNote.size() , m = magazine.size() ;
       
        for(int i = 0 ; i < m ; i++){
            map2[magazine[i]]++;
        }
        for(int i = 0 ; i < n; i++){
        if(map2[ransomNote[i]]-- <= 0 ) return false ;}
        return true ;    
    }
};

// 242. Valid Anagram
// https://leetcode.com/problems/valid-anagram/
class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size() , m = t.size() ;
        if(m != n ) return false ;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i = 0 ; i < n ; i++) {
            if(s[i] != t[i] ) return false ;
        }
        return true ;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size() , m = t.size() ;
        if(m!=n) return false ;
        unordered_map<char,int> map;
        for(int i = 0 ; i < n ;i++) {
            map[s[i]]++;
        }
        for(int i = 0 ; i < n ;i++) {
            map[t[i]]--;
        }
        for(int i = 0 ; i < n ;i++) {
            if(map[s[i]] > 0) return false ;
        }
        return true ;
        
    }
};