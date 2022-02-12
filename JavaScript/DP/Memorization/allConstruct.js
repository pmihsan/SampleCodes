const allConstruct = (target, wordBank, memo = {}) => {
    if(target in memo) return memo[target];
    if (target === '') return [[]];

    const result = [];
    for(let word of wordBank){
        if (target.indexOf(word) === 0){
            const suffix = target.slice(word.length);
            const suffixWays = allConstruct(suffix, wordBank, memo);
            const targetWays = suffixWays.map(way => ([word, ...way]));
            result.push(...targetWays);
        }
    }

    memo[target] = result;
    return result;
 }
 
// console.log(allConstruct("potato", ['pot', 'ta', 'to'])) // 0 way

console.log(allConstruct("purple", ['purp', 'p', 'ur', 'le', 'purpl'])) // 2 ways 
console.log(allConstruct("abcdef", ['ab', 'abc', 'cd', 'def', 'abcd', 'ef', 'c'])) // 4 ways 
console.log(allConstruct("skateboard", ["bo", "rd", "ate", "t", "ska", "sk", "boar"])); // [] 0 way
console.log(allConstruct("eeeeeeeeeeeeeeef", [
    'e',
    'ee',
    'eee',
    'eeee',
    'eeeee',
    'eeeeee',
    'eeeeeee',
    'eeeeeeee'
])) // 0 way