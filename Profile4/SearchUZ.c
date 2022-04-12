SearchUZ()
{
	int typeUZ = 0;
	int types = 0;
	
	web_url("DisplaySnils_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

	web_url("UserAccount", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_url("type_properties", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_url("extended", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&limit=-1&order_by=asc(name)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	web_url("users", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users?user-account-type-status=ACTIVE&status=ACTIVE&status=BLOCKED&status=REGISTERED&status=PASSWORD_RESET_REQUIRED&offset=0&limit=10&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_url("statuses_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/statuses?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_url("extended_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&offset=0&limit=10&order_by=asc(name)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	web_url("users_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users?user-account-type-status=ACTIVE&status=ACTIVE&status=BLOCKED&status=REGISTERED&status=PASSWORD_RESET_REQUIRED&offset=0&limit=10&order_by=asc(snils)&loaderKey=8430ff06-514f-4139-9a71-4a3f877a817f", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);
	
	srand(time(NULL));
	types = rand() % 5;
	
	switch(types){
		case 0:
			// Поиск по СНИЛС
			lr_save_int(rand() % 10, "UZ_Snils");
			web_url("users_5", 
				"URL=http://192.168.109.240/internal/api/access-manager/api/users?snils={UZ_Snils}&user-account-type-status=ACTIVE&status=ACTIVE&status=BLOCKED&status=REGISTERED&status=PASSWORD_RESET_REQUIRED&offset=0&limit=10&order_by=asc(snils)&loaderKey=default", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
				"Snapshot=t60.inf", 
				"Mode=HTML", 
				LAST);
			
			web_url("users_6", 
				"URL=http://192.168.109.240/internal/api/access-manager/api/users?snils={UZ_Snils}&user-account-type-status=ACTIVE&status=ACTIVE&status=BLOCKED&status=REGISTERED&status=PASSWORD_RESET_REQUIRED&offset=0&limit=10&loaderKey=default", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
				"Snapshot=t61.inf", 
				"Mode=HTML", 
				LAST);
			break;
		case 1:
			// Поиск по Email
			createText(1, 3);
			web_url("users_12", 
				"URL=http://192.168.109.240/internal/api/access-manager/api/users?email={UZ_Email}&user-account-type-status=ACTIVE&status=ACTIVE&status=BLOCKED&status=REGISTERED&status=PASSWORD_RESET_REQUIRED&offset=0&limit=10&order_by=asc(email)&loaderKey=default", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
				"Snapshot=t67.inf", 
				"Mode=HTML", 
				LAST);
		
			web_url("users_13", 
				"URL=http://192.168.109.240/internal/api/access-manager/api/users?email={UZ_Email}&user-account-type-status=ACTIVE&status=ACTIVE&status=BLOCKED&status=REGISTERED&status=PASSWORD_RESET_REQUIRED&offset=0&limit=10&loaderKey=default", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
				"Snapshot=t68.inf", 
				"Mode=HTML", 
				LAST);
			break;
		case 2:
			// поиск по ФИО
			createText(1, 4);
			web_url("users_17", 
				"URL=http://192.168.109.240/internal/api/access-manager/api/users?fio={UZ_FIO}&user-account-type-status=ACTIVE&status=ACTIVE&status=BLOCKED&status=REGISTERED&status=PASSWORD_RESET_REQUIRED&offset=0&limit=10&order_by=asc(fio)&loaderKey=default", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
				"Snapshot=t72.inf", 
				"Mode=HTML", 
				LAST);
		
			web_url("users_18", 
				"URL=http://192.168.109.240/internal/api/access-manager/api/users?fio={UZ_FIO}&user-account-type-status=ACTIVE&status=ACTIVE&status=BLOCKED&status=REGISTERED&status=PASSWORD_RESET_REQUIRED&offset=0&limit=10&loaderKey=default", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
				"Snapshot=t73.inf", 
				"Mode=HTML", 
				LAST);
			break;
		case 3:
			// поиск по логину
			createText(1, 5);
			web_url("users_25", 
				"URL=http://192.168.109.240/internal/api/access-manager/api/users?login={UZ_login}&user-account-type-status=ACTIVE&status=ACTIVE&status=BLOCKED&status=REGISTERED&status=PASSWORD_RESET_REQUIRED&offset=0&limit=10&order_by=asc(login)&loaderKey=default", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
				"Snapshot=t80.inf", 
				"Mode=HTML", 
				LAST);
		
			web_url("users_26", 
				"URL=http://192.168.109.240/internal/api/access-manager/api/users?login={UZ_login}&user-account-type-status=ACTIVE&status=ACTIVE&status=BLOCKED&status=REGISTERED&status=PASSWORD_RESET_REQUIRED&offset=0&limit=10&loaderKey=default", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
				"Snapshot=t81.inf", 
				"Mode=HTML", 
				LAST);
			break;
		case 4:
			// Поиск по типу УЗ
				typeUZ = rand() % 5;
				
				switch(typeUZ){
					case 0:
						lr_save_string("AGENT", "UZ_type");
						break;
					case 1:
						lr_save_string("COMMON", "UZ_type");
						break;
					case 2:
						lr_save_string("EXT_SYSTEM", "UZ_type");
						break;
					case 3:
						lr_save_string("INTERNAL", "UZ_type");
						break;
					case 4:
						lr_save_string("SYSTEM", "UZ_type");
						break;
				}
				
				web_url("extended_3", 
					"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&offset=0&limit=10&order_by=asc(name)&loaderKey=default", 
					"Resource=0", 
					"RecContentType=application/json", 
					"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
					"Snapshot=t83.inf", 
					"Mode=HTML", 
					LAST);
			
				web_url("users_28", 
					"URL=http://192.168.109.240/internal/api/access-manager/api/users?type={UZ_type}&user-account-type-status=ACTIVE&status=ACTIVE&status=BLOCKED&status=REGISTERED&status=PASSWORD_RESET_REQUIRED&offset=0&limit=10&loaderKey=default", 
					"Resource=0", 
					"RecContentType=application/json", 
					"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
					"Snapshot=t84.inf", 
					"Mode=HTML", 
					LAST);			
			break;
	}

	return 0;
}