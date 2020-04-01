#include "../headers/Ligne.hpp"

Ligne::Ligne(const Couleur & couleur, Point & p0, Point & p1):FigureGeometrique(couleur),_p0(p0),_p1(p1){}

void Ligne::afficher(const Cairo::RefPtr<Cairo::Context> & context) const  {

	context->set_source_rgb(getCouleur()._r,getCouleur()._g,getCouleur()._b);
	context->set_line_width(5.0);

	
	context->move_to(_p0._x,_p0._y);
	context->line_to(_p1._x,_p1._y);
	context->stroke();
	
}

Ligne::~Ligne(){};

const Point & Ligne::getP0() const {	return _p0;	}

const Point & Ligne::getP1() const {	return _p1;	}		
		
