class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        //&& el2!=nums[i]&& el1!=nums[i]
        
        int c1=0,c2=0, el1=INT_MIN, el2=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(c1==0&& el2!=nums[i])
            {
                c1=1;
                el1=nums[i];
            }
            else  if(c2==0&& el1!=nums[i])
            {
                c2=1;
                el2=nums[i];
            }
            else if(nums[i]==el1) c1++;
            else if(nums[i]==el2) c2++;
            else 
            {
                c1--;
                c2--;
            }
        }
       vector<int> ls; // list of answers

    // Manually check if the stored elements in
    // el1 and el2 are the majority elements:
    c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == el1) c1++;
        if (nums[i] == el2) c2++;
    }

    int mini = int(n / 3) + 1;
    if (c1 >= mini) ls.push_back(el1);
    if (c2 >= mini) ls.push_back(el2);
    return ls;
    }
};