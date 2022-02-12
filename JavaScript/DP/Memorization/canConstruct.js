const canConstruct = (target, wordBank, memo = {}) => {
    if(target in memo) return memo[target];
    if(target === '')  return true;

    for (let word of wordBank){
        if(target.indexOf(word) === 0){
            const suffix = target.slice(word.length);
            if (canConstruct(suffix, wordBank, memo) === true) {
                memo[target] = true;
                return true;
            }
        }
    }

    memo[target] = false;
    return false;
}

// console.log(canConstruct("banana", ["ba", "pa", "ca", "na"])); // True
// console.log(canConstruct("", ["ba", "pa", "ca", "na"])); // False
// console.log(canConstruct("skateboard", ["skat", "te", "bor", "ard"])); // False
// console.log(canConstruct("skateboard", ["skat", "te", 'e', "bo", "ard"])); // True
// console.log(canConstruct("potato", ["pot", "ta", "to"])); // False

console.log(canConstruct("abcdef", ["ab", "abcdefgh", "c", "def"])); // True
console.log(canConstruct("skateboard", ["bo", "rd", "ate", "t", "ska", "sk", "boar"])); // False
console.log(canConstruct("enterapotentpot", ["a", "p", "ent", "enter", "ot", "o", "t"])); // True
console.log(canConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", [
    'e',
    'ee',
    'eee',
    'eeee',
    'eeeee',
    'eeeeee',
    'eeeeeee',
    'eeeeeeee'
])); // false