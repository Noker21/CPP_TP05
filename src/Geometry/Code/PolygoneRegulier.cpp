#include "../headers/PolygoneRegulier.hpp"
#include <cmath>

PolygoneRegulier::PolygoneRegulier(const Couleur & couleur,const Point & centre,int rayon,int nbCotes):FigureGeometrique(couleur){
	
	_nbPoints=nbCotes;
	_points=new Point[nbCotes];
	for(int i=0;i<nbCotes;i++){
		Point p;
		float alpha=i* M_PI *2/nbCotes;
		p._x=rayon * cos(alpha)+ centre._x;
		p._y=rayon * sin(alpha) + centre._y;
		_points[i]=p;
	}
}
PolygoneRegulier::~PolygoneRegulier(){};

void PolygoneRegulier::afficher( const Cairo::RefPtr<Cairo::Context> & context) const{
	
	context->set_source_rgb(getCouleur()._r,getCouleur()._g,getCouleur()._b);
	context->set_line_width(5.0);
	
	for(int i=0;i<_nbPoints;i++){
	context->line_to(_points[i]._x,_points[i]._y);
	}
	context->line_to(_points[0]._x,_points[0]._y);
	context->stroke();
}

int  PolygoneRegulier::getNbPoints() const{
	return _nbPoints;
}

const 	Point & PolygoneRegulier::getPoint(int indice) const{	return _points[indice];		}
