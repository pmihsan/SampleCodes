const bestSum = (targetSum, numbers, memo = {}) => {
    const table = Array(targetSum + 1).fill(null);
    table[0] = [];

    for(let i=0;i<= targetSum;i++){
        if(table[i] !== null){
            for(let num of numbers){
                const combination = [...table[i], num];
                if(!table[i + num] || combination.length < table[i + num].length){
                    table[i + num] = [...table[i], num];
                }
            }
        }
    }
    return table[targetSum];
};



console.log(bestSum(7, [5, 3, 4, 7])) // [4, 3]
console.log(bestSum(8, [2, 3, 5])); // [3, 5]
console.log(bestSum(8, [1, 4, 5])); // [4, 4]
console.log(bestSum(100, [1, 2, 5, 25])); // [25, 25, 25, 25]
// console.log(bestSum(300, [7, 14])) // null
// console.log(bestSum(7, [2, 4])) // null
console.log(bestSum(7, [2, 3])) // [3, 2, 2]
console.log(bestSum(13, [7, 1])) // [ 1, 1, 1, 1, 1, 1, 7 ]