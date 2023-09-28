class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string temp="";
        int i = 0,j=0;
        while(i<word1.length() && j<word2.length()){
            temp.push_back(word1[i]);
            i++;
            temp.push_back(word2[j]);
            j++;
        }
        for(;i<word1.length();i++){
            temp.push_back(word1[i]);
        }
        for(;j<word2.length();j++){
            temp.push_back(word2[j]);
        }
        return temp;
    }
};