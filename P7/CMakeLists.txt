cmake_minimum_required(VERSION 3.17)
project(CAL-TP_classes)

# Build the Google tests
set(GOOGLETEST_PATH lib/googletest-master)
add_subdirectory(${GOOGLETEST_PATH})


file(GLOB TP5_FILES CONFIGURE_DEPENDS
        "TP5/*.cpp"
        )
add_executable(TP5
        TP5/ex1.cpp
        TP5/ex2.cpp
        TP5/ex3.cpp
        ${TP5_FILES}
        )

target_link_libraries(TP5 gtest_main gmock_main)