SearchSegment()
{
	
	web_url("segments", 
		"URL=http://192.168.109.240/internal/api/segment-registry/api/segments?adm_accessible_only=true&offset=0&limit=10&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/segments/segments", 
		"Snapshot=t221.inf", 
		"Mode=HTML", 
		LAST);

	web_url("segments_2", 
		"URL=http://192.168.109.240/internal/api/segment-registry/api/segments?adm_accessible_only=true&offset=0&limit=10&order_by=asc(name)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/segments/segments", 
		"Snapshot=t222.inf", 
		"Mode=HTML", 
		LAST);
	
	//lr_save_string("auto", "nameSegment");
	createText(2, 8);
	
	web_url("segments_3", 
		"URL=http://192.168.109.240/internal/api/segment-registry/api/segments?name={nameSegment}&adm_accessible_only=true&offset=0&limit=10&order_by=asc(name)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/segments/segments", 
		"Snapshot=t223.inf", 
		"Mode=HTML", 
		LAST);

	web_url("segments_4", 
		"URL=http://192.168.109.240/internal/api/segment-registry/api/segments?name={nameSegment}&adm_accessible_only=true&offset=0&limit=10&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/segments/segments", 
		"Snapshot=t224.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}