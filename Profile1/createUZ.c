createUZ()
{
	
//	web_url("users", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/users?user_profile_id={UZ_ID}&status_list=ACTIVE%2CBLOCKED%2CPASSWORD_RESET_REQUIRED%2CREGISTERED&offset=0&limit=10&order_by=asc(login)&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{UZ_ID}", 
//		"Snapshot=t55.inf", 
//		"Mode=HTML", 
//		LAST);
//	
//	web_url("statuses_2", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/users/statuses?loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{UZ_ID}", 
//		"Snapshot=t56.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("extended_2", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&offset=0&limit=10&order_by=asc(name)&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{UZ_ID}", 
//		"Snapshot=t57.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("UZ_ID_2", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{UZ_ID}?loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/create/{UZ_ID}", 
//		"Snapshot=t58.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("DisplaySnils_3", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/create/{UZ_ID}", 
//		"Snapshot=t59.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("type_properties_2", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/create/{UZ_ID}", 
//		"Snapshot=t60.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("UserAccount", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/create/{UZ_ID}", 
//		"Snapshot=t61.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("type_properties_3", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/create/{UZ_ID}", 
//		"Snapshot=t62.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("users_2", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/users?user-account-type-status=ACTIVE&status=ACTIVE&status=BLOCKED&status=REGISTERED&status=PASSWORD_RESET_REQUIRED&offset=0&limit=10&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/create/{UZ_ID}", 
//		"Snapshot=t63.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("UserAccount_2", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?show_in_card=true&limit=-1&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/create/{UZ_ID}", 
//		"Snapshot=t64.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("DisplaySnils_4", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/create/{UZ_ID}", 
//		"Snapshot=t65.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("extended_3", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&limit=-1&order_by=asc(name)&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/create/{UZ_ID}", 
//		"Snapshot=t66.inf", 
//		"Mode=HTML", 
//		EXTRARES, 
//		"Url=/internal/platform-admin-ui/themes/default/fonts/ptsans/ptsansitalic.woff2", "Referer=http://192.168.109.240/internal/platform-admin-ui/themes/default/fonts/ptsans.css", ENDITEM, 
//		LAST);
//
//	web_url("extended_4", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&limit=-1&order_by=asc(name)&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/create/{UZ_ID}", 
//		"Snapshot=t67.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("extended_5", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&offset=0&limit=10&order_by=asc(name)&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/create/{UZ_ID}", 
//		"Snapshot=t68.inf", 
//		"Mode=HTML", 
//		LAST);
//	
//	if (rand() % 2)
//	{
//		lr_save_string("INTERNAL", "typeUZ");
//		lr_save_string("c27de7a9-f86e-4aac-ba93-a505f23cd0d3", "accountTypeId");
//		genAttr(0);
//		genAttr(1);
//	}
//	else
//	{
//		lr_save_string("COMMON" ,"typeUZ");
//		lr_save_string("4af111db-0e0c-47b6-a87a-d19e2cf83f1b", "accountTypeId");
//		lr_save_string("", "login");
//		lr_save_string("", "password");
//	}
//	
//	switch(rand() % 3){
//		case 0:
//			lr_save_string("ACTIVE", "statusUZ");
//			break;
//		case 1:
//			lr_save_string("REGISTERED", "statusUZ");
//			break;
//		case 2:
//			if (strcmp(lr_eval_string("{typeUZ}"),"COMMON") != 0)
//				lr_save_string("PASSWORD_RESET_REQUIRED", "statusUZ");
//			else
//				lr_save_string("ACTIVE", "statusUZ");
//			break;
//	}
//	
//	web_url("PasswordStrength", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_settings/{accountTypeId}/PasswordStrength?loaderKey=none", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/create/{UZ_ID}",
//		"Snapshot=t69.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_add_header("Origin", "http://192.168.109.240");
//
//	web_custom_request("users_3", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/users?loaderKey=default", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/create/{UZ_ID}", 
//		"Snapshot=t70.inf", 
//		"Mode=HTML", 
//		"EncType=application/json", 
//		"Body={\"login\":\"{login}\",\"password\":\"{password}\",\"accountTypeId\":\"{accountTypeId}\",\"status\":\"{statusUZ}\",\"userProfileId\":\"{UZ_ID}\",\"segmentId\":\"85229e69-3ad7-42c3-9255-38af49a05ace\",\"userAccountAttributes\":[]}", 
//		LAST);
//
//	web_url("type_properties_4", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{UZ_ID}", 
//		"Snapshot=t71.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("DisplaySnils_5", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{UZ_ID}", 
//		"Snapshot=t72.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("UZ_ID_3", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{UZ_ID}?loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{UZ_ID}", 
//		"Snapshot=t73.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("UserProfile_3", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{UZ_ID}", 
//		"Snapshot=t74.inf", 
//		"Mode=HTML", 
//		LAST);
	
	return 0;
}