#ifndef POLYGONEREGULIER_HPP_
#define POLYGONEREGULIER_HPP_

#include "FigureGeometrique.hpp"

#include "../../Struct/struct.hpp"

class PolygoneRegulier:public FigureGeometrique{
	private:
	int _nbPoints;
	Point *_points;
	public:
	PolygoneRegulier(const Couleur & couleur,const Point & centre,int rayon,int nbCotes);
	~PolygoneRegulier();
	void afficher(const Cairo::RefPtr<Cairo::Context> & context) const override;
	int getNbPoints() const;
	const Point & getPoint(int indice) const;

};

#endif
