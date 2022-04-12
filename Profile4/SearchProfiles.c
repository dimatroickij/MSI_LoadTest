SearchProfiles()
{
	int type = 0;
	
	web_url("statuses", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/statuses?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("UserProfile", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DisplaySnils", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/internal/platform-admin-ui/themes/default/images/default-logo.svg", "Referer=http://192.168.109.240/internal/platform-admin-ui/styles.934e1211369de65239dc.css", ENDITEM, 
		LAST);

	web_url("extended-profile_2", 
		"URL=http://192.168.109.240/internal/api/current-user-manager/api/current/extended-profile?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("userprofiles", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles?status=ACTIVE&offset=0&limit=10&order_by=asc(snils)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("userprofiles_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles?status=ACTIVE&offset=0&limit=10&order_by=asc(snils)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);
	
	srand(time(NULL));
	type = rand() % 3;
	
	switch(type){
		case 0:
			// Поиск по СНИЛС
			lr_save_int(rand() % 10, "ProfileSnils");
			web_url("userprofiles_3",
				"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles?snils={ProfileSnils}&status=ACTIVE&offset=0&limit=10&order_by=asc(snils)&loaderKey=default", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
				"Snapshot=t18.inf", 
				"Mode=HTML", 
				LAST);
			break;
		case 1:
			// Поиск по Email
			createText(1, 0);
			web_url("userprofiles_9", 
				"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles?email={ProfileEmail}&status=ACTIVE&offset=0&limit=10&order_by=asc(email)&loaderKey=default", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
				"Snapshot=t24.inf", 
				"Mode=HTML", 
		LAST);
			break;
		case 2:
			// Поиск по Фамилия + Имя
			createText(1, 1);
			createText(1, 2);
			web_url("userprofiles_17", 
				"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles?namelast={ProfileNamelast}&namefirst={ProfileNamefirst}&status=ACTIVE&offset=0&limit=10&order_by=asc(nameFirst)&loaderKey=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
				"Snapshot=t32.inf", 
				"Mode=HTML", 
				LAST);
			break;
	}
	
	return 0;
}