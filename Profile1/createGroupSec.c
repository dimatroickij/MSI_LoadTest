createGroupSec()
{
	int valueKey = 0;
	
	genAttr(5);
	
	genAttr(6);
	
	genAttr(7);
	
	web_url("SecurityGroup", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/SecurityGroup?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups", 
		"Snapshot=t151.inf", 
		"Mode=HTML", 
		LAST);

	web_url("securitygroups", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups?offset=0&limit=10&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups", 
		"Snapshot=t152.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SecurityGroup_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/SecurityGroup?show_in_card=true&limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/create", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SecurityGroup_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/SecurityGroup?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/create", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		LAST);

	web_url("securitygroups_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups?offset=0&limit=10&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/create", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		LAST);

	valueKey = rand() % 1000;
	
	lr_save_int(valueKey, "valueKey");
	
	web_add_header("Origin", "http://192.168.109.240");

	web_custom_request("securitygroups_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups?loaderKey=default", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/create", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"name\":\"{nameGroupSec}\",\"sysname\":\"{sysnameGroupSec}\",\"segmentId\":\"85229e69-3ad7-42c3-9255-38af49a05ace\",\"description\":\"{descriptionGroupSec}\",\"securityGroupAttributes\":[{\"name\":\"test777\",\"key\":\"test777\",\"value\":\"{valueKey}\"}],\"crossSegmentMembershipAllowed\":null}", 
		LAST);

	web_url("SecurityGroup_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/SecurityGroup?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		LAST);

	web_url("securitygroups_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups?offset=0&limit=10&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		LAST);
	
	return 0;
}
