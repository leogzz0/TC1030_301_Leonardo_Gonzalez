//
//  main.cpp
//  proyect-avance
//
//  Created by Leonardo Gonzalez on 30/05/22.
//

#include <iostream>
#include <string>
#include <stdio.h>
#include "Video.hpp"
#include "Serie.hpp"
#include "Series.hpp"
#include "Pelicula.hpp"
#include "Peliculas.hpp"
using namespace std;

int menuPeliculas(){
    int iOpcion;
    
    cout <<
    "\n *******  Peliculas *******" <<
    "\n1. Leer Peliculas  desde Archivo" <<
    "\n2. Reporte de todas las peliculas" <<
    "\n3. Reporte de peliculas que tienen cierta Calificacion" <<
    "\n4. Reporte de peliculas de cierto genero" <<
    "\n\n *******  Series *******" <<
    "\n5. Leer Series  desde Archivo" <<
    "\n6. Reporte de todas las Series" <<
    "\n7. Reporte de Series que tienen cierta Calificacion" <<
    "\n8. Reporte de Series de cierto genero" <<
    "\n9. Calcular calificación de todas las Series" <<
    
    "\n\n0. SALIR\nTeclea la opcion:"; 
    cin >> iOpcion;
    return iOpcion;
}
// ******************************
//            AVANCE 3
// *******************************
int main() {
    // se manda llamar al constructor - default
    Peliculas peliculas{};
    // Polimorfismo - {} llama al constructor default Video
   // Videos2 videos{};
    Series series{};
    //   Pelicula arrPeliculas[50], pelicula{};
    
    int iOpcion;
    string sGenero, sId;
    double dCal;
 
    // Leer el archivo de peliculas y cargarlo en el arreglo de apuntadores
    // dentro de la clase Peliculas
    peliculas.leerArchivo();
    series.leerArchivo();
    
    // 1o Inicializar la vcc antes del ciclo
    iOpcion = menuPeliculas();
    // 2a Incluir en la condicion la vcc
    while (iOpcion != 0){
        switch (iOpcion) {
                // ***** Peliculas
            case 1: // 1. Leer Peliculas  desde Archivo" <<
                peliculas.leerArchivo();
                break;
            case 2:// 2. Reporte de todas las peliculas" <<
                peliculas.reporteTodasPeliculas();
                break;
            case 3:// 3. Reporte de todas las peliculas con cierta Calificacion" <<
                cout << "Ingresa la calificacion: ";
                cin >> dCal;
                peliculas.reporteConCalificacion(dCal);
                break;
            case 4: // 4. Reporte de todas las peliculas con cierto genero" <<
                cout << "Ingresa el Genero: ";
                cin >> sGenero;
                peliculas.reporteGenero(sGenero);
                break;
            case 5: // leer videos
               series.leerArchivo();
                break;
            case 6: // 6. Reporte de todas las Series"
                series.reporteTodasSeries();
                 break;
            case 7:  // 7. Reporte de Series que tienen cierta Calificacion
                cout << "Ingresa la calificación: ";
                cin >> dCal;
                series.reporteConCalificacion(dCal);
                 break;
            case 8:  // 8. Reporte de Series de cierto genero
                cout << "Ingresa el Genero: ";
                cin >> sGenero;
                series.reporteGenero(sGenero);
              //  videos.reporteVideos();
                 break;
//            case 9:  // 9. Calcular calificación de todas las Series
//                //series.calcularCalificacionSeries();
//                 break;
            default:
                cout << "Opcion Incorrecta\n";
                break;
        }
        //3o Actualizar la vcc dentro del ciclo
        iOpcion = menuPeliculas();
    }
    return 0;
}
