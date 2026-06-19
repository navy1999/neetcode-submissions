class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for ( int i =0 ;i< strs.size();i++){
            s=s+ to_string(strs[i].size()) + "#" + strs[i];
        }

        return s;

    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> res;
        while(i< s.size()){
            size_t dpos= s.find('#',i);
            int len = stoi(s.substr(i,dpos -i));
            i= dpos+1;
            res.push_back(s.substr(i,len));
            i+=len;
        }
        return res;
    }
};
