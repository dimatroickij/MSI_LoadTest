ChangePassword()
{

	web_add_header("Upgrade-Insecure-Requests", "1");

	web_url("changeSelfPassword", 
		"URL=http://192.168.109.240/internal/authutil/auth/changeSelfPassword?returnUrl=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);
	
	generatePassword();

	web_add_header("Origin", "http://192.168.109.240");

	web_custom_request("password", 
		"URL=http://192.168.109.240/internal/api/current-user-manager/api/current/password?loaderKey=default", 
		"Method=PATCH", 
		"Resource=0", 
		"Referer=http://192.168.109.240/internal/authutil/auth/changeSelfPassword?returnUrl=http:%2F%2F192.168.109.240%2Finternal%2Fplatform-admin-ui%2Faccess-control%2Fprofiles", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json",
		"Body={\"currentPassword\":\"{lastPassword}\",\"newPassword\":\"{newPassword}\",\"confirmPassword\":\"{newPassword}\"}", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", "1");

	web_url("profiles", 
		"URL=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.240/internal/authutil/auth/changeSelfPassword?returnUrl=http:%2F%2F192.168.109.240%2Finternal%2Fplatform-admin-ui%2Faccess-control%2Fprofiles", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("__check_session_2", 
		"URL=http://192.168.109.240/internal/api/__check_session", 
		"Resource=0", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("extended-profile_3", 
		"URL=http://192.168.109.240/internal/api/current-user-manager/api/current/extended-profile?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}

void generatePassword()
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

    lr_save_string(password, "newPassword");
    
    free(password);
}