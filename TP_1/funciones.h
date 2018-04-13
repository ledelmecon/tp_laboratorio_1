#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
/** \brief Realiza la suma de dos numeros
 * \param nro1
 * \param nro2
 * \return Devuelve la suma de dos numeros
 *
 */
int suma(int , int );


/** \brief Realiza la resta de dos numeros
 * \param nro1
 * \param nro2
 * \return Devuelve la resta de dos numeros
 *
 */
int resta(int , int );



/** \brief Realiza la multiplicacion de dos numeros
 * \param nro1
 * \param nro2
 * \return Devuelve la multiplicacion de dos numeros
 *
 */
int multiplicacion(int , int );


/** \brief Realiza la division de dos numeros
 * \param nro1
 * \param nro2
 * \return Devuelve la division de dos numeros
 *
 */
float division (int ,int );


/** \brief Factoriza un numero 0 o positivo
 * \param  Nro1 a factorizar
 * \return Retorna numero factorizado
 */
int factorizar(int);


/** \brief Verifica que el numero a factorizar no sea negativo
 * \param  nro1
 * \return Retorna un numero distinto modificado por el usuario distinto a negativos
 *
 */
int errorfactoreo(int);


/** \brief Verifica si el divisor es 0
 * \param  Modificar el numero 0
 * \return Numero distinto de 0
 *
 */
float valida_nro_distinto_0(int);


/** \brief Ingresa datos desde teclado
 * \param  Aux
 * \return Retorna dato ingresado
 *
 */
int ingreseOperador ();



/** \brief Permite presionar enter para un paso en particular
 * \param  Seleccionar la tecla enter
 * \return Retorna a la aplicacion
 *
 */
int enterParaContinuar();





#endif // FUNCIONES_H_INCLUDED

