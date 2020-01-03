function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "STM32_FIR_test"};
	this.sidHashMap["STM32_FIR_test"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Audio Input"] = {sid: "STM32_FIR_test:17"};
	this.sidHashMap["STM32_FIR_test:17"] = {rtwname: "<Root>/Audio Input"};
	this.rtwnameHashMap["<Root>/Audio Output"] = {sid: "STM32_FIR_test:6"};
	this.sidHashMap["STM32_FIR_test:6"] = {rtwname: "<Root>/Audio Output"};
	this.rtwnameHashMap["<Root>/Data Type Conversion"] = {sid: "STM32_FIR_test:43"};
	this.sidHashMap["STM32_FIR_test:43"] = {rtwname: "<Root>/Data Type Conversion"};
	this.rtwnameHashMap["<Root>/Discrete FIR Filter"] = {sid: "STM32_FIR_test:44"};
	this.sidHashMap["STM32_FIR_test:44"] = {rtwname: "<Root>/Discrete FIR Filter"};
	this.rtwnameHashMap["<Root>/Gain"] = {sid: "STM32_FIR_test:41"};
	this.sidHashMap["STM32_FIR_test:41"] = {rtwname: "<Root>/Gain"};
	this.rtwnameHashMap["<Root>/Gain1"] = {sid: "STM32_FIR_test:42"};
	this.sidHashMap["STM32_FIR_test:42"] = {rtwname: "<Root>/Gain1"};
	this.rtwnameHashMap["<Root>/Matrix Concatenate"] = {sid: "STM32_FIR_test:8"};
	this.sidHashMap["STM32_FIR_test:8"] = {rtwname: "<Root>/Matrix Concatenate"};
	this.rtwnameHashMap["<Root>/Selector"] = {sid: "STM32_FIR_test:19"};
	this.sidHashMap["STM32_FIR_test:19"] = {rtwname: "<Root>/Selector"};
	this.rtwnameHashMap["<Root>/Selector1"] = {sid: "STM32_FIR_test:38"};
	this.sidHashMap["STM32_FIR_test:38"] = {rtwname: "<Root>/Selector1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
