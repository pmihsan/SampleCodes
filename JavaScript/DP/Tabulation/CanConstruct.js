const canConstruct = (target, wordBank) => {
    const table = Array(target.length + 1).fill(false);
    table[0] = true;

    for(let i=0;i<= target.length;i++){
        if(table[i] === true){
            for(let word of wordBank){
                if(target.slice(i, i + word.length) === word){
                    table[i + word.length] = true;
                }
            }
        }
    }
    return table[target.length]; 
}

// console.log(canConstruct("banana", ["ba", "pa", "ca", "na"])); // True
// console.log(canConstruct("", ["ba", "pa", "ca", "na"])); // True
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