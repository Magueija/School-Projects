using System;
using System.Collections.Generic;
using System.Collections;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Jogo_Galo
{
    class Program
    {
        static void Main(string[] args)
        {
            string teclado;
            int posicao;
            int sair = 0;
            string[] jogada = new string[9];

            jogada[0] = "1";
            jogada[1] = "2";
            jogada[2] = "3";
            jogada[3] = "4";
            jogada[4] = "5";
            jogada[5] = "6";
            jogada[6] = "7";
            jogada[7] = "8";
            jogada[8] = "9";

            do
            {
                Console.Clear();
                Console.WriteLine(" ----- JOGO DO GALO -----");
                Console.WriteLine(" Posições:\n\n" +
                    $"   {jogada[0]}  |  {jogada[1]}  |  {jogada[2]}\n" +
                    $"   {jogada[3]}  |  {jogada[4]}  |  {jogada[5]}\n" +
                    $"   {jogada[6]}  |  {jogada[7]}  |  {jogada[8]}\n" +
                    "");

                Console.Write("Jogador 1: ");
                teclado = Console.ReadLine();

                while (!int.TryParse(teclado, out posicao) || posicao < 0 || posicao > 8)
                {
                    Console.WriteLine("Posição inválida. Tente novamente");
                    teclado = Console.ReadLine();
                }

                jogada[posicao-1] = "X";

                Console.Clear();
                Console.WriteLine(" ----- JOGO DO GALO -----");
                Console.WriteLine(" Posições:\n\n" +
                    $"   {jogada[0]}  |  {jogada[1]}  |  {jogada[2]}\n" +
                    $"   {jogada[3]}  |  {jogada[4]}  |  {jogada[5]}\n" +
                    $"   {jogada[6]}  |  {jogada[7]}  |  {jogada[8]}\n" +
                    "");


                //JOGADOR 1
                if (jogada[0] == "X" && jogada[1] == "X" && jogada[2] == "X")
                {
                    Console.WriteLine("\n\n\n [!] Jogador 1 VENCEU!!! PARABÉNS!");
                    break;
                }

                if (jogada[3] == "X" && jogada[4] == "X" && jogada[5] == "X")
                {
                    Console.WriteLine("\n\n\n [!] Jogador 1 VENCEU!!! PARABÉNS!");
                    break;
                }

                if (jogada[6] == "X" && jogada[7] == "X" && jogada[8] == "X")
                {
                    Console.WriteLine("\n\n\n [!] Jogador 1 VENCEU!!! PARABÉNS!");
                    break;
                }

                if (jogada[0] == "X" && jogada[3] == "X" && jogada[6] == "X")
                {
                    Console.WriteLine("\n\n\n [!] Jogador 1 VENCEU!!! PARABÉNS!");
                    break;
                }

                if (jogada[1] == "X" && jogada[4] == "X" && jogada[7] == "X")
                {
                    Console.WriteLine("\n\n\n [!] Jogador 1 VENCEU!!! PARABÉNS!");
                    break;
                }

                if (jogada[2] == "X" && jogada[5] == "X" && jogada[8] == "X")
                {
                    Console.WriteLine("\n\n\n [!] Jogador 1 VENCEU!!! PARABÉNS!");
                    break;
                }

                if (jogada[0] == "X" && jogada[4] == "X" && jogada[8] == "X")
                {
                    Console.WriteLine("\n\n\n [!] Jogador 1 VENCEU!!! PARABÉNS!");
                    break;
                }

                if (jogada[2] == "X" && jogada[4] == "X" && jogada[6] == "X")
                {
                    Console.WriteLine("\n\n\n [!] Jogador 1 VENCEU!!! PARABÉNS!");
                    break;
                }


                Console.Write("Jogador 2: ");
                teclado = Console.ReadLine();

                while (!int.TryParse(teclado, out posicao) || posicao < 0 || posicao > 8)
                {
                    Console.WriteLine("Posição inválida. Tente novamente");
                    teclado = Console.ReadLine();
                }

                jogada[posicao-1] = "O";

                Console.Clear();
                Console.WriteLine(" ----- JOGO DO GALO -----");
                Console.WriteLine(" Posições:\n\n" +
                    $"   {jogada[0]}  |  {jogada[1]}  |  {jogada[2]}\n" +
                    $"   {jogada[3]}  |  {jogada[4]}  |  {jogada[5]}\n" +
                    $"   {jogada[6]}  |  {jogada[7]}  |  {jogada[8]}\n" +
                    "");

                //JOGADOR 2
                if (jogada[0] == "O" && jogada[1] == "O" && jogada[2] == "O")
                {
                    Console.WriteLine("\n\n\n [!] Jogador 2 VENCEU!!! PARABÉNS!");
                    break;
                }

                if (jogada[3] == "O" && jogada[4] == "O" && jogada[5] == "O")
                {
                    Console.WriteLine("\n\n\n [!] Jogador 2 VENCEU!!! PARABÉNS!");
                    break;
                }

                if (jogada[6] == "O" && jogada[7] == "O" && jogada[8] == "O")
                {
                    Console.WriteLine("\n\n\n [!] Jogador 2 VENCEU!!! PARABÉNS!");
                    break;
                }

                if (jogada[0] == "O" && jogada[3] == "O" && jogada[6] == "O")
                {
                    Console.WriteLine("\n\n\n [!] Jogador 2 VENCEU!!! PARABÉNS!");
                    break;
                }

                if (jogada[1] == "O" && jogada[4] == "O" && jogada[7] == "O")
                {
                    Console.WriteLine("\n\n\n [!] Jogador 2 VENCEU!!! PARABÉNS!");
                    break;
                }

                if (jogada[2] == "O" && jogada[5] == "O" && jogada[8] == "O")
                {
                    Console.WriteLine("\n\n\n [!] Jogador 2 VENCEU!!! PARABÉNS!");
                    break;
                }

                if (jogada[0] == "O" && jogada[4] == "O" && jogada[8] == "O")
                {
                    Console.WriteLine("\n\n\n [!] Jogador 2 VENCEU!!! PARABÉNS!");
                    break;
                }

                if (jogada[2] == "O" && jogada[4] == "O" && jogada[6] == "O")
                {
                    Console.WriteLine("\n\n\n [!] Jogador 2 VENCEU!!! PARABÉNS!");
                    break;
                }

                //!!!!!!!!!!!!!!!!!!!!!!!!
                if (jogada[2] == "O" && jogada[4] == "O" && jogada[6] == "O")
                {
                    Console.WriteLine("\n\n\n [!] Jogador 2 VENCEU!!! PARABÉNS!");
                    break;
                }

            } while (sair != 1);

            Console.WriteLine(" O Jogo Terminou! A Sair . . .");

            Console.ReadKey();
        }
    }
}
