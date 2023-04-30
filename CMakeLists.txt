cmake_minimum_required(VERSION 3.21)
cmake_policy(SET CMP0048 NEW)
project(OpenCV_Demo)

include(FetchContent)

set(CMAKE_CXX_STANDARD 11)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        703bd9caab50b139428cea1aaff9974ebee5742e # release-1.10.0 
)

FetchContent_Declare(
  opencv
  GIT_REPOSITORY https://github.com/opencv/opencv.git
  GIT_TAG        4.7.0
)

FetchContent_MakeAvailable(googletest opencv)
find_package(OpenCV REQUIRED)

# Link the OpenCV libraries to the executable
add_executable(
  main 
  main.cpp
)

target_link_libraries(main PUBLIC
  gtest 
  gmock
  ${OpenCV_LIBS} 
)

target_include_directories(main PUBLIC ${OpenCV_INCLUDE_DIRS})