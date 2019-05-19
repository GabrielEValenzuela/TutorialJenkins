CMAKE_MINIMUM_REQUIRED (VERSION 3.0)

PROJECT(firstCWithJenkins)

SET(SOURCES
	src/main.cpp
	src/Hello.cpp
	)

add_executable(${PROJECT_NAME} ${SOURCES})
TARGET_INCLUDE_DIRECTORIES(firstCWithJenkins
    PRIVATE
    ${PROJECT_SOURCE_DIR}/include    
)
