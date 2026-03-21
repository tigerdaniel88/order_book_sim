#include <iostream>
#include <string>

#include "MarketDataTypes.hpp"
#include "OrderBook.hpp"

int main() {
  OrderBook book;
  book.OnOrderMessage({.type = UpdateType::NEW,
                       .symbol = "AAPL",
                       .n = {.order_id = 5501, .price = 15210, .qty = 500}});
  return 0;
}