
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/../../emf4cpp)
link_directories(/opt/emf4cpp/lib)

set(CMAKE_CXX_FLAGS "-Wall -std=c++11")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops")

add_executable(test-out_ptr test-out_ptr.cpp)
target_link_libraries(test-out_ptr emf4cpp-ecore emf4cpp-ecorecpp)

add_executable(test-EList test-EList.cpp)
target_link_libraries(test-EList emf4cpp-ecore emf4cpp-ecorecpp)

add_executable(test-Reflective test-Reflective.cpp)
target_link_libraries(test-Reflective emf4cpp-ecore emf4cpp-ecorecpp)
