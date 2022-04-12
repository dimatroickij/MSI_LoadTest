SearchGroupSec()
{

	createText(2, 6);
	
	web_url("SecurityGroup", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/SecurityGroup?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		LAST);

	web_url("securitygroups", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups?offset=0&limit=10&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		LAST);

	web_url("securitygroups_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups?offset=0&limit=10&order_by=asc(name)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		LAST);

	web_url("securitygroups_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups?name={nameSecurityGroup}&offset=0&limit=10&order_by=asc(name)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		LAST);

	web_url("securitygroups_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups?name={nameSecurityGroup}&offset=0&limit=10&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}