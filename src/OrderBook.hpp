#include "MarketDataTypes.hpp"

#include <map>
#include <stdexcept>
#include <unordered_map>


class OrderBook {
 public:
  void OnOrderMessage(const OrderMessage& msg) {
    switch (msg.type) {
      case UpdateType::NEW:
        break;
      case UpdateType::MODIFY:
        break;
      case UpdateType::CANCEL:
        break;
      default:
        throw std::runtime_error("Unknown UpdateType");
    }
  }

 private:
};
