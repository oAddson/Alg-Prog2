// exercicios_struct.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct horario
{
	int hora = 0, minuto = 0, segundo = 0;
};

struct datas{
	int dia, mes, ano;
};

void soma_horario(horario first, horario second) {
	horario total, acumulador;

	total.segundo = first.segundo + second.segundo;
	if (total.segundo >= 60) {
		total.segundo -= 60;
		total.minuto = 1;
	}
	total.minuto += first.minuto + second.minuto;
	if (total.minuto >= 60) {
		total.minuto -= 60;
		total.hora = 1;
	}
	total.hora += first.hora + second.hora;

	cout << total.hora << " : "<< total.minuto << " : " << total.segundo;
}

void exercicio1() {
	horario primeiro, segundo;
	cout << "Digite o primeiro horario : " << endl;
	cout << "hora" << " : ";
	cin >> primeiro.hora;
	cout << "minutos" << " : ";
	cin >> primeiro.minuto;
	cout << "segundos" << " : ";
	cin >> primeiro.segundo;
	cout << "Digite o segundo horario : " << endl;
	cout << "hora" << " : ";
	cin >> segundo.hora;
	cout << "minutos" << " : ";
	cin >> segundo.minuto;
	cout << "segundos" << " : ";
	cin >> segundo.segundo;

	soma_horario(primeiro, segundo);
}
int ano() {
	int year;
	cout << "ano : ";
	cin >> year;
	if (year > 2018) {
		ano();
	}	else {
		return year;
	}
}
int mes() {
	int month;
	cout << "mes : ";
	cin >> month;
	if (month > 12) {
		mes();
	}	else {
		return month;
	}
}
int dia() {
	int day;
	cout << "Dia : ";
	cin >> day;
	if ()
}

void bissexto(datas validacao) {
	cout << "não esta pronto" << endl;
}

void entrada_data() {			// NAO ESTA PRONTO
	datas vali;
	cout << "digite uma data : " << endl;	
	vali.ano = ano();
	cout << "mes : ";
	vali.mes = mes();

	cout << "Dia : ";
	vali.dia = dia();
	cout << vali.dia << "/" << vali.mes << "/" << vali.ano ;

}

void exercicio3() {
	entrada_data();
}

int main()
{
	entrada_data();

    return 0;
}