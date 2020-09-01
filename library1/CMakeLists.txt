
set(THIS library1)

set(SOURCES
	library1.cpp
)
set(HEADERS
	library1.hpp
)

add_library(${THIS} STATIC
	${SOURCES}
	${HEADERS}
)


add_subdirectory(tests)
