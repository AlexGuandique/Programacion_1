using System;
 
namespace Operador
{
	class OperadorRelacional
	{
		public static void Main(string[] args)
		{
			bool result;
			int primerNumero = 10, segundoNumero = 20;

			result = (primerNumero==segundoNumero);
			Console.WriteLine("{0} == {1} : {2}",primerNumero, segundoNumero, result);

			result = (primerNumero > segundoNumero);
			Console.WriteLine("{0} > {1} : {2}",primerNumero, segundoNumero, result);

			result = (primerNumero < segundoNumero);
			Console.WriteLine("{0} < {1} : {2}",primerNumero, segundoNumero, result);

			result = (primerNumero >= segundoNumero);
			Console.WriteLine("{0} >= {1} : {2}",primerNumero, segundoNumero, result);

			result = (primerNumero <= segundoNumero);
			Console.WriteLine("{0} <= {1} : {2}",primerNumero, segundoNumero, result);

			result = (primerNumero != segundoNumero);
			Console.WriteLine("{0} != {1} : {2}",primerNumero, segundoNumero, result);
		}
	}
}
