#ifndef DEVICEA_H
#define DEVICEA_H

#include "Device.h"

class DeviceA : public Device
{
public:
  std::string getName() override {
    return "Device A";
  };
  std::string getDataAsString() override {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::stringstream ss;
    ss << "Data from " << getName() << ": " << rand() % 501;
    return ss.str();
  };
};

#endif
