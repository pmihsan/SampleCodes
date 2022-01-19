
const argumentValue = process.argv[2];

const ans = Number(argumentValue)

if(ans == 0){
	console.log("alive");
}
else if(ans == 1){
	console.log("flowering");
}
else if(ans == 2){
	console.log("shedding");
}
else{
	console.log("other");
}
