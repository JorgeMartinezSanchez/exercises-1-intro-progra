
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
	s1 = "fury";
	s2 = "fog";
	s3 = "doggus";
	if (s1 < s2 && s1 < s3){
		cout<<s1;
	} else if (s2 < s1 && s2 < s3){
		cout<<s2;
	}
	else{
		cout<<s3;
	}
}

void exercise_2(double A, double B, double C) {
    cout<<"Resuelve la siguiente ecuacion cuadratica: Ax^2 + Bx + C"<<endl;
	cout<<"Introduzca los valores de A, B y C"<<endl;
	cin>>A>>B>>C;
	
	double discri = pow(B, 2) - 4 * A * C;
	if (discri < 0){
		cout<<"No hay numeros reales en la ecuacion";
	}
	else {
		double raiz1 = (-B + sqrt(discri)) / (2 * A);
		double raiz2 = (-B - sqrt(discri)) / (2 * A);
		
		cout<<"Los resultados son: "<<raiz1<<" y "<<raiz2<<".";
	}
}

void exercise_3(int a, int b) {
  cout<<"Introduzca el numerador: "; 
	cin>>a;
	cout<<"Introduzca el denominador: ";
	cin>>b;
	
	if (b != 0){
		int division = a / b;
		cout<<"El resultado de la division es "<<division<<".";
	}
	else {
		cout<<"No es posible dividir entre 0.";
	}
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
}

void exercise_5(char character) {

  	cout << "introduce un caracter ";
	  cin >> character;
	
	if (character>='a' && character<='z') {
		cout << "Esta es una letra minuscula";
	}
	else if (character>='A' && character<='Z') {
		cout << "ESTA ES UNA LETRA MAYUSCULA";
	}
	else {
		cout << "No es una letra del alfabeto.";
	}
	
}

void exercise_6(int day) {
    cout<<"Write a number of a day: ";
	cin>>day;
	
	switch(day){
		case 1:
			cout<<"It's monday";
			break;
		case 2:
			cout<<"It's thuesday";
			break;
		case 3:
			cout<<"It's wednesday";
			break;
		case 4:
			cout<<"It's thursday";
			break;
		case 5:
			cout<<"It's friday";
			break;
		case 6:
			cout<<"It's saturday";
			break;
		case 7:
			cout<<"It's sunday";
			break;
		default:
			cout<<"Not a day number";
			break;
	}
}

void exercise_7(double r) {
    cout<<"Introduce the radius to calcule the sphere area: ";
	cin>>r;
	
	if (r>=0){
		double sphere_area = 4 * M_PI * pow(r, 2);
		cout<<"The area of the sphere is "<<sphere_area<<".";
	}
	else{
		cout<<"Radius cannot be negative.";
	}
}

void exercise_8(long int seconds) {
	cin>>seconds;
	if(seconds>=0){
		long int minutes = seconds / 60;
		seconds = seconds % 60;
		long int hours = minutes / 60;
		minutes = minutes % 60;
		
		cout<<hours<<":"<<minutes<<":"<<seconds;
	}
	else{
		cout<<"seconds cannot be negative.";
	}
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
	cin>>s1>>s2>>s3>>s4>>s5;
	
	if (s1[0]==s5[0]){
		return "Hemos encontrado algo!";
	}
	else {
		return "Aun sin suerte.";
	}
}

int exercise_10(int a, int b) {
	if (a>0 && b>0){
		int resultado_ab, resultado_x2;
		resultado_ab = a + b;
		resultado_x2 = resultado_ab * 2;
	    return resultado_x2;
	}
	else {
		return 0;
	}
	
}

string exercise_11(int number) {
	if (number==11235813){
		return "Se encontro a fibonacci";
	}
	else {
		return "no es fibonacci";
	}
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
	if (age>=18){
		char position;
		cout<<"\nChoose a position:"<<endl;
		cout<<"\na) project coordinator."<<endl;
		cout<<"b) project director."<<endl;
		cout<<"c) senior project director."<<endl;
		cout<<"-----------------------------"<<endl;
		cout<<"\n"; cin>>position;
		if (position == 'a'){
			return "You have been signed as the project coordinator.";
		}
		else if (position == 'b'){
			cout<<"How many years of experience have you acquired?"<<endl;
			cin>>years_of_experience;
			if (years_of_experience >= 3){
				return "You count with the enough experience to be suitable for this job.\nYou have been signed as the project director.";
			}
			else {
				return "I'm sorry, but you don't count with the exprience to be suitable for this job.";
			}
		}
		else if (position == 'c'){
			cout<<"How many years of experience have you acquired?"<<endl;
			cin>>years_of_experience;
			if (years_of_experience >= 5){
				return "You count with the enough experience to be suitable for this job.\nYou have been signed as the senior project director.";
			}
			else {
				return "I'm sorry, but you don't count with the exprience to be suitable for this job.";
			}
		}
		else {
			return "Not an option.";
		}
	}
	else {
		return "I'm sorry, you are not of legal age.";
	}
}

string exercise_14(int number_of_docs) {
	if (number_of_docs == 0){
		return "There aren't any documents";
	}
	else if (number_of_docs == 1){
		return "There is " + to_string(number_of_docs) + " document.";
	}
	else if (number_of_docs > 1){
		return "There are " + to_string(number_of_docs) + " documents.";
	}
	else {
		return "Absurd number";
	}
}

void exercise_15(int a, int b, int c) {
	a = 51;
    b = 876;
    c = 235;
    cout<<"Valores actuales: a="<<a<<", b="<<b<<", c="<<c<<endl;
    int temp = a;
    
    a = c;
    c = b;
    b = temp;
    cout<<"\nValores tras la permutacion: a="<<a<<", b="<<b<<", c="<<c;
}

void exercise_16(int debut, int fin) {
	int hora_de_alquiler;
	int precio;
	cout<<"Hola, renta tu bici las 24 horas del dia!"<<endl;
	cout<<"Renta tu bicicleta en los siguientes horarios que ves en pantalla:"<<endl;
	cout<<"a) De 00:00 a 07:00 y de 17:00 a 24:00: 1 bs por hora"<<endl;
	cout<<"b) De 07:00 a 17:00: 2 bs por hora"<<endl;
	cout<<"\nElige tu hora de inicio: "; cin>>debut;
	cout<<"Elige tu hora de fin: "; cin>>fin;
	
	if (fin < debut){
		cout<<"Que extraño, el inicio del alquiler es después del final...";
	}
	else if (debut == fin){
		cout<<"Que extraño, no has alquilado tu bicicleta por mucho tiempo!";
	}
	else if (debut>=0 && fin<=7){
		hora_de_alquiler = fin - debut;
		cout<<"Usted eligio el servicio de 00:00 a 07:00"<<endl;
		cout<<"Esta adquiriendo una bicicleta por "<<hora_de_alquiler<<" hora(s)"<<endl;
		precio = hora_de_alquiler * 1;
		cout<<"Su costo de alquiler es: "<<precio<<" Bs.";
	}
	else if (debut>=7 && fin<=17){
		hora_de_alquiler = fin - debut;
		cout<<"Usted eligio el servicio de 07:00 a 17:00"<<endl;
		cout<<"Esta adquiriendo una bicicleta por "<<hora_de_alquiler<<" hora(s)"<<endl;
		precio = hora_de_alquiler * 2;
		cout<<"Su costo de alquiler es: "<<precio<<" Bs.";
	}
	else if (debut>=17 && fin<=24){
		hora_de_alquiler = fin - debut;
		cout<<"Usted eligio el servicio de 07:00 a 17:00"<<endl;
		cout<<"Esta adquiriendo una bicicleta por "<<hora_de_alquiler<<" hora(s)"<<endl;
		precio = hora_de_alquiler * 1;
		cout<<"Su costo de alquiler es: "<<precio<<" Bs.";
	}
	else {
		cout<<"Las horas deben estar entre 0 y 24 o que este dentro del rango de uno de los horarios";
	}
}