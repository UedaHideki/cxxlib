cmake_minimum_required(VERSION 3.10)

project(myapp CXX)

include_directories(
  ../msg
  ../calc
)

link_directories( 
  ../msg
  ../calc
)

add_executable(myapp
  app.cxx
)

target_link_libraries(myapp
  libmsg.so
  calc
)



