const fib = (n) => {
    const table = Array(n+1).fill(0);
    table[1] = 1;
    for(let i=0;i<=n;i++){
        table[i+1] += table[i];
        table[i+2] += table[i];
    }
    return table[n];
};

const fibo = (n) => {
    const table = Array(n+1).fill(0);
    table[1] = 1;
    for(let i=2;i<=n;i++){
        table[i] = table[i-1] + table[i-2];
    }
    return table[n];
};

const fiboC = (n) => {
    let c = 0;
    let a = 0;
    let b = 1;
    for(let i=2;i<=n;i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
};


// console.log(fib(6)); // 8
// console.log(fib(7)); // 13
// console.log(fib(8)); // 21
// console.log(fib(50)); // 12586269025

// console.log(fibo(6)); // 8
// console.log(fibo(7)); // 13
// console.log(fibo(8)); // 21
// console.log(fibo(50)); // 12586269025

console.log(fiboC(6)); // 8
console.log(fiboC(7)); // 13
console.log(fiboC(8)); // 21
console.log(fiboC(50)); // 12586269025