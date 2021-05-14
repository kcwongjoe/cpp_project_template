cmake_minimum_required(VERSION 3.5)

#******Project******
project(project_name LANGUAGES CXX VERSION 1.0.1)

#******Setting******
set(CMAKE_INCLUDE_CURRENT_DIR ON)

#  C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++lastest")

# Check static library or executable
if(NOT ${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})
    set(PROJECT_AS_STATIC_LIBRARY TRUE)
endif()

#******Source******
if (${PROJECT_AS_STATIC_LIBRARY}) 
    # ---Static library---

    #******Source******
    add_subdirectory("./src")

else()
    # ---Build example and test---

    #******Source******
    add_subdirectory("./src")

    #******Example******
    add_subdirectory("./examples")

    #******Test******

    include(CTest)
    if(BUILD_TESTING)
        enable_testing()
        add_subdirectory("./test")
    endif()

endif()