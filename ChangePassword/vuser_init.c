#include "base64.h"

vuser_init()
{
	char base64[200];
	int statusCode;
		
	web_add_auto_header("DNT", "1");

	web_add_header("Upgrade-Insecure-Requests", "1");

	web_url("192.168.109.240", 
		"URL=http://192.168.109.240/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/fonts/roboto/roboto.css", ENDITEM, 
		"Url=/styles.206c321067b55e6a4b75.css", ENDITEM, 
		"Url=/assets/fonts/fontawesome/css/all.css", ENDITEM, 
		"Url=/runtime.acf0dec4155e77772545.js", ENDITEM, 
		"Url=/polyfills.9cfb3f513e777138fb2c.js", ENDITEM, 
		"Url=/main.f260e358d880bc7956b9.js", ENDITEM, 
		"Url=/assets/images/logo.svg", ENDITEM, 
		LAST);

	web_url("configuration.json", 
		"URL=http://192.168.109.240//configurations/configuration.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("default.css", 
		"URL=http://192.168.109.240/themes/default.css", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.240/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../assets/fonts/roboto/roboto-v20-latin_cyrillic-regular.woff2", "Referer=http://192.168.109.240/assets/fonts/roboto/roboto.css", ENDITEM, 
		"Url=../assets/fonts/roboto/roboto-v20-latin_cyrillic-700.woff2", "Referer=http://192.168.109.240/assets/fonts/roboto/roboto.css", ENDITEM, 
		"Url=../assets/fonts/fontawesome/webfonts/fa-light-300.woff2", "Referer=http://192.168.109.240/assets/fonts/fontawesome/css/all.css", ENDITEM, 
		"Url=../assets/fonts/roboto/roboto-v20-latin_cyrillic-500.woff2", "Referer=http://192.168.109.240/assets/fonts/roboto/roboto.css", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_header("Upgrade-Insecure-Requests", "1");

	web_url("platform-admin-ui", 
		"URL=http://192.168.109.240/internal/platform-admin-ui", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.240/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=platform-admin-ui/runtime.b9759be94b30ae2a33e0.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/main.a113815411d365738099.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/vendor.6597440179a1a361a262.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/styles.934e1211369de65239dc.css", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/polyfills.cfc88ca87321ca8e8ec7.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/themes/default/theme.css", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/common.f69f8709d30822f7fa9b.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/25.d6516b342757454e33d9.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/11.c02acfdbffc46255fbeb.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/themes/default/images/default-spinner.svg", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/3.c4a949ba0a212384bfec.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/2.1891a41e4a0f084937e0.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/4.842d7f0dccf6876ffcfc.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=platform-admin-ui/12.416582247b9526f72da2.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		LAST);

	web_url("configuration.json_2", 
		"URL=http://192.168.109.240/internal/platform-admin-ui//configurations/configuration.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/internal/platform-admin-ui/themes/default/fonts/ptsans.css", "Referer=http://192.168.109.240/internal/platform-admin-ui/themes/default/theme.css", ENDITEM, 
		"Url=/internal/platform-admin-ui/themes/default/fonts/ptsans/ptsansbold.woff2", "Referer=http://192.168.109.240/internal/platform-admin-ui/themes/default/fonts/ptsans.css", ENDITEM, 
		"Url=/internal/platform-admin-ui/themes/default/fonts/ptsans/ptsans.woff2", "Referer=http://192.168.109.240/internal/platform-admin-ui/themes/default/fonts/ptsans.css", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", "1");

	web_url("login", 
		"URL=http://192.168.109.240/internal/authutil/auth/login?returnUrl=http://192.168.109.240/internal/platform-admin-ui/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../runtime.912d0e53e8715a3eb26c.js", "Referer=http://192.168.109.240/internal/authutil/auth/login?returnUrl=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=../styles.441d4b6bb0d262a7576b.css", "Referer=http://192.168.109.240/internal/authutil/auth/login?returnUrl=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=../polyfills.adc7784a1251bb58b248.js", "Referer=http://192.168.109.240/internal/authutil/auth/login?returnUrl=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=../main.81b056e6adee1957fff7.js", "Referer=http://192.168.109.240/internal/authutil/auth/login?returnUrl=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		LAST);

	web_url("configuration.json_3", 
		"URL=http://192.168.109.240/internal/authutil//configurations/configuration.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/authutil/auth/login?returnUrl=http://192.168.109.240/internal/platform-admin-ui/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/internal/authutil/themes/default/theme.css", "Referer=http://192.168.109.240/internal/authutil/auth/login?returnUrl=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=/internal/authutil/5.aaabecb7b2435b372cd5.js", "Referer=http://192.168.109.240/internal/authutil/auth/login?returnUrl=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
		"Url=/internal/authutil/themes/default/images/default-logo.svg", "Referer=http://192.168.109.240/internal/authutil/", ENDITEM, 
		"Url=/internal/authutil/themes/default/fonts/roboto/roboto-v20-latin_cyrillic-regular.woff2", "Referer=http://192.168.109.240/internal/authutil/themes/default/theme.css", ENDITEM, 
		"Url=/internal/authutil/themes/default/fonts/roboto/roboto-v20-latin_cyrillic-500.woff2", "Referer=http://192.168.109.240/internal/authutil/themes/default/theme.css", ENDITEM, 
		"Url=/internal/authutil/MaterialIcons-Regular.12a47ed5fd5585f0f422.woff2", "Referer=http://192.168.109.240/internal/authutil/styles.441d4b6bb0d262a7576b.css", ENDITEM, 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");
	
	web_add_header("Origin", "http://192.168.109.240");
	
	lr_save_string("loaduser123", "user");
	lr_save_string("trcladykhycrsqvlnn", "lastPassword");
	

	sprintf(base64, "%s:%s", lr_eval_string("{user}"), lr_eval_string("{lastPassword}"));
	b64_encode_string(base64, "authBase64" );
	web_add_header("Authorization", "Basic {authBase64}");


	statusCode = web_custom_request("auth", 
		"URL=http://192.168.109.240/internal/auth/authenticator/api/internalauth/auth?loaderKey=default", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/authutil/auth/login?returnUrl=http:%2F%2F192.168.109.240%2Finternal%2Fplatform-admin-ui%2F", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);
	}

	// Учётная запись со статусом "требуется смена пароля"
	if (statusCode != LR_PASS)
	{
		web_add_header("Authorization", "Basic {authBase64}");
		
		generateLastPassword();
		
		// Указывается новый пароль
		web_custom_request("password",
		                   "URL=http://192.168.109.240/internal/auth/authenticator/api/internalauth/password?loaderKey=default",
							"Method=POST", 
							"Resource=0", 
							"Referer=http://192.168.109.240/internal/authutil/auth/resetSelfPassword?returnUrl=http:%2F%2F192.168.109.240%2Finternal%2Fplatform-admin-ui%2F&login={login}", 
							"Snapshot=t522.inf", 
							"Mode=HTML", 
							"EncType=application/json", 
							"Body={\"password\":\"{lastPassword}\"}", 
							LAST);
	
		
		// Действие после нажатия на кнопку сохранения нового пароля
		
		sprintf(base64, "%s:%s", lr_eval_string("{user}"), lr_eval_string("{lastPassword}"));
		b64_encode_string(base64, "authBase64");
		web_add_header("Authorization", "Basic {authBase64}");
		
		web_custom_request("auth",
		                   "URL=http://192.168.109.240/internal/auth/authenticator/api/internalauth/auth?loaderKey=default",
							"Method=POST", 
							"Resource=0", 
							"RecContentType=application/json", 
							"Referer=http://192.168.109.240/internal/authutil/auth/resetSelfPassword?returnUrl=http:%2F%2F192.168.109.240%2Finternal%2Fplatform-admin-ui%2F&login={login}", 
							"Snapshot=t523.inf", 
							"Mode=HTML", 
							"EncType=", 
							LAST);
		
		web_revert_auto_header("Origin");
		
		web_url("extended-profile",
		        "URL=http://192.168.109.240/internal/api/current-user-manager/api/current/extended-profile?loaderKey=default",
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=http://192.168.109.240/internal/authutil/auth/resetSelfPassword?returnUrl=http:%2F%2F192.168.109.240%2Finternal%2Fplatform-admin-ui%2F&login={login}", 
				"Snapshot=t524.inf", 
				"Mode=HTML", 
				LAST);

		web_add_header("Upgrade-Insecure-Requests", "1");
		
		web_url("platform-admin-ui_2",
		        "URL=http://192.168.109.240/internal/platform-admin-ui/",
		        "Resource=0",
				"Referer=http://192.168.109.240/internal/authutil/auth/resetSelfPassword?returnUrl=http:%2F%2F192.168.109.240%2Finternal%2Fplatform-admin-ui%2F&login={login}", 
				"Snapshot=t525.inf", 
				"Mode=HTML", 
				LAST);
	}
	else {
		
	web_url("extended-profile", 
		"URL=http://192.168.109.240/internal/api/current-user-manager/api/current/extended-profile?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/authutil/auth/login?returnUrl=http:%2F%2F192.168.109.240%2Finternal%2Fplatform-admin-ui%2F", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("platform-admin-ui_2", 
		"URL=http://192.168.109.240/internal/platform-admin-ui/", 
		"Resource=0", 
		"Referer=http://192.168.109.240/internal/authutil/auth/login?returnUrl=http:%2F%2F192.168.109.240%2Finternal%2Fplatform-admin-ui%2F", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
	}
	
	web_url("__check_session", 
		"URL=http://192.168.109.240/internal/api/__check_session", 
		"Resource=0", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);
	
	web_url("extended-profile_2", 
		"URL=http://192.168.109.240/internal/api/current-user-manager/api/current/extended-profile?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/internal/platform-admin-ui/themes/default/images/default-logo.svg", "Referer=http://192.168.109.240/internal/platform-admin-ui/styles.934e1211369de65239dc.css", ENDITEM, 
		LAST);
		
	return 0;
}

void generateLastPassword()
{
	int length = 9 + rand() % 10;
    int i = 0;
    char *password = (char *) malloc(length + 1);
    srand(time(NULL));
	
    for(i = 0; i < length; i ++){
        int j = rand() % 62;
        password[i] = 'a' + rand()%26;
    }
    
    password[length + 1] = '\0';

    lr_save_string(password, "lastPassword");
    
    free(password);
}