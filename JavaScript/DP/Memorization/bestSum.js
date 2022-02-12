const bestSum = (targetSum, numbers, memo = {}) => {
    if(targetSum in memo) return memo[targetSum];
    if(targetSum === 0) return [];
    if(targetSum < 0) return null;

    let shortesCombination = null;

    for(let num of numbers){
        const remainder = targetSum - num;
        const remainderCombination = bestSum(remainder, numbers, memo)

        if(remainderCombination !== null){
            const combination = [...remainderCombination, num];
            if(shortesCombination === null || combination.length < shortesCombination.length){
                shortesCombination = combination;
            }
        }
    }
    memo[targetSum] = shortesCombination;
    return shortesCombination;
};



console.log(bestSum(7, [5, 3, 4, 7])) // [4, 3]
console.log(bestSum(8, [2, 3, 5])); // [3, 5]
console.log(bestSum(8, [1, 4, 5])); // [4, 4]
console.log(bestSum(100, [1, 2, 5, 25])); // [25, 25, 25, 25]
// console.log(bestSum(300, [7, 14])) // null
// console.log(bestSum(7, [2, 4])) // null
console.log(bestSum(7, [2, 3])) // [3, 2, 2]
console.log(bestSum(13, [7, 1])) // [ 1, 1, 1, 1, 1, 1, 7 ]