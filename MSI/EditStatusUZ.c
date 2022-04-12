EditStatusUZ()
{
	int indexAccount = 0;
	int countAccounts = 0;
	int numberStatus = 0;

	web_url("UserAccount",
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t460.inf",
		"Mode=HTML",
		LAST);

	web_url("DisplaySnils_2",
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t461.inf",
		"Mode=HTML",
		LAST);

	web_url("type_properties",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t462.inf",
		"Mode=HTML",
		LAST);

	web_url("extended",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&limit=-1&order_by=asc(name)&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t463.inf",
		"Mode=HTML",
		LAST);
	
	web_reg_save_param("accounts","LB=","RB=","Search=Body",LAST);

	web_url("users",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users?user-account-type-status=ACTIVE&status=ACTIVE&status=BLOCKED&offset=0&limit=40&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t464.inf",
		"Mode=HTML",
		LAST);
	
//	lr_eval_json("Buffer={accounts}", "JsonObject=json_accounts", LAST);
//	
//	countAccounts = lr_json_get_values("JsonObject=json_accounts",
//                    "ValueParam=countAccounts",
//                    "QueryString=$.[*].id",
//                    "SelectAll=Yes",
//                    LAST);
//	
//	srand(time(NULL));
//	indexAccount = rand() % countAccounts;
//	
//	lr_save_int(indexAccount,"indexAccount");
//	
//		lr_json_get_values("JsonObject=json_accounts",
//                       "ValueParam=ID_Account",
//                       "QueryString=$.[{indexAccount}].id",
//                       LAST);
//
//     Заглушка: статический ID УЗ
	lr_save_string("d0e7ec4b-ba4e-4316-92ab-a00c5054858c", "ID_Account");

	web_url("statuses_2",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/statuses?loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t465.inf",
		"Mode=HTML",
		LAST);

	web_url("extended_2",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&offset=0&limit40&order_by=asc(name)&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t466.inf",
		"Mode=HTML",
		LAST);
	
	// действия после нажатия на определенную запись
	web_reg_save_param("UZ_DATA","LB=","RB=","Search=Body",LAST);
	web_url("openAccount",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_Account}?loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}",
		"Snapshot=t467.inf",
		"Mode=HTML",
		LAST);

	lr_eval_json("Buffer={UZ_DATA}", "JsonObject=json_UZ_DATA", LAST);

	lr_json_get_values("JsonObject=json_UZ_DATA",
                       "ValueParam=ID_AccountTypeId",
                       "QueryString=$.accountTypeId",
                       LAST);
	
	lr_json_get_values("JsonObject=json_UZ_DATA",
                       "ValueParam=versionAccount",
                       "QueryString=$.version",
                       LAST);
	
	lr_json_get_values("JsonObject=json_UZ_DATA",
                       "ValueParam=statusAccount",
                       "QueryString=$.status",
                       LAST);


	web_url("DisplaySnils_3",
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}",
		"Snapshot=t468.inf",
		"Mode=HTML",
		LAST);

	web_url("UserAccount_2",
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}",
		"Snapshot=t469.inf",
		"Mode=HTML",
		LAST);

	web_url("openAccountTypeId",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{ID_AccountTypeId}?loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}",
		"Snapshot=t470.inf",
		"Mode=HTML",
		LAST);
	
	// Нажатие кнопки "Изменить статус"

	web_url("openAccount_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_Account}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}/change/status", 
		"Snapshot=t471.inf", 
		"Mode=HTML", 
		LAST);

	web_url("openAccount_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_Account}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}/change/status", 
		"Snapshot=t472.inf", 
		"Mode=HTML", 
		LAST);

	web_url("openAccountTypeId_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{ID_AccountTypeId}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}/change/status", 
		"Snapshot=t473.inf", 
		"Mode=HTML", 
		LAST);

	web_url("UserAccount_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}/change/status", 
		"Snapshot=t474.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DisplaySnils_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}/change/status", 
		"Snapshot=t475.inf", 
		"Mode=HTML", 
		LAST);

	web_url("openAccountTypeId_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{ID_AccountTypeId}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}/change/status", 
		"Snapshot=t476.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Origin", "http://192.168.109.240");
	
	if (strcmp(lr_eval_string("{statusAccount}"),"ACTIVE") == 0)
	{
		lr_save_string("", "email");
		srand(time(NULL));
		numberStatus = rand() % 2;
		if (numberStatus == 0)
			lr_save_string("BLOCKED", "statusAccount");
		else
			lr_save_string("DELETED", "statusAccount");
	}
	else
	{
		lr_save_string("ACTIVE", "statusAccount");
	}

	web_custom_request("changestatus", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_Account}/changestatus?loaderKey=default", 
		"Method=PATCH", 
		"Resource=0", 
		"RecContentType=application/json",
		"EncType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}/change/status", 
		"Snapshot=t477.inf", 
		"Mode=HTML", 
		"Body={\"status\":\"{statusAccount}\",\"statusChangeReason\":null,\"version\":{versionAccount}}", 
		LAST);

	web_url("openAccount_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_Account}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}", 
		"Snapshot=t478.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DisplaySnils_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}", 
		"Snapshot=t479.inf", 
		"Mode=HTML", 
		LAST);

	web_url("UserAccount_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}", 
		"Snapshot=t480.inf", 
		"Mode=HTML", 
		LAST);

	web_url("openAccountTypeId_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{ID_AccountTypeId}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}", 
		"Snapshot=t481.inf", 
		"Mode=HTML", 
		LAST);
	
	return 0;
}