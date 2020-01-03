function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "LED_test"};
	this.sidHashMap["LED_test"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "LED_test:41"};
	this.sidHashMap["LED_test:41"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Digital Write"] = {sid: "LED_test:40"};
	this.sidHashMap["LED_test:40"] = {rtwname: "<Root>/Digital Write"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
