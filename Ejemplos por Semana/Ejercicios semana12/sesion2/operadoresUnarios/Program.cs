using System;
 
namespace Operador
{
	class OperadorUnario
	{
		public static void Main(string[] args)
		{
			int numero = 10, result;
			bool bandera = true;

			result = +numero;
			Console.WriteLine("+numero = " + result);

			result = -numero;
			Console.WriteLine("-numero = " + result);

			result = ++numero;
			Console.WriteLine("++numero = " + result);

			result = --numero;
			Console.WriteLine("--numero = " + result);

			Console.WriteLine("!bandera = " + (!bandera));
		}
	}
}
