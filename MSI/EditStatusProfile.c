EditStatusProfile()
{
//	int indexDeletedProfile = 0;
//	int countDeletedProfiles = 0;
//
//	web_add_header("Upgrade-Insecure-Requests", "1");
//
//	web_url("platform-admin-ui", 
//		"URL=http://192.168.109.240/internal/platform-admin-ui", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://192.168.109.240/", 
//		"Snapshot=t247.inf", 
//		"Mode=HTML", 
//		EXTRARES, 
//		"Url=platform-admin-ui/runtime.b9759be94b30ae2a33e0.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
//		"Url=platform-admin-ui/styles.934e1211369de65239dc.css", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
//		"Url=platform-admin-ui/vendor.6597440179a1a361a262.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
//		"Url=platform-admin-ui/polyfills.cfc88ca87321ca8e8ec7.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
//		"Url=platform-admin-ui/main.a113815411d365738099.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
//		"Url=platform-admin-ui/themes/default/theme.css", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
//		"Url=platform-admin-ui/common.f69f8709d30822f7fa9b.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
//		"Url=platform-admin-ui/25.d6516b342757454e33d9.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
//		"Url=platform-admin-ui/11.c02acfdbffc46255fbeb.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
//		"Url=platform-admin-ui/3.c4a949ba0a212384bfec.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
//		"Url=platform-admin-ui/4.842d7f0dccf6876ffcfc.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
//		"Url=platform-admin-ui/2.1891a41e4a0f084937e0.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
//		"Url=platform-admin-ui/12.416582247b9526f72da2.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
//		"Url=platform-admin-ui/themes/default/images/default-spinner.svg", "Referer=http://192.168.109.240/internal/platform-admin-ui/", ENDITEM, 
//		LAST);
//
//	web_url("configuration.json_3", 
//		"URL=http://192.168.109.240/internal/platform-admin-ui//configurations/configuration.json", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/", 
//		"Snapshot=t248.inf", 
//		"Mode=HTML", 
//		EXTRARES, 
//		"Url=/internal/platform-admin-ui/themes/default/fonts/ptsans.css", "Referer=http://192.168.109.240/internal/platform-admin-ui/themes/default/theme.css", ENDITEM, 
//		"Url=/internal/platform-admin-ui/themes/default/fonts/ptsans/ptsansbold.woff2", "Referer=http://192.168.109.240/internal/platform-admin-ui/themes/default/fonts/ptsans.css", ENDITEM, 
//		"Url=/internal/platform-admin-ui/themes/default/fonts/ptsans/ptsans.woff2", "Referer=http://192.168.109.240/internal/platform-admin-ui/themes/default/fonts/ptsans.css", ENDITEM, 
//		LAST);
//
//	web_url("__check_session", 
//		"URL=http://192.168.109.240/internal/api/__check_session", 
//		"Resource=0", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/", 
//		"Snapshot=t249.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("statuses", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/statuses?loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
//		"Snapshot=t250.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("DisplaySnils", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
//		"Snapshot=t251.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("UserProfile", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
//		"Snapshot=t252.inf", 
//		"Mode=HTML", 
//		EXTRARES, 
//		"Url=/internal/platform-admin-ui/themes/default/images/default-logo.svg", "Referer=http://192.168.109.240/internal/platform-admin-ui/styles.934e1211369de65239dc.css", ENDITEM, 
//		LAST);
//
//	web_url("extended-profile_3", 
//		"URL=http://192.168.109.240/internal/api/current-user-manager/api/current/extended-profile?loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
//		"Snapshot=t253.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("userprofiles", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles?status=ACTIVE&offset=0&limit=10&order_by=asc(snils)&loaderKey=5518757d-4ffc-4f15-8566-378fbc301f68", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
//		"Snapshot=t254.inf", 
//		"Mode=HTML", 
//		LAST);
//	
//	web_reg_save_param("userDeletedProfiles","LB=","RB=","Search=Body",LAST);
//
//	web_url("userprofiles_2", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles?status=DELETED&offset=0&limit=10&order_by=asc(snils)&loaderKey=5518757d-4ffc-4f15-8566-378fbc301f68", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
//		"Snapshot=t255.inf", 
//		"Mode=HTML", 
//		LAST);
//	
////	lr_eval_json("Buffer={userDeletedProfiles}",
////                 "JsonObject=json_userDeletedProfiles", LAST);
////	
////	
////	countDeletedProfiles = lr_json_get_values("JsonObject=json_userDeletedProfiles",
////                       "ValueParam=title",
////                     "QueryString=$.[*].id",
////                       "SelectAll=Yes",
////                       LAST);
////	
////	srand(time(NULL));
////	indexDeletedProfile = rand() % countDeletedProfiles;
////	
////	lr_save_int(indexDeletedProfile,"indexDeletedProfile");
////	
////     Заглушка: статический ID профиля
//	lr_save_string("ccc471d0-a762-4e94-b1f6-75bc04279043", "ID_DeletedProfile");
//
//	web_url("DisplaySnils_2", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_DeletedProfile}", 
//		"Snapshot=t256.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("UserProfile_2", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_DeletedProfile}", 
//		"Snapshot=t257.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("type_properties", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_DeletedProfile}", 
//		"Snapshot=t258.inf", 
//		"Mode=HTML", 
//		LAST);
//
//
//	web_reg_save_param("profileData","LB=","RB=","Search=Body",LAST);
//	web_url("openDeletedProfiles", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{ID_DeletedProfile}?loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_DeletedProfile}", 
//		"Snapshot=t259.inf", 
//		"Mode=HTML", 
//		LAST);
//	
//	lr_eval_json("Buffer={profileData}", "JsonObject=json_profileData", LAST);
//	
//	lr_json_get_values("JsonObject=json_profileData",
//                       "ValueParam=versionDeletedProfile",
//                       "QueryString=$.version",
//                       LAST);
//
//	web_url("extended", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&limit=-1&order_by=asc(name)&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_DeletedProfile}", 
//		"Snapshot=t260.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("type_properties_2", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_DeletedProfile}/edit-status", 
//		"Snapshot=t261.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("openDeletedProfile_2", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{ID_DeletedProfile}?loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_DeletedProfile}/edit-status", 
//		"Snapshot=t262.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("UserProfile_3", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_DeletedProfile}/edit-status", 
//		"Snapshot=t263.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("DisplaySnils_3", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_DeletedProfile}/edit-status", 
//		"Snapshot=t264.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("openDeletedProfile_3", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{ID_DeletedProfile}?loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_DeletedProfile}/edit-status", 
//		"Snapshot=t265.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_add_header("Origin", "http://192.168.109.240");
//
//	web_custom_request("changestatus", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{ID_DeletedProfile}/changestatus?loaderKey=default",//54b38413-d0e8-46e5-b752-bea9b87b258d", 
//		"Method=PATCH", 
//		"Resource=0", 
//		"RecContentType=application/json",
//		"EncType=application/json",
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_DeletedProfile}/edit-status", 
//		"Snapshot=t266.inf", 
//		"Mode=HTML", 
//		"Body={\"status\":\"ACTIVE\",\"statusChangeReason\":\"test\",\"version\":{versionDeletedProfile}}", 
//		LAST);
//
//	web_url("ID_DeletedProfile_4", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{ID_DeletedProfile}?loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles{ID_DeletedProfile}", 
//		"Snapshot=t267.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("type_properties_3", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_DeletedProfile}", 
//		"Snapshot=t268.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("DisplaySnils_4", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_DeletedProfile}", 
//		"Snapshot=t269.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("UserProfile_4", 
//		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_DeletedProfile}", 
//		"Snapshot=t270.inf", 
//		"Mode=HTML", 
//		LAST);

	return 0;
}