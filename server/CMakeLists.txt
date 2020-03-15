add_executable(server src/server.cpp)

find_package(Threads REQUIRED)

target_link_libraries(server PRIVATE Threads::Threads)
target_link_libraries(server PRIVATE httplib)