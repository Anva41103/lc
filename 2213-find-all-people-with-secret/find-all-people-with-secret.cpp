// Approach: Greedy + Priority_queue (Min Heap) + Binary Search
// If a person `x` knows the truth at time `t`, he will spread the truth with its upcoming meetings time with t, t + 1, t + 2... till the end.
// TC: O((N * log N) + M * logM)
// SC: O(M + N)
class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        // Storing in set, so that we can apply binary search on first field.
        // {node -> {{time, node1}, {time2, node2}, ....}}
        
        set<pair<int, int>> adj[n];
        for(auto &meet: meetings){ // TC: O(M * logM)
            adj[meet[0]].insert({meet[2], meet[1]});
            adj[meet[1]].insert({meet[2], meet[0]});
        }
        
        // {current_time, current_person}
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        
        vector<bool> vis(n, false);
        vis[0] = true;
        
        vector<int> ans = { 0 }; // 0 knows the secret.
        
        // 0 person will tell secret to its neighbors and firstperson.
        for(auto it: adj[0]) minHeap.push({it.first, it.second});
        
        minHeap.push({0, firstPerson});
        
        // TC: O(NlogN)
        while(minHeap.size()){
            auto node = minHeap.top();
            minHeap.pop();
            
            // If person is visited, then it already spread the secret to its neighbors
            if(vis[node.second]) continue;
            
            ans.emplace_back(node.second);
            vis[node.second] = true;
            
            // Since we are storing first field as time, so let's do binary search and reach at current time or greater time and expose the secret with neighbors in future.
            auto it = adj[node.second].lower_bound({node.first, 0});
            
            while(it != adj[node.second].end()){
                if(!vis[it->second]) minHeap.push({it->first, it->second});
                it++;
            }
        }
        return ans;
    }
};