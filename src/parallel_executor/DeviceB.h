#ifndef DEVICEB_H
#define DEVICEB_H

#include "Device.h"

class DeviceB : public Device
{
public:
  std::string getName() override;
  std::string getDataAsString() override {
    std::this_thread::sleep_for(std::chrono::seconds(5));
    std::stringstream ss;
    ss << "Data from " << getName() << ": " << rand() % 199 << " " << rand() % 199 << " " << rand() % 199;
    return ss.str();
  };
};

#endif
