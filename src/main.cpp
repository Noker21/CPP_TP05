#include "ViewerFigures.hpp"
#include "ZoneDessin.hpp"
#include <iostream>
/*#include "Ligne.hpp"
#include "PolygoneRegulier.hpp"
#include <iostream>
#include <vector>
*	Couleur rouge {0,1,0};
	Point p0{100,200};
	Point p1{100,200};
	//PolygoneRegulier P(rouge,p0,50,5);
	//P.afficher();
	//l.afficher();
	
	std::vector<FigureGeometrique*> figure;
	figure.push_back(new PolygoneRegulier (rouge,p0,50,5));
	figure.push_back(new Ligne (rouge,p0,p1));
		
		for(FigureGeometrique *f :figure){
			f->afficher();
			}
		for(FigureGeometrique *f :figure){
		delete f;
			}

*/


int main(int argc,char** argv){

	
	
	ViewerFigures vf(argc,argv);
	//d.on_draw(GdkEventExpose* event);
	vf.run();
	return 0;
}

