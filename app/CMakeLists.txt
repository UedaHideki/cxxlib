cmake_minimum_required(VERSION 3.10)

project(myapp CXX)

add_executable(myapp
  app.cxx
)

include_directories(
  ../msg
  ../calc
)

link_directories( 
  ../msg
  ../calc
)

target_link_libraries(myapp
  msg
  calc
)


