
#include <sstream>
#include <thread>
#include <chrono>
#ifndef DEVICEA_H
#define DEVICEA_H

#include "Device.h"

class DeviceA : public Device
{
public:
  std::string getName() override {
    return "A";
  };
  std::string getDataAsString() override {
    std::stringstream ss;
    ss << "string from a length <= 500";
    return ss.str();
  };
};

#endif
