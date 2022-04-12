/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 911
   ------------------------------------------------------------------------------- */
#include "base64.h"

vuser_init()
{
	char base64[200];
	
	web_add_auto_header("DNT", "1");

	web_add_header("Upgrade-Insecure-Requests", "1");

	web_url("192.168.109.240", 
		"URL=http://192.168.109.240/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t41.inf", 
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
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_url("default.css", 
		"URL=http://192.168.109.240/themes/default.css", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.240/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../assets/fonts/roboto/roboto-v20-latin_cyrillic-regular.woff2", "Referer=http://192.168.109.240/assets/fonts/roboto/roboto.css", ENDITEM, 
		"Url=../assets/fonts/roboto/roboto-v20-latin_cyrillic-500.woff2", "Referer=http://192.168.109.240/assets/fonts/roboto/roboto.css", ENDITEM, 
		"Url=../assets/fonts/roboto/roboto-v20-latin_cyrillic-700.woff2", "Referer=http://192.168.109.240/assets/fonts/roboto/roboto.css", ENDITEM, 
		"Url=../assets/fonts/fontawesome/webfonts/fa-light-300.woff2", "Referer=http://192.168.109.240/assets/fonts/fontawesome/css/all.css", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_header("Upgrade-Insecure-Requests", "1");

	web_url("login", 
		"URL=http://192.168.109.240/internal/authutil/auth/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.240/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../runtime.912d0e53e8715a3eb26c.js", ENDITEM, 
		"Url=../styles.441d4b6bb0d262a7576b.css", ENDITEM, 
		"Url=../polyfills.adc7784a1251bb58b248.js", ENDITEM, 
		"Url=../main.81b056e6adee1957fff7.js", ENDITEM, 
		"Url=../themes/default/theme.css", ENDITEM, 
		"Url=../5.aaabecb7b2435b372cd5.js", ENDITEM, 
		LAST);

	web_url("configuration.json_2", 
		"URL=http://192.168.109.240/internal/authutil//configurations/configuration.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/authutil/auth/login", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/internal/authutil/themes/default/images/default-logo.svg", "Referer=http://192.168.109.240/internal/authutil/", ENDITEM, 
		"Url=/internal/authutil/themes/default/fonts/roboto/roboto-v20-latin_cyrillic-500.woff2", "Referer=http://192.168.109.240/internal/authutil/themes/default/theme.css", ENDITEM, 
		"Url=/internal/authutil/themes/default/fonts/roboto/roboto-v20-latin_cyrillic-regular.woff2", "Referer=http://192.168.109.240/internal/authutil/themes/default/theme.css", ENDITEM, 
		"Url=/internal/authutil/MaterialIcons-Regular.12a47ed5fd5585f0f422.woff2", "Referer=http://192.168.109.240/internal/authutil/styles.441d4b6bb0d262a7576b.css", ENDITEM, 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_add_header("Origin", "http://192.168.109.240");

	sprintf(base64, "%s:%s", lr_eval_string("{username}"), lr_eval_string("{password}"));
	b64_encode_string(base64, "authBase64" );
	web_add_header("Authorization", "Basic {authBase64}");
	
	web_custom_request("auth",
		"URL=http://192.168.109.240/internal/auth/authenticator/api/internalauth/auth?loaderKey=default", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/authutil/auth/login", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("extended-profile", 
		"URL=http://192.168.109.240/internal/api/current-user-manager/api/current/extended-profile?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/authutil/auth/login", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", "1");

	web_url("192.168.109.240_2", 
		"URL=http://192.168.109.240/", 
		"Resource=0", 
		"Referer=http://192.168.109.240/internal/authutil/auth/login", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	web_url("default.css_2", 
		"URL=http://192.168.109.240/themes/default.css", 
		"Resource=1", 
		"Referer=http://192.168.109.240/", 
		"Snapshot=t49.inf", 
		LAST);

	web_url("extended-profile_2", 
		"URL=http://192.168.109.240/internal/api/current-user-manager/api/current/extended-profile", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}

void createText(int length, int t)
{
    int i = 0;
    char *buf = (char *) malloc(length + 1);
//    char *x = itoa(97);
//    char x = {'a' + rand()%24};
    
    srand(time(NULL));
	
    for(i = 0; i < length; i ++){
        buf[i] = 'a' + rand() % 24;
    }
    
    buf[length] = '\0';

    switch(t)
    {
    	case 0:
    		lr_save_string(buf, "ProfileEmail");
    		break;
    	case 1:
    		lr_save_string(buf, "ProfileNamelast");
    		break;
    	case 2:
    		lr_save_string(buf, "ProfileNamefirst");
    		break;
    	case 3:
    		lr_save_string(buf, "UZ_Email");
    		break;
    	case 4:
    		lr_save_string(buf, "UZ_FIO");
    		break;
    	case 5:
    		lr_save_string(buf, "UZ_login");
    		break;
    	case 6:
    		//buf[length] = '\0';
    		lr_save_string(buf, "nameSecurityGroup");
    		break;
    	case 7:
    		lr_save_string(buf, "sysname");
    		break;
    	case 8:
    		lr_save_string(buf, "nameSegment");
    		break;
    }
    
    free(buf);
}