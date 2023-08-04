#ifndef STARTEDEVENT_H
#define STARTEDEVENT_H

#include "DeviceEvent.h"

class StartedEvent : public DeviceEvent
{
public:
  StartedEvent(std::shared_ptr<Device> device);
  std::string toString() const override;
};

#endif
