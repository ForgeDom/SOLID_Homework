#ifndef L_H
#define L_H

namespace LiskovSubstitution {
	class Hominidae abstract {
	public:
		virtual void speak() = 0;
		virtual void eat() = 0;
	};

	class Avstalopitek : public Hominidae {
	public:
		virtual void speak() override {
			cout << "Avstalopitek is speaking" << endl;
		}

		virtual void eat() override {
			cout << "Avstalopitek is eating" << endl;
		}

		void fix() {
			cout << "Avstalopitek is fixing something" << endl;
		}
	};

	class Pitecntrop : public Hominidae {
	public:
		virtual void speak() override {
			cout << "Pitecntrop is speaking" << endl;
		}

		virtual void eat() override {
			cout << "Pitecntrop is eating" << endl;
		}

		void sew() {
			cout << "Pitecntrop is sewing something" << endl;
		}
	};

	class Inheritance {
	public:
		static void GetDailyAbility(Hominidae* hominidae) {
			hominidae->speak();
			hominidae->eat();
		}
	};
}

#endif // !L_H
