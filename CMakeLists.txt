cmake_minimum_required(VERSION 3.20)

project(CppGuiPractice LANGUAGES CXX)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

set(LIB_DIR
    ${CMAKE_CURRENT_SOURCE_DIR}/ProgrammingPrinciplesAndPracticeUsingQt
)

add_library(StroustrupGUI STATIC
    ${LIB_DIR}/Window.cpp
    ${LIB_DIR}/Graph.cpp
    ${LIB_DIR}/GUI.cpp
    ${LIB_DIR}/Simple_window.cpp
    ${LIB_DIR}/Colormap.cpp

    ${LIB_DIR}/PPP/Window.h
    ${LIB_DIR}/PPP/Graph.h
    ${LIB_DIR}/PPP/GUI.h
    ${LIB_DIR}/PPP/Simple_window.h
    ${LIB_DIR}/PPP/Point.h
    ${LIB_DIR}/PPP/GUI_private.h
    ${LIB_DIR}/PPP/Image_private.h
)

target_include_directories(StroustrupGUI PUBLIC
    ${LIB_DIR}
)

target_link_libraries(StroustrupGUI PUBLIC
    Qt6::Widgets
)

add_executable(CppGuiPractice
    main.cpp
)

target_link_libraries(CppGuiPractice PRIVATE
    StroustrupGUI
)