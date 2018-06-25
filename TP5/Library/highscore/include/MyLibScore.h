#include<iostream>
using namespace std;
//#include<list>
#include<vector>
#include<string>
enum Level {
	infierno, volskava
};
struct Puntaje
{
	string nombre;
	int puntos,muertes,tiempoEnObjetivos,asistencias;
	Level level;
	};
 

class MyLibScore
{
public:
	
	//Puntaje*p;
	MyLibScore();
	void RegistrandoPuntaje(Puntaje* puntos);
	std::vector<Puntaje*> DevolverLista();
	std::vector<Puntaje*> Highscore();
	std::vector<Puntaje*> MayorMuertes();
	std::vector<Puntaje*> MayorAsistencias();
	std::vector<Puntaje*> MayorTiempoEnObjetivos();
	std::vector<Puntaje*> PuntajesXLevel();
	~MyLibScore();
	std::vector<Puntaje*>vec;

private:
	

};

