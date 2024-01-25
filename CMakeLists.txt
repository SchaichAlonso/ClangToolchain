cmake_minimum_required(VERSION 3.27)

project(HelloClang
	VERSION 0.0.1
	DESCRIPTION "Use MSVC's Clang to build a package"
	HOMEPAGE_URL "https://github.com/SchaichAlonso/HelloClang"
	LANGUAGES CXX
)

find_package(SQLite3 REQUIRED)

add_executable(HelloClang)
target_sources(HelloClang PRIVATE HelloClang.cpp)
target_link_libraries(HelloClang PRIVATE SQLite::SQLite3)