cmake_minimum_required(VERSION 3.13)
project(lab5_refactoring)

set(CMAKE_CXX_STANDARD 11)

add_executable(lab5 src/main.cpp
        src/Customer.cpp src/Customer.h
        src/Movie.cpp src/Movie.h
        src/Rental.h src/Rental.cpp
        src/PriceCode.h
        src/Childrens.h src/Childrens.cpp
        src/NewRelease.h src/NewRelease.cpp
        src/Regular.h src/Regular.cpp src/Rentals.cpp src/Rentals.h)


include(DownloadProject.cmake)
download_project(PROJ                googletest
        GIT_REPOSITORY      https://github.com/google/googletest.git
        GIT_TAG             master
        ${UPDATE_DISCONNECTED_IF_AVAILABLE}
        )


# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})

# When using CMake 2.8.11 or later, header path dependencies
# are automatically added to the gtest and gmock targets.
# For earlier CMake versions, we have to explicitly add the
# required directories to the header search path ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
    include_directories("${gtest_SOURCE_DIR}/include"
            "${gmock_SOURCE_DIR}/include")
endif()

# Trivial example using gtest and gmock
add_executable(lab5-test src/Customer.cpp src/Customer.h src/Movie.cpp src/Movie.h src/Rental.h test/CustomerTest.cpp test/MovieTest.cpp test/RentalTest.cpp
        src/PriceCode.h
        src/Rental.cpp
        src/Childrens.h src/Childrens.cpp
        src/NewRelease.h src/NewRelease.cpp
        src/Regular.h src/Regular.cpp src/Rentals.cpp src/Rentals.h)

target_link_libraries(lab5-test gtest gmock_main)