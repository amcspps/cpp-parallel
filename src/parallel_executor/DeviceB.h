#ifndef DEVICEB_H
#define DEVICEB_H

#include "Device.h"

class DeviceB : public Device
{
public:
  std::string getName() override {
    return "B";
  };
  std::string getDataAsString() override {
    std::stringstream ss;
    ss << rand() % 199 << " " << rand() % 199 << " " << rand() % 199;
    return ss.str();
  };
};

#endif
