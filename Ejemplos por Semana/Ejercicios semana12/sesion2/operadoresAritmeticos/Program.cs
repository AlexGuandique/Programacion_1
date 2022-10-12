using System;
 
namespace operador
{
	class OperadorAritmetico
	{
		public static void Main(string[] args)
		{
			double primerNumero = 14.40, segundoNumero = 4.60, resultado;
			int num1 = 27, num2 = 4, mod;

			// Suma operador
			resultado = primerNumero + segundoNumero;
			Console.WriteLine("{0} + {1} = {2}", primerNumero, segundoNumero, resultado);

			// Resta operador
			resultado = primerNumero - segundoNumero;
			Console.WriteLine("{0} - {1} = {2}", primerNumero, segundoNumero, resultado);

			// Multiplicacion operador
			resultado = primerNumero * segundoNumero;
			Console.WriteLine("{0} * {1} = {2}", primerNumero, segundoNumero, resultado);

			// Division operador
			resultado = primerNumero / segundoNumero;
			Console.WriteLine("{0} / {1} = {2}", primerNumero, segundoNumero, resultado);

			// Modulo operador
			mod = num1 % num2;
			Console.WriteLine("{0} % {1} = {2}", num1, num2, mod);
		}
	}
}
