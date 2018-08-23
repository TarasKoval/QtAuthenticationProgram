cmake_minimum_required(VERSION 3.5.1)
project(AuthenticationProgram)

set(CMAKE_CXX_STANDARD 11)

if (${CMAKE_CXX_COMPILER_ID} MATCHES "GNU" OR ${CMAKE_CXX_COMPILER_ID} MATCHES "Clang")
    set(CMAKE_CXX_FLAGS "-Wall -Wextra")
    set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g3")
    set(CMAKE_CXX_FLAGS_RELEASE "-O3")
    set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O3 -g3")
    set(CMAKE_CXX_FLAGS_MINSIZEREL "-Os")
endif ()

find_package(Qt5Widgets REQUIRED)

include_directories(
        include
        ${CMAKE_CURRENT_BINARY_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}
)

set(SOURCES
        ${PROJECT_SOURCE_DIR}/src/main.cpp
        ${PROJECT_SOURCE_DIR}/src/functions.cpp
        ${PROJECT_SOURCE_DIR}/src/inputwindow.cpp
        ${PROJECT_SOURCE_DIR}/src/mylineedit.cpp
        ${PROJECT_SOURCE_DIR}/src/startwindow.cpp
        ${PROJECT_SOURCE_DIR}/src/workwithfiles.cpp
        )

set(HEADERS
        ${PROJECT_SOURCE_DIR}/include/inputwindow.h
        ${PROJECT_SOURCE_DIR}/include/mylineedit.h
        ${PROJECT_SOURCE_DIR}/include/startwindow.h
        )

qt5_wrap_cpp(HEADERS_MOC ${HEADERS})

add_executable(AuthenticationProgram ${SOURCES} ${HEADERS_MOC})

target_link_libraries(AuthenticationProgram Qt5::Widgets)
