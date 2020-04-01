cmake_minimum_required( VERSION 3.0 )
project( TP4 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG_CPPUTEST REQUIRED cpputest )
pkg_check_modules(GTKMM gtkmm-3.0 )
include_directories( ${PKG_CPPUTEST_INCLUDE_DIRS} )
include_directories(${GTKMM_INCLUDE_DIRS})



# programme principal
add_executable( Res src/main.cpp 
src/FigureGeometrique.cpp src/Ligne.cpp src/PolygoneRegulier.cpp src/ViewerFigures src/ZoneDessin.cpp)
target_link_libraries( Res ${PKG_LIBRARIES})

## programme de test
#add_executable( main_test.out  main_test.cpp
#   src/Produit.cpp 
##  src/Produit_teste.cpp )
##target_link_libraries( main_test.out ${PKG_CPPUTEST_LIBRARIES} )
