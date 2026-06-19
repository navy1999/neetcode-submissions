class Solution {
public:
    bool isAnagram(string s, string t) {
     unordered_map<char,int> hash1(0);
     unordered_map<char,int> hash2(0);
     for(int i =0;i<s.length();i++){
        hash1[s[i]]++;
     }   

     for(int j =0 ;j<t.length();j++){
        hash2[t[j]]++;
     }
    bool flag =true;
     for (char k ='a';k<='z';k++){
        if(hash2[k] !=hash1[k]){
            flag =false;
        }
       
     }
        return flag;

    }
};
