cmake_minimum_required(VERSION 3.22.0)

project(Minesweeping VERSION 0.0.1)

add_executable(${CMAKE_PROJECT_NAME} "${PROJECT_SOURCE_DIR}/Sources/main.cpp")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_custom_command(
	TARGET ${CMAKE_PROJECT_NAME}
	POST_BUILD
	COMMAND start ${PROJECT_SOURCE_DIR}/AfterBuild.bat
)