#ifndef VIEWERFIGURES_HPP_
#define VIEWERFIGURES_HPP_
#include "ZoneDessin.hpp"
#include <gtkmm.h>


class ViewerFigures{
	private:
	Gtk::Main _kit;
	Gtk::Window _window;
	ZoneDessin z;
	public:
	ViewerFigures(int argc,char ** argv);
	void run();
};
#endif
