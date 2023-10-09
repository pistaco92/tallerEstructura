# tallerEstructura
Documentacion de taller laboratorio.

Primero, explicando la estructura del programa en general. Para el diseño del software, opte por usar el “command patern” para la clase app y sus funcionalidades especificas. Dado que me permite tener mas control al momento que se accede o se agrega una funcionalidad nueva a una aplicación (el registro automatico, por ejemplo, es uno de los beneficios que obtuve al usar este sistema, mas adelante hablare de ello).

Capa app contiene, ademas de los atributos basales exigidos en los requerimientos, lo siguiente:

-un vector con comandos
-un vector con los registros de ejecucion de los comandos

Ademas, la classe app esta dividida en 3 capas de herencia.

1) AppAtributos: aquí se encuentran los atributos basales (edad permitida, nombre de app, precio, desarrollador, usuarios que utilizan app)


2) AppCommander: aquí gestione toda la logica relacionada a los comandos de las aplicaciones -crud, log, permisos para ejecucion-. Hereda clase appAtributos


3) App: esta capa, es el que permite abstraer toda la logica anterior en una entidad simple. Ademas de ser la interfaz que utiliza el resto del programa. Hereda clase AppCommander


el orden de herencia no es arbitrario, dado que el hecho que AppAtributos sea primera capa, permite a app commander utilizar la informacion del objeto.



En relacion a los comandos, expongo que estos se encuentran en el archivos commandos.cpp, el cual contiene ademas de la interfaz commander, todos los commandos unicos de cada aplicación. Este sistema permite que por ejemplo, si se desea cambiar un metodo, es tan simple como que herede la interfaz metodo (o el metodo de tipo de su eleccion), realice un override al metodo ejecutar, y con ello puede reconfigurar la logica interna. 

Ademas, este sistema permite el resgitro automatico, dado que al estar identificados los comandos con un nombre, y almacenados en un vector de la app, en el momento es que yo agrego un vector inmediatamente se actualiza la lista de comandos disponibles que se desplega en el menu de usuario, dado que esta se genera a partir de esa estrucutra. Tal comodidad, hubiese sido (bajo mi criterio), dificil de conseguir si hubiera optado por usar metodos de clase, dado que me fuerza a escribir manualmente en un registro los metodos disponibles. 


Funcionalidades extra:

1) El sistema basado en comandos automatizado.
2) menu tipo linux
	para hacer el sistema mas amigable para un programador, el momento de crear la interfaz, decidi inspirar en los comandos de bash, adjunto documentacion.

"ls"
             ""
             "Muestra todas las aplicaciones disponibles que es posible utilizar por el usuario actual"
             ""
             "ls+a"
             "Muestra todas las aplicaciones, incluso aquellas que el usuario no tiene acceso"
             ""
             "log <nombreApp>"
             ""
             "Muestra los comandos ejecutados de la aplicacion correspondiente"
             ""
             "ls+app <nombreApp>"
             "Muestra los comandos disponibles para una aplicacion determinada"
             ""
             "$ <NombreApp>.<Metodo>.(<Argumento>"
             "permite ejecutar un metodo de una aplicacion en especifico"
             "ejemplo: $ pacman.jugar(player1) "
             ""
             "help"
             "muestra los comandos disponibles del sistema"
             ""

toda esta informacion se puede citar el usar el comando help

3) ls+app, ls+a, help
	

estas serian las micro-funcionalidades nuevas.
	a) ls+app, que muestra todos los commandos disponibles en una app, incluso los que no se tiene permiso. Mientras que ls muestra solo los permitidos. 
	b) help, que expone la informacion sobre el uso del programa
	c) ejecutar.
 Que permite ejecutar un comando de una app mediante una sintaxis intuiva para el programador. Si bien, la funcionalidad persee no es novedosa, dado que se expone en los requerimientos, le hago mencion dado, el formato de la interfaz, la invencion de la sintaxis, y el algoritmo para procesar la instrucción, considero que lo vuelve una “funcionalidad extra”.


En el programa, hay una funcion llamada createAppAndUsers, que detalla los usuarios y aplicaciones creadas el inicio del programa. Solamente contiene llamadas de funciones, cuyos nombres logran explicar los objetos que se crean al inicio del main.
	
