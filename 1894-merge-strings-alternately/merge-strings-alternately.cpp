class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string h="";
        int i=0,j=0;
        while(i<w1.size()||j<w2.size())
        {
            if(i<w1.size())
            {
                h+=w1[i++];
            }
            if(j<w2.size())
            {
                h+=w2[j++];
            }
        }
        return h;
    }
};