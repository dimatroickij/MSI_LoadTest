SearchPointInService()
{
	int count = 0;
	int index = 0;
	web_url("serviceclsitems", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/serviceclsitems?limit=-1&order_by=asc(name)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/services/services", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_save_param("servicerefs","LB=","RB=","Search=Body",LAST);
	
	web_url("servicerefs", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/servicerefs?offset=0&limit=10&order_by=asc(name)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/services/services", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_eval_json("Buffer={servicerefs}", "JsonObject=json_servicerefs", LAST);
	
	count = lr_json_get_values("JsonObject=json_servicerefs",
                       "ValueParam=title",
                     "QueryString=$.[*].id",
                       "SelectAll=Yes",
                       LAST);
	
	srand(time(NULL));
	index = rand() % count;
	

	lr_save_int(index,"index");
	
	lr_json_get_values("JsonObject=json_servicerefs",
                       "ValueParam=serviceref_id",
                       "QueryString=$.[{index}].id",
                       LAST);
	
//		lr_save_string("9c9229c7-8a3f-4dfc-9cd0-966d5af19acc", "serviceref_id");

	web_url("servicerefs",
		"URL=http://192.168.109.240/internal/api/access-manager/api/servicerefs/{serviceref_id}?loaderKey=none",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/services/services/{serviceref_id}",
		"Snapshot=t156.inf",
		"Mode=HTML",
		LAST);

	web_url("serviceclsitems_2",
		"URL=http://192.168.109.240/internal/api/access-manager/api/serviceclsitems?serviceref_id={serviceref_id}&limit=-1&loaderKey=none",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/services/services/{serviceref_id}",
		"Snapshot=t157.inf",
		"Mode=HTML",
		LAST);

	web_url("endpoints",
		"URL=http://192.168.109.240/internal/api/access-manager/api/endpoints?serviceref_id={serviceref_id}&offset=0&limit=10&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/services/services/{serviceref_id}",
		"Snapshot=t158.inf",
		"Mode=HTML",
		LAST);

	web_url("endpoints_2",
		"URL=http://192.168.109.240/internal/api/access-manager/api/endpoints?serviceref_id={serviceref_id}&offset=0&limit=10&order_by=asc(sysname)&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/services/services/{serviceref_id}",
		"Snapshot=t159.inf",
		"Mode=HTML",
		LAST);
	
	createText(2, 7);

	web_url("endpoints_5",
		"URL=http://192.168.109.240/internal/api/access-manager/api/endpoints?sysname={sysname}&serviceref_id={serviceref_id}&offset=0&limit=10&order_by=asc(sysname)&loaderKey=defaut",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/services/services/{serviceref_id}",
		"Snapshot=t162.inf",
		"Mode=HTML",
		LAST);

	web_url("endpoints_6",
		"URL=http://192.168.109.240/internal/api/access-manager/api/endpoints?sysname={sysname}&serviceref_id={serviceref_id}&offset=0&limit=10&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/services/services/{serviceref_id}",
		"Snapshot=t163.inf",
		"Mode=HTML",
		LAST);
	
//	// нажатие на endpoint
//	lr_save_string("7914ef94-aded-43d6-b8aa-6f48e6cdc03e", "endpoint");
//	web_url("openEndpoint",
//		"URL=http://192.168.109.240/internal/api/access-manager/api/endpoints/{endpoint}?loaderKey=default", 
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=Referer: http://192.168.109.240/internal/platform-admin-ui/services/endpoints/{endpoint}",
//		"Snapshot=t164.inf",
//		"Mode=HTML",
//		LAST);
//	
//	lr_save_string("e5ac2de8-be64-4bbc-beeb-397ee792f229", "services");
//	
//	web_url("service",
//		"URL=http://192.168.109.240/internal/api/access-manager/api/services/{services}?loaderKey=none", 
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=Referer: http://192.168.109.240/internal/platform-admin-ui/services/endpoints/{endpoint}",
//		"Snapshot=t165.inf",
//		"Mode=HTML",
//		LAST);
//	
//	lr_save_string("9c9229c7-8a3f-4dfc-9cd0-966d5af19acc", "serviceref_id");
//	web_url("serviceref",
//		"URL=http://192.168.109.240/internal/api/access-manager/api/serviceclsitems?serviceref_id={serviceref_id}&limit=-1&loaderKey=none ", 
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=Referer: http://192.168.109.240/internal/platform-admin-ui/services/endpoints/{endpoint}",
//		"Snapshot=t166.inf",
//		"Mode=HTML",
//		LAST);
	
	return 0;
}
