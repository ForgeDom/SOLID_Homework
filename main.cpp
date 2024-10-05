#include "Solid.h"

using namespace SingleResponsibility;
using namespace Opened_Closed;
using namespace LiskovSubstitution;
using namespace InterfaceSegregation;
using namespace DependencyInversion;

enum SOLID {
	S,
	O,
	L,
	I,
	D
};
int main() {
	int n;
	cout << "Enter the method(0 - S,1 - O,2 - L,3 - I,4 - D): ";
	cin >> n;

	SOLID solid = static_cast<SOLID>(n); 
	switch (solid)
	{
	case S:
	{
		cout << "SOLID::S" << endl;
		Computer *computer = new Computer();
		//+
		computer->Starting();
		computer->StartingPrograms();
		//-
		computer->MakingCoffe();
		break;
	}
	case O:
	{
		cout << "SOLID::O" << endl;
		Payment payment;
		PaymentWithCard paymentwithcard;
		PaymentWithPhone paymentwithphone;
		payment.Pay();
		paymentwithcard.Pay();
		paymentwithphone.Pay();
		break;
	}
	case L:
	{
		cout << "SOLID::L" << endl;
		Avstalopitek australopithecus;
		Pitecntrop pithecanthropus;

		Hominidae* hominid1 = &australopithecus;
		Hominidae* hominid2 = &pithecanthropus;

		Inheritance::GetDailyAbility(hominid1);
		Inheritance::GetDailyAbility(hominid2);

		australopithecus.fix();
		pithecanthropus.sew();
	}
		break;
	case I:
	{
		cout << "SOLID::I" << endl;
		Developer developer;
		GraphicDesigner designer;
		ProjectManager manager;

		developer.code();
		designer.design();
		manager.manageProject();
	}
		break;
	case D:
	{
		cout << "SOLID::D" << endl;
		Keyboard keyboard;
		Mouse mouse;

		NewComputer computer1(&keyboard);
		computer1.connectDevice();

		NewComputer computer2(&mouse);
		computer2.connectDevice();
	}
		break;
	default:
		break;
	}
	return 0;
}