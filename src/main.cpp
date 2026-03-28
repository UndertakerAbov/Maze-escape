cmake_minimum_required(VERSION 3.20)
project(MazeMaster)

# ПРИНУДИТЕЛЬНО указываем путь к vcpkg (проверь, что папка именно там)
set(CMAKE_TOOLCHAIN_FILE "C:/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "" FORCE)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ищем SFML
find_package(SFML COMPONENTS Graphics Window System REQUIRED)

add_executable(MazeApp src/main.cpp)

# Связываем с библиотеками
target_link_libraries(MazeApp SFML::Graphics SFML::Window SFML::System)