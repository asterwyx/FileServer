add_library(
    httplib SHARED
    "include/httplib.hpp"
)
# 下面这一句在这里是必要的，因为使用的是.h结尾的头文件，CMake会不知道这个是C还是C++，在连接的时候就会报错
set_target_properties(httplib PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(httplib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
