using System;
 
namespace Operador
{
	class OperadorLogico
	{
		public static void Main(string[] args)
		{
			bool resultado;
			int primerNumero = 10, segundoNumero = 20;

			// OR operador
			resultado = (primerNumero == segundoNumero) || (primerNumero > 5);
			Console.WriteLine(resultado);

			// AND operador
			resultado = (primerNumero == segundoNumero) && (primerNumero > 5);
			Console.WriteLine(resultado);
		}
	}
}
