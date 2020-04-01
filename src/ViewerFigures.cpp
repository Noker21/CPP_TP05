#include "ViewerFigures.hpp"
#include <iostream>

ViewerFigures::ViewerFigures(int argc,char** argv): _kit(argc,argv), z(){
	if(argc > 1 ){
		_window.set_title(argv[1]);
		_window.set_default_size(atoi(argv[2]),atoi(argv[3]));
	}else{
		_window.set_title("Mon Dessin");
		_window.set_default_size(640,480);
	}
}	
void ViewerFigures::run(){
	
	_window.add(z);
	_window.show_all();
	_kit.run(_window);
	}
