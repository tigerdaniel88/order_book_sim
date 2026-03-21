#pragma once

#include <cstdint>

enum class UpdateType : uint32_t {
  NEW,
  MODIFY,
  CANCEL,
};
enum class Side : uint32_t {
  BUY,
  SELL,
};

struct NewOrder {
  uint32_t order_id;
  Side side;
  int32_t price;
  uint32_t qty;
};

struct ModifyOrder {
  uint32_t order_id;
  int32_t price;
  uint32_t qty;
};

struct CancelOrder {
  uint32_t order_id;
};

struct OrderMessage {
  UpdateType type;
  char symbol[8];
  union {
    NewOrder n;
    ModifyOrder m;
    CancelOrder c;
  };
};