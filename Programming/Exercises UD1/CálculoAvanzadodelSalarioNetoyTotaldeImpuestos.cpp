#include <iostream>
using namespace std;

int main () {

	// Suledo del empleado

	double ingresomes;

	cout << "\nIntroduce tu ingreso al mes: ";
	cin >> ingresomes;


	// Meses

	const int meses = 12;


	// Porcentajes de los impuetos

	const double porcImpuestoCotizacion = 0.2557;
	const double porcImpuestoIRPF = 0.1117;
	const double porImpuestoContingencias = 0.0470;
	const double porImpuestoFormacion = 0.0165;


	// Estetica	

	cout << "\n\tDATOS COTIZACIÓN:\n" <<endl;


	/*
	Calculos de cotización:
	Impuesto mes cotización
	Ingreso año cotización
	Impuesto año cotización
	*/


	// Calculo de impuesto mes cotización

	double impuestomesCotizacion = ingresomes * porcImpuestoCotizacion;
	cout << "Impuestos al mes cotizacion: " << impuestomesCotizacion <<endl;


	// Calculo de ingreso año cotización

	double ingresoanoCotizacion = ingresomes * meses;
	cout << "Ingresos anuales cotizacion: " << ingresoanoCotizacion <<endl;


	// Caluclo de impuesto año cotización

	double impuestoanoCotizacion = ingresoanoCotizacion * porcImpuestoCotizacion;
	cout << "Impuestos anuales contizacion: " << impuestoanoCotizacion <<endl;


	// Estetica

	cout << "\n\tDATOS IRPF:\n" <<endl;


	/*
	Calculos de IRPF:
	Ingreso mes IRPF
	Impuesto mes IRPF
	Ingreso año IRPF
	Impuesto año IRPF
	*/


	// Calculo de ingreso mes IRPF

	double ingresomesIRPF = ingresomes - impuestomesCotizacion;
	cout << "Ingreso mes con IRPF: " << ingresomesIRPF <<endl;


	// Calculo deS impuesto mes IRPF

	double impuestomesIRPF = ingresomesIRPF * porcImpuestoIRPF;
	cout << "Impuesto mes con IRPF: " << impuestomesIRPF <<endl;


	// Calculo de ingreso año IRPF

	
	double ingresoanoIRPF = ingresomesIRPF * meses;
	cout << "Ingreso año con IRPF: " << ingresoanoIRPF <<endl;


	// Calculo de impuesto año IRPF:


	double impuestoanoIRPF = ingresoanoIRPF * porcImpuestoIRPF;
	cout << "Impuesto año con IRPF: " << impuestoanoIRPF <<endl;

	
	// Estetica

	cout << "\n\tDATOS CONTINGENCIAS:\n" <<endl;


	/*
	Calculos de contingencias:
	Ingreso mes contingencias
	Impuesto mes contingencias
	Ingreso año contingencias
	Impuesto año contingencias
	*/


	// Calculo de ingreso mes contingencias

	double ingresomesContingencias = ingresomes - impuestomesCotizacion;
	cout << "Ingreso mes contingencias: " << ingresomesContingencias <<endl;

	// Calculo de impuesto mes contingencias

	double impuestomesContingencias = ingresomesContingencias * porImpuestoContingencias;
	cout << "Impuesto mes contingencias: " << impuestomesContingencias <<endl;

	// Calculo de ingreso año contingencias

	double ingresoanoContingencias = ingresomesContingencias * meses;
	cout << "Ingreso año contingencias: " << ingresoanoContingencias <<endl;

	// Calculo de impuesto año contingencias

	double impuestoanoContingencias = ingresoanoContingencias * porImpuestoContingencias;
	cout << "Impuesto año contingencias: " << impuestoanoContingencias <<endl;


	// Estetica

	cout << "\n\tDATOS FORMACION:\n" <<endl;


	/*
	Calculos de formacion:
	Ingreso mes formacion
	Impuesto mes formacion
	Ingreso año formacion
	Impuesto año formacion
	*/


	// Calculo de ingreso mes formacion

	double ingresomesFormacion = ingresomes - impuestomesCotizacion;
	cout << "Ingreso mes formacion: " << ingresomesFormacion <<endl;

	// Calculo de impuesto mes formacion

	double impuestomesFormacion = ingresomesFormacion * porImpuestoFormacion;
	cout << "Impuesto mes formacion: " << impuestomesFormacion <<endl;

	// Calculo de ingreso año formacion

	double ingresoanoFormacion = ingresomesFormacion * meses;
	cout << "Ingreso año formacion: " << ingresoanoFormacion <<endl;

	// Calculo de impuesto año formacion

	double impuestoanoFormacion = ingresoanoFormacion * porImpuestoFormacion;
	cout << "Impuesto año formacion: " << impuestoanoFormacion <<endl;


	// Estetica

	cout << "\n\tRETENCIONES TOTALES AL MES\n" <<endl;


	// Caculo retenciones totales al mes

	double retencionTotalMes = impuestomesCotizacion + impuestomesIRPF + impuestomesContingencias + impuestomesFormacion;
	cout << "La rentencion total al mes es: " << retencionTotalMes <<endl;



	// Estetica

	cout << "\n\tRETENCIONES TOTALES AL AÑO\n" <<endl;


	// Calculo retenciones totales año

	double retencionTotalAno = impuestoanoCotizacion + impuestoanoIRPF + impuestoanoContingencias + impuestoanoFormacion;
	cout << "La retencion total al año es: " << retencionTotalAno <<endl;


		// PARTE 2 DEL EJERCICIO


	// Gastos mesuales del empleado

	double hipoteca;
	double luz;
	double agua;
	double internet;
	double gasolina;
	double impuestocirculacion;
	double comida;
	double ocio;
	double tabaco;
	double gastoscomunitarios;

	double porhipoteca = 0.0566;
	double porluz = 0.5692;
	double poragua = 0.1000f;
	double porinternet = 0.2222;
	double porgasolina = 0.5833;
	double porimpuestocirculacion = 1;
	double porcomida = 0.0700;
	double porocio = 0.1833;
	double portabaco = 0.8167;
	double porgastoscomunitarios = 0;
	double porgastostotalesmes = 0.2085;


	cout << "\n\n\tIntroduce los siguientes gastos mensuales: \n" <<endl;


	// Introduccion de los gastos


	cout << "Hipoteca: ";
	cin >> hipoteca;

	cout << "Luz: ";
	cin >> luz;

	cout << "Agua: ";
	cin >> agua;

	cout << "Internet: ";
	cin >> internet;

	cout << "Gasolina: ";
	cin >> gasolina;

	cout << "Impuesto circulación: ";
	cin >> impuestocirculacion;

	cout << "Comida: ";
	cin >> comida;

	cout << "Ocio: ";
	cin >> ocio;

	cout << "Tabaco: ";
	cin >> tabaco;

	cout << "Gastos comunitarios: ";
	cin >> gastoscomunitarios;


	// Estetica

	cout << "\n\tDATOS HIPOTECA\n" <<endl;


	// Calculos hipoteca

	double impuestomesHipoteca = hipoteca * porhipoteca;
	cout << "Impuestos al mes de hipoteca: " << impuestomesHipoteca <<endl;

	double gastosanoHipoteca = hipoteca * meses;
	cout << "Gastos al año de hipoteca: " << gastosanoHipoteca <<endl;

	double impuestoanoHipoteca = gastosanoHipoteca * porhipoteca;
	cout << "Impuestos al año de hipoteca: " << impuestoanoHipoteca <<endl;


	cout << "\n\tDATOS LUZ\n" <<endl;


	// Calculos luz

	double impuestomesLuz = luz * porluz;
	cout << "Impuestos al mes de luz: " << impuestomesLuz <<endl;

	double gastosanoLuz = luz * meses;
	cout << "Gastos al año de luz: " << gastosanoLuz <<endl;

	double impuestoanoLuz = gastosanoLuz * porluz;
	cout << "Impuestos al año de luz: " << impuestoanoLuz <<endl;


	cout << "\n\tDATOS AGUA\n" <<endl;


	// Calculos agua

	double impuestomesAgua = agua * poragua;
	cout << "Impuestos al mes de agua: " << impuestomesAgua <<endl;

	double gastosanoAgua = agua * meses;
	cout << "Gastos al año de agua: " << gastosanoAgua <<endl;

	double impuestoanoAgua = gastosanoAgua * poragua;
	cout << "Impuestos al año de agua: " << impuestoanoAgua <<endl;


	cout << "\n\tDATOS INTERNET\n" <<endl;


	// Calculos internet

	double impuestomesInternet = internet * porinternet;
	cout << "Impuestos al mes de internet: " << impuestomesInternet <<endl;

	double gastosanoInternet = internet * meses;
	cout << "Gastos al año de internet: " << gastosanoInternet <<endl;

	double impuestoanoInternet = gastosanoInternet * porinternet;
	cout << "Impuestos al año de internet: " << impuestoanoInternet <<endl;


	cout << "\n\tDATOS GASOLINA\n" <<endl;


	// Calculos gasolina

	double impuestomesGasolina = gasolina * porgasolina;
	cout << "Impuestos al mes de gasolina: " << impuestomesGasolina <<endl;

	double gastosanoGasolina = gasolina * meses;
	cout << "Gastos al año de gasolina: " << gastosanoGasolina <<endl;

	double impuestoanoGasolina = gastosanoGasolina * porgasolina;
	cout << "Impuestos al año de gasolina: " << impuestoanoGasolina <<endl;


	cout << "\n\tDATOS IMPUESTO CIRCULACION\n" <<endl;


	// Calculos impuestocirculacion

	double impuestomesImpuestocirculacion = impuestocirculacion * porimpuestocirculacion;
	cout << "Impuestos al mes de impuestocirculacion: " << impuestomesImpuestocirculacion <<endl;

	double gastosanoImpuestocirculacion = impuestocirculacion * meses;
	cout << "Gastos al año de impuestocirculacion: " << gastosanoImpuestocirculacion <<endl;

	double impuestoanoImpuestocirculacion = gastosanoImpuestocirculacion * porimpuestocirculacion;
	cout << "Impuestos al año de impuestocirculacion: " << impuestoanoImpuestocirculacion <<endl;


	cout << "\n\tDATOS COMIDA\n" <<endl;


	// Calculos comida

	double impuestomesComida = comida * porcomida;
	cout << "Impuestos al mes de comida: " << impuestomesComida <<endl;

	double gastosanoComida = comida * meses;
	cout << "Gastos al año de comida: " << gastosanoComida <<endl;

	double impuestoanoComida = gastosanoComida * porcomida;
	cout << "Impuestos al año de comida: " << impuestoanoComida <<endl;


	cout << "\n\tDATOS OCIO\n" <<endl;


	// Calculos ocio

	double impuestomesOcio = ocio * porocio;
	cout << "Impuestos al mes de ocio: " << impuestomesOcio <<endl;

	double gastosanoOcio = ocio * meses;
	cout << "Gastos al año de ocio: " << gastosanoOcio <<endl;

	double impuestoanoOcio = gastosanoOcio * porocio;
	cout << "Impuestos al año de ocio: " << impuestoanoOcio <<endl;


	cout << "\n\tDATOS TABACO\n" <<endl;


	// Calculos tabaco

	double impuestomesTabaco = tabaco * portabaco;
	cout << "Impuestos al mes de tabaco: " << impuestomesTabaco <<endl;

	double gastosanoTabaco = tabaco * meses;
	cout << "Gastos al año de tabaco: " << gastosanoTabaco <<endl;

	double impuestoanoTabaco = gastosanoTabaco * portabaco;
	cout << "Impuestos al año de tabaco: " << impuestoanoTabaco <<endl;


	cout << "\n\tDATOS GASTOS COMUNITARIOS\n" <<endl;


	// Calculos gastoscomunitarios

	double impuestomesGastoscomunitarios = gastoscomunitarios * porgastoscomunitarios;
	cout << "Impuestos al mes de gastoscomunitarios: " << impuestomesGastoscomunitarios <<endl;

	double gastosanoGastoscomunitarios = gastoscomunitarios * meses;
	cout << "Gastos al año de gastoscomunitarios: " << gastosanoGastoscomunitarios <<endl;

	double impuestoanoGastoscomunitarios = gastosanoGastoscomunitarios * meses;
	cout << "Impuestos al año de gastoscomunitarios: " << impuestoanoGastoscomunitarios <<endl;


	cout << "\n\tGASTOS TOTALES AL MES\n" <<endl;


	// Gastos totales al mes

	double gastosmesTotal = hipoteca + luz + agua + internet + gasolina + impuestocirculacion + comida + ocio + tabaco + gastoscomunitarios;
	cout << "Los gastos totales al mes: " << gastosmesTotal <<endl;

	double impuestomesTotal = gastosmesTotal * porgastostotalesmes;
	cout << "Los impuestos totales son: " << impuestomesTotal <<endl;

	double gastosanoTotal = gastosanoHipoteca + gastosanoLuz + gastosanoAgua + gastosanoInternet + gastosanoGasolina + gastosanoImpuestocirculacion + gastosanoComida + gastosanoOcio + gastosanoTabaco + gastosanoGastoscomunitarios;
	cout << "Los gastos totales al año: " << gastosanoTotal <<endl;

	double impuestoanoTotal = gastosanoTotal * porgastostotalesmes;
	cout << "Los impuestos totales al año: " << impuestoanoTotal << endl;


		// PARTE 3 DEL EJERCICIO


	cout << "\n\tGASTOS TOTALES AL AÑO\n" <<endl;


	// Dinero ahorrado

	double netomes = ingresomes - retencionTotalMes;
	cout << "Salaraio neto al mes: " << netomes <<endl;

	double gastomes = gastosmesTotal;
	cout << "Los gastos mensuales son: " << gastomes <<endl;

	double ahorromesTotal = netomes - gastomes;
	cout << "Los ahorros al mes en total: " << ahorromesTotal <<endl;

	double netoano = netomes * meses;
	cout << "Salario neto al año: " << netoano <<endl;

	double gastoano = gastosmesTotal * meses;
	cout << "Los gastos anuales son: " << gastoano <<endl;

	double ahorroanoTotal = netoano - gastoano;
	cout << "Ahorro total al año: " << ahorroanoTotal <<endl;


}
