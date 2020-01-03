function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "untitled2"};
	this.sidHashMap["untitled2"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "untitled2:10"};
	this.sidHashMap["untitled2:10"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Digital Read1"] = {sid: "untitled2:7"};
	this.sidHashMap["untitled2:7"] = {rtwname: "<Root>/Digital Read1"};
	this.rtwnameHashMap["<Root>/Digital Write2"] = {sid: "untitled2:8"};
	this.sidHashMap["untitled2:8"] = {rtwname: "<Root>/Digital Write2"};
	this.rtwnameHashMap["<Root>/Digital Write3"] = {sid: "untitled2:9"};
	this.sidHashMap["untitled2:9"] = {rtwname: "<Root>/Digital Write3"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "untitled2:5"};
	this.sidHashMap["untitled2:5"] = {rtwname: "<Root>/Display"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
