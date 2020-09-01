set(THIS library2)

set(SOURCES
	library2.cpp
)
set(HEADERS
	library2.hpp
)

add_library(${THIS} STATIC
	${SOURCES}
	${HEADERS}
)


add_subdirectory(tests)
