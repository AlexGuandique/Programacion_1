using System;

namespace Operador
{
	class OperadorAsignacion
	{
		public static void Main(string[] args)
		{
			int primerNumero, segundoNumero;
			// Asignar una constante a una variable
			primerNumero = 10;
			// Asignar una constante a una variable
			segundoNumero = primerNumero;
			Console.WriteLine("Primer Numero = {0}, Segundo Numero = {1}", primerNumero, segundoNumero);
		}
	}
}
