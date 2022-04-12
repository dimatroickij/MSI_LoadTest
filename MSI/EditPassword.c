EditPassword()
{
	int typeUZ = 0;
	int indexUZ = 0;
	int countUZ = 0;

	web_url("UserAccount",
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t500.inf",
		"Mode=HTML",
		LAST);

	web_url("DisplaySnils_2",
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t501.inf",
		"Mode=HTML",
		LAST);

	web_url("type_properties",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t502.inf",
		"Mode=HTML",
		LAST);

	srand(time(NULL));
	typeUZ = rand() % 3;
	switch(typeUZ)
	{
		case 0:
			lr_save_string("AGENT", "typeUZ");
			break;
		case 1:
			lr_save_string("INTERNAL", "typeUZ");
			break;
		case 2:
			lr_save_string("SYSTEM", "typeUZ");
			break;
	}
	
//	web_reg_save_param("UZ","LB=","RB=","Search=Body",LAST);
	
	web_url("users",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users?type={typeUZ}&user-account-type-status=ACTIVE&offset=0&limit=40&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t503.inf",
		"Mode=HTML",
		LAST);
	
//	lr_eval_json("Buffer={UZ}", "JsonObject=json_UZ", LAST);
//	
//	countUZ = lr_json_get_values("JsonObject=json_UZ",
//                    "ValueParam=countUZ",
//                    "QueryString=$.[*].id",
//                    "SelectAll=Yes",
//                    LAST);
//	
//	srand(time(NULL));
//	indexUZ = rand() % countUZ;
//	
//	lr_save_int(indexUZ,"indexUZ");
//	
//	lr_json_get_values("JsonObject=json_UZ",
//                       "ValueParam=ID_UZ",
//                       "QueryString=$.[{indexUZ}].id",
//                       LAST);
//	
//	lr_json_get_values("JsonObject=json_UZ",
//                       "ValueParam=ID_UZTypeId",
//                       "QueryString=$.[{indexUZ}].accountTypeId",
//                       LAST);
//
//     Заглушка: статический ID УЗ
	lr_save_string("d0e7ec4b-ba4e-4316-92ab-a00c5054858c", "ID_UZ");
	
	// Нажатие на конкретную запись в списке
	web_reg_save_param("UZ_EditPasswordDATA","LB=","RB=","Search=Body",LAST);
	web_url("openAccount",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ}?loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}",
		"Snapshot=t504.inf",
		"Mode=HTML",
		LAST);

	lr_eval_json("Buffer={UZ_EditPasswordDATA}", "JsonObject=json_UZ_EditPasswordDATA", LAST);

	lr_json_get_values("JsonObject=json_UZ_EditPasswordDATA",
                       "ValueParam=ID_UZTypeId",
                       "QueryString=$.accountTypeId",
                       LAST);

	web_url("DisplaySnils_3",
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}",
		"Snapshot=t505.inf",
		"Mode=HTML",
		LAST);

	web_url("UserAccount_2",
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}",
		"Snapshot=t506.inf",
		"Mode=HTML",
		LAST);

	web_url("openAccountTypeId",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{ID_UZTypeId}?loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}",
		"Snapshot=t507.inf",
		"Mode=HTML",
		LAST);
	
	web_url("type_properties_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}/change/password", 
		"Snapshot=t482.inf", 
		"Mode=HTML", 
		LAST);

	web_url("openUZ", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}/change/password", 
		"Snapshot=t483.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DisplaySnils_6", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}/change/password", 
		"Snapshot=t484.inf", 
		"Mode=HTML", 
		LAST);

	web_url("UserAccount_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}/change/password", 
		"Snapshot=t485.inf", 
		"Mode=HTML", 
		LAST);

	web_url("openUZ_1", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}/change/password", 
		"Snapshot=t486.inf", 
		"Mode=HTML", 
		LAST);

	web_url("openUZAccountTypeId", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{ID_UZTypeId}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}/change/password", 
		"Snapshot=t487.inf", 
		"Mode=HTML", 
		LAST);

	web_url("openUZAccountTypeId_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{ID_UZTypeId}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}/change/password", 
		"Snapshot=t488.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/internal/platform-admin-ui/themes/default/fonts/ptsans/ptsansitalic.woff2", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/themes/default/fonts/ptsans.css", ENDITEM,
		LAST);

//		// нажатие на кнопку "Сгенерировать пароль"
//	web_reg_save_param("UZpassword","LB=","RB=","Search=Body",LAST);
//	
//	web_url("openUZAccountTypeId_3", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/users/password/generate/{ID_UZTypeId}?loaderKey=none", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}/change/password", 
//		"Snapshot=t489.inf", 
//		"Mode=HTML", 
//		LAST);
//	
//	lr_eval_json("Buffer={UZpassword}", "JsonObject=json_UZpassword", LAST);
//	
//	lr_json_get_values("JsonObject=json_UZpassword",
//                       "ValueParam=UZ_password",
//                       "QueryString=$.password",
//                       LAST);


	web_add_header("Origin", "http://192.168.109.240");

	generatePassword();
	
	// нажатие на кнопку "Сохранить пароль"
	web_custom_request("password", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ}/password?loaderKey=default", 
		"Method=PATCH", 
		"Resource=0", 
		"EncType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}/change/password", 
		"Snapshot=t490.inf", 
		"Mode=HTML", 
		"BodyBinary={\"password\":\"{newPassword}\"}", 
		LAST);

	web_url("openUZ_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}", 
		"Snapshot=t491.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DisplaySnils_7", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}", 
		"Snapshot=t492.inf", 
		"Mode=HTML", 
		LAST);

	web_url("UserAccount_6", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}", 
		"Snapshot=t493.inf", 
		"Mode=HTML", 
		LAST);

	web_url("openUZAccountTypeId_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{ID_UZTypeId}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}", 
		"Snapshot=t494.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}

void generatePassword()
{
    int length = 8 + rand() % 8;
    int i = 0;
    char password[25] = {0};
    srand(time(NULL));
	
    for(i = 0; i < length; i ++){
        password[i] = 'a' + rand() % 25;
    }

    lr_save_string(password, "newPassword");
}