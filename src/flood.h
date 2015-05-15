#ifndef FLOOD_H
#define FLOOD_H

#include "api.h"

TAUDEM_DLL_API int flood(char* demfile, char* felfile, char *fdrfile, int usefdr,bool verbose, 
						 bool is_4Point,bool use_mask,char *maskfile,int prow, int pcol, float epsilon);

#endif
