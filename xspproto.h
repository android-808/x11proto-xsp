#ifndef _XSPPROTO_H_
#define _XSPPROTO_H_

#define XSP_VERSION_MAJOR   1
#define XSP_VERSION_MINOR   2

#define XSP_NAME    "XSP"


/******** Version 1 *********/

typedef struct {
	CARD8   reqType;
	CARD8   xspReqType;
	CARD16  length B16;
	CARD8   majorVersion;
	CARD8   pad;
	CARD16  minorVersion B16;
} xXSPQueryVersionReq;
#define sz_xXSPQueryVersionReq 8

typedef struct {
	BYTE    type;
	CARD8   majorVersion;
	CARD16  sequenceNumber B16;
	CARD32  length B32;
	CARD16  minorVersion B16;
	CARD16  pad0 B16;
	CARD32  pad1 B32;
	CARD32  pad2 B32;
	CARD32  pad3 B32;
	CARD32  pad4 B32;
	CARD32  pad5 B32;
} xXSPQueryVersionReply;
#define sz_xXSPQueryVersionReply 32




typedef struct {
	CARD8	reqType;
	CARD8	xspReqType;
	CARD16	length B16;
	CARD32	calconst1 B32;
	CARD32	calconst2 B32;
	CARD32	calconst3 B32;
	CARD32	calconst4 B32;
	CARD32	calconst5 B32;
	CARD32	calconst6 B32;
	CARD32	calconst7 B32;
} xXSPSetTSCalibrationReq;
#define sz_xXSPSetTSCalibrationReq 32

typedef struct {
	BYTE	type;
	BYTE	pad0;
	CARD16	sequenceNumber B16;
	CARD32	status B32;
	CARD32	pad1 B32;
	CARD32	pad2 B32;
	CARD32	pad3 B32;
	CARD32	pad4 B32;
	CARD32	pad5 B32;
	CARD32	pad6 B32;
} xXSPSetTSCalibrationReply;
#define sz_xXSPSetTSCalibrationReply 32




typedef struct {
	CARD8	reqType;
	CARD8	xspReqType;
	CARD16	length B16;
	CARD16	on B16;
	CARD16	pad B16;
} xXSPSetTSRawModeReq;
#define sz_xXSPSetTSRawModeReq 8

typedef struct {
	BYTE	type;   /* X_Reply */
	BYTE	pad1;
	CARD16	sequenceNumber B16;
	CARD32	status B32;
	CARD32	pad2 B32;
	CARD32	pad3 B32;
	CARD32	pad4 B32;
	CARD32	pad5 B32;
	CARD32	pad6 B32;
	CARD32	pad7 B32;
} xXSPSetTSRawModeReply;
#define sz_xXSPSetTSRawModeReply 32




typedef struct {
	CARD8	reqType;
	CARD8	xspReqType;
	CARD16	length B16;
	CARD32	screen_num B32;
	CARD16	x B16;
	CARD16	y B16;
	CARD16	width B16;
	CARD16	height B16;
} xXSPRegisterDSPAreaReq;
#define sz_xXSPRegisterDSPAreaReq 16

typedef struct {
	BYTE	type; /* X_Reply */
	BYTE	pad1;
	CARD16	sequenceNumber B16;
	CARD32	status B32;
	CARD32	pad2 B32;
	CARD32	pad3 B32;
	CARD32	pad4 B32;
	CARD32	pad5 B32;
	CARD32	pad6 B32;
	CARD32	pad7 B32;
} xXSPRegisterDSPAreaReply;
#define sz_xXSPRegisterDSPAreaReply 32




typedef struct {
	CARD8	reqType;
	CARD8	xspReqType;
	CARD16	length B16;
	CARD32	screen_num B32;
} xXSPCancelDSPAreaReq;
#define sz_xXSPCancelDSPAreaReq 8

typedef struct {
	BYTE	type;
	BYTE	pad1;
	CARD16	sequenceNumber B16;
	CARD32	status B32;
	CARD32	pad2 B32;
	CARD32	pad3 B32;
	CARD32	pad4 B32;
	CARD32	pad5 B32;
	CARD32	pad6 B32;
	CARD32	pad7 B32;
} xXSPCancelDSPAreaReply;
#define sz_xXSPCancelDSPAreaReply 32




typedef struct {
    CARD8   reqType;
    CARD8   xspReqType;
    CARD16  length B16;
    CARD32  screen_num B32;
    CARD32  state;
} xXSPSetPixelDoublingReq;
#define sz_xXSPSetPixelDoublingReq 12

typedef struct {
	BYTE	type;
	BYTE	pad1;
	CARD16	sequenceNumber B16;
	CARD32	status B32;
	CARD32	pad2 B32;
	CARD32	pad3 B32;
	CARD32	pad4 B32;
	CARD32	pad5 B32;
	CARD32	pad6 B32;
	CARD32	pad7 B32;
} xXSPSetPixelDoublingReply;
#define sz_xXSPSetPixelDoublingReply 32

typedef struct {
   CARD8   reqType;
   CARD8   xspReqType;
   CARD16  length B16;
   CARD32  screen_num B32;
   CARD32  pressure;
} xXSPSetThumbPressureReq;
#define sz_xXSPSetThumbPressureReq 12

/* Events */

typedef struct {
	CARD8	type;
	CARD8	pad1;
	CARD16	sequenceNumber B16;
	CARD16	x;
	CARD16	y;
	CARD16	pressure;
	CARD16	pad2;
} xXSPRawTouchscreenEvent;
#define sz_xXSPRawTouchscreenEvent 12

typedef struct {
	CARD8	type;
	CARD8	pad1;
	CARD16	sequenceNumber B16;
} xXSPDSPStoppedEvent;
#define sz_xXSPDSPStoppedEvent 4


#endif
