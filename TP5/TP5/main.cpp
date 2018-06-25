#include <nana/gui.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/listbox.hpp>
#include <nana/gui/widgets/button.hpp>
#include "MyLibScore.h"
#include <iostream>
using namespace std;
using namespace nana;
int main() {
//MyLibScore myLibScore;
Puntaje* p1 = new Puntaje;
	p1->nombre = "Peter";
	p1->puntos = 10000;
	//myLibScore.RegistrandoPuntaje(p1);

	Puntaje* p2 = new Puntaje;
	p2->nombre = "Jack";
	p2->puntos = 8000;
	//myLibScore.RegistrandoPuntaje(p2);

	Puntaje* p3 = new Puntaje;
	p3->nombre = "Adam";
	p3->puntos = 6500;
	//myLibScore.RegistrandoPuntaje(p3);

	Puntaje* p4 = new Puntaje;
	p4->nombre = "Frank";
	p4->puntos = 2500;
	//myLibScore.RegistrandoPuntaje(p3);

	Puntaje* p5 = new Puntaje;
	p5->nombre = "Jesse";
	p5->puntos = 1500;
	//myLibScore.RegistrandoPuntaje(p3);

	//vector<Puntaje>vec1 = myLibScore.Highscore();

	form fm;
	listbox lb(fm, nana::rectangle(10, 10, 280, 180));

	lb.append_header("Name", 150);
	lb.append_header("Score", 120);

	label lab{ fm, "<bold blue size=12>HighScore</>" };
	lab.format(true);
	button btn{ fm, "Quit" };
	btn.events().click([&fm] {
		fm.close();
	});

	/*for (vector<Puntaje>::iterator it = vec1.begin(); it != vec1.end(); ++it) {

		lb.at(0).append({ (*it).nombre, to_string(static_cast<int>((*it).puntos)) });
	}*/
	
	lb.at(0).append({ (*p1).nombre, to_string(static_cast<int>((*p1).puntos)) });
	lb.at(0).append({ (*p2).nombre, to_string(static_cast<int>((*p2).puntos)) });
	lb.at(0).append({ (*p3).nombre, to_string(static_cast<int>((*p3).puntos)) });
	lb.at(0).append({ (*p4).nombre, to_string(static_cast<int>((*p4).puntos)) });
	lb.at(0).append({ (*p5).nombre, to_string(static_cast<int>((*p5).puntos)) });
	
	place plc(fm);
	plc.div("<vert abc arrange=[20,130,20] gap=10>git");
	plc.field("abc") << lab << lb << btn;	//These buttons are children of fm.
	plc.collocate();
	fm.show();
	exec();
}
//mostrado por pantalla no tiene que ser manejado por la lib