#ifndef S_H
#define S_H

namespace SingleResponsibility {
	class Computer{
	private:
		int width;
		int height;
		int hrz;
	public:
		//+
		void Starting(){
			cout << "Starting computer" << endl;
		}
		void StartingPrograms() {
			
		}

		//-
		void MakingCoffe() {

		}
	};
	
}
#endif // !S_H
