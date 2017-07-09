#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(NULL));
	int flag_menu = 1;
	while (flag_menu != 0) {
		std::cout <<"\n"<< "Dz # 4" << "\n" << "Vvedite nomer zadani9" << "\n" << "1-pervoe" << "\n" << "2-Vtoroe" << "\n" << "3-tretie" << "\n" << "4-4etvertoe" << "\n" << "0-Vuhod" << "\n";
		std::cin >> flag_menu;
		if (flag_menu == 0) {
			break;
		}
		if (flag_menu == 1) {
			std::cout << "Zadanie 1:" << "\n";
			static long int summa = 0;
			static int per_a = 0;
			std::cout << "Vvedite 4islo ot 0 do 500= ";
			std::cin >> per_a;
			if (per_a >= 0 && per_a <= 500) {
				for (int i = per_a; i <= 500; i++) {
					summa += i;
				}
				std::cout << "\n" << "Summa rafna= " << summa;
			}
			else {
				std::cout << "\n" << "Vvedenoe 4islo bulo nekorektno" << "\n";
				summa = 0;
			}
			summa = 0;

		}
		if (flag_menu == 2) {
			std::cout << "\n" << "Zadaca # 2:" << "\n";
			std::cout << "Vvedite 4islo x= ";
			static int x = 0;
			static int y = 0;
			std::cin >> x;
			std::cout << "\n" << "Vvedite stepen y= ";
			std::cin >> y;
			static long int sum = 0;
			std::cout << "\n" << "4islo x v stepeni y budet rafno= ";
			sum = x;
			for (int i = 1; i <= y; i++)
			{
				sum = sum *x;
			}
			std::cout << sum << "\n";
			
		}
		if (flag_menu == 3) {
			std::cout << "\n" << "Zadaca nomer 3:" << "\n";
			std::cout << "\n" << "Vvedite 4islo ot 1 do 20 =";
			static int per_a = 0;
			static long long int sum = 0;
			std::cin >> per_a;
			sum = per_a;
			if (per_a >= 1 && per_a <= 20) {
				for (int i = per_a+1; i <= 20; i++) {
					sum = sum*i;
				}
				std::cout << "\n" << "proizveenue rafno =" << sum;
			}
			else {
				std::cout << "\n" << "Vvedenoe 4islo nekorrektno";
			}

		}
		if (flag_menu == 4) {

			std::cout << "\n" << "Zadaca nomer 4eturi:" << "\n";
			int a[8][8] = { 0 };
			std::cout << "\n" << "Pole vugladit vvide massiva gde 0-pusto a 1- zahtrihovano" << "\n";
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 8; j++) {
					std::cout << a[i][j] << "  ";
				}
				std::cout << "\n";
			}
			std::cout << "\n" << "Vuberete rehim zapolneni9 pol9: 1- vrucnuu 2- automat 3- po zadaniu" << "\n";
			static int flag_zd = 0;
			std::cin >> flag_zd;
			if (flag_zd == 1) {
				for (int i = 0; i < 8; i++) {
					for (int j = 0; j < 8; j++) {
						std::cout << "\n" << "Vvedite element pol9" << "a[" << i << "]" << "[" << j << "]= ";
						std::cin >> a[i][j];
					}
				}
				std::cout << "\n" << "Pole vugladit vvide massiva gde 0-pusto a 1- zahtrihovano" << "\n";
				for (int i = 0; i < 8; i++) {
					for (int j = 0; j < 8; j++) {
						std::cout << a[i][j] << "  ";
					}
					std::cout << "\n";
				}


			}
			if (flag_zd == 2) {
				for (int i = 0; i < 8; i++) {
					for (int j = 0; j < 8; j++) {
						a[i][j] = 0 + rand() % 1; // dl9 testa vremenno
					}
				}
				std::cout << "\n" << "Pole vugladit vvide massiva gde 0-pusto a 1- zahtrihovano" << "\n";
				for (int i = 0; i < 8; i++) {
					for (int j = 0; j < 8; j++) {
						std::cout << a[i][j] << "  ";
					}
					std::cout << "\n";
				}


			}
			if (flag_zd == 3) {
				a[0][2] = 1;
				a[0][4] = 1;
				a[1][1] = 1;
				a[1][2] = 1;
				a[1][4] = 1;
				a[1][5] = 1;
				a[2][0] = 1;
				a[2][1] = 1;
				a[2][2] = 1;
				a[2][7] = 1;
				a[3][0] = 1;
				a[3][1] = 1;
				a[3][6] = 1;
				a[3][7] = 1;
				a[4][7] = 1;
				a[5][6] = 1;
				a[5][7] = 1;
				a[6][2] = 1;
				a[7][1] = 1;
				a[7][3] = 1;
				a[7][5] = 1;
				a[7][7] = 1;
				std::cout << "\n" << "Pole vugladit vvide massiva gde 0-pusto a 1- zahtrihovano" << "\n";
				for (int i = 0; i < 8; i++) {
					for (int j = 0; j < 8; j++) {
						std::cout << a[i][j] << "  ";
					}
					std::cout << "\n";
				}

			}

			static int x_1 = 0;
			static int x_2 = 0;
			static int y_1 = 0;
			static int y_2 = 0;
			static int P = 0;
			//algoritm poistka
			static int P_per = 0;
			static int x_per1 = 0;
			static int y_per1 = 0;
			static int x_per2 = 0;
			static int y_per2 = 0;
			static int ind = 0;
			static int ID = 1;
			for (int i = 0; i < 8; i++) { // prohod po massivy
				for (int j = 0; j < 8; j++) {
					P = 0;
					if (a[i][j] == 0) {
						x_1 = i; //ystanovka verhnego verhini
						y_1 = j;
						x_2 = 7;
						y_2 = 7;
						for (int i2 = x_1; i2 < 8; i2++) {  //opredelenie nihniiu verhinu
							if (a[i2][j] == 1) {
								x_2 = i2 - 1;
								break;
							}
							
						
						}
						for (int y2 = y_1; y2 < 8; y2++) {
							if (a[i][y2] == 1) {
								y_2 = y2 - 1;
								break;
							}
							
						}
						for (int i3 = x_1; i3 <= x_2; i3++) { // otse4enie plohadi po zahrtihovanux kletkam esle oni est
							for (int y3 = y_1; y3 <= y_2; y3++) {
								if (a[i3][y3] == 1) {
									
									if (y3 <= y_2) {   //budet otsekatb po Y-greky
										y_2 = y3 - 1;
										ID = 10;
										break;
									}
								}
							}
							if (ID == 10) {
								break;
							}
						}
						ID = 0;
						for (int i3 = x_1; i3 <= x_2; i3++) {
							for (int y3 = y_1; y3 <= y_2; y3++) {
								if (a[i3][y3] == 1) {

									if (i3 <= x_2) {  //budet otsekatb po X-su
										x_2 = i3 - 1;
										ID = 10;
										break;
									}
								}
							}
							if (ID == 10) {
								break;
							}
						}
						ID = 0;
						//opredelenie plohadi
						for (int i4 = x_1; i4 <= x_2; i4++) {
							for (int y4 = y_1; y4 <= y_2; y4++) {
								P = P + 1;
							}
						}
						if (P_per <= P) { // poisk bolhego pr9moygolnika 
							P_per = P;
							x_per1 = x_1;
							x_per2 = x_2;
							y_per1 = y_1;
							y_per2 = y_2;
						}
						else {
							P = 0;
						}

					}

					
				}
			}



			std::cout << "\n" << "V dannom pole pr9moygolnik s kordinatomi= " << x_per1+1 << "," << y_per1+1 << " i " << x_per2+1 << "," << y_per2+1 << "i plohadui=" << P_per;
			P_per = 0;
		

		}
	}
	return 0;
}