const first = process.argv[2];
const second = process.argv[3];

if(first.toLowerCase() < second.toLowerCase()){
	console.log(-1);
}
else if(first.toLowerCase() > second.toLowerCase()){
	console.log(1);
}
else{
	console.log(0);
}
