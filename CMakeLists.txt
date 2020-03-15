cmake_minimum_required(VERSION 3.0.0)
project(CloudStorageServer VERSION 1.0.1)

add_subdirectory(lib)
add_subdirectory(server)

# target_link_libraries(CloudStorageClient Threads::Threads)