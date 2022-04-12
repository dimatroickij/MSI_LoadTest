EditMainAttr()
{
	int indexProfile = 0;
	int countProfiles = 0;
	int numberAttributes = 0;

	web_add_header("Upgrade-Insecure-Requests", "1");

	web_url("platform-admin-ui", 
		"URL=http://192.168.109.240/internal/platform-admin-ui", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.240/", 
		"Snapshot=t168.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=platform-admin-ui/runtime.b9759be94b30ae2a33e0.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/vendor.6597440179a1a361a262.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/main.a113815411d365738099.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/polyfills.cfc88ca87321ca8e8ec7.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/styles.934e1211369de65239dc.css", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/themes/default/theme.css", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/common.f69f8709d30822f7fa9b.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/11.c02acfdbffc46255fbeb.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/25.d6516b342757454e33d9.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/3.c4a949ba0a212384bfec.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/4.842d7f0dccf6876ffcfc.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/2.1891a41e4a0f084937e0.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/themes/default/images/default-spinner.svg", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/12.416582247b9526f72da2.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		LAST);

	web_url("configuration.json_3", 
		"URL=http://192.168.109.240/internal/platform-admin-ui//configurations/configuration.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/internal/platform-admin-ui/themes/default/fonts/ptsans.css", "Referer=http://192.168.109.240/internal/platform-admin-ui/themes/default/theme.css", ENDITEM, 
		"Url=/internal/platform-admin-ui/themes/default/fonts/ptsans/ptsansbold.woff2", "Referer=http://192.168.109.240/internal/platform-admin-ui/themes/default/fonts/ptsans.css", ENDITEM, 
		"Url=/internal/platform-admin-ui/themes/default/fonts/ptsans/ptsans.woff2", "Referer=http://192.168.109.240/internal/platform-admin-ui/themes/default/fonts/ptsans.css", ENDITEM, 
		LAST);

	web_url("__check_session", 
		"URL=http://192.168.109.240/internal/api/__check_session", 
		"Resource=0", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/", 
		"Snapshot=t170.inf", 
		"Mode=HTML", 
		LAST);

	web_url("statuses", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/statuses?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DisplaySnils", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		LAST);

	web_url("UserProfile", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/internal/platform-admin-ui/themes/default/images/default-logo.svg", "Referer=http://192.168.109.240/internal/platform-admin-ui/styles.934e1211369de65239dc.css", ENDITEM, 
		LAST);

	web_url("extended-profile_3", 
		"URL=http://192.168.109.240/internal/api/current-user-manager/api/current/extended-profile?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param("userProfiles","LB=","RB=","Search=Body",LAST);

	web_url("userprofiles", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles?status=ACTIVE&offset=0&limit=10&order_by=asc(snils)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		LAST);
//	
//	lr_eval_json("Buffer={userProfiles}", "JsonObject=json_userProfiles", LAST);
//	
//	countProfiles = lr_json_get_values("JsonObject=json_userProfiles",
//                       "ValueParam=title",
//                     "QueryString=$.[*].id",
//                       "SelectAll=Yes",
//                       LAST);
//	
//	srand(time(NULL));
//	indexProfile = rand() % countProfiles;
//	
//
//	lr_save_int(indexProfile,"indexProfile");
//	
//	lr_json_get_values("JsonObject=json_userProfiles",
//                       "ValueParam=ID_Profile",
//                       "QueryString=$.[{indexProfile}].id",
//                       LAST);
//
//     Заглушка: статический ID профиля
	lr_save_string("ccc471d0-a762-4e94-b1f6-75bc04279043", "ID_Profile");

	web_url("openProfile",
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{ID_Profile}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		LAST);

	web_url("type_properties", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DisplaySnils_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		LAST);

	web_url("UserProfile_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}", 
		"Snapshot=t179.inf", 
		"Mode=HTML", 
		LAST);

	web_url("extended", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&limit=-1&order_by=asc(name)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}", 
		"Snapshot=t180.inf", 
		"Mode=HTML", 
		LAST);

	web_url("openProfile_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{ID_Profile}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}/edit", 
		"Snapshot=t181.inf", 
		"Mode=HTML", 
		LAST);

	web_url("type_properties_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}/edit", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DisplaySnils_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}/edit", 
		"Snapshot=t183.inf", 
		"Mode=HTML", 
		LAST);

	web_url("UserProfile_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}/edit", 
		"Snapshot=t184.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param("editUserProfile","LB=","RB=","Search=Body",LAST);

	web_url("openProfile_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{ID_Profile}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}/edit", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_eval_json("Buffer={editUserProfile}", "JsonObject=json_editUserProfile", LAST);
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=version",
                       "QueryString=$.version",
                       LAST);
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=snils",
                       "QueryString=$.snils",
                       LAST);
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=nameFirst",
                       "QueryString=$.nameFirst",
                       LAST);
	
	if (strcmp(lr_eval_string("{nameFirst}"),"null") == 0)
		lr_save_string("", "nameFirst");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=nameLast",
                       "QueryString=$.nameLast",
                       LAST);
	
	if (strcmp(lr_eval_string("{nameLast}"),"null") == 0)
		lr_save_string("", "nameLast");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=nameMiddle",
                       "QueryString=$.nameMiddle",
                       LAST);
	
	if (strcmp(lr_eval_string("{nameMiddle}"),"null") == 0)
		lr_save_string("", "nameMiddle");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=inn",
                       "QueryString=$.inn",
                       LAST);
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=docSer",
                       "QueryString=$.docSer",
                       LAST);
	
	if (strcmp(lr_eval_string("{docSer}"),"null") == 0)
		lr_save_string("", "docSer");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=docNum",
                       "QueryString=$.docNum",
                       LAST);
	
	if (strcmp(lr_eval_string("{docNum}"),"null") == 0)
		lr_save_string("", "docNum");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=docIssueDate",
                       "QueryString=$.docIssueDate",
                       LAST);
	
	if (strcmp(lr_eval_string("{docIssueDate}"),"null") == 0)
		lr_save_string("", "docIssueDate");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=docIssuePlace",
                       "QueryString=$.docIssuePlace",
                       LAST);
	
	if (strcmp(lr_eval_string("{docIssuePlace}"),"null") == 0)
		lr_save_string("", "docIssuePlace");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=gender",
                       "QueryString=$.gender",
                       LAST);
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=birthDate",
                       "QueryString=$.birthDate",
                       LAST);
	
	if (strcmp(lr_eval_string("{birthDate}"),"null") == 0)
		lr_save_string("", "birthDate");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=birthPlace",
                       "QueryString=$.birthPlace",
                       LAST);
	
	if (strcmp(lr_eval_string("{birthPlace}"),"null") == 0)
		lr_save_string("", "birthPlace");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=citizenship",
                       "QueryString=$.citizenship",
                       LAST);
	
	if (strcmp(lr_eval_string("{citizenship}"),"null") == 0)
		lr_save_string("", "citizenship");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=email",
                       "QueryString=$.email",
                       LAST);
	
	if (strcmp(lr_eval_string("{email}"),"null") == 0)
		lr_save_string("", "email");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=phoneNumber",
                       "QueryString=$.phoneNumber",
                       LAST);
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=userProfileAttributes",
                       "QueryString=$.userProfileAttributes",
                       LAST);
	
	web_url("DisplaySnils_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}/edit", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		LAST);

	web_url("UserProfile_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}/edit", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		LAST);

	srand(time(NULL));
	numberAttributes = rand() % 4;
	
	switch(numberAttributes)
	{
		case 0:
			// генерация снилс
			generateSNILS();
			break;
		case 1:
			// генерация nameLast
			generateText(1);
			break;
		case 2:
			// генерация nameFirst
			generateText(2);
			break;
		case 3:
			// генерация электронной почты
			generateText(3);
			break;
	}
	
	web_add_header("Origin", "http://192.168.109.240");
	
	web_custom_request("editProfile", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{ID_Profile}?loaderKey=default", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"EncType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}/edit", 
		"Snapshot=t188.inf", 
		"Mode=HTML", 
		"Body={\"version\":{version},\"snils\":\"{snils}\",\"nameFirst\":\"{nameFirst}\",\"nameLast\":\"{nameLast}\",\"nameMiddle\":\"{nameMiddle}\",\"inn\":{inn},\"docSer\":\"{docSer}\",\"docNum\":\"{docNum}\",\"docIssueDate\":\"{docIssueDate}\",\"docIssuePlace\":\"{docIssuePlace}\",\"gender\":\"{gender}\",\"birthDate\":\"{birthDate}\",\"birthPlace\":\"{birthPlace}\",\"citizenship\":\"{citizenship}\",\"email\":\""
		"{email}\",\"phoneNumber\":{phoneNumber},\"userProfileAttributes\":{userProfileAttributes}}", 
		LAST);

	web_url("type_properties_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}", 
		"Snapshot=t189.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DisplaySnils_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}", 
		"Snapshot=t190.inf", 
		"Mode=HTML", 
		LAST);

	web_url("openProfile_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{ID_Profile}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		LAST);

	web_url("UserProfile_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}", 
		"Snapshot=t192.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}

void generateSNILS()
{
	int snils[11];
	int summa = 0;
	int i = 0;
	char szBuf[12];
	char snilsText[14];
	
	for(i = 0; i < 10; i++){
		snils[i] = rand() % 10;
		summa += snils[i] * (9 - i);
	}
	
	if (summa < 100)
	{
		snils[9] = summa / 10;
		snils[10] = summa % 10;
	}
	else if (summa == 100 || summa == 101)
	{
		snils[9] = 0;
		snils[10] = 0;
	}
	else
	{
		int o = summa % 101;
		if (o < 10)
		{
			snils[9] = 0;
			snils[10] = o;
		}
		else
		{
			snils[9] = o / 10;
			snils[10] = o % 10;
		}
	}
	
	for(i = 0; i < 14; i++){		
		if ((i % 4) == 3)
			snilsText[i] = '-';
		else
		{
			int c = i / 4;
			itoa(snils[i - c], szBuf, 10);
			snilsText[i] = szBuf[0];
		}
	}
	snilsText[11] = ' ';
	snilsText[14] = '\0';
		
	lr_save_string(snilsText, "snils");
}

void generateText(int type)
{
	int length = 2 + rand() % 16;
    int i = 0;
    char text[25] = {0};
    srand(time(NULL));
	
    for(i = 0; i < length; i ++){
        text[i] = 'a' + rand() % 25;
    }
    
    if (type == 1)
    	lr_save_string(text, "nameLast");
    else if (type == 2)
    	lr_save_string(text, "nameFirst");
    else
    {
    	char email[30];
    	sprintf(email, "%s%s", text, "@test.ru");
    	lr_save_string(email, "email");
    }
}
