class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int h=0;
        int b=0,e=people.size()-1;
        while(b<=e)
        {
            if(people[b]+people[e]<=limit){ b++;e--;}
            else e--;
            h++;
        }
        return h;
    }
};