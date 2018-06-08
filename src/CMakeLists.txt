project(VSDocks)

add_library(${PROJECT_NAME} SHARED "")
target_compile_definitions(${PROJECT_NAME} PUBLIC -D${PROJECT_NAME}_Export)

target_sources(${PROJECT_NAME} PRIVATE
	VSDockManager.h
	VSDockWidget.h
	Export.h
)

target_sources(${PROJECT_NAME} PRIVATE
	VSDockManager.cpp
	VSDockWidget.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE
	Qt5::Core
	Qt5::Gui
	Qt5::Widgets
)