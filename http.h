/***************************************************************
 *File : http.h 
 *Auth : leo 
 *Date : 20170520
 *Mail : 846863428@qq.com 
***************************************************************/  
#ifndef _MY_HTTP_H  
#define _MY_HTTP_H 

#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <pthread.h> 
#include <assert.h> 
#include <unistd.h>
#include <sys/stat.h> 
#include <fcntl.h>
#include <stdint.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/socket.h> 
#include <net/if.h>
#include <sys/ioctl.h>
  
#define MY_HTTP_DEFAULT_PORT 80 

char * http_get(const char *url);  
char * http_post(const char *url,const unsigned char * post_str ,long leng, char * filename);
  
#endif 
