const countConstruct = (target, wordBank) => {
    const table = Array(target.length + 1).fill(0);
    table[0] = 1;

    for(let i=0;i <= target.length;i++){
        if(table[i] !== 0){
            for(let word of wordBank){
                if(target.slice(i, i + word.length) === word){
                    table[i + word.length] += table[i]; 
                }
            }
        }
    }
    return table[target.length];
    
};

// console.log(countConstruct("banana", ["ba", "pa", "ca", "na"])); // 1
// console.log(countConstruct("", ["ba", "pa", "ca", "na"])); // 1
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