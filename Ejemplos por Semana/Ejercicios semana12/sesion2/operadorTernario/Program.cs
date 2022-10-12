using System;
 
namespace Operador
{
	class OperadorTernario
	{
		public static void Main(string[] args)
		{
			int numero = 10;
			string result;

			result = (numero % 2 == 0)? "Par" : "Impar";
			Console.WriteLine("{0} es {1}", numero, result);

			/*if(numero % 2 == 0)
			{
				Console.WriteLine("{0} es {1}", numero, "Par");
			}
			else
			{
				Console.WriteLine("{0} es {1}", numero, "Impar");
			}*/
		}
	}
}


