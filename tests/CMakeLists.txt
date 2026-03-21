add_executable(OrderBookTest OrderBookTest.cpp)
target_link_libraries(OrderBookTest GTest::gtest_main OrderBook)

include(GoogleTest)
gtest_discover_tests(OrderBookTest)