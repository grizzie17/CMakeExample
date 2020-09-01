
set(THIS ${CMAKE_PROJECT_NAME})

set(SOURCES
	main.cpp
)


add_executable(${THIS} ${SOURCES})

add_dependencies(${THIS} library1 library2)

target_link_libraries(${THIS}
	library1
	library2
)
