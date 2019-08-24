#ifndef _XSPWIRE_H_
#define _XSPWIRE_H_

#define SP_NAME 	"SP"
#define SP_MAJOR	1
#define SP_MINOR	2

/************ Version 1 **********/

/* Constants */



/* Requests */

#define X_XSPQueryVersion		0
#define X_XSPSetTSCalibration		1
#define X_XSPSetTSRawMode		2
#define X_XSPRegisterDSPArea	 	3
#define X_XSPCancelDSPArea		4
#define X_XSPSetPixelDoubling           5
#define X_XSPSetThumbPressure		6
#define XSPNumberRequests		7

/* Events */

#define X_XSPTSRaw		0
#define X_XSPDSPStopped		1

#define XSPNumberEvents		2

/* Errors */

#define XSPNumberErrors		0


#endif /* _XSPWIRE_H_ */

