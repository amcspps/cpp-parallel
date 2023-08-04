#ifndef DEVICEA_H
#define DEVICEA_H

#include "Device.h"

class DeviceA : public Device
{
public:
  std::string getName() override;
  std::string getDataAsString() override;
};

#endif
