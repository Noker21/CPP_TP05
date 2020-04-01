#include "ZoneDessin.hpp"
	 Couleur rouge {1,0,0};
	Point p0{100,200};
	Point p1{200,400};
ZoneDessin::ZoneDessin(){
	
	_figures.push_back(new PolygoneRegulier (rouge,p0,50,5));
	_figures.push_back(new PolygoneRegulier (rouge,p0,30,4));
		//_figures.push_back(new Ligne (rouge,p0,p1));
	}
	
ZoneDessin::~ZoneDessin(){
	for(FigureGeometrique *f :_figures){
		delete f;}
}
bool ZoneDessin::on_draw(const Cairo::RefPtr<Cairo::Context> & context){
		
	for(FigureGeometrique *f:_figures){
		f->afficher(context);
	}
	return true;
}

