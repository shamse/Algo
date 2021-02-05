#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    
    vector<int> res{};
    std::unordered_map<int,int> complement;
    
    for (int i = 0; i < nums.size(); i++)
    {
        auto itr = complement.find(nums[i]);
        if (itr==complement.end())
            complement[target-nums[i]]=i;
        else
        {
            res.push_back(i);
            res.push_back(itr->second);
            break;
        }
    }
    return res;
}

int main()
{
    vector<int> v{2,7,11,15};
    vector<int> res{twoSum(v,9)};
    cout << res[0] << " " << res[1] << endl;
}