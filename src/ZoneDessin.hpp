#ifndef ZONEDESSIN_HPP_
#define ZONEDESSIN_HPP_
#include <gtkmm.h>
#include <vector>
#include "FigureGeometrique.hpp"
#include "PolygoneRegulier.hpp"
#include "Ligne.hpp"
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
