project(VSDocks)

#############################################################
#
#	Find Qt
#
find_package(Qt5 CONFIG REQUIRED Core Gui Widgets)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

add_library(${PROJECT_NAME} SHARED "") 
target_compile_definitions(${PROJECT_NAME} PRIVATE -D${PROJECT_NAME}_Export)

target_sources(${PROJECT_NAME} PRIVATE
	VSDockManager.h
	VSDockWidget.h
	Export.h
)

target_sources(${PROJECT_NAME} PRIVATE
	VSDockManager.cpp
	VSDockWidget.cpp
)

target_link_libraries(${PROJECT_NAME} PUBLIC
	Qt5::Core
	Qt5::Gui
	Qt5::Widgets
)
