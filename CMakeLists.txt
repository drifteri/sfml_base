cmake_minimum_required(VERSION 2.8.12)

set(APP_NAME sfml_base)

project(${APP_NAME})

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(${APP_NAME}
  src/main.cpp
  )

set_property(TARGET ${APP_NAME} PROPERTY CXX_STANDARD 17)
target_link_libraries(${APP_NAME} ${CONAN_LIBS})
