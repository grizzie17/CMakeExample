
set(BASENAME library2)
set(THIS ${BASENAME}_test)

file(GLOB TEST_SOURCES LIST_DIRECTORIES false *.cpp)
list(REMOVE_ITEM TEST_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

set(SOURCES ${TEST_SOURCES})

foreach(file ${SOURCES})
	set(name)
	get_filename_component(name ${file} NAME_WE)
	set(tname "${BASENAME}_${name}")
	add_executable("${tname}"
		${file}
		main.cpp
	)
	add_dependencies("${tname}" ${BASENAME})
	target_link_libraries("${tname}" ${BASENAME} gtest)
	add_test(NAME ${name} COMMAND ${tname})
endforeach()
