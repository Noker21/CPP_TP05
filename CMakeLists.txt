cmake_minimum_required( VERSION 3.0 )
project( TP5 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )

find_package( PkgConfig REQUIRED )

pkg_check_modules(GTKMM gtkmm-3.0 )

include_directories(${GTKMM_INCLUDE_DIRS})


add_executable( 
	Res 
	src/main.cpp 
	src/Geometry/Code/FigureGeometrique.cpp 
	src/Geometry/Code/Ligne.cpp 
	src/Geometry/Code/PolygoneRegulier.cpp 
	src/Interface/Code/ViewerFigures 
	src/Interface/Code/ZoneDessin.cpp
)

target_link_libraries( Res ${GTKMM_LIBRARIES})
