#ifndef VUSER_WEBSOCKET_BUFFER_HEADER
#define VUSER_WEBSOCKET_BUFFER_HEADER

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive0[] = "{ \"operation\": \"ping\", \"server-interval-sec\": 60, \"message\": \"\" }";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	// (record-time: 65 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive1[] = "{ \"operation\": \"ping\", \"server-interval-sec\": 60, \"message\": \"\" }";
long WebSocketReceiveLen1   = sizeof(WebSocketReceive1) - 1;	// (record-time: 65 bytes)

#endif
