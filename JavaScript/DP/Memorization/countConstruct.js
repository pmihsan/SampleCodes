const countConstruct = (target, wordBank, memo = {}) => {
    if(target in memo) return memo[target];
    if(target === "")  return 1;

    let totalCount = 0;

    for (let word of wordBank){
        if(target.indexOf(word) === 0){
            const numWaysForRest = countConstruct(target.slice(word.length), wordBank, memo);
            totalCount += numWaysForRest;
        }
    }

    memo[target] = totalCount;
    return totalCount;
};

// console.log(countConstruct("banana", ["ba", "pa", "ca", "na"])); // 1
// console.log(countConstruct("", ["ba", "pa", "ca", "na"])); // 0
// console.log(countConstruct("potato", ["pot", "ta", "to"])); // 0
// console.log(countConstruct("skateboard", ["skat", "te", "bor", "ard"])); // 0
// console.log(countConstruct("skateboard", ["skat", "te", 'e', "bo", "ard", 'ska'])); // 2

console.log(countConstruct("purple", ["purp", "p", "ur", "le", "purpl"])); // 2
console.log(countConstruct("abcdef", ["ab", "abcdefgh", "c", "def"])); // 1
console.log(countConstruct("skateboard", ["bo", "rd", "ate", "t", "ska", "sk", "boar"])); // 0
console.log(countConstruct("enterapotentpot", ["a", "p", "ent", "enter", "ot", "o", "t"])); // 4
console.log(countConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", [
    'e',
    'ee',
    'eee',
    'eeee',
    'eeeee',
    'eeeeee',
    'eeeeeee',
    'eeeeeeee'
])); // 0