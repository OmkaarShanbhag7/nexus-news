cmake_minimum_required(VERSION 3.20)
project(nexus_news LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)
FetchContent_Declare(
    pybind11
    GIT_REPOSITORY https://github.com/pybind/pybind11.git
    GIT_TAG        v2.12.0
)

FetchContent_MakeAvailable(pybind11)

pybind11_add_module(nexus_news src/bindings.cpp)

target_include_directories(nexus_news PRIVATE ${PROJECT_SOURCE_DIR}/include)


