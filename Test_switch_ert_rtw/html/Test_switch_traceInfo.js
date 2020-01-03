function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Test_switch"};
	this.sidHashMap["Test_switch"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "Test_switch:3"};
	this.sidHashMap["Test_switch:3"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Digital Read"] = {sid: "Test_switch:2"};
	this.sidHashMap["Test_switch:2"] = {rtwname: "<Root>/Digital Read"};
	this.rtwnameHashMap["<Root>/Digital Write"] = {sid: "Test_switch:1"};
	this.sidHashMap["Test_switch:1"] = {rtwname: "<Root>/Digital Write"};
	this.rtwnameHashMap["<Root>/Digital Write1"] = {sid: "Test_switch:5"};
	this.sidHashMap["Test_switch:5"] = {rtwname: "<Root>/Digital Write1"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "Test_switch:4"};
	this.sidHashMap["Test_switch:4"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Slider Switch"] = {sid: "Test_switch:6"};
	this.sidHashMap["Test_switch:6"] = {rtwname: "<Root>/Slider Switch"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
