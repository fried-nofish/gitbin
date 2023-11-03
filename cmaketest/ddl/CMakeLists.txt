cmake_minimum_required(VERSION 3.0)


project(ddl VERSION 1.0.2)

configure_file(B.h.in B.h)

SET(SRC_LIST A.cpp)

add_executable(${PROJECT_NAME} ${SRC_LIST})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})
