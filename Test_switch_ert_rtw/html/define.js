function CodeDefine() { 
this.def = new Array();
this.def["IsrOverrun"] = {file: "ert_main_c.html",line:23,type:"var"};this.def["OverrunFlag"] = {file: "ert_main_c.html",line:24,type:"var"};this.def["rt_OneStep"] = {file: "ert_main_c.html",line:25,type:"fcn"};this.def["stopRequested"] = {file: "ert_main_c.html",line:43,type:"var"};this.def["main"] = {file: "ert_main_c.html",line:44,type:"fcn"};this.def["Test_switch_B"] = {file: "Test_switch_c.html",line:20,type:"var"};this.def["Test_switch_DW"] = {file: "Test_switch_c.html",line:23,type:"var"};this.def["Test_switch_M_"] = {file: "Test_switch_c.html",line:26,type:"var"};this.def["Test_switch_M"] = {file: "Test_switch_c.html",line:27,type:"var"};this.def["Test_switch_SystemCore_release"] = {file: "Test_switch_c.html",line:40,type:"fcn"};this.def["Test_switch_SystemCore_delete"] = {file: "Test_switch_c.html",line:48,type:"fcn"};this.def["matlabCodegenHandle_matlabCodeg"] = {file: "Test_switch_c.html",line:54,type:"fcn"};this.def["Test_switc_SystemCore_release_d"] = {file: "Test_switch_c.html",line:62,type:"fcn"};this.def["Test_switch_SystemCore_delete_d"] = {file: "Test_switch_c.html",line:70,type:"fcn"};this.def["matlabCodegenHandle_matlabCod_d"] = {file: "Test_switch_c.html",line:76,type:"fcn"};this.def["Test_switch_step"] = {file: "Test_switch_c.html",line:85,type:"fcn"};this.def["Test_switch_initialize"] = {file: "Test_switch_c.html",line:139,type:"fcn"};this.def["Test_switch_terminate"] = {file: "Test_switch_c.html",line:222,type:"fcn"};this.def["B_Test_switch_T"] = {file: "Test_switch_h.html",line:82,type:"type"};this.def["DW_Test_switch_T"] = {file: "Test_switch_h.html",line:98,type:"type"};this.def["mbed_DigitalWrite_Test_switch_T"] = {file: "Test_switch_types_h.html",line:31,type:"type"};this.def["mbed_DigitalRead_Test_switch_T"] = {file: "Test_switch_types_h.html",line:44,type:"type"};this.def["P_Test_switch_T"] = {file: "Test_switch_types_h.html",line:49,type:"type"};this.def["RT_MODEL_Test_switch_T"] = {file: "Test_switch_types_h.html",line:52,type:"type"};this.def["Test_switch_P"] = {file: "Test_switch_data_c.html",line:20,type:"var"};this.def["chunk_T"] = {file: "multiword_types_h.html",line:23,type:"type"};this.def["uchunk_T"] = {file: "multiword_types_h.html",line:24,type:"type"};this.def["int8_T"] = {file: "rtwtypes_h.html",line:47,type:"type"};this.def["uint8_T"] = {file: "rtwtypes_h.html",line:48,type:"type"};this.def["int16_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};this.def["uint16_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};this.def["int32_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};this.def["uint32_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};this.def["real32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};this.def["real64_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};this.def["real_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};this.def["time_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};this.def["boolean_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};this.def["int_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};this.def["uint_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};this.def["ulong_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};this.def["char_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};this.def["uchar_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};this.def["byte_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};this.def["creal32_T"] = {file: "rtwtypes_h.html",line:78,type:"type"};this.def["creal64_T"] = {file: "rtwtypes_h.html",line:83,type:"type"};this.def["creal_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};this.def["cint8_T"] = {file: "rtwtypes_h.html",line:95,type:"type"};this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:102,type:"type"};this.def["cint16_T"] = {file: "rtwtypes_h.html",line:109,type:"type"};this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:116,type:"type"};this.def["cint32_T"] = {file: "rtwtypes_h.html",line:123,type:"type"};this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:130,type:"type"};this.def["pointer_T"] = {file: "rtwtypes_h.html",line:148,type:"type"};this.def["extmodeEventId_T"] = {file: "ext_mode_types_h.html",line:21,type:"type"};this.def["extmodeRealTime_T"] = {file: "ext_mode_types_h.html",line:24,type:"type"};this.def["extmodeSimulationTime_T"] = {file: "ext_mode_types_h.html",line:27,type:"type"};}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["Test_switch_c.html"] = "../Test_switch.c";
	this.html2Root["Test_switch_c.html"] = "Test_switch_c.html";
	this.html2SrcPath["Test_switch_h.html"] = "../Test_switch.h";
	this.html2Root["Test_switch_h.html"] = "Test_switch_h.html";
	this.html2SrcPath["Test_switch_private_h.html"] = "../Test_switch_private.h";
	this.html2Root["Test_switch_private_h.html"] = "Test_switch_private_h.html";
	this.html2SrcPath["Test_switch_types_h.html"] = "../Test_switch_types.h";
	this.html2Root["Test_switch_types_h.html"] = "Test_switch_types_h.html";
	this.html2SrcPath["Test_switch_data_c.html"] = "../Test_switch_data.c";
	this.html2Root["Test_switch_data_c.html"] = "Test_switch_data_c.html";
	this.html2SrcPath["multiword_types_h.html"] = "../multiword_types.h";
	this.html2Root["multiword_types_h.html"] = "multiword_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.html2SrcPath["ext_mode_types_h.html"] = "../ext_mode_types.h";
	this.html2Root["ext_mode_types_h.html"] = "ext_mode_types_h.html";
	this.html2SrcPath["rtmodel_h.html"] = "../rtmodel.h";
	this.html2Root["rtmodel_h.html"] = "rtmodel_h.html";
	this.html2SrcPath["MW_target_hardware_resources_h.html"] = "../MW_target_hardware_resources.h";
	this.html2Root["MW_target_hardware_resources_h.html"] = "MW_target_hardware_resources_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","Test_switch_c.html","Test_switch_h.html","Test_switch_private_h.html","Test_switch_types_h.html","Test_switch_data_c.html","multiword_types_h.html","rtwtypes_h.html","ext_mode_types_h.html","rtmodel_h.html","MW_target_hardware_resources_h.html"];
