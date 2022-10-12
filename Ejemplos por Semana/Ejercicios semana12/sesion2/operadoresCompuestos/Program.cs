using System;
 
namespace Operador
{
	class BitOperador
	{
		public static void Main(string[] args)
		{
			int numero = 10;

			numero += 5;
			Console.WriteLine(numero);

			numero -= 3;
			Console.WriteLine(numero);

			numero *= 2;
			Console.WriteLine(numero);

			numero /= 3;
			Console.WriteLine(numero);

			numero %= 3;
			Console.WriteLine(numero);

			numero &= 10;
			Console.WriteLine(numero);

			numero |= 14;
			Console.WriteLine(numero);

			numero ^= 12;
			Console.WriteLine(numero);

			numero <<= 2;
			Console.WriteLine(numero);

			numero >>= 3;
			Console.WriteLine(numero);
		}
	}
}
