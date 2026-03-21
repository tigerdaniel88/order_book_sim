add_library(MarketDataTypes STATIC)
target_sources(MarketDataTypes PRIVATE
  MarketDataTypes.hpp
)
set_target_properties(MarketDataTypes PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(MarketDataTypes PUBLIC .)

add_library(OrderBook STATIC)
target_sources(OrderBook PRIVATE
  OrderBook.hpp
)
set_target_properties(OrderBook PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(OrderBook PUBLIC .)



add_executable(main main.cpp)
target_link_libraries(main PRIVATE OrderBook MarketDataTypes)


# Ensure compiler doesn't complain about two 'main' functions later
# target_compile_definitions(order_book_sim_lib PRIVATE EXCLUDE_MAIN)