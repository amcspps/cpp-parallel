#ifndef EVENTQUEUE_H
#define EVENTQUEUE_H

#include "Event.h"

#include <memory>
#include <chrono>

#include <queue>

#include <mutex>
#include <condition_variable>

class EventQueue
{
public:
  void push(const std::shared_ptr<const Event> & event);
  std::shared_ptr<const Event> pop(const std::chrono::seconds & duration);

private:
  std::queue<std::shared_ptr<const Event>> queue;
  std::mutex mutex;
  std::condition_variable cv;
};

#endif
