#include <lpc214x.h>

#define PLOCK 0x00000400
#define THRE (1<<5) 
#define NEW_LINE 0x0a 

void SetupPLL0(void);

void InitUART0(void);

void U0WriteData(char data);
