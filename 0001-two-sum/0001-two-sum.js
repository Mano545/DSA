/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let res = new Map();
    let ans = new Array(2);
    let n = nums.length;
    // for(let i=0;i<n;i++) 
    for(let i=0;i<n;i++){
        let need = target - nums[i];
        if(res.has(need)){
            ans[0] = i;
            ans[1] = res.get(need);
        }
        res.set(nums[i],i);
    }
    return ans;
};