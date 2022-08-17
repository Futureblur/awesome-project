cmake_minimum_required(VERSION 3.16)
project(logger)

set(LoggerSources Logger.h Logger.cpp)

# Create static library using the specified source files
add_library(logger SHARED ${LoggerSources})

if(MSVC)
add_compile_definitions(EXPORT_DLL)
endif()