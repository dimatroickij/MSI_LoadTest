SearchPointInRegistry()
{

	int countEndpoints = 0;
	int indexEndroint = 0;
	int countSearchEndpoints = 0;
	int indexSearchEndroint = 0;
	char szBuf1[20];
	char szBuf2[6];
	
	web_url("serviceclsitems", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/serviceclsitems?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/services/endpoints", 
		"Snapshot=t198.inf", 
		"Mode=HTML", 
		LAST);

	web_url("endpoints", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/endpoints?offset=0&limit=10&order_by=asc(sysname)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/services/endpoints", 
		"Snapshot=t199.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_save_param("endpoints","LB=","RB=","Search=Body",LAST);
	
	web_url("endpoints_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/endpoints?offset=0&limit=40&order_by=asc(sysname)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/services/endpoints", 
		"Snapshot=t200.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_eval_json("Buffer={endpoints}", "JsonObject=json_endpoints", LAST);
	
	countSearchEndpoints = lr_json_get_values("JsonObject=json_endpoints",
                       "ValueParam=sn",
                     "QueryString=$.[*].sysname",
                       "SelectAll=Yes",
                       LAST);
	
	srand(time(NULL));
	indexSearchEndroint = rand() % countSearchEndpoints;
	lr_save_int(indexSearchEndroint,"indexSearchEndroint");
	
	lr_json_get_values("JsonObject=json_endpoints",
                       "ValueParam=sysnameRegistry",
                     "QueryString=$.[{indexSearchEndroint}].sysname",
                       LAST);
	
	sprintf(szBuf1, "%s", lr_eval_string("{sysnameRegistry}"));
//	strncpy (szBuf2, szBuf1, 6);
	
//	lr_save_string(szBuf2, "sysnameRegistry");

	web_url("endpoints_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/endpoints?sysname={sysnameRegistry}&offset=0&limit=10&order_by=asc(sysname)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/services/endpoints", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param("endpointsClick","LB=","RB=","Search=Body",LAST);

	web_url("endpoints_6", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/endpoints?sysname={sysnameRegistry}&offset=0&limit=10&order_by=asc(sysname)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/services/endpoints", 
		"Snapshot=t204.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_eval_json("Buffer={endpointsClick}", "JsonObject=json_endpointsClick", LAST);
	
	countEndpoints = lr_json_get_values("JsonObject=json_endpointsClick",
                       "ValueParam=snn",
                     "QueryString=$.[*].sysname",
                       "SelectAll=Yes",
                       LAST);
	
	srand(time(NULL));
	indexEndroint = rand() % countEndpoints;
	lr_save_int(indexEndroint,"indexEndroint");
	
	lr_json_get_values("JsonObject=json_endpoints",
                       "ValueParam=endpoint",
                     "QueryString=$.[{indexEndroint}].id",
                       LAST);
	
	lr_json_get_values("JsonObject=json_endpoints",
                       "ValueParam=services",
                     "QueryString=$.[{indexEndroint}].serviceId",
                       LAST);
		
	// нажатие на endpoint
	web_url("openEndpoint",
		"URL=http://192.168.109.240/internal/api/access-manager/api/endpoints/{endpoint}?loaderKey=default", 
		"Resource=0",
		"RecContentType=application/json",
		"Referer=Referer: http://192.168.109.240/internal/platform-admin-ui/services/endpoints/{endpoint}",
		"Snapshot=t164.inf",
		"Mode=HTML",
		LAST);
	
	web_reg_save_param("serviceJson","LB=","RB=","Search=Body",LAST);
	web_url("service",
		"URL=http://192.168.109.240/internal/api/access-manager/api/services/{services}?loaderKey=none", 
		"Resource=0",
		"RecContentType=application/json",
		"Referer=Referer: http://192.168.109.240/internal/platform-admin-ui/services/endpoints/{endpoint}",
		"Snapshot=t165.inf",
		"Mode=HTML",
		LAST);
	
	lr_eval_json("Buffer={serviceJson}", "JsonObject=json_serviceJson", LAST);
	
	lr_json_get_values("JsonObject=json_serviceJson",
                       "ValueParam=serviceref_id",
                     "QueryString=$.serviceRefId",
                       LAST);
	
	web_url("serviceref",
		"URL=http://192.168.109.240/internal/api/access-manager/api/serviceclsitems?serviceref_id={serviceref_id}&limit=-1&loaderKey=none ", 
		"Resource=0",
		"RecContentType=application/json",
		"Referer=Referer: http://192.168.109.240/internal/platform-admin-ui/services/endpoints/{endpoint}",
		"Snapshot=t166.inf",
		"Mode=HTML",
		LAST);

	return 0;
}