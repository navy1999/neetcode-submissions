class Solution {
public:

    bool freqMatch(vector<int> a, vector<int> b){
        bool flag=true;
        for (int i =0;i<26;i++){
            if(a[i]!=b[i]){
                flag=false;
            }
        }

        return flag;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> res;
        vector<vector<int>> freq(strs.size(), vector<int>(26,0));
        vector<bool> stored(strs.size(),false);

        for(int i =0;i<strs.size();i++){

            for(char c : strs[i]){
                freq[i][c-'a']++;
            }

        }     

        for(int i =0;i<strs.size();i++){

            vector<string> grp;

            bool flag=false;

            for(int j=0;j<strs.size();j++){


                if(freqMatch(freq[j],freq[i]) && !stored[j]){

                    stored[j] = true;

                    flag=true;
                    grp.push_back(strs[j]);

                }

            }

            if(flag){

                res.push_back(grp);
                
            }

        }

        return res;

    }
};
