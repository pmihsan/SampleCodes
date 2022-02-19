const allConstruct = (target, wordBank) => {
    const table = Array(target.length + 1)
    .fill()
    .map(() => []);
    table[0] = [[]];

    for(let i=0;i<=target.length;i++){
        for(let word of wordBank){
            if(target.slice(i, i + word.length) === word){
                const newCombinations = table[i].map(subArray => [ ...subArray, word]); // Copy the word to each subarray
                table[i + word.length].push( ...newCombinations); // Adding the new combination withou rewriting it
            }
        }
    }
    return table[target.length];
 }
 
// console.log(allConstruct("potato", ['pot', 'ta', 'to'])) // 0 way []

console.log(allConstruct("purple", ['purp', 'p', 'ur', 'le', 'purpl'])) // 2 ways 
/*
[ [ 'purp', 'le' ], 
  [ 'p', 'ur', 'p', 'le' ] ]
  */
console.log(allConstruct("abcdef", ['ab', 'abc', 'cd', 'def', 'abcd', 'ef', 'c'])) // 4 ways 
/*
[ [ 'abc', 'def' ],
  [ 'ab', 'c', 'def' ],
  [ 'abcd', 'ef' ],
  [ 'ab', 'cd', 'ef' ] ]
*/ 
console.log(allConstruct("skateboard", ["bo", "rd", "ate", "t", "ska", "sk", "boar"])); // 0 way []
console.log(allConstruct("eeeeeeeeeeeeeeef", [
    'e',
    'ee',
    'eee',
    'eeee',
    'eeeee',
    'eeeeee',
    'eeeeeee',
    'eeeeeeee'
])) // 0 way []