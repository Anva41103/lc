class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue <pair<string, int> > q;
        unordered_set <string> s(wordList.begin(),wordList.end());
        q.push({beginWord,1});
        s.erase(beginWord);
        while(!q.empty())
        {
            string w= q.front().first;
            int st=q.front().second;
            if(w==endWord) return st;
            q.pop();
            for(int i=0;i<w.size();i++)
            {
                string o=w;
                for(char j='a';j<='z';j++)
                {
                    w[i]=j;
                    if(s.find(w)!=s.end())
                    {
                        s.erase(w);
                        q.push({w,st+1});
                    }
                }
                w=o;
            }
        }
        return 0;
    }
};