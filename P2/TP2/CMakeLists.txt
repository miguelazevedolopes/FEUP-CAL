# Add the source files of each exercise
file(GLOB CPP_FILES CONFIGURE_DEPENDS "*.cpp" "*/*.cpp")

add_executable(TP2
        main.cpp
        ${CPP_FILES} ../TP2/exercises.h)

target_link_libraries(TP2 gtest_main gmock_main)