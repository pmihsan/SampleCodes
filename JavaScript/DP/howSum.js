const howSum = (target, nums, memo = {}) => {
    if(target in memo) return memo[target];
    if(target === 0) return [];
    if(target < 0) return null;

    for(let num of nums){
        let remaining = target - num;
        let res = howSum(remaining, nums, memo)

        if(res !== null){
            return [...res, num];
        }
        else{
            memo[remaining] = null;
        }
    }
    return null;
};


console.log(howSum(7, [2, 3]))
console.log(howSum(7, [5, 3, 4, 7]))
console.log(howSum(7, [2, 4]))
console.log(howSum(13, [7, 1]))
console.log(howSum(300, [7, 14]))