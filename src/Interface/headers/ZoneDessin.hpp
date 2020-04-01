#ifndef ZONEDESSIN_HPP_
#define ZONEDESSIN_HPP_

#include <gtkmm.h>
#include <vector>

#include "../../Geometry/headers/FigureGeometrique.hpp"
#include "../../Geometry/headers/Ligne.hpp"
#include "../../Geometry/headers/PolygoneRegulier.hpp"


class ZoneDessin:public Gtk::DrawingArea{

	private :
	std::vector<FigureGeometrique*> _figures;
	public:
	ZoneDessin();
	~ZoneDessin();
	protected:
	bool on_draw(const Cairo::RefPtr<Cairo::Context> & context);
	bool gererClic(GdkEventButton* event);
	};

#endif
