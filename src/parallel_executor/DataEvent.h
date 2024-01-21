#ifndef DATAEVENT_H
#define DATAEVENT_H

#include "DeviceEvent.h"
#include "DeviceA.h"
#include "DeviceB.h"
class DataEvent : public DeviceEvent
{
public:
  DataEvent(std::shared_ptr<Device> device) : DeviceEvent(device) {};
  std::string toString() const override {
    return device->getDataAsString() + " from " + device->getName();
  };
};

#endif
