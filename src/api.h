#ifndef TAUDEM_API_H
#define TAUDEM_API_H

////DLL DEF
#if defined(_WIN32) || defined(_WIN64)
#ifdef TAUDEM_DLL_EXPORTS
#define TAUDEM_DLL_API __declspec(dllexport) 
#else
#define TAUDEM_DLL_API __declspec(dllimport) 
#endif
#else
#define TAUDEM_DLL_API
#endif

#endif
