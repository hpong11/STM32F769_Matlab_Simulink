function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "untitled"};
	this.sidHashMap["untitled"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Audio Input"] = {sid: "untitled:3"};
	this.sidHashMap["untitled:3"] = {rtwname: "<Root>/Audio Input"};
	this.rtwnameHashMap["<Root>/Digital Write"] = {sid: "untitled:1"};
	this.sidHashMap["untitled:1"] = {rtwname: "<Root>/Digital Write"};
	this.rtwnameHashMap["<Root>/Digital Write1"] = {sid: "untitled:2"};
	this.sidHashMap["untitled:2"] = {rtwname: "<Root>/Digital Write1"};
	this.rtwnameHashMap["<Root>/PWM Output"] = {sid: "untitled:5"};
	this.sidHashMap["untitled:5"] = {rtwname: "<Root>/PWM Output"};
	this.rtwnameHashMap["<Root>/Pulse Generator"] = {sid: "untitled:6"};
	this.sidHashMap["untitled:6"] = {rtwname: "<Root>/Pulse Generator"};
	this.rtwnameHashMap["<Root>/SCI Write"] = {sid: "untitled:4"};
	this.sidHashMap["untitled:4"] = {rtwname: "<Root>/SCI Write"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
