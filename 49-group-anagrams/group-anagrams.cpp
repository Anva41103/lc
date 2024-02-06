class Solution {
public:
    bool isAna(string a, string b)
    {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        return a==b;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> anagramMap;

    for (const string& str : strs) {
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end());
        anagramMap[sortedStr].push_back(str);
    }

    vector<vector<string>> result;
    for (const auto& pair : anagramMap) {
        result.push_back(pair.second);
    }

    return result;
    }
};