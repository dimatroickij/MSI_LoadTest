ReadUZ()
{
	int countUZ = 0;
	int indexUZ = 0;
	
	web_url("UserAccount", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		LAST);

	web_url("extended", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&limit=-1&order_by=asc(name)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DisplaySnils_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		LAST);

	web_url("type_properties", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_save_param("UZ_list","LB=","RB=","Search=Body",LAST);
	
	web_url("users", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users?user-account-type-status=ACTIVE&status=ACTIVE&status=BLOCKED&status=REGISTERED&status=PASSWORD_RESET_REQUIRED&offset=0&limit=10&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_eval_json("Buffer={UZ_list}", "JsonObject=json_UZ_list", LAST);
	
	countUZ = lr_json_get_values("JsonObject=json_UZ_list",
                       "ValueParam=title",
                     "QueryString=$.[*].id",
                       "SelectAll=Yes",
                       LAST);
	
	srand(time(NULL));
	indexUZ = rand() % countUZ;
	

	lr_save_int(indexUZ,"indexUZ");
	
	lr_json_get_values("JsonObject=json_UZ_list",
                       "ValueParam=UZ_ID",
                       "QueryString=$.[{indexUZ}].id",
                       LAST);

	web_url("statuses_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/statuses?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		LAST);

	web_url("extended_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&offset=0&limit=10&order_by=asc(name)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		LAST);
	
	//lr_save_string("033a57bc-8ce1-46af-a667-7aef7223dac7", "UZ_ID");
	
	web_reg_save_param_json(
		"ParamName=UZ_AccountTypeId",
		"QueryString=$.accountTypeId",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);
	
	web_reg_save_param_json(
		"ParamName=UZ_UserProfileId",
		"QueryString=$.userProfileId",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_url("UZ_ID",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{UZ_ID}?loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{UZ_ID}",
		"Snapshot=t129.inf",
		"Mode=HTML",
		LAST);
	
	if (strcmp(lr_eval_string("{UZ_UserProfileId}"),"null") != 0)
	{

	web_url("UserProfileId",
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{UZ_UserProfileId}?loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{UZ_ID}",
		"Snapshot=t130.inf",
		"Mode=HTML",
		LAST);
	}

	web_url("DisplaySnils_3",
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{UZ_ID}",
		"Snapshot=t131.inf",
		"Mode=HTML",
		LAST);

	web_url("UserAccount_2",
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{UZ_ID}",
		"Snapshot=t132.inf",
		"Mode=HTML",
		LAST);

	web_url("AccountTypeId",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{UZ_AccountTypeId}?loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{UZ_ID}",
		"Snapshot=t133.inf",
		"Mode=HTML",
		LAST);

	return 0;
}