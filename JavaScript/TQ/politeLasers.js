function getLaserSetting(laser){
	if(laser == "please"){
		return "OFF";
	}
	else{
		return "ON";
	}
}
const arg = String(process.argv[2]);
const ans = getLaserSetting(arg);
console.log("The current laser setting is: " + ans);
