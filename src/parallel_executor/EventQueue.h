#ifndef EVENTQUEUE_H
#define EVENTQUEUE_H

#include "Event.h"
#include "DataEvent.h"
#include <memory>
#include <chrono>
#include <queue>
#include <mutex>
#include <condition_variable>

class EventQueue
{
public:
  void push(const std::shared_ptr<const Event> & event) {
    std::lock_guard<std::mutex> lock(mutex_);
    queue_.push(event);
    cv_.notify_one();
  };
  std::shared_ptr<const Event> pop(const std::chrono::seconds & duration) {
    std::unique_lock<std::mutex> lock(mutex_);

    if (cv_.wait_for(lock, duration, [this] { return !queue_.empty(); })) {
      auto event = queue_.front();
      queue_.pop();
      return event;
    }
    return nullptr;
  };

private:
  std::queue<std::shared_ptr<const Event>> queue_;
  std::mutex mutex_;
  std::condition_variable cv_;
};

#endif
