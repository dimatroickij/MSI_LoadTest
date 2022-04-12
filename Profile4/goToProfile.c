goToProfile()
{
	int countUZ = 0;
	int indexUZ = 0;
	// Нужно добавить новый поиск УЗ типа Внешний и внутренний пользователь
	int typeUZ = rand() % 2;
				
				switch(typeUZ){
					case 0:
						lr_save_string("COMMON", "UZ_types");
						break;
					case 1:
						lr_save_string("INTERNAL", "UZ_types");
						break;
				}
	web_reg_save_param("UZ_list2","LB=","RB=","Search=Body",LAST);
	
	web_url("users", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users?type={UZ_types}&user-account-type-status=ACTIVE&status=ACTIVE&status=BLOCKED&status=REGISTERED&status=PASSWORD_RESET_REQUIRED&offset=0&limit=10&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_eval_json("Buffer={UZ_list2}", "JsonObject=json_UZ_list2", LAST);
	
	countUZ = lr_json_get_values("JsonObject=json_UZ_list2",
                       "ValueParam=title2",
                     "QueryString=$.[*].id",
                       "SelectAll=Yes",
                       LAST);
	
	srand(time(NULL));
	indexUZ = rand() % countUZ;
	

	lr_save_int(indexUZ,"indexUZ");
	
	lr_json_get_values("JsonObject=json_UZ_list2",
                       "ValueParam=UZ_ID_2",
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
		"ParamName=UZ_AccountTypeId_2",
		"QueryString=$.accountTypeId",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);
	
	web_reg_save_param_json(
		"ParamName=UZ_UserProfileId_2",
		"QueryString=$.userProfileId",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_url("UZ_ID",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{UZ_ID_2}?loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{UZ_ID_2}",
		"Snapshot=t129.inf",
		"Mode=HTML",
		LAST);
	
	web_url("UserProfileId_2",
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{UZ_UserProfileId_2}?loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{UZ_UserProfileId_2}",
		"Snapshot=t134.inf",
		"Mode=HTML",
		LAST);

	web_url("type_properties_2",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{UZ_UserProfileId_2}",
		"Snapshot=t135.inf",
		"Mode=HTML",
		LAST);

	web_url("DisplaySnils_4",
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{UZ_UserProfileId_2}",
		"Snapshot=t136.inf",
		"Mode=HTML",
		LAST);

	web_url("UserProfile_2",
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{UZ_UserProfileId_2}",
		"Snapshot=t137.inf",
		"Mode=HTML",
		LAST);
	
	return 0;
}
