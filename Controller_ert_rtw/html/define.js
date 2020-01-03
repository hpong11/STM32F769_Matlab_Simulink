function CodeDefine() { 
this.def = new Array();
this.def["IsrOverrun"] = {file: "ert_main_c.html",line:19,type:"var"};
this.def["OverrunFlag"] = {file: "ert_main_c.html",line:20,type:"var"};
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:21,type:"fcn"};
this.def["stopRequested"] = {file: "ert_main_c.html",line:38,type:"var"};
this.def["main"] = {file: "ert_main_c.html",line:39,type:"fcn"};
this.def["rtDWork"] = {file: "Controller_c.html",line:19,type:"var"};
this.def["rtU"] = {file: "Controller_c.html",line:22,type:"var"};
this.def["rtY"] = {file: "Controller_c.html",line:25,type:"var"};
this.def["rtM_"] = {file: "Controller_c.html",line:28,type:"var"};
this.def["rtM"] = {file: "Controller_c.html",line:29,type:"var"};
this.def["Controller_step"] = {file: "Controller_c.html",line:32,type:"fcn"};
this.def["Controller_initialize"] = {file: "Controller_c.html",line:80,type:"fcn"};
this.def["RT_MODEL"] = {file: "Controller_h.html",line:41,type:"type"};
this.def["D_Work"] = {file: "Controller_h.html",line:48,type:"type"};
this.def["ExternalInputs"] = {file: "Controller_h.html",line:53,type:"type"};
this.def["ExternalOutputs"] = {file: "Controller_h.html",line:58,type:"type"};
this.def["Parameters"] = {file: "Controller_h.html",line:86,type:"type"};
this.def["rtP"] = {file: "Controller_data_c.html",line:19,type:"var"};
this.def["int8_T"] = {file: "../../slprj/ert/_sharedutils/html/rtwtypes_h.html",line:42,type:"type"};
this.def["uint8_T"] = {file: "../../slprj/ert/_sharedutils/html/rtwtypes_h.html",line:43,type:"type"};
this.def["int16_T"] = {file: "../../slprj/ert/_sharedutils/html/rtwtypes_h.html",line:44,type:"type"};
this.def["uint16_T"] = {file: "../../slprj/ert/_sharedutils/html/rtwtypes_h.html",line:45,type:"type"};
this.def["int32_T"] = {file: "../../slprj/ert/_sharedutils/html/rtwtypes_h.html",line:46,type:"type"};
this.def["uint32_T"] = {file: "../../slprj/ert/_sharedutils/html/rtwtypes_h.html",line:47,type:"type"};
this.def["real32_T"] = {file: "../../slprj/ert/_sharedutils/html/rtwtypes_h.html",line:48,type:"type"};
this.def["real64_T"] = {file: "../../slprj/ert/_sharedutils/html/rtwtypes_h.html",line:49,type:"type"};
this.def["real_T"] = {file: "../../slprj/ert/_sharedutils/html/rtwtypes_h.html",line:55,type:"type"};
this.def["time_T"] = {file: "../../slprj/ert/_sharedutils/html/rtwtypes_h.html",line:56,type:"type"};
this.def["boolean_T"] = {file: "../../slprj/ert/_sharedutils/html/rtwtypes_h.html",line:57,type:"type"};
this.def["int_T"] = {file: "../../slprj/ert/_sharedutils/html/rtwtypes_h.html",line:58,type:"type"};
this.def["uint_T"] = {file: "../../slprj/ert/_sharedutils/html/rtwtypes_h.html",line:59,type:"type"};
this.def["ulong_T"] = {file: "../../slprj/ert/_sharedutils/html/rtwtypes_h.html",line:60,type:"type"};
this.def["char_T"] = {file: "../../slprj/ert/_sharedutils/html/rtwtypes_h.html",line:61,type:"type"};
this.def["uchar_T"] = {file: "../../slprj/ert/_sharedutils/html/rtwtypes_h.html",line:62,type:"type"};
this.def["byte_T"] = {file: "../../slprj/ert/_sharedutils/html/rtwtypes_h.html",line:63,type:"type"};
this.def["pointer_T"] = {file: "../../slprj/ert/_sharedutils/html/rtwtypes_h.html",line:81,type:"type"};
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
	this.html2SrcPath["Controller_c.html"] = "../Controller.c";
	this.html2Root["Controller_c.html"] = "Controller_c.html";
	this.html2SrcPath["Controller_h.html"] = "../Controller.h";
	this.html2Root["Controller_h.html"] = "Controller_h.html";
	this.html2SrcPath["Controller_data_c.html"] = "../Controller_data.c";
	this.html2Root["Controller_data_c.html"] = "Controller_data_c.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "../../slprj/ert/_sharedutils/html/rtwtypes_h.html";
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
"ert_main_c.html","Controller_c.html","Controller_h.html","Controller_data_c.html","rtwtypes_h.html","rtmodel_h.html","MW_target_hardware_resources_h.html"];
