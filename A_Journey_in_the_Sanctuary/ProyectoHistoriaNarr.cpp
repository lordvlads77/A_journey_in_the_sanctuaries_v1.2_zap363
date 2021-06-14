/* Haber este es el proto para la historia narrada para Progra, se va a tratar de Los caballeros del Zodiaco */
/* zap363 Eva Luna AMK 1° Semestre*/
/* Espero lograr esto con ciclos, if y couts*/

#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "spanish");
	int tuDecision;
	int tuDecision2;
	int tuDecision3;
	int tuDecision4;
	int tuDecision5;
	int tuDecision6;
	int rutaII = 2;
	int ruta = 1;
	int rutaIII = 3;
	int rutaIV = 4;
	int rutaV = 5;
	int rutaVI = 6;
	int rutaVII = 7;
	int rutaVIII = 8;
	int rutaIX = 9;
	int rutaX = 10;
	int rutaXI = 11;
	int rutaXII = 12;
	int contador = 0;
	int contador2 = 0;
	int contador3 = 0;
	int contador4 = 0;
	int contador5 = 0;
	int contador6 = 0;

	cout << "A JOURNEY IN THE SANCTUARIES" << endl << endl;
	Sleep(1000);
	cout << "Era una bella mañana y tu acababas de salir de la estacion de camiones, habias recogido a una amiga y te disponias a llamar a un Uber " << endl;
	Sleep(9150);
	cout << "cuando de repente oiste un sonido raro, de repente todo se volvio negro y cuando volviste en si, te viste que 1 Ammu, (si así se llama tu amiga) te habia aplastado " << endl;
	Sleep(9150);
	cout << "y 2 estabas en un cuarto desconocido en quien sabe donde, y lo PEOR POSEIDON EL DIOS DE TODOS LOS MARES Y SORRENTO te estaban viendo con cara de 'y este bicho raro de donde salio? y 'que rayos pasa aqui' " << endl << endl;
	Sleep(9150);
	cout << "En este momento tienes 2 opciones, La primera seria esperar a que Don Pose y Sorrento salgan del shock y ver haber que te dicen o tu preguntarles que si saben que sucedio, " << endl;
	Sleep(9150);
	cout << "pero con el conocido temperamento del devol que se cargan Don Pose y su mano derecha Sorrento no se si eso seria una buena idea" << endl;
	Sleep(9150);
	cout << "o la segunda, podrias correr for dear life y escapar por la puerta abierta que ves, mientras Don Pose y Sorrento siguen en shock, " << endl;
	Sleep(9150);
	cout << "pero eso significaria no tener ninguna clase de información sobre que sucedio y porque sucedio, pero weno en fin tu decisión" << endl << endl;
	Sleep(9150);
	cout << "Presiona 1: Para esperar a ver que les dicen Poseidon y Sorrento " << endl << endl;
	cout << "Presiona 2: NO PRESIONES 2, PORQUE EL DEV DE ESTA HISTORIA INTERACTIVA NO TUVO TIEMPO DE PROGRAMAR LA DECISIONES SECUNDARIAS Y SITUACIONES DE ESTA RAMA DE HISTORIA " << endl;
	cin >> tuDecision;
	cout << endl;
	string Opcion1_1 = "Poseidon y Sorrento salen del el Shock y al verte a ti y a tu amiga te aplican la ranteación tipo 'que haces aqui' 'como llegaste aquí', Sorrento dijo que a la mejor eras una Espia de Atena, y Don Pose casi hace aguachile contigo y con tu amiga, pero al final todos se calmaron y Poseidon te invito a su Sala para que hablen y para que tu y tu amiga le expliquen como llegaron ahi";
	string Opcion1_2 = "En el shock corres for dear life";
	string Opcion2_1 = "Acompañas a Don Pose al Concilio, Shaka y Saga te dicen que no tienen idea de los que les estas hablando y te recomiendan ir a husmear a los dominios de Hades ";
	string Opcion2_2 = "Te quedas en el Templo Submarino, Saludas a Hades y te das cuenta que ni Radamanthys ni los Dioses Gemelos vinieron, se quedaron en casa, los Espectros de visita te dicen que no saben nada, pero Hades te recomienda preguntarle a su sobrina la mentada Diosa de la Sabiduria haber si ella sabe algo ";
	string Opcion3_1 = "Le preguntas primero a los Dioses Gemelos y te dicen que no  saben de que raios hablas, pero te dicen que le preguntes a Radamanthys, ya que fraterniza mucho con el hermano Geminis que usa una tecnica parecida";
	string Opcion3_2 = "Le preguntas primero a Radamanthys y el te dice que el cree que fue Deuteros, el hermano del Caballero Dorado de Geminis del Siglo XVIII ";
	string Opcion4_1 = "Decides creerle a Radamanthys, estas por irte cuando Hypnos te invita a papalotear y complotear con el, algo que llama 'El dominio total del mundo',  en el Elysion antes de irte a casa, y tu gustosamente aceptas";
	string Opcion4_2 = "No le crees a Rada, asi que regresar al Santuario en busca de Kanon, para corroborar la historia de Radamanthys, no lo encuentras por ningun lado en el Templo de Geminis, hasta que de regreso se te ocurre meterte al de Tauro y ahí lo encuentras husmeando en el refri de Aldebaran, procedes a preguntarle y el te dice que si de inmediato, pero como reparación del daño te da un gran jamon ahumado del refri de aldebaran y estadia en el templo de el y su hermano, agarras el jamon porque tienes hambre, y al final decides quedarte en santuario del siglo XX porque te alimentan ";
	string Opcion5_1 = "Vas al ciclo XVIII apareces a las puertas del santuario de esa epoca, caminas hasta la casa de Geminis y misteriosamente te encuentras con Deuteros en persona al entrar, entonces le preguntas, que si fue el quien te trajo a esta dimesion, el te dice SI!, pero antes de que le preguntes porque, te echa de Geminis, Sisifo ve lo sucedido y te ofrece hospedaje en su casa (la de Sagitario), y despues de unos meses decides quedarte en el siglo XVIII";
	string Opcion5_2 = "Empiezas a extrañar tu hogar en tu propia dimensión asi que mejor le pides a Rada que te duelva a ti y a tu amiga ammu (donde sea que este) que las duelva su propia dimensión, Rada acepta y en eso despiertan en sus camas de noche con la memoria de haber tenido un muy bizarro sueño, para después volverse a dormir ";
	string Opcion6_1 = "le haces caso a Lord Hades y vas al santuario de la mimada a preguntarle, ella te dice, que fue Kaza de Lymnades del Pilar del Antartico cuando estaba en forma de Kanon de Dragon del Mar General del Pilar del Atlantico Norte, al momento de usar la tecnica del 'Triangulo Dorado' contra el verdadero Kanon de Dragon del Mar, tu te sorprendes por el plotwist y dices 'A weno' y procedes a ir a comprar Aguachile!  ";
	string Opcion6_2 = "Te da flojera lidiar con la mocosa de Atena, asi le dices a Hades al momento de declinar diplomaticamente su recomendación, el acuerda contigo y al final lo dejan por la paz, hasta que un dia chesire llega muy contento con un papel y se lo muestra a su Señor Hades, el lo ve y sonrie, después te manda llamar y te dice que Chesire encontro pruebas husmeando en el Pilar de Kaza de que el fue el culpable de lo sucedio contigo y con tu amiga, te dice que como le caes bien, le pueden transmitir via Cosmos lo descubierto a su hermanito Poseidon para que Kaza se castigado, tu emocionadamente aceptas, despues de unos días te llega la noticias de Poseidon al enterarse de la insolencia de su marina, desato toda su furio contra Kaza y le dio la paliza de su vida, tu te sientes satisfecha porque sientes que se ha echo justicia! y al final te quedas a vivir en el Templo submarino, y como Kaza quedo muy malherido despues de semejante paliza, Poseidon te otorga a ti la escama de Lymnades y te conviertes en la Marina guardiana del Pilar del Oceano Antartico ";


	string FIN1 = "EL FIN";
	string FIN2 = "FINITO";
	string FIN3 = "SE ACABO";
	string FIN4 = "EL FINAL";
	string FIN5 = "Y COLORIN COLORADO ESTE CUENTO SE HA ACABADO";
	string FIN6 = "AYYY ADORO LOS FINALES FELICES!!!";

	string rama1_0 = "Le explicas a Don Pose lo sucedido, desde el portal raro con el ruido raro hasta tu aplastante llegada a su Templo Submarino, Don Pose se pone a analizar tu historia para ver si estas diciendo la verdad, despues de un rato parece que decide creerte y muy amablemente te ofrece la posibilidad de que tu y tu amiga se queden en su templo submarino, ";
	string rama1_0_1 = "Tu aceptas felizmente la invitación, pero tu Ammu parece haber aceptado más por no tener otra cosa mejor que hacer o a donde ir, Ammu se queda en el Pilar del Artico con Isaack de Kraken luego de Poseidon les diera a elegir donde querian vivir mientras estuvieran en su templo, por lo pronto, tu te quedaste en el Palacio de Poseidon por pedido del mismismo Don Pose ";
	string rama1_0_2 = "Despues de un tiempo de vivir en el Templo de Submarino de Poseidon y de haber interrogado con la venia de Don Pose (del que por cierto te hiciste muy amiga) tu y ammu no encontraron ninguna pista ni nada que les ayudara a saber que habia sucedido, porque lo que decidieron tomar un descanso y disfrutar de todas las amenidades que el templo submarino de Don Pose.  ";
	string rama1_0_3 = "Aunque despues de algunos meses de ocio y todavia sin noticias de pistas de lo que pudo haber sucedido, tu y ammu se empiezan a aburrir, planean decirle a Don Pose que muchas gracias por todo, y que iran a otro lado a investigar, cuando en eso llega carta de Atenea de la mano de Sorrento, invitando a Don Pose y a todas sus marinas a un Concilio de Paz, Don Pose decidí aceptar la rama de olivo que le tiende Atena. ";
	string rama1_0_4 = "Estas a punto de desearle buena suerte cuando te pregunta a ti y a Ammu que si quieren ir con el y sus marinas al Concilio o Prefieren quedarse en el Santuario, asegurandote a ti y a Ammu que no se quedarian solas, pues Hades y sus espectros más importantes llegarian de visita para cuidar el su Templo en su ausencia (o al menos eso esperaba el porque todavia no le preguntaba intuias tu) ";
	string rama1_1 = "Llegas al Inframundo y lo primero que te preguntas es, ¿Deberias interrogar primero a los Dioses Gemelos o a Radamanthys? ";
	string rama1_2 = "Le preguntas a Radamanthys y el te dice que fue Kanon, que al querer usar la tecnica de su hermano 'Otra Dimension' sin practica, en lugar de mandar a Saga a otra dimesion, trajo a Alguien (tu y Ammu) de otra dimension a esta dimension ";
	string rama1_3 = "No sabes si creerle a Rada asi que ponderas la idea de ir a corrobar la historia de Radamanthys con Kanon";
	string rama1_1_0 = "Le preguntas a Rada si hay alguna manera de corroborarlo, el te dice que te puede mandar al siglo XVIII, que si quieres ir?";


	string rama2_0 = "Llegas al Santuario";

	string decision2 = "Entonces que haras? iras con Don Pose al Santuario de Atena para aprovechar y preguntarle al Caballero de Oro más cercano a Dios, si  el sabe que pez con tu vida y la de Ammu o si tiene alguna pista o te quedaras en Templo Submarino para aprovechar la visita de Hades, investigar con sus espectros y saludar al Señor del Inframundo? ";
	string escoge3 = "Presiona 3: Para acompañar a Don Pose al Concilio de Athena ";
	string escoge4 = "Presiona 4: Para quedarte en el Templo de Don Pose a hacer la Saludación a Hades y continuar la investigación con sus espectros ";

	string decision3 = "Que haras?";
	string escoge5 = "Presiona 5: Para Interrogar primero a los Dioses Gememlos ";
	string escoge6 = "Presiona 6: Para Interrogar primero a Radamanthys";

	string decision4 = "Le creeras a Rada, o iras a corrobar la historia con Kanon?";
	string escoge7 = "Presiona 7: para creerle a Radamanthys ";
	string escoge8 = "Presiona 8: para ir a corroborar la historia con Kanon";

	string decision5 = "Buena pregunta, acaso quieres ir al siglo XVIII a preguntarle a Deuteros?";
	string escoge9 = "Presiona 9: Para ir al Siglo XVIII";
	string escoge10 = "Presiona 10: Para ir de vuelta a casa (a tu propio dimensión)";

	string decision6 = "Seguiras la recomendancion del Wen Lord Hades?";
	string escoge11 = "Presiona 11: Para seguir la recomendación de Lord Hades de ir al Santuario de Atena a preguntarle a la niña mimada";
	string escoge12 = "Presiona 12: Para diplomaticamente declinar la recomendacion de Lord Hades, y simplemente quedarte en el santuario submarino ";


	if (tuDecision == ruta)
	{

		contador = contador + 1;

	}

	if (tuDecision == rutaII)
	{

		contador = contador + 2;

	}


	if (contador == 1)
	{
		cout << Opcion1_1 << endl;
		Sleep(9150);
		cout << rama1_0 << endl << endl;
		Sleep(9150);
		cout << rama1_0_1 << endl;
		Sleep(9150);
		cout << rama1_0_2 << endl << endl;
		Sleep(9150);
		cout << rama1_0_3 << endl;
		Sleep(9150);
		cout << rama1_0_4 << endl << endl;
		Sleep(9150);

		cout << decision2 << endl << endl;
		Sleep(9150);
		cout << escoge3 << endl << endl;
		cout << escoge4 << endl;
		cin >> tuDecision2;
		cout << endl;
		if (tuDecision2 == rutaIII)
		{

			contador2 = contador2 + 1;

		}

		if (tuDecision2 == rutaIV)
		{

			contador2 = contador2 + 2;

		}

		if (contador2 == 1)
		{

			cout << Opcion2_1 << endl;
			Sleep(9150);
			cout << rama1_1 << endl << endl;
			Sleep(9150);

			cout << decision3 << endl << endl;
			Sleep(9150);
			cout << escoge5 << endl << endl;
			cout << escoge6 << endl;
			cin >> tuDecision3;
			cout << endl;

			if (tuDecision3 == rutaV)
			{

				contador3 = contador3 + 1;

			}

			if (tuDecision3 == rutaVI)
			{

				contador3 = contador3 + 2;

			}

			if (contador3 == 1)
			{

				cout << Opcion3_1 << endl;
				Sleep(9150);
				cout << rama1_2 << endl;
				Sleep(9150);
				cout << rama1_3 << endl << endl;
				Sleep(9150);

				cout << decision4 << endl << endl;
				Sleep(9150);
				cout << escoge7 << endl << endl;
				cout << escoge8 << endl;
				cin >> tuDecision4;
				cout << endl;

				if (tuDecision4 == rutaVII)
				{

					contador4 = contador4 + 1;

				}

				if (tuDecision4 == rutaVIII)
				{

					contador4 = contador4 + 2;

				}

				if (contador4 == 1)
				{

					cout << Opcion4_1 << endl << endl;
					Sleep(9150);
					cout << FIN1 << endl;

				}

				if (contador4 == 2)
				{

					cout << Opcion4_2 << endl << endl;
					Sleep(9150);
					cout << FIN4 << endl;
				}

			}

			if (contador3 == 2)
			{

				cout << Opcion3_2 << endl;
				Sleep(9150);
				cout << rama1_1_0 << endl << endl;
				Sleep(9150);

				cout << decision5 << endl << endl;
				Sleep(9150);
				cout << escoge9 << endl << endl;
				cout << escoge10 << endl;
				cin >> tuDecision5;
				cout << endl;

				if (tuDecision5 == rutaIX)
				{

					contador5 = contador5 + 1;

				}

				if (tuDecision5 == rutaX)
				{

					contador5 = contador5 + 2;

				}

				if (contador5 == 1)
				{

					cout << Opcion5_1 << endl << endl;
					Sleep(9150);
					cout << FIN2 << endl;

				}

				if (contador5 == 2)
				{

					cout << Opcion5_2 << endl << endl;
					Sleep(9150);
					cout << FIN3 << endl;

				}

				
			}

		}
		
		if (contador2 == 2)
		{

			cout << Opcion2_2 << endl << endl;
			Sleep(9150);

			cout << decision6 << endl << endl;
			Sleep(9150);
			cout << escoge11 << endl << endl;
			cout << escoge12 << endl;
			cin >> tuDecision6;
			cout << endl;

			if (tuDecision6 == rutaXI)
			{

				contador6 = contador6 + 1;

			}

			if (tuDecision6 == rutaXII)
			{

				contador6 = contador6 + 2;

			}

			if (contador6 == 1)
			{

				cout << Opcion6_1 << endl << endl;
				Sleep(9150);
				cout << FIN5 << endl;

			}

			if (contador6 == 2)
			{

				cout << Opcion6_2 << endl << endl;
				Sleep(9150);
				cout << FIN6 << endl;

			}



		}

	}

	if (contador == 2)
	{

		cout << Opcion1_2 << endl;
		Sleep(9150);
		cout << rama2_0 << endl;


	}

}




