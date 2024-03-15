#ifndef DEVICE_H
#define DEVICE_H

#include <string>

class Device
{
public:
  virtual ~Device() {}

  /*!
   * \brief Возвращает имя, соответствующее устройству.
   *
   * \return Строка. Имя устройства.
  */
  virtual std::string getName() = 0;

  /*!
   * \brief Симулирует чтение данных.
   *
   * \return Строка. Прочитанные данные.
  */
  virtual std::string getDataAsString() = 0;
};

#endif
