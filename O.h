#ifndef O_H
#define O_H

namespace Opened_Closed {
	class Payment {
	public:
		virtual void Pay() {
			cout << "You payed with cash" << endl;
		}
	};
	class PaymentWithCard : public Payment {
	public:
		void Pay() override{
			cout << "You payed with card" << endl;
		}
	};
	class PaymentWithPhone : public PaymentWithCard {
	public:
		void Pay() override{
			cout << "You payed with phone" << endl;
		}
	};
}
#endif // !O_H
