#include <iostream>

using namespace std;


int main()
{
    cout << endl;
    int a_sirina;
    int a_visina;
    cout << "A sirina: ";
    cin >> a_sirina;
    cout << "A visina: ";
    cin >> a_visina;
    int b_sirina;
    int b_visina;
    cout << "B sirina: ";
    cin >> b_sirina;
    cout << "B visina: ";
    cin >> b_visina;
	int x_sirina;
	int x_visina;

	x_sirina = a_sirina;
	x_visina = a_visina;

	do {

		if (x_sirina < b_sirina) {
			x_sirina ++;
		}
		
		else if (x_sirina > b_sirina) {
			x_sirina--;
		}

		else {
			if (x_visina < b_visina)
			{
				x_visina++;
			}
			else if (x_visina > b_visina)
			{
				x_visina--;
			}
			else
			{
				x_visina = x_visina;
			}
		}

		for (int visina = 1; visina <= 20; visina++)
		 {
			 for (int sirina = 1; sirina <= 40; sirina++)
			 {
					if (visina == a_visina && sirina == a_sirina)
					 {
						cout << "A";
					 }
					else if (visina == b_visina && sirina == b_sirina)
					 {
						cout << "B";
					 }
					else if (visina == x_visina && sirina == x_sirina) 
					{
						cout << "X";
					}
           
					else
					 {
						cout << "-";
					 }
          
			}
        cout << endl; 

		}

		
		system("CLS");


	} while ((x_visina != b_visina) || (x_sirina != b_sirina));

 




    return 0;
}