cmake_minimum_required(VERSION 3.17)
project(CAL-TP_classes)

# Build the Google tests
set(GOOGLETEST_PATH lib/googletest-master)
add_subdirectory(${GOOGLETEST_PATH})


file(GLOB TP6_FILES CONFIGURE_DEPENDS
        "TP6/*.cpp"
        )
add_executable(TP6
        TP6/ex1.cpp
        TP6/ex2.cpp
        TP6/ex3.cpp
        TP6/ex4.cpp
        TP6/TestAux.cpp
        ${TP6_FILES}
        )

target_link_libraries(TP6 gtest_main gmock_main)