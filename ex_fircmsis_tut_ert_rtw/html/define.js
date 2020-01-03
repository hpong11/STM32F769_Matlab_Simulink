function CodeDefine() { 
this.def = new Array();
this.def["IsrOverrun"] = {file: "ert_main_c.html",line:19,type:"var"};
this.def["OverrunFlag"] = {file: "ert_main_c.html",line:20,type:"var"};
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:21,type:"fcn"};
this.def["stopRequested"] = {file: "ert_main_c.html",line:38,type:"var"};
this.def["main"] = {file: "ert_main_c.html",line:39,type:"fcn"};
this.def["ex_fircmsis_tut_B"] = {file: "ex_fircmsis_tut_c.html",line:20,type:"var"};
this.def["ex_fircmsis_tut_DW"] = {file: "ex_fircmsis_tut_c.html",line:23,type:"var"};
this.def["ex_fircmsis_tut_M_"] = {file: "ex_fircmsis_tut_c.html",line:26,type:"var"};
this.def["ex_fircmsis_tut_M"] = {file: "ex_fircmsis_tut_c.html",line:27,type:"var"};
this.def["RandSrc_GZ_R"] = {file: "ex_fircmsis_tut_c.html",line:28,type:"fcn"};
this.def["RandSrcInitState_GZ"] = {file: "ex_fircmsis_tut_c.html",line:120,type:"fcn"};
this.def["ex_fircmsis_tut_step"] = {file: "ex_fircmsis_tut_c.html",line:135,type:"fcn"};
this.def["ex_fircmsis_tut_initialize"] = {file: "ex_fircmsis_tut_c.html",line:206,type:"fcn"};
this.def["ex_fircmsis_tut_terminate"] = {file: "ex_fircmsis_tut_c.html",line:323,type:"fcn"};
this.def["B_ex_fircmsis_tut_T"] = {file: "ex_fircmsis_tut_h.html",line:46,type:"type"};
this.def["DW_ex_fircmsis_tut_T"] = {file: "ex_fircmsis_tut_h.html",line:56,type:"type"};
this.def["P_ex_fircmsis_tut_T"] = {file: "ex_fircmsis_tut_types_h.html",line:21,type:"type"};
this.def["RT_MODEL_ex_fircmsis_tut_T"] = {file: "ex_fircmsis_tut_types_h.html",line:24,type:"type"};
this.def["ex_fircmsis_tut_P"] = {file: "ex_fircmsis_tut_data_c.html",line:20,type:"var"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:47,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:48,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:78,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:83,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:95,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:102,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:109,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:116,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:123,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:130,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:148,type:"type"};
}
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
	this.html2SrcPath["ex_fircmsis_tut_c.html"] = "../ex_fircmsis_tut.c";
	this.html2Root["ex_fircmsis_tut_c.html"] = "ex_fircmsis_tut_c.html";
	this.html2SrcPath["ex_fircmsis_tut_h.html"] = "../ex_fircmsis_tut.h";
	this.html2Root["ex_fircmsis_tut_h.html"] = "ex_fircmsis_tut_h.html";
	this.html2SrcPath["ex_fircmsis_tut_private_h.html"] = "../ex_fircmsis_tut_private.h";
	this.html2Root["ex_fircmsis_tut_private_h.html"] = "ex_fircmsis_tut_private_h.html";
	this.html2SrcPath["ex_fircmsis_tut_types_h.html"] = "../ex_fircmsis_tut_types.h";
	this.html2Root["ex_fircmsis_tut_types_h.html"] = "ex_fircmsis_tut_types_h.html";
	this.html2SrcPath["ex_fircmsis_tut_data_c.html"] = "../ex_fircmsis_tut_data.c";
	this.html2Root["ex_fircmsis_tut_data_c.html"] = "ex_fircmsis_tut_data_c.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.html2SrcPath["rtmodel_h.html"] = "../rtmodel.h";
	this.html2Root["rtmodel_h.html"] = "rtmodel_h.html";
	this.html2SrcPath["MW_target_hardware_resources_h.html"] = "../MW_target_hardware_resources.h";
	this.html2Root["MW_target_hardware_resources_h.html"] = "MW_target_hardware_resources_h.html";
	this.html2SrcPath["mw_cmsis_h.html"] = "../mw_cmsis.h";
	this.html2Root["mw_cmsis_h.html"] = "mw_cmsis_h.html";
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
"ert_main_c.html","ex_fircmsis_tut_c.html","ex_fircmsis_tut_h.html","ex_fircmsis_tut_private_h.html","ex_fircmsis_tut_types_h.html","ex_fircmsis_tut_data_c.html","rtwtypes_h.html","rtmodel_h.html","MW_target_hardware_resources_h.html","mw_cmsis_h.html"];
