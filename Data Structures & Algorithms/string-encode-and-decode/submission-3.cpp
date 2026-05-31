class Solution {
public:

    string encode(vector<string>& strs) {
        string code = "";
        for(string s: strs){
            code += to_string(s.size()) + "#" + s ;
        }
        return code;
    }

    vector<string> decode(string s) {
        vector<string> dec;
        int i = 0;
        
        while (i<s.length()){
            int len = 0;
            while(isdigit(static_cast<unsigned char>(s[i]))){
                len = len*10 + (s[i] - '0');
                i++;
            }
            i++;
            string str = s.substr(i,len);
            dec.emplace_back(str);
            i+=len;
        }
        return dec;
        
    }
};
