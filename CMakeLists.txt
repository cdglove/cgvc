# 
# Copyright (c) Chris Glover, 2019
# 
# Distributed under the Boost Software License, Version 1.0. (See accompanying
# file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
# 
cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
project(cgvc VERSION 0.1 LANGUAGES C CXX)

find_package( Boost REQUIRED
  filesystem
  program_options)

add_library(cgvc 
  src/encoder.cpp
  src/decoder.cpp
)
target_link_libraries(cgvc PRIVATE Boost::boost)
target_include_directories(cgvc PUBLIC include)

add_executable(cgved src/main.cpp)
target_link_libraries(cgved PRIVATE Boost::program_options cgvc)
target_include_directories(cgved PRIVATE include)
#add_subdirectory(test)