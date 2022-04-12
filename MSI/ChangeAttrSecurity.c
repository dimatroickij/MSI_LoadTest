ChangeAttrSecurity()
{
	int countSecAttr = 0;
	int valueAttr = 0;
	int numberAttr = 0;

	web_url("SecurityGroup",
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/SecurityGroup?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups", 
		"Snapshot=t639.inf", 
		"Mode=HTML", 
		LAST);

	web_url("securitygroups", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups?offset=0&limit=10&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups", 
		"Snapshot=t640.inf", 
		"Mode=HTML", 
		LAST);
	
	// Заглушка: пока группа не выбирается из списка
	lr_save_string("c9e900aa-36ac-4570-8db7-f3953b3c1049", "ID_AttrSecurity");

	web_url("statuses_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/statuses?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}", 
		"Snapshot=t641.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_save_param("securitygroup","LB=","RB=","Search=Body",LAST);
	
	web_url("ID_AttrSecurity", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups/{ID_AttrSecurity}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}", 
		"Snapshot=t642.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_eval_json("Buffer={securitygroup}", "JsonObject=json_securitygroup", LAST);
	
	lr_json_get_values("JsonObject=json_securitygroup",
                       "ValueParam=nameAttrSec",
                       "QueryString=$.name",
                       LAST);
	
	lr_json_get_values("JsonObject=json_securitygroup",
                       "ValueParam=descriptionAttrSec",
                       "QueryString=$.description",
                       LAST);
	
	lr_json_get_values("JsonObject=json_securitygroup",
                       "ValueParam=versionAttrSec",
                       "QueryString=$.version",
                       LAST);
	
	lr_json_get_values("JsonObject=json_securitygroup",
                       "ValueParam=crossSegmentMembershipAllowedAttrSec",
                       "QueryString=$.crossSegmentMembershipAllowed",
                       LAST);
	
	countSecAttr = lr_json_get_values("JsonObject=json_securitygroup",
                       "ValueParam=countSecAttr",
                       "QueryString=$.securityGroupAttributes.[*].key",
                       "SelectAll=Yes",
                       LAST);
	
	valueAttr = rand() % 100000;
	numberAttr = rand() % countSecAttr;
	
	lr_save_int(valueAttr, "valueAttr");
	lr_save_int(numberAttr, "numberSecAttr");
	
	lr_json_set_values("JsonObject=json_securitygroup",
                   "Value={valueAttr}",
                   "QueryString=$.securityGroupAttributes.[{numberSecAttr}].value",
                   LAST); 
	
	lr_json_get_values("JsonObject=json_securitygroup",
                       "ValueParam=securityGroupAttributes",
                     	"QueryString=$.securityGroupAttributes",
						LAST);

	web_url("DisplaySnils_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}", 
		"Snapshot=t643.inf", 
		"Mode=HTML", 
		LAST);

	web_url("extended", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&limit=-1&order_by=asc(name)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}", 
		"Snapshot=t644.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SecurityGroup_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/SecurityGroup?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}", 
		"Snapshot=t645.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SecurityGroup_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/SecurityGroup?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}/edit?returnUrl=%2Faccess-control%2Fsecurity-groups%2F{ID_AttrSecurity}", 
		"Snapshot=t646.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DisplaySnils_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}/edit?returnUrl=%2Faccess-control%2Fsecurity-groups%2F{ID_AttrSecurity}", 
		"Snapshot=t647.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ID_AttrSecurity_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups/{ID_AttrSecurity}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}/edit?returnUrl=%2Faccess-control%2Fsecurity-groups%2F{ID_AttrSecurity}", 
		"Snapshot=t648.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SecurityGroup_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/SecurityGroup?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}/edit?returnUrl=%2Faccess-control%2Fsecurity-groups%2F{ID_AttrSecurity}", 
		"Snapshot=t649.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ID_AttrSecurity_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups/{ID_AttrSecurity}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}/edit?returnUrl=%2Faccess-control%2Fsecurity-groups%2F{ID_AttrSecurity}", 
		"Snapshot=t650.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", "http://192.168.109.240");

	web_custom_request("ID_AttrSecurity_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups/{ID_AttrSecurity}?loaderKey=default", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json",
		"EncType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}/edit?returnUrl=%2Faccess-control%2Fsecurity-groups%2F{ID_AttrSecurity}", 
		"Snapshot=t651.inf", 
		"Mode=HTML", 
		"Body={\"name\":\"{nameAttrSec}\",\"description\":\"{descriptionAttrSec}\",\"version\":{versionAttrSec},\"crossSegmentMembershipAllowed\":false,\"securityGroupAttributes\":{securityGroupAttributes}}", 
		LAST);

	web_url("SecurityGroup_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/SecurityGroup?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}", 
		"Snapshot=t652.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DisplaySnils_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}", 
		"Snapshot=t653.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ID_AttrSecurity_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups/{ID_AttrSecurity}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}", 
		"Snapshot=t654.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}