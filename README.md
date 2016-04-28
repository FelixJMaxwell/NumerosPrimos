# NumerosPrimos  
"Busqueda" de números primos utilizado lenguaje C y la criba de eratóstenes  

Para poder cambiar el rango de numeros primos a encontrar editar "unsigned int interFinal".  
Si se quiere añadir un rango de numeros editar al variable "unsigned int interInicial" por un numero mayor a 0 en caso de adherir un numero negativo resultada en 0 numeros primos encontrados en un lapso de 0 segundos.  

Compilar en alguna distribucion de linux para un mejor rendimiento y para tener menor tiempo en segundos. Menos tiempo = mejor.  
Bajo windows los intervalos son demasiado extensos, mas de 30 minutos para un intervalo inicial de mil millones sobre un procesador de doble nucleo.  

Funciona mejor de muchas formas utilizando un cluster o conexion por socket para repartir el trabajo.  

Tiempos de ejecucion sobre una maquina con core i3-3220 a 3.30GHz con 4GB de ram en Ubuntu 16.04.
  
  65 segundos en un rango de mil millones.  
  126 segundos en un rango de dos mil millones.  
  
