/*
polinomios) Dado un polinomio de grado n, p(x)=anxn+⋯+a2x2+a1x+a0

, implemente lo siguiente:

    una función, double polyval(const coeffs[], size_t n, double x0), que reciba un vector con los coeficientes an

, el grado n del polinomio y un punto x0∈ℝ y retorne el polinomio evaluado en dicho punto: p(x0)=anxn0+⋯+a2x20+a1x0+a0

. Sugerencia: buscar el método de Horner para la evaluación de polinomios.

una función, diffval(), que reciba parámetros similares a la función polyval() y además un orden k
de derivada y retorne el valor de la derivada k evaluada en el punto x0. Sugerencia: utilice un vector auxiliar para almacenar los coeficientes de la derivada y evalúe dicho polinomio en x0

.

una función, polypolyval(), que dado un polinomio recibido como argumento y un vector de doubles, double points[], también recibido como argumento, modifique el vector points guardando en cada elemento del mismo, el valor del polinomio evaluado en ese punto.

Por ejemplo, dado el polinomio p(x)=−x3+x2+3

y el vector de puntos points: {-2, 0, 2}, luego de ejecutar polypolyval() con los argumentos correctos, se modifica el vector de puntos para que tenga los siguientes valores: {15, 3, -1}.

un programa que genere una tabla con muestras de un polinomio ingresado por teclado. Se debe poder trabajar con polinomios de grado hasta 119, no más. El programa debe pedir al usuario, además, el valor del comienzo del intervalo de muestreo, el final y la cantidad de muestras.

*/