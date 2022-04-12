ChangeOGRN()
{
	int ogrn;

	web_url("userprofiles", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles?status=ACTIVE&offset=0&limit=10&order_by=asc(snils)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t595.inf", 
		"Mode=HTML", 
		LAST);

	web_url("UserAccount", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t596.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DisplaySnils_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t597.inf", 
		"Mode=HTML", 
		LAST);

	web_url("type_properties", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t598.inf", 
		"Mode=HTML", 
		LAST);

	web_url("extended", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&limit=-1&order_by=asc(name)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t599.inf", 
		"Mode=HTML", 
		LAST);

	web_url("users", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users?type=COMMON&user-account-type-status=ACTIVE&status=ACTIVE&status=BLOCKED&status=REGISTERED&status=PASSWORD_RESET_REQUIRED&offset=0&limit=10&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t604.inf", 
		"Mode=HTML", 
		LAST);

	web_url("extended_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&offset=0&limit=10&order_by=asc(name)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t601.inf", 
		"Mode=HTML", 
		LAST);

	web_url("statuses_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/statuses?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t602.inf", 
		"Mode=HTML", 
		LAST);
	
	// Заглушка на выбор УЗ
	lr_save_string("f88f3bcd-6134-4432-8fae-0dba254b0ada", "ID_UZ_ChangeOGRN");
	
	web_reg_save_param("UZChangeOGRN","LB=","RB=","Search=Body",LAST);

	web_url("ChangeOGRN", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ_ChangeOGRN}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t605.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_eval_json("Buffer={UZChangeOGRN}", "JsonObject=json_UZChangeOGRN", LAST);
	
	lr_json_get_values("JsonObject=json_UZChangeOGRN",
                       "ValueParam=UZAccountTypeId_ChangeOGRN",
                       "QueryString=$.accountTypeId",
                       LAST);
	
	lr_json_get_values("JsonObject=json_UZChangeOGRN",
                       "ValueParam=UZuserProfileId",
                       "QueryString=$.userProfileId",
                       LAST);
	
	lr_json_get_values("JsonObject=json_UZChangeOGRN",
                       "ValueParam=UZChangeOGRNversion",
                       "QueryString=$.version",
                       LAST);

	web_url("UZuserProfileId", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{UZuserProfileId}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t606.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DisplaySnils_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t607.inf", 
		"Mode=HTML", 
		LAST);

	web_url("UserAccount_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t608.inf", 
		"Mode=HTML", 
		LAST);

	web_url("accountTypeId_ChangeOGRN", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{UZAccountTypeId_ChangeOGRN}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t609.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ChangeOGRN_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ_ChangeOGRN}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}/edit-attributes", 
		"Snapshot=t610.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ChangeOGRN_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ_ChangeOGRN}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}/edit-attributes", 
		"Snapshot=t611.inf", 
		"Mode=HTML", 
		LAST);

	web_url("UZuserProfileId_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{UZuserProfileId}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}/edit-attributes", 
		"Snapshot=t612.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DisplaySnils_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}/edit-attributes", 
		"Snapshot=t613.inf", 
		"Mode=HTML", 
		LAST);

	web_url("UserAccount_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}/edit-attributes", 
		"Snapshot=t614.inf", 
		"Mode=HTML", 
		LAST);

	web_url("accountTypeId_ChangeOGRN_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{UZAccountTypeId_ChangeOGRN}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}/edit-attributes", 
		"Snapshot=t615.inf", 
		"Mode=HTML", 
		LAST);
	
	srand(time(NULL));
	
	ogrn = rand() % 100000000;
	
	lr_save_int(ogrn, "OGRN");

	web_add_header("Origin", "http://192.168.109.240");

	web_custom_request("ChangeOGRN_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ_ChangeOGRN}?loaderKey=default", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"EncType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}/edit-attributes", 
		"Snapshot=t616.inf", 
		"Mode=HTML", 
		"Body={\"version\":{UZChangeOGRNversion},\"userAccountAttributes\":[{\"name\":\"OGRN\",\"key\":\"OGRN\",\"value\":\"{OGRN}\"}]}", 
		LAST);

	web_url("ChangeOGRN_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ_ChangeOGRN}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t617.inf", 
		"Mode=HTML", 
		LAST);

	web_url("UZuserProfileId_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{UZuserProfileId}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t618.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DisplaySnils_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t619.inf", 
		"Mode=HTML", 
		LAST);

	web_url("UserAccount_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t620.inf", 
		"Mode=HTML", 
		LAST);

	web_url("accountTypeId_ChangeOGRN_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{UZAccountTypeId_ChangeOGRN}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t621.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}