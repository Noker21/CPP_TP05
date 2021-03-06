#ifndef FIGUREGEOMETRIQUE_HPP_
#define FIGUREGEOMETRIQUE_HPP_

#include "../../Struct/struct.hpp"
#include <gtkmm.h>

class FigureGeometrique{
	
		protected:
		Couleur _couleur;
		public:
		FigureGeometrique( const Couleur & couleur);
		virtual ~FigureGeometrique();
		const Couleur & getCouleur() const;
		virtual void afficher(const Cairo::RefPtr<Cairo::Context> & context)const=0;

};







#endif
