#ifndef WORKDONEEVENT_H
#define WORKDONEEVENT_H

#include "DeviceEvent.h"

class WorkDoneEvent : public DeviceEvent
{
public:
  WorkDoneEvent(std::shared_ptr<Device> device) :DeviceEvent(device) {};
  std::string toString() const override {
    return "Work done!";
  };
};

#endif
