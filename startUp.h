#ifndef _STARTUP_H_
#define _STARTUP_H_
#include "common.h"

SOCKET webserverStartUp();

int loadConfigs();

struct requestData{
    char recvbuf[DEFAULT_BUFLEN];
    SOCKET clientSocket;
};

#endif // _STARTUP_H_
