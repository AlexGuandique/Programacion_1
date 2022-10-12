using System;
 
namespace Operador
{
	class OperatorUnario
	{
		public static void Main(string[] args)
		{
			int numero = 10;

			Console.WriteLine((numero++)); //10
			Console.WriteLine((numero));//11

			Console.WriteLine((++numero));//12
			Console.WriteLine((numero));//12
		}
	}
}
