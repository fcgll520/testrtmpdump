#ifndef __RTMPDUMP_H
#define __RTMPDUMP_H

int __declspec(dllexport) RtmpDump(int argc, char ***argv,
								   CALLBACKVIDEOREPORT *pFunReport, 
								   struct VideoDLStatus *pstStatus);

#endif

