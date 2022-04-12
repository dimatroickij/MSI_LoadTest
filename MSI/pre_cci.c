# 1 "f:\\msi\\msi\\\\combined_MSI.c"
# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "f:\\msi\\msi\\\\combined_MSI.c" 2

# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "f:\\msi\\msi\\\\combined_MSI.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrw_custom_body.h" 1
 





# 8 "globals.h" 2

# 1 "WebSocketBuffer.h" 1



 

char WebSocketReceive0[] = "{ \"operation\": \"ping\", \"server-interval-sec\": 60, \"message\": \"\" }";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	 

 

char WebSocketReceive1[] = "{ \"operation\": \"ping\", \"server-interval-sec\": 60, \"message\": \"\" }";
long WebSocketReceiveLen1   = sizeof(WebSocketReceive1) - 1;	 


# 9 "globals.h" 2




















 
 




















# 3 "f:\\msi\\msi\\\\combined_MSI.c" 2

# 1 "vuser_init.c" 1
 






# 1 "base64.h" 1
 
# 10 "base64.h"
 
char base64encode_lut[] = {
'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q',
'R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h',
'i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y',
'z','0','1','2','3','4','5','6','7','8','9','+','/','='};
 
 
char base64decode_lut[] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0,62, 0, 0, 0,63,52,53,54,55,56,57,58,59,60,61, 0, 0,
0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,
15,16,17,18,19,20,21,22,23,24,25, 0, 0, 0, 0, 0, 0,26,27,28,
29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,
49,50,51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };
 
void base64encode(char *src, char *dest, int len)
 
{
 int i=0, slen=strlen(src);
 for(i=0;i<slen && i<len;i+=3,src+=3)
 {  
 *(dest++)=base64encode_lut[(*src&0xFC)>>0x2];
 *(dest++)=base64encode_lut[(*src&0x3)<<0x4|(*(src+1)&0xF0)>>0x4];
 *(dest++)=((i+1)<slen)?base64encode_lut[(*(src+1)&0xF)<<0x2|(*(src+2)&0xC0)>>0x6]:'=';
 *(dest++)=((i+2)<slen)?base64encode_lut[*(src+2)&0x3F]:'=';
 }
 *dest='\0';  
}
 
void base64decode(char *src, char *dest, int len)
 
{
 int i=0, slen=strlen(src);
 for(i=0;i<slen&&i<len;i+=4,src+=4)
 {  
 char c1=base64decode_lut[*src], c2=base64decode_lut[*(src+1)], c3=base64decode_lut[*(src+2)], c4=base64decode_lut[*(src+3)];
  
 *(dest++)=(c1&0x3F)<<0x2|(c2&0x30)>>0x4;
 *(dest++)=(c3!=64)?((c2&0xF)<<0x4|(c3&0x3C)>>0x2):'\0';
 *(dest++)=(c4!=64)?((c3&0x3)<<0x6|c4&0x3F):'\0';
 }
 *dest='\0';  
}
 
int b64_encode_string( char *source, char *lrvar )
 
 
 
 
 
 
 
 
 
 
 
{
 int dest_size;
 int res;
 char *dest;
  
 dest_size = 1 + ((strlen(source)+2)/3*4);
 dest = (char *)malloc(dest_size);
 memset(dest,0,dest_size);
  
 base64encode(source, dest, dest_size);
 lr_save_string( dest, lrvar );
  
 res = strlen(dest);
 free(dest);
  
 return res;
}
 
int b64_decode_string( char *source, char *lrvar )
 
 
 
 
 
 
 
 
 
 
 
{
 int dest_size;
 int res;
 char *dest;
  
 dest_size = strlen(source);
 dest = (char *)malloc(dest_size);
 memset(dest,0,dest_size);
  
 base64decode(source, dest, dest_size);
 lr_save_string( dest, lrvar );
  
 res = strlen(dest);
 free(dest);
  
 return res;
}
# 8 "vuser_init.c" 2


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
		"EXTRARES", 
		"Url=/assets/fonts/roboto/roboto.css", "ENDITEM", 
		"Url=/styles.206c321067b55e6a4b75.css", "ENDITEM", 
		"Url=/assets/fonts/fontawesome/css/all.css", "ENDITEM", 
		"Url=/runtime.acf0dec4155e77772545.js", "ENDITEM", 
		"Url=/polyfills.9cfb3f513e777138fb2c.js", "ENDITEM", 
		"Url=/main.f260e358d880bc7956b9.js", "ENDITEM", 
		"Url=/assets/images/logo.svg", "ENDITEM", 
		"LAST");

	web_url("configuration.json", 
		"URL=http://192.168.109.240//configurations/configuration.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("default.css", 
		"URL=http://192.168.109.240/themes/default.css", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.240/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../assets/fonts/roboto/roboto-v20-latin_cyrillic-regular.woff2", "Referer=http://192.168.109.240/assets/fonts/roboto/roboto.css", "ENDITEM", 
		"Url=../assets/fonts/roboto/roboto-v20-latin_cyrillic-500.woff2", "Referer=http://192.168.109.240/assets/fonts/roboto/roboto.css", "ENDITEM", 
		"Url=../assets/fonts/roboto/roboto-v20-latin_cyrillic-700.woff2", "Referer=http://192.168.109.240/assets/fonts/roboto/roboto.css", "ENDITEM", 
		"Url=../assets/fonts/fontawesome/webfonts/fa-light-300.woff2", "Referer=http://192.168.109.240/assets/fonts/fontawesome/css/all.css", "ENDITEM", 
		"LAST");

	web_set_sockets_option("SSL_VERSION", "2&3");

	 

	web_add_header("Upgrade-Insecure-Requests", "1");

	web_url("login", 
		"URL=http://192.168.109.240/internal/authutil/auth/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.240/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../runtime.912d0e53e8715a3eb26c.js", "ENDITEM", 
		"Url=../styles.441d4b6bb0d262a7576b.css", "ENDITEM", 
		"Url=../polyfills.adc7784a1251bb58b248.js", "ENDITEM", 
		"Url=../main.81b056e6adee1957fff7.js", "ENDITEM", 
		"Url=../themes/default/theme.css", "ENDITEM", 
		"Url=../5.aaabecb7b2435b372cd5.js", "ENDITEM", 
		"LAST");

	web_url("configuration.json_2", 
		"URL=http://192.168.109.240/internal/authutil//configurations/configuration.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/authutil/auth/login", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/internal/authutil/themes/default/images/default-logo.svg", "Referer=http://192.168.109.240/internal/authutil/", "ENDITEM", 
		"Url=/internal/authutil/themes/default/fonts/roboto/roboto-v20-latin_cyrillic-500.woff2", "Referer=http://192.168.109.240/internal/authutil/themes/default/theme.css", "ENDITEM", 
		"Url=/internal/authutil/themes/default/fonts/roboto/roboto-v20-latin_cyrillic-regular.woff2", "Referer=http://192.168.109.240/internal/authutil/themes/default/theme.css", "ENDITEM", 
		"Url=/internal/authutil/MaterialIcons-Regular.12a47ed5fd5585f0f422.woff2", "Referer=http://192.168.109.240/internal/authutil/styles.441d4b6bb0d262a7576b.css", "ENDITEM", 
		"LAST");

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
		"LAST");

	web_url("extended-profile", 
		"URL=http://192.168.109.240/internal/api/current-user-manager/api/current/extended-profile?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/authutil/auth/login", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("Upgrade-Insecure-Requests", "1");

	web_url("192.168.109.240_2", 
		"URL=http://192.168.109.240/", 
		"Resource=0", 
		"Referer=http://192.168.109.240/internal/authutil/auth/login", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("default.css_2", 
		"URL=http://192.168.109.240/themes/default.css", 
		"Resource=1", 
		"Referer=http://192.168.109.240/", 
		"Snapshot=t49.inf", 
		"LAST");

	web_url("extended-profile_2", 
		"URL=http://192.168.109.240/internal/api/current-user-manager/api/current/extended-profile", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"LAST");

	return 0;
}
# 4 "f:\\msi\\msi\\\\combined_MSI.c" 2

# 1 "EditMainAttr.c" 1
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
		"EXTRARES", 
		"Url=platform-admin-ui/runtime.b9759be94b30ae2a33e0.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", "ENDITEM", 
		"Url=platform-admin-ui/vendor.6597440179a1a361a262.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", "ENDITEM", 
		"Url=platform-admin-ui/main.a113815411d365738099.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", "ENDITEM", 
		"Url=platform-admin-ui/polyfills.cfc88ca87321ca8e8ec7.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", "ENDITEM", 
		"Url=platform-admin-ui/styles.934e1211369de65239dc.css", "Referer=http://192.168.109.240/internal/platform-admin-ui/", "ENDITEM", 
		"Url=platform-admin-ui/themes/default/theme.css", "Referer=http://192.168.109.240/internal/platform-admin-ui/", "ENDITEM", 
		"Url=platform-admin-ui/common.f69f8709d30822f7fa9b.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", "ENDITEM", 
		"Url=platform-admin-ui/11.c02acfdbffc46255fbeb.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", "ENDITEM", 
		"Url=platform-admin-ui/25.d6516b342757454e33d9.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", "ENDITEM", 
		"Url=platform-admin-ui/3.c4a949ba0a212384bfec.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", "ENDITEM", 
		"Url=platform-admin-ui/4.842d7f0dccf6876ffcfc.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", "ENDITEM", 
		"Url=platform-admin-ui/2.1891a41e4a0f084937e0.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", "ENDITEM", 
		"Url=platform-admin-ui/themes/default/images/default-spinner.svg", "Referer=http://192.168.109.240/internal/platform-admin-ui/", "ENDITEM", 
		"Url=platform-admin-ui/12.416582247b9526f72da2.js", "Referer=http://192.168.109.240/internal/platform-admin-ui/", "ENDITEM", 
		"LAST");

	web_url("configuration.json_3", 
		"URL=http://192.168.109.240/internal/platform-admin-ui//configurations/configuration.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/internal/platform-admin-ui/themes/default/fonts/ptsans.css", "Referer=http://192.168.109.240/internal/platform-admin-ui/themes/default/theme.css", "ENDITEM", 
		"Url=/internal/platform-admin-ui/themes/default/fonts/ptsans/ptsansbold.woff2", "Referer=http://192.168.109.240/internal/platform-admin-ui/themes/default/fonts/ptsans.css", "ENDITEM", 
		"Url=/internal/platform-admin-ui/themes/default/fonts/ptsans/ptsans.woff2", "Referer=http://192.168.109.240/internal/platform-admin-ui/themes/default/fonts/ptsans.css", "ENDITEM", 
		"LAST");

	web_url("__check_session", 
		"URL=http://192.168.109.240/internal/api/__check_session", 
		"Resource=0", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/", 
		"Snapshot=t170.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("statuses", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/statuses?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("DisplaySnils", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("UserProfile", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/internal/platform-admin-ui/themes/default/images/default-logo.svg", "Referer=http://192.168.109.240/internal/platform-admin-ui/styles.934e1211369de65239dc.css", "ENDITEM", 
		"LAST");

	web_url("extended-profile_3", 
		"URL=http://192.168.109.240/internal/api/current-user-manager/api/current/extended-profile?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_reg_save_param("userProfiles","LB=","RB=","Search=Body","LAST");

	web_url("userprofiles", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles?status=ACTIVE&offset=0&limit=10&order_by=asc(snils)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		"LAST");
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	lr_save_string("ccc471d0-a762-4e94-b1f6-75bc04279043", "ID_Profile");

	web_url("openProfile",
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{ID_Profile}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("type_properties", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("DisplaySnils_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("UserProfile_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}", 
		"Snapshot=t179.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("extended", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&limit=-1&order_by=asc(name)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}", 
		"Snapshot=t180.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("openProfile_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{ID_Profile}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}/edit", 
		"Snapshot=t181.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("type_properties_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}/edit", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("DisplaySnils_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}/edit", 
		"Snapshot=t183.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("UserProfile_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}/edit", 
		"Snapshot=t184.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_reg_save_param("editUserProfile","LB=","RB=","Search=Body","LAST");

	web_url("openProfile_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{ID_Profile}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}/edit", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		"LAST");
	
	lr_eval_json("Buffer={editUserProfile}", "JsonObject=json_editUserProfile", "LAST");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=version",
                       "QueryString=$.version",
                       "LAST");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=snils",
                       "QueryString=$.snils",
                       "LAST");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=nameFirst",
                       "QueryString=$.nameFirst",
                       "LAST");
	
	if (strcmp(lr_eval_string("{nameFirst}"),"null") == 0)
		lr_save_string("", "nameFirst");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=nameLast",
                       "QueryString=$.nameLast",
                       "LAST");
	
	if (strcmp(lr_eval_string("{nameLast}"),"null") == 0)
		lr_save_string("", "nameLast");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=nameMiddle",
                       "QueryString=$.nameMiddle",
                       "LAST");
	
	if (strcmp(lr_eval_string("{nameMiddle}"),"null") == 0)
		lr_save_string("", "nameMiddle");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=inn",
                       "QueryString=$.inn",
                       "LAST");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=docSer",
                       "QueryString=$.docSer",
                       "LAST");
	
	if (strcmp(lr_eval_string("{docSer}"),"null") == 0)
		lr_save_string("", "docSer");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=docNum",
                       "QueryString=$.docNum",
                       "LAST");
	
	if (strcmp(lr_eval_string("{docNum}"),"null") == 0)
		lr_save_string("", "docNum");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=docIssueDate",
                       "QueryString=$.docIssueDate",
                       "LAST");
	
	if (strcmp(lr_eval_string("{docIssueDate}"),"null") == 0)
		lr_save_string("", "docIssueDate");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=docIssuePlace",
                       "QueryString=$.docIssuePlace",
                       "LAST");
	
	if (strcmp(lr_eval_string("{docIssuePlace}"),"null") == 0)
		lr_save_string("", "docIssuePlace");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=gender",
                       "QueryString=$.gender",
                       "LAST");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=birthDate",
                       "QueryString=$.birthDate",
                       "LAST");
	
	if (strcmp(lr_eval_string("{birthDate}"),"null") == 0)
		lr_save_string("", "birthDate");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=birthPlace",
                       "QueryString=$.birthPlace",
                       "LAST");
	
	if (strcmp(lr_eval_string("{birthPlace}"),"null") == 0)
		lr_save_string("", "birthPlace");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=citizenship",
                       "QueryString=$.citizenship",
                       "LAST");
	
	if (strcmp(lr_eval_string("{citizenship}"),"null") == 0)
		lr_save_string("", "citizenship");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=email",
                       "QueryString=$.email",
                       "LAST");
	
	if (strcmp(lr_eval_string("{email}"),"null") == 0)
		lr_save_string("", "email");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=phoneNumber",
                       "QueryString=$.phoneNumber",
                       "LAST");
	
	lr_json_get_values("JsonObject=json_editUserProfile",
                       "ValueParam=userProfileAttributes",
                       "QueryString=$.userProfileAttributes",
                       "LAST");
	
	web_url("DisplaySnils_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}/edit", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("UserProfile_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}/edit", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		"LAST");

	srand(_time32(0));
	numberAttributes = 1; 
	
	switch(numberAttributes)
	{
		case 0:
			 
			generateSNILS();
			break;
		case 1:
			 
			generateText(1);
			break;
		case 2:
			 
			generateText(2);
			break;
		case 3:
			 
			generateText(3);
			break;
	}
	
	lr_output_message("############ ");

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
		"LAST");

	web_url("type_properties_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}", 
		"Snapshot=t189.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("DisplaySnils_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}", 
		"Snapshot=t190.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("openProfile_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{ID_Profile}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("UserProfile_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserProfile?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles/{ID_Profile}", 
		"Snapshot=t192.inf", 
		"Mode=HTML", 
		"LAST");

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
    srand(_time32(0));
	
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
# 5 "f:\\msi\\msi\\\\combined_MSI.c" 2

# 1 "EditStatusProfile.c" 1
EditStatusProfile()
{
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	return 0;
}
# 6 "f:\\msi\\msi\\\\combined_MSI.c" 2

# 1 "EditStatusUZ.c" 1
EditStatusUZ()
{
	int indexAccount = 0;
	int countAccounts = 0;
	int numberStatus = 0;

	web_url("UserAccount",
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t460.inf",
		"Mode=HTML",
		"LAST");

	web_url("DisplaySnils_2",
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t461.inf",
		"Mode=HTML",
		"LAST");

	web_url("type_properties",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t462.inf",
		"Mode=HTML",
		"LAST");

	web_url("extended",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&limit=-1&order_by=asc(name)&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t463.inf",
		"Mode=HTML",
		"LAST");
	
	web_reg_save_param("accounts","LB=","RB=","Search=Body","LAST");

	web_url("users",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users?user-account-type-status=ACTIVE&status=ACTIVE&status=BLOCKED&offset=0&limit=40&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t464.inf",
		"Mode=HTML",
		"LAST");
	
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	lr_save_string("d0e7ec4b-ba4e-4316-92ab-a00c5054858c", "ID_Account");

	web_url("statuses_2",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/statuses?loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t465.inf",
		"Mode=HTML",
		"LAST");

	web_url("extended_2",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&offset=0&limit40&order_by=asc(name)&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t466.inf",
		"Mode=HTML",
		"LAST");
	
	 
	web_reg_save_param("UZ_DATA","LB=","RB=","Search=Body","LAST");
	web_url("openAccount",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_Account}?loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}",
		"Snapshot=t467.inf",
		"Mode=HTML",
		"LAST");

	lr_eval_json("Buffer={UZ_DATA}", "JsonObject=json_UZ_DATA", "LAST");

	lr_json_get_values("JsonObject=json_UZ_DATA",
                       "ValueParam=ID_AccountTypeId",
                       "QueryString=$.accountTypeId",
                       "LAST");
	
	lr_json_get_values("JsonObject=json_UZ_DATA",
                       "ValueParam=versionAccount",
                       "QueryString=$.version",
                       "LAST");
	
	lr_json_get_values("JsonObject=json_UZ_DATA",
                       "ValueParam=statusAccount",
                       "QueryString=$.status",
                       "LAST");


	web_url("DisplaySnils_3",
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}",
		"Snapshot=t468.inf",
		"Mode=HTML",
		"LAST");

	web_url("UserAccount_2",
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}",
		"Snapshot=t469.inf",
		"Mode=HTML",
		"LAST");

	web_url("openAccountTypeId",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{ID_AccountTypeId}?loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}",
		"Snapshot=t470.inf",
		"Mode=HTML",
		"LAST");
	
	 

	web_url("openAccount_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_Account}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}/change/status", 
		"Snapshot=t471.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("openAccount_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_Account}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}/change/status", 
		"Snapshot=t472.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("openAccountTypeId_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{ID_AccountTypeId}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}/change/status", 
		"Snapshot=t473.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("UserAccount_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}/change/status", 
		"Snapshot=t474.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("DisplaySnils_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}/change/status", 
		"Snapshot=t475.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("openAccountTypeId_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{ID_AccountTypeId}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}/change/status", 
		"Snapshot=t476.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_add_header("Origin", "http://192.168.109.240");
	
	if (strcmp(lr_eval_string("{statusAccount}"),"ACTIVE") == 0)
	{
		lr_save_string("", "email");
		srand(_time32(0));
		numberStatus = rand() % 2;
		if (numberStatus == 0)
			lr_save_string("BLOCKED", "statusAccount");
		else
			lr_save_string("DELETED", "statusAccount");
	}
	else
	{
		lr_save_string("ACTIVE", "statusAccount");
	}

	web_custom_request("changestatus", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_Account}/changestatus?loaderKey=default", 
		"Method=PATCH", 
		"Resource=0", 
		"RecContentType=application/json",
		"EncType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}/change/status", 
		"Snapshot=t477.inf", 
		"Mode=HTML", 
		"Body={\"status\":\"{statusAccount}\",\"statusChangeReason\":null,\"version\":{versionAccount}}", 
		"LAST");

	web_url("openAccount_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_Account}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}", 
		"Snapshot=t478.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("DisplaySnils_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}", 
		"Snapshot=t479.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("UserAccount_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}", 
		"Snapshot=t480.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("openAccountTypeId_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{ID_AccountTypeId}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_Account}", 
		"Snapshot=t481.inf", 
		"Mode=HTML", 
		"LAST");
	
	return 0;
}
# 7 "f:\\msi\\msi\\\\combined_MSI.c" 2

# 1 "EditPassword.c" 1
EditPassword()
{
	int typeUZ = 0;
	int indexUZ = 0;
	int countUZ = 0;

	web_url("UserAccount",
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t500.inf",
		"Mode=HTML",
		"LAST");

	web_url("DisplaySnils_2",
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t501.inf",
		"Mode=HTML",
		"LAST");

	web_url("type_properties",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t502.inf",
		"Mode=HTML",
		"LAST");

	srand(_time32(0));
	typeUZ = rand() % 3;
	switch(typeUZ)
	{
		case 0:
			lr_save_string("AGENT", "typeUZ");
			break;
		case 1:
			lr_save_string("INTERNAL", "typeUZ");
			break;
		case 2:
			lr_save_string("SYSTEM", "typeUZ");
			break;
	}
	
 
	
	web_url("users",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users?type={typeUZ}&user-account-type-status=ACTIVE&offset=0&limit=40&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts",
		"Snapshot=t503.inf",
		"Mode=HTML",
		"LAST");
	
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	lr_save_string("d0e7ec4b-ba4e-4316-92ab-a00c5054858c", "ID_UZ");
	
	 
	web_reg_save_param("UZ_EditPasswordDATA","LB=","RB=","Search=Body","LAST");
	web_url("openAccount",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ}?loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}",
		"Snapshot=t504.inf",
		"Mode=HTML",
		"LAST");

	lr_eval_json("Buffer={UZ_EditPasswordDATA}", "JsonObject=json_UZ_EditPasswordDATA", "LAST");

	lr_json_get_values("JsonObject=json_UZ_EditPasswordDATA",
                       "ValueParam=ID_UZTypeId",
                       "QueryString=$.accountTypeId",
                       "LAST");

	web_url("DisplaySnils_3",
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}",
		"Snapshot=t505.inf",
		"Mode=HTML",
		"LAST");

	web_url("UserAccount_2",
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}",
		"Snapshot=t506.inf",
		"Mode=HTML",
		"LAST");

	web_url("openAccountTypeId",
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{ID_UZTypeId}?loaderKey=default",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}",
		"Snapshot=t507.inf",
		"Mode=HTML",
		"LAST");
	
	web_url("type_properties_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}/change/password", 
		"Snapshot=t482.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("openUZ", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}/change/password", 
		"Snapshot=t483.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("DisplaySnils_6", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}/change/password", 
		"Snapshot=t484.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("UserAccount_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}/change/password", 
		"Snapshot=t485.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("openUZ_1", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}/change/password", 
		"Snapshot=t486.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("openUZAccountTypeId", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{ID_UZTypeId}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}/change/password", 
		"Snapshot=t487.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("openUZAccountTypeId_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{ID_UZTypeId}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}/change/password", 
		"Snapshot=t488.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/internal/platform-admin-ui/themes/default/fonts/ptsans/ptsansitalic.woff2", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/themes/default/fonts/ptsans.css", "ENDITEM",
		"LAST");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 


	web_add_header("Origin", "http://192.168.109.240");

	generatePassword();
	lr_output_message("&&&&&&&&&&");
	lr_output_message(lr_eval_string("{newPassword}"));
	lr_output_message("&&&&&&&&&&");	
	
	 
	web_custom_request("password", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ}/password?loaderKey=default", 
		"Method=PATCH", 
		"Resource=0", 
		"EncType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}/change/password", 
		"Snapshot=t490.inf", 
		"Mode=HTML", 
		"BodyBinary={\"password\":\"{newPassword}\"}", 
		"LAST");

	web_url("openUZ_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}", 
		"Snapshot=t491.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("DisplaySnils_7", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}", 
		"Snapshot=t492.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("UserAccount_6", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}", 
		"Snapshot=t493.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("openUZAccountTypeId_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{ID_UZTypeId}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ}", 
		"Snapshot=t494.inf", 
		"Mode=HTML", 
		"LAST");

	return 0;
}

void generatePassword()
{
    int length = 8 + rand() % 8;
    int i = 0;
    char password[25] = {0};
    srand(_time32(0));
	
    for(i = 0; i < length; i ++){
        password[i] = 'a' + rand() % 25;
    }

    lr_save_string(password, "newPassword");
}
# 8 "f:\\msi\\msi\\\\combined_MSI.c" 2

# 1 "ChangeOGRN.c" 1
ChangeOGRN()
{
	int ogrn;

	web_url("userprofiles", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles?status=ACTIVE&offset=0&limit=10&order_by=asc(snils)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t595.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("UserAccount", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t596.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("DisplaySnils_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t597.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("type_properties", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/type_properties?sysname=PasswordStrength&limit=-1&loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t598.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("extended", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&limit=-1&order_by=asc(name)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t599.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("users", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users?type=COMMON&user-account-type-status=ACTIVE&status=ACTIVE&status=BLOCKED&status=REGISTERED&status=PASSWORD_RESET_REQUIRED&offset=0&limit=10&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t604.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("extended_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&offset=0&limit=10&order_by=asc(name)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t601.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("statuses_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/statuses?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts", 
		"Snapshot=t602.inf", 
		"Mode=HTML", 
		"LAST");
	
	 
	lr_save_string("f88f3bcd-6134-4432-8fae-0dba254b0ada", "ID_UZ_ChangeOGRN");
	
	web_reg_save_param("UZChangeOGRN","LB=","RB=","Search=Body","LAST");

	web_url("ChangeOGRN", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ_ChangeOGRN}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t605.inf", 
		"Mode=HTML", 
		"LAST");
	
	lr_eval_json("Buffer={UZChangeOGRN}", "JsonObject=json_UZChangeOGRN", "LAST");
	
	lr_json_get_values("JsonObject=json_UZChangeOGRN",
                       "ValueParam=UZAccountTypeId_ChangeOGRN",
                       "QueryString=$.accountTypeId",
                       "LAST");
	
	lr_json_get_values("JsonObject=json_UZChangeOGRN",
                       "ValueParam=UZuserProfileId",
                       "QueryString=$.userProfileId",
                       "LAST");
	
	lr_json_get_values("JsonObject=json_UZChangeOGRN",
                       "ValueParam=UZChangeOGRNversion",
                       "QueryString=$.version",
                       "LAST");

	web_url("UZuserProfileId", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{UZuserProfileId}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t606.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("DisplaySnils_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t607.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("UserAccount_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t608.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("accountTypeId_ChangeOGRN", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{UZAccountTypeId_ChangeOGRN}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t609.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("ChangeOGRN_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ_ChangeOGRN}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}/edit-attributes", 
		"Snapshot=t610.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("ChangeOGRN_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ_ChangeOGRN}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}/edit-attributes", 
		"Snapshot=t611.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("UZuserProfileId_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{UZuserProfileId}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}/edit-attributes", 
		"Snapshot=t612.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("DisplaySnils_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}/edit-attributes", 
		"Snapshot=t613.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("UserAccount_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}/edit-attributes", 
		"Snapshot=t614.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("accountTypeId_ChangeOGRN_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{UZAccountTypeId_ChangeOGRN}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}/edit-attributes", 
		"Snapshot=t615.inf", 
		"Mode=HTML", 
		"LAST");
	
	srand(_time32(0));
	
	ogrn = rand() % 100000000;
	
	lr_save_int(ogrn, "OGRN");

	web_add_header("Origin", "http://192.168.109.240");

	web_custom_request("ChangeOGRN_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ_ChangeOGRN}?loaderKey=default", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"EncType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}/edit-attributes", 
		"Snapshot=t616.inf", 
		"Mode=HTML", 
		"Body={\"version\":{UZChangeOGRNversion},\"userAccountAttributes\":[{\"name\":\"OGRN\",\"key\":\"OGRN\",\"value\":\"{OGRN}\"}]}", 
		"LAST");

	web_url("ChangeOGRN_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/{ID_UZ_ChangeOGRN}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t617.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("UZuserProfileId_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/userprofiles/{UZuserProfileId}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t618.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("DisplaySnils_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t619.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("UserAccount_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/UserAccount?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t620.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("accountTypeId_ChangeOGRN_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/{UZAccountTypeId_ChangeOGRN}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/accounts/{ID_UZ_ChangeOGRN}", 
		"Snapshot=t621.inf", 
		"Mode=HTML", 
		"LAST");

	return 0;
}
# 9 "f:\\msi\\msi\\\\combined_MSI.c" 2

# 1 "ChangeAttrSecurity.c" 1
ChangeAttrSecurity()
{
	int countSecAttr = 0;
	int valueAttr = 0;
	int numberAttr = 0;

	web_url("SecurityGroup",
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/SecurityGroup?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups", 
		"Snapshot=t639.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("securitygroups", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups?offset=0&limit=10&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups", 
		"Snapshot=t640.inf", 
		"Mode=HTML", 
		"LAST");
	
	 
	lr_save_string("c9e900aa-36ac-4570-8db7-f3953b3c1049", "ID_AttrSecurity");

	web_url("statuses_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/statuses?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}", 
		"Snapshot=t641.inf", 
		"Mode=HTML", 
		"LAST");

	web_reg_save_param("securitygroup","LB=","RB=","Search=Body","LAST");
	
	web_url("ID_AttrSecurity", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups/{ID_AttrSecurity}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}", 
		"Snapshot=t642.inf", 
		"Mode=HTML", 
		"LAST");
	
	lr_eval_json("Buffer={securitygroup}", "JsonObject=json_securitygroup", "LAST");
	
	lr_json_get_values("JsonObject=json_securitygroup",
                       "ValueParam=nameAttrSec",
                       "QueryString=$.name",
                       "LAST");
	
	lr_json_get_values("JsonObject=json_securitygroup",
                       "ValueParam=descriptionAttrSec",
                       "QueryString=$.description",
                       "LAST");
	
	lr_json_get_values("JsonObject=json_securitygroup",
                       "ValueParam=versionAttrSec",
                       "QueryString=$.version",
                       "LAST");
	
	lr_json_get_values("JsonObject=json_securitygroup",
                       "ValueParam=crossSegmentMembershipAllowedAttrSec",
                       "QueryString=$.crossSegmentMembershipAllowed",
                       "LAST");
	
	countSecAttr = lr_json_get_values("JsonObject=json_securitygroup",
                       "ValueParam=countSecAttr",
                       "QueryString=$.securityGroupAttributes.[*].key",
                       "SelectAll=Yes",
                       "LAST");
	
	valueAttr = rand() % 100000;
	numberAttr = rand() % countSecAttr;
	
	lr_save_int(valueAttr, "valueAttr");
	lr_save_int(numberAttr, "numberSecAttr");
	
	lr_json_set_values("JsonObject=json_securitygroup",
                   "Value={valueAttr}",
                   "QueryString=$.securityGroupAttributes.[{numberSecAttr}].value",
                   "LAST"); 
	
	lr_json_get_values("JsonObject=json_securitygroup",
                       "ValueParam=securityGroupAttributes",
                     	"QueryString=$.securityGroupAttributes",
						"LAST");

	web_url("DisplaySnils_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}", 
		"Snapshot=t643.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("extended", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/users/types/list/extended?status=ACTIVE&limit=-1&order_by=asc(name)&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}", 
		"Snapshot=t644.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("SecurityGroup_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/SecurityGroup?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}", 
		"Snapshot=t645.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("SecurityGroup_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/SecurityGroup?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}/edit?returnUrl=%2Faccess-control%2Fsecurity-groups%2F{ID_AttrSecurity}", 
		"Snapshot=t646.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("DisplaySnils_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}/edit?returnUrl=%2Faccess-control%2Fsecurity-groups%2F{ID_AttrSecurity}", 
		"Snapshot=t647.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("ID_AttrSecurity_2", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups/{ID_AttrSecurity}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}/edit?returnUrl=%2Faccess-control%2Fsecurity-groups%2F{ID_AttrSecurity}", 
		"Snapshot=t648.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("SecurityGroup_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/SecurityGroup?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}/edit?returnUrl=%2Faccess-control%2Fsecurity-groups%2F{ID_AttrSecurity}", 
		"Snapshot=t649.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("ID_AttrSecurity_3", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups/{ID_AttrSecurity}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}/edit?returnUrl=%2Faccess-control%2Fsecurity-groups%2F{ID_AttrSecurity}", 
		"Snapshot=t650.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("Origin", "http://192.168.109.240");

	web_custom_request("ID_AttrSecurity_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups/{ID_AttrSecurity}?loaderKey=default", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json",
		"EncType=application/json",
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}/edit?returnUrl=%2Faccess-control%2Fsecurity-groups%2F{ID_AttrSecurity}", 
		"Snapshot=t651.inf", 
		"Mode=HTML", 
		"Body={\"name\":\"{nameAttrSec}\",\"description\":\"{descriptionAttrSec}\",\"version\":{versionAttrSec},\"crossSegmentMembershipAllowed\":false,\"securityGroupAttributes\":{securityGroupAttributes}}", 
		"LAST");

	web_url("SecurityGroup_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/supplementary-attribute-refs/SecurityGroup?limit=-1&loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}", 
		"Snapshot=t652.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("DisplaySnils_4", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/systemsettings/GUI/DisplaySnils?loaderKey=none", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}", 
		"Snapshot=t653.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("ID_AttrSecurity_5", 
		"URL=http://192.168.109.240/internal/api/access-manager/api/securitygroups/{ID_AttrSecurity}?loaderKey=default", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/security-groups/{ID_AttrSecurity}", 
		"Snapshot=t654.inf", 
		"Mode=HTML", 
		"LAST");

	return 0;
}
# 10 "f:\\msi\\msi\\\\combined_MSI.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	web_url("logout", 
		"URL=http://192.168.109.240/internal/authutil/auth/logout?returnUrl=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.240/internal/platform-admin-ui/access-control/profiles", 
		"Snapshot=t271.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("Origin", "http://192.168.109.240");
	
	web_custom_request("logout_2", 
		"URL=http://192.168.109.240/internal/auth/authenticator/api/internalauth/logout?loaderKey=default", 
		"Method=DELETE", 
		"Resource=0", 
		"Referer=http://192.168.109.240/internal/authutil/auth/logout?returnUrl=http:%2F%2F192.168.109.240%2Finternal%2Fplatform-admin-ui%2Faccess-control%2Fprofiles", 
		"Snapshot=t272.inf", 
		"Mode=HTML", 
		"LAST");
	
	return 0;
}
# 11 "f:\\msi\\msi\\\\combined_MSI.c" 2

