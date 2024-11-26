#ifndef LOG_H_
#define LOG_H_
#include <sqLite3>

//usual log
class logger {       // The class
  public:             // Access specifier
    logUserData(uint8_t id, char time, char date);
    addUserData(char* name, char* designation);
};

#endif /*LOG_H_*/
