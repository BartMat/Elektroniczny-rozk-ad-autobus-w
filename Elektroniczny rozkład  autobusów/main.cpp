#include "Autobus.h"
#include "Baza.h"
#include "Czas.h"
#include "Przystanek.h"
#include "Trasa.h"
#include "json.hpp"
#include <fstream>
using namespace std;
using json = nlohmann::json;

int main()
{
	//Przystanek p1(1,"przystanek1");
	//Przystanek p2(2, "przystanek2");
	//Przystanek p3(3, "przystanek3");
	//Przystanek p4(4, "przystanek4");
	//Autobus a1(100, "przystanek 5");
	//Autobus a2(200, "przystanek 6");
	//Autobus a3(300, "przystanek 7");
	//Autobus a4(400, "przystanek 8");
	//
	//Czas c1(8, 20);
	//Czas c2(8, 40);
	//Czas c3(9, 20);
	//Czas c4(9, 40);
	//Czas c5(10, 20);
	//Czas c6(10, 40);
	//Czas c7(11, 20);
	//vector<Czas> vc1{ c1,c2,c3,c4,c5,c6,c7 };
	//p1.dodaj_odjazd(a1, vc1);
	//p1.dodaj_odjazd(a2, vc1);
	//p1.dodaj_odjazd(a3, vc1);
	//p1.dodaj_odjazd(a4, vc1);
	//p2.dodaj_odjazd(a2, vc1);
	//p3.dodaj_odjazd(a3, vc1);
	//p4.dodaj_odjazd(a4, vc1);


	//p1.wypisz();
	//cout << endl;
	//cout << a1<<endl<<endl;

	//vector<Przystanek> vp1{ p1,p2,p3,p4 };

	//Trasa t1(a1.get_nr(),a1.get_kier(), vp1);

	//t1.wypisz();

	//json j;

	//ifstream plik("json1.json");
	//plik >> j;

	//cout<<j.dump(4);

	//json o3;
	//o3["przystanek2"] = { "8:20",
	//	  "8:40",
	//	  "9:20",
	//	  "9:40",
	//	  "10:20",
	//	  "10:40" };
	//json o4;
	//o4["przystanek3"] = { "8:20",
	//	  "8:40",
	//	  "9:20",
	//	  "9:40",
	//	  "10:20",
	//	  "10:40" };

	//json o1;
	//o1["autobus"] = 100;
	//o1["kierunek"] = "przystanek5";
	//o1["przystanki"] = vs;

	//vector<string> vs = { "przystanek5","przystanek6","przystanek7","przystanek8" };
	//json o2;
	//o2["autobus"] = 200;
	//o2["kierunek"] = "przystanek8";
	//o2["przystanki"] = vs;

	//json a;
	//a.push_back(o1);
	//a.push_back(o2);
	//vector<string> vs2;
	//std::cout << "********************* iteracja 1 ******************" << std::endl;
	//for (const auto& person : a)
	//{
	//	std::cout << person["autobus"] << " -> " << person["przystanki"] << std::endl;
	//	for (auto& x : person["przystanki"])
	//	{
	//		vs2.push_back(x);
	//	}
	//}
	//for (auto& x : vs2)
	//{
	//	cout << x << endl;
	//}

	//json jp1;

	//jp1["przystanek"] = "przystanek1";
	//jp1["autobus"] = 100;
	//jp1["godziny"]= { "8:20",
	//	  "8:40",
	//	  "9:20",
	//	  "9:40",
	//	  "10:20",
	//	  "10:40" };

	//ofstream vec;
	//vec.open("vec.json");
	//vec << a.dump(4);
	//vec.close();

	//ifstream  vec2("vec.json");
	//json aa;
	//vec2 >> aa;
	//vector<string> vs3;
	//for (const auto& person : aa)
	//{
	//	std::cout << person["autobus"] << " -> " << person["przystanki"] << std::endl;
	//	for (auto& x : person["przystanki"])
	//	{
	//		vs3.push_back(x);
	//	}
	//}
	//for (auto& x : vs3)
	//{
	//	cout << x << endl;
	//}

	//json q1, q2, q3, q4, q5, q6, q7, q8, q9,q10,q11;
	//vector<string> qv1= { "8:20",
	//	  "8:40",
	//	  "9:20",
	//	  "9:40",
	//	  "10:20",
	//	  "10:40" };

	//q1["przystanek1"] = qv1;
	//q1["odjazdy"] = qv1;
	//q2["przystanek2"] = qv1;
	//q3["przystanek3"] = qv1;

	//q4["autobus"] = 100;
	//q4["kierunek"] = "przystanek3";
	//vector<json> qv2 = { q1,q2,q3 };
	//q4["przystanki"] = qv2;

	//q5["autobus"] = 200;
	//q5["kierunek"] = "przystanek4";
	//q5["przystanki"] = qv2;

	//q6.push_back(q4);
	//q6.push_back(q5);

	//cout << q6.dump(4);

	//ofstream ok;
	//ok.open("chybaok.json");
	//ok << q6.dump(4);
	//ok.close();

	//for (const auto& person : q6)
	//{
	//	std::cout << person["autobus"] << " -> " << person["przystanki"] << std::endl;
	//}
	//q9["id"] = "1.1";
	//q9["autobus"] = 100;
	//q9["kierunek"] = "przystanek4";
	//q9["przystanek"] = "przystanek1";
	//q9["odjazdy"] = qv1;

	//q10["id"] = "1.2";
	//q10["autobus"] = 100;
	//q10["kierunek"] = "przystanek4";
	//q10["przystanek"] = "przystanek2";
	//q10["odjazdy"] = qv1;

	//q11.push_back(q9);
	//q11.push_back(q10);
	//cout<<q11.dump(4);

	ifstream we("chybaok.json");
	json j;
	we >> j;
	we.close();


	for (const auto& x : j)
	{
		std::cout << x["autobus"] << " -> " << x["przystanki"]["przystanek2"].size() << std::endl;
		
	}


	return 0;
}