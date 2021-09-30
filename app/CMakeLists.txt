add_library(PIDlibrary SHARED PID.cpp)
add_executable(shell-app main.cpp)
target_link_libraries(shell-app PIDlibrary)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
