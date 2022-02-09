const canSum = (target, nums, memo = {}) => {
    if(target in memo) return memo[target];
    if(target === 0) return true;
    if(target < 0 ) return false;

    for(let num of nums){
        let remaining = target - num;
        let res = canSum(remaining, nums, memo)
        if(res === true){
            return true;
        }
        memo[target] = res;
    }
    return false;
};

console.log(canSum(7, [2, 3])); //true
console.log(canSum(7, [5, 3, 4, 7])); //true
console.log(canSum(7, [2, 4]));  //false
console.log(canSum(8, [2, 3, 5])); //true
console.log(canSum(300, [7, 14])); //false