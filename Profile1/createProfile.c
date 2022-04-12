createProfile()
{
//	char gender = 'M';
//	web_url("userprofiles", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles?status=ACTIVE&offset=0&limit=10&order_by=asc(snils)&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
//		"Snapshot=t22.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("DisplaySnils_2", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/create", 
//		"Snapshot=t23.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("UserProfile_2", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?show_in_card=true&limit=-1&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/create", 
//		"Snapshot=t24.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("UserProfile_3", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/create", 
//		"Snapshot=t25.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("DisplaySnils_3", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/create", 
//		"Snapshot=t26.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("userprofiles_2", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles?status=ACTIVE&offset=0&limit=10&order_by=asc(snils)&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/create", 
//		"Snapshot=t27.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_add_header("Origin", "http://192.168.109.240");
//	
//	generateSNILS();
//	generateText(1);
//	generateINN();
//	generateDocSer();
//	generateDocNum();
//	generateTel();
//	
//	if (rand() % 2 == 0)
//		lr_save_string("F", "gender");
//	else
//		lr_save_string("M", "gender");
//	
//	web_reg_save_param_json(
//		"ParamName=UZ_ID",
//		"QueryString=$.id",
//		SEARCH_FILTERS,
//		"Scope=Body",
//		LAST);
//	
//	web_custom_request("userprofiles_3", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles?loaderKey=default", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/create", 
//		"Snapshot=t28.inf", 
//		"Mode=HTML", 
//		"EncType=application/json", 
//		"BodyBinary={\"snils\":\"{snils}\",\"nameFirst\":\"\\xD1\\x82\\xD0\\xB5\\xD1\\x81\\xD1\\x82\",\"nameLast\":\"\\xD1\\x82\\xD0\\xB5\\xD1\\x81\\xD1\\x82\\xD0\\xBE\\xD0\\xB2\\xD1\\x8B\\xD0\\xB9\",\"nameMiddle\":\"\\xD1\\x82\\xD0\\xB5\\xD1\\x81\\xD1\\x82\\xD0\\xBE\\xD0\\xB2\\xD0\\xB8\\xD1\\x87\",\"inn\":\"{inn}\",\"docSer\":\"{docSer}\",\"docNum\":\"{docNum}\",\"docIssueDate\":\"2018-01-21T09:00:00.000Z\",\"docIssuePlace\":\"\\xD0\\xBE\\xD1\\x82\\xD0\\xB4\\xD0\\xB5\\xD0\\xBB\\xD0\\xBE\\xD0\\xBC "
//		"\\xD0\\x9E\\xD0\\x9C\\xD0\\x92\\xD0\\x94 \\xD0\\xBF\\xD0\\xBE \\xD0\\xB2\\xD0\\xBE\\xD0\\xBF\\xD1\\x80\\xD0\\xBE\\xD1\\x81\\xD0\\xB0\\xD0\\xBC \\xD0\\xBC\\xD0\\xB8\\xD0\\xB3\\xD1\\x80\\xD0\\xB0\\xD1\\x86\\xD0\\xB8\\xD0\\xB8\",\"gender\":\"{gender}\",\"birthDate\":\"1980-01-01T09:00:00.000Z\",\"birthPlace\":\"\\xD0\\x9C\\xD0\\xBE\\xD1\\x81\\xD0\\xBA\\xD0\\xB2\\xD0\\xB0\",\"citizenship\":\"RUS\",\"email\":\"{email}\",\"phoneNumber\":\"{tel}\",\"userProfileAttributes\":[]}", 
//		LAST);
//
//	web_url("userprofiles_4", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles?status=ACTIVE&offset=0&limit=10&order_by=asc(snils)&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/create", 
//		"Snapshot=t29.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("UserProfile_4", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
//		"Snapshot=t30.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("DisplaySnils_4", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
//		"Snapshot=t31.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("userprofiles_5", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles?status=ACTIVE&offset=0&limit=10&order_by=asc(snils)&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
//		"Snapshot=t32.inf", 
//		"Mode=HTML", 
//		LAST);
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

void generateINN()
{
	int inn[12];
	int i = 0;
	char szBuf[12];
	char innText[12];
	
	for(i = 0; i < 12; i++){
		itoa(rand() % 10, szBuf, 10);
		innText[i] = szBuf[0];
	}
	innText[12] = '\0';
		
	lr_save_string(innText, "inn");
}

void generateDocSer()
{
	int docSer[4];
	int i = 0;
	char szBuf[12];
	char docSerText[4];
	
	for(i = 0; i < 4; i++){
		itoa(rand() % 10, szBuf, 10);
		docSerText[i] = szBuf[0];
	}
	
	docSerText[4] = '\0';
	lr_save_string(docSerText, "docSer");
}

void generateDocNum()
{
	int docNum[6];
	int i = 0;
	char szBuf[12];
	char docNumText[6];
	
	for(i = 0; i < 6; i++){
		itoa(rand() % 10, szBuf, 10);
		docNumText[i] = szBuf[0];
	}
	
	docNumText[6] = '\0';
	lr_save_string(docNumText, "docNum");
}

void generateTel()
{
	int tel[10];
	int i = 0;
	char szBuf[12];
	char telText[10];
	
	itoa(9, szBuf, 10);
	telText[0] = szBuf[0];
	
	for(i = 1; i < 10; i++){
		itoa(rand() % 10, szBuf, 10);
		telText[i] = szBuf[0];
	}
	
	telText[10] = '\0';
	
	lr_save_string(telText, "tel");
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
    {
    	char email[30];
    	sprintf(email, "%s%s", text, "@test.ru");
    	lr_save_string(email, "email");
    }
    else if (type == 2)
    	lr_save_string(text, "nameFirst");
    else
    {
    	lr_save_string(text, "nameLast");
    }
}