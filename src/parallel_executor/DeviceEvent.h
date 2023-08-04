#ifndef DEVICEEVENT_H
#define DEVICEEVENT_H

#include "Event.h"
#include "Device.h"

#include <memory>

class DeviceEvent : public Event
{
public:
  /*!
   * \brief Конструктор. Необходим для заполнения информации об устройстве.
  */
  DeviceEvent(std::shared_ptr<Device> device);

protected:
  std::shared_ptr<Device> device;
};

#endif
