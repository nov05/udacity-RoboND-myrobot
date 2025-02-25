cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

find_package(gazebo REQUIRED)
# find_package(ignition-gazebo6 QUIET) ## Try to find ignition-gazebo6 

include_directories(${GAZEBO_INCLUDE_DIRS})
link_directories(${GAZEBO_LIBRARY_DIRS})
list(APPEND CMAKE_CXX_FLAGS "${GAZEBO_CXX_FLAGS}")

add_library(hello SHARED script/hello.cpp)
target_link_libraries(hello ${GAZEBO_LIBRARIES})

add_library(welcome_message SHARED script/welcome_message.cpp)
target_link_libraries(welcome_message ${GAZEBO_LIBRARIES})