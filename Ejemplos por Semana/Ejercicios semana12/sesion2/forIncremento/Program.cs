using System;

namespace forIncremento
{
    class @For
    {
        static void Main()
        {
            int x = 0;
            int y = 0;
            for(int i = 0; i<=10; i++)
            {
                Console.WriteLine("Prefijo: {0}, Sufijo: {1}", ++x,y++);
            }
        }
    }
}
