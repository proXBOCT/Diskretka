#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "MainWindow.h"
#include <string>
#include <sstream>
#include <msclr\marshal_cppstd.h>
#include <regex>
//--------------------------------------------------------------------------------------------------------
class Naturalnie //КЛАСС НАТУРАЛЬНЫХ ЧИСЕЛ
{

public: struct number //структура натуральных чисел
{
	int n;
	int A[50];
};
		//-------------------------------------
		static std::string numberToString(number num)
		{
			std::string res;
			for (int i = 0; i <= num.n; ++i)
				res += num.A[i] + 48;
			return res;
		}
		static bool checkNumber(std::string standardString)
		{
			std::regex pattern(R"(\s*\d+\s*)");
			std::smatch matches;
			if (std::regex_match(standardString, matches, pattern))
				return true;
			return false;

		}
		public: static number getNumberFromInt(int x)
		{
			number ans;

			std::istringstream is(std::to_string(x));
			char c;
			int i = -1;
			while (is.get(c))

			{
				++i;
				ans.A[i] = int(c) - 48;

			}
			ans.n = i;
			return ans;
		}
		//-------------------------------------


		//СРАВНЕНИЕ НАТУРАЛЬНЫХ ЧИСЕЛ(ДЯГИЛЕВ 8305)
		static int COM_NN_D(number num1, number num2)	//ТУТА МЕНЯЛИ
				{
					int i;
					if (num1.n > num2.n)	//Проверка на наибольшее кол-во цифр
						return 2;
					else if (num1.n < num2.n)
						return 1;
					else	//Проверка на наибольшие разряды
						for (i = 0; i < num1.n + 1; ++i)
						{
							if (num1.A[i] > num2.A[i])
								return 2;
							else if (num1.A[i] < num2.A[i])
								return 1;
						}
					return 0;
				}
		// УМНОЖЕНИЕ ЧИСЛА НА ЦИФРУ (СИБИРЯКОВ И.К. 8305)
		static number MUL_ND_N(number num, int a)
		{
			int i,
				k,  // Переменная, отвечающая за цифру, которую надо прибавить к следующем разряду числа
				b;  // Буфферная переменная
			k = 0;
			if (a != 0)  // Если введённая цифра не равна 0, то умножаем
			{
				for (i = 0; i < (num.n + 1) / 2; i++)  // Реверс массива
				{
					b = num.A[i];
					num.A[i] = num.A[num.n - i];
					num.A[num.n - i] = b;
				}
				for (i = 0; i <= num.n; i++)  // Сам процесс умножения
				{
					b = num.A[i];
					num.A[i] = (num.A[i] * a) % 10;
					if (k != 0)
					{
						num.A[i] = (num.A[i] + k) % 10;
						k = ((b * a + k) / 10);
					}
					else
						k = (b * a) / 10;
				}
				if (k != 0)
				{
					num.A[i] = k;
					num.n++;
				}
				for (i = 0; i < (num.n + 1) / 2; i++)  // Реверс массива
				{
					b = num.A[i];
					num.A[i] = num.A[num.n - i];
					num.A[num.n - i] = b;
				}
			}
			else  // Если цифра - 0, то результат равен нулю
			{
				num.A[0] = 0;
				num.n = 0;
			}
			return num;
		}
		//УМНОЖЕНИЕ НА 10 В СТЕПЕНИ K (СИБИРЯКОВ И.К. 8305)
		static number MUL_Nk_N(number num, int k)
		{

			for (int i = num.n + 1; i <= num.n + k; i++)
				num.A[i] = 0;
			num.n = num.n + k;
			return num;
		}
		//ПРОВЕРКА НА 0(ДЯГИЛЕВ 8305)
		static bool NZER_N_B(number num)
		{
			if (num.n == 0 && num.A[0] == 0)
				return true;
			else
				return false;
		}
		//ДОБАВЛЕНИЕ К НАТУРАЛЬНОМУ 1(ДЯГИЛЕВ 8305)
		static number ADD_1N_N(number num)
		{
			int i;
			if (num.A[i] == 9 && num.n == 0)
			{
				num.n = 1;
				num.A[0] = 1;
				num.A[1] = 0;
				return num;
			}
			for (i = num.n; i >= 0; i--)
			{
				if (num.A[i] == 9)	//Если последнее число 9
				{
					num.A[i] = 0;
					if (i == 0)	//Если все числа в числе девятки
					{
						num.A[0] = 1;
						for (i = 1; i < num.n + 2; ++i)
							num.A[i] = 0;
						++num.n;
						return num;
					}
				}
				else	//Если число не 9
				{
					++num.A[i];
					return num;
				}
			}
		}
		//СЛОЖЕНИЕ НАТУРАЛЬНЫХ ЧИСЕЛ (Костин 8305)
		static number ADD_NN_N(number num1, number num2)
		{
			number ans;
			if (num1.n > num2.n) //если кол.во цифр в первом числе больше
			{
				ans.n = num1.n + 1;
				for (int i = 0; i <= ans.n; ++i)
					ans.A[i] = 0;
				for (int i = num1.n,  j = num2.n; j >= 0; --i, --j)
				{
					ans.A[i + 1] += (num1.A[i] + num2.A[j]);
					ans.A[i] += (ans.A[i + 1] / 10);
					ans.A[i + 1] %= 10;
				}
				for (int i = num1.n - num2.n - 1; i >= 0; --i)
				{
					ans.A[i + 1] += num1.A[i];
					ans.A[i] += (ans.A[i + 1] / 10);
					ans.A[i + 1] %= 10;
				}
				if (ans.A[0] == 0)
				{
					for (int i = 0; i < ans.n; ++i)
						ans.A[i] = ans.A[i + 1];
					--ans.n;
				}
			}
			else //если кол.во цифр в первом числе меньше или равно кол.ву во втором
			{
				ans.n = num2.n + 1;
				for (int i = 0; i <= ans.n; ++i)
					ans.A[i] = 0;
				for (int i = num1.n, j = num2.n; i >= 0; --i, --j)
				{
					ans.A[j + 1] += (num1.A[i] + num2.A[j]);
					ans.A[j] += (ans.A[j + 1] / 10);
					ans.A[j + 1] %= 10;
				}
				for (int i = num2.n - num1.n - 1; i >= 0; --i)
				{
					ans.A[i + 1] += num2.A[i];
					ans.A[i] += (ans.A[i + 1] / 10);
					ans.A[i + 1] %= 10;
				}
				if (ans.A[0] == 0)
				{
					for (int i = 0; i < ans.n; ++i)
						ans.A[i] = ans.A[i + 1];
					--ans.n;
				}
			}

			return ans;

		}
		//ВЫЧИТАНИЕ ИЗ ПЕРВОГО НАТУРАЛЬНОГО БОЛЬШЕГО ВТОРОГО МЕНЬШЕГО ИЛИ РАВНОГО НАТУРАЛЬНОГО ЧИСЛА(Антон Шарандин 8305)
		static number SUB_NN_N(number num1, number num2)
		{
			int i, c, j;
			if (Naturalnie::COM_NN_D(num1, num2) == 0)
			{
				num1.n = 0;
				num1.A[0] = 0;
				return num1;
			}
			else
			{
				c = num1.n - num2.n - 1;//разность между разрядами
				for (i = num2.n; i >= 0; i--)
				{
					if (num1.A[i + c + 1] >= num2.A[i])//если разряд первого числа больше разряда второго
					{                           //то просто вычитаем из первого второй
						num1.A[i + c + 1] = num1.A[i + c + 1] - num2.A[i];
					}
					else if (num1.A[i + c + 1] < 0) //если разряд первого получился меньше нуля, то тоже просто вычитаем из первого второй
					{
						num1.A[i + c + 1] = num1.A[i + c + 1] - num2.A[i];
					}
					else
					{
						num1.A[i + c + 1] = num1.A[i + c + 1] - num2.A[i];//тут занимаем 10
						for (j = i + c; j >= 0; j--)
						{
							if (num1.A[j] == 0)//если разряд у которого занимаем равен 0, то вместо 0 записываем -1
							{
								num1.A[j] = -1;
							}
							else
							{
								num1.A[j] = num1.A[j] - 1;//когда дошли до не 0 разряда вычитаем из него 1 и выходим из цикла
								j = -1;
							}
						}
					}
					j = 0;
				}
			}
			for (i = 0; i <= num1.n; i++)//к получившимся отрицательным разрядам добавляем 10
			{
				if (num1.A[i] < 0)
					num1.A[i] = num1.A[i] + 10;
			}
			if (num1.A[0] == 0)//если конечное число стало на один разряд меньше, то сдвигаем его влево
			{
				c = 0;
				for (i = 0; i <= num1.n; i++)
				{
					if (num1.A[i] == 0)
						c++;
					if (num1.A[i] != 0)
						i = num1.n + 1;
				}
				j = 0;
				for (i = c; i <= num1.n; i++)
				{
					num1.A[j] = num1.A[i];
					j++;
				}
				num1.n = num1.n - c;
			}
			return num1;
		}
		//УМНОЖЕНИЕ НАТУРАЛЬНЫХ ЧИСЕЛ(СИБИРЯКОВ И.К. 8305)
		static number MUL_NN_N(number num1, number num2)
		{
			number ans = MUL_ND_N(num1, num2.A[num2.n]);
			for (int i = num2.n - 1; i >= 0; --i)
			{
				number temp = MUL_ND_N(num1, num2.A[i]);
				temp = MUL_Nk_N(temp, num2.n - i);
				ans = ADD_NN_N(ans, temp);
			}
			return ans;
		}
		//Вычитание из натурального другого натурального, умноженного на цифру для случая с неотрицательным результатом(Дягилев 8305)
		static number SUB_NDN_N(number num1, number num2, int D)
		{
				int i;
				num2 = Naturalnie::MUL_ND_N(num2, D);    //Умножаем второе число    
				if (Naturalnie::COM_NN_D(num1, num2) == 1)    //Если оно больше первого, то гг
					throw std::string("Incorrect");
				else    //Иначе вычитаем из первого числа второе
				{
					num1 = Naturalnie::SUB_NN_N(num1, num2);
					return num1;
				}
		}
		//Вычисление первой цифры деления большего натурального на меньшее, домноженное на 10^k, где k - номер позиции этой цифры (номер считается с нуля) (Дягилев 8305)
		static number DIV_NN_Dk(number num1, number num2)
		{
			Naturalnie::number result[1];
			int i, c = 0;
			int mem = num1.n - num2.n;
			if ((num1.n == 0 && num1.A[0] == 0) || (num2.n == 0 && num2.A[0] == 0))	//Проверка на дэбила, если какое либо число ноль, то гг
				throw std::string("Incorrect");
			if (Naturalnie::COM_NN_D(num1, num2) == 1)	//Проверка на дэбила, если второе больше первого, то гг
				throw std::string("Incorrect");
			else 	//Если первое больше второго, как и должно быть
			{
				int tmp = num1.n - num2.n;
				if (tmp > 0 && num1.A[0] <= num2.A[0])
				{
					tmp--;
					mem--;
				}
				num2 = Naturalnie::MUL_Nk_N(num2, tmp);
				int cifra = 0;
				while (Naturalnie::COM_NN_D(num1, num2) != 1)
				{
					num1 = Naturalnie::SUB_NN_N(num1, num2);
					++cifra;
				}
				Naturalnie::number result;
				result.n = 0;
				result.A[0] = cifra;
				result = MUL_Nk_N(result, mem);
				return result;
			}
		}
		//Частное от деления большего натурального числа на меньшее или равное натуральное с остатком(делитель отличен от нуля) (Дягилев 8305)
		static number DIV_NN_N(number num1, number num2)
		{
			if (Naturalnie::COM_NN_D(num1, num2) == 1)	//Если второе больше первого, то гг
				throw std::string("Incorrect");
			if (COM_NN_D(num1, num2) == 0)	//Если числа равны
			{
				num1.A[0] = 1;
				num1.n = 0;
				return num1;
			}
			else	//Если первое больше второго
			{
				number result[1];
				result[0].n = 0;
				result[0].A[0] = 0;
				number tmp[1];
				while (COM_NN_D(num1, num2) != 1)	//Алгоритм деления
				{
					tmp[0] = DIV_NN_Dk(num1, num2);
					result[0] = ADD_NN_N(result[0], tmp[0]);
					tmp[0] = MUL_NN_N(num2, tmp[0]);
					num1 = SUB_NN_N(num1, tmp[0]);
				}
				return result[0];
			}
		}
		//Остаток от деления большего натурального числа на меньшее или равное натуральное с остатком(делитель отличен от нуля) (Шарандин 8305)
		static number MOD_NN_N(number num1, number num2)
		{
			number chastnoe;
			int i;
			if (Naturalnie::COM_NN_D(num1, num2) == 1)	//Если второе больше первого, то гг
				throw std::string("Incorrect");
			else
			{
				chastnoe = Naturalnie::DIV_NN_N(num1, num2);// делим первое на второе без остатка
				num2 = Naturalnie::MUL_NN_N(chastnoe, num2);	//Второе*частное
				num1 = Naturalnie::SUB_NN_N(num1, num2);	//Вычитаем из первого второе*частное
				return num1;
			}
		}
		//НОД натуральных чисел (Швецов 8305)
		static number GCF_NN_N(Naturalnie::number num1, Naturalnie::number num2)    //0 6
		{
			if (Naturalnie::NZER_N_B(num1))    //Если введен ноль
				return num2;
			else if (Naturalnie::NZER_N_B(num2))
				return num1;

			//Если без нулей
			while (!Naturalnie::NZER_N_B(num1) && !Naturalnie::NZER_N_B(num2))    //Алгоритм Евклида
			{
				if (Naturalnie::COM_NN_D(num1, num2) == 2)
					num1 = MOD_NN_N(num1, num2);
				else
					num2 = MOD_NN_N(num2, num1);
			}
			return ADD_NN_N(num1, num2);

		}
		//НОК натуральных чисел (Швецов 8305)
		static number LCM_NN_N(number num1, number num2)
		{
			if (Naturalnie::NZER_N_B(num1) == true || Naturalnie::NZER_N_B(num2) == true)	//Если хотя бы одно из чисел ноль
				throw std::string("Incorrect");
			else
			{
				number result[1];
				result[0] = (Naturalnie::DIV_NN_N(Naturalnie::MUL_NN_N(num1, num2), Naturalnie::GCF_NN_N(num1, num2)));	//result = num1*num2/НОД(num1, num2)
				return result[0];
			}
		}
};
//--------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------
class celie //КЛАСС ЦЕЛЫХ ЧИСЕЛ
{

public: struct celoe //структура целых чисел 
{
	bool b; //знак числа
	int n;
	int A[50];
};

		//-------------------------------------
		static bool checkCeloe(std::string standardString)
		{
			std::regex pattern(R"(\s*-?\d+\s*)");
			std::smatch matches;
			if (std::regex_match(standardString, matches, pattern))
				return true;
			return false;

		}
		static void celoeToNumber(const celoe& c, Naturalnie::number& num) //в класс для целых эту хуету
		{
			num.n = c.n;
			for (int i = 0; i <= c.n; ++i)
				num.A[i] = c.A[i];
		}
		static celoe getCeloeFromInt(int x)
		{
			celoe ans;
			if (x < 0)
			{
				ans.b = true;
				std::istringstream is(std::to_string(-x));
				char c;
				int i = -1;
				while (is.get(c))

				{
					++i;
					ans.A[i] = int(c) - 48;

				}
				ans.n = i;
			}
			else
			{
				ans.b = false;
				std::istringstream is(std::to_string(x));
				char c;
				int i = -1;
				while (is.get(c))

				{
					++i;
					ans.A[i] = int(c) - 48;

				}
				ans.n = i;

			}
			return ans;

		}
		static std::string celoeToString(const celoe& c)
		{
			if (c.A[0] == 0) return "0";
			std::string res;
			if (c.b)
				res += "-";
			Naturalnie::number temp;
			celie::celoeToNumber(c, temp);
			res += Naturalnie::numberToString(temp);
			return res;
		}
		//-------------------------------------


		//АБСОЛЮТНОЕ ЗНАЧЕНИЕ ЦЕЛОГО ЧИСЛА(Дягилев 8305)
		static Naturalnie::number ABS_Z_N(celoe num) //на вход    num[X],    abs[X]
		{                                        //             целое   натуральное    
			Naturalnie::number result;
			for (int i = 0; i < num.n + 1; ++i)
				result.A[i] = num.A[i];

			result.n = num.n;
			return result;    //на выходе abs[X] с натуральным числом
		}
		//ЗНАК ЧИСЛА(Дягилев 8305)
		static int POZ_Z_D(celoe num)
		{	//2 положительное, 1 отрицательное, 0 ноль
			if (num.A[0] == 0)
				return 0;
			else if (num.b == false)
				return 2;
			else
				return 1;
		}//Дягилев 8305
		//Умножение целого числа на -1 (Цыганюк 8305)
		static celoe MUL_ZM_Z(celoe num)
		{
			if (celie::POZ_Z_D(num) == 0)	//Если ноль, то ноль
				return num;
			if (num.b == false)
				num.b = true;
			else num.b = false;
			return num;

		}
		//Преобразование натурального числа в целое(Цыганюк 8305)
		static celoe TRANS_N_Z(Naturalnie::number num)
		{
			celoe result;
			result.b = false;
			result.n = num.n;
			for (int i = 0; i < result.n + 1; i++)
				result.A[i] = num.A[i];
			return result;
		}
		//Преобразование целого неотрицательного числа в натуральное(Цыганюк 8305)
		static Naturalnie::number TRANS_Z_N(celoe num)
		{
			if (celie::POZ_Z_D(num) == 1)	//Если всё таки введено отрицательное...
				throw std::string("Incorrect");
			Naturalnie::number result;
			result.n = num.n;
			for (int i = 0; i < result.n + 1; i++)
				result.A[i] = num.A[i];
			return result;
		}
		//Сложение двух целых чисел(Цыганюк 8305)
		static celoe ADD_ZZ_Z(celoe num1, celoe num2)
		{
			celoe result;
			Naturalnie::number absNum1, absNum2, sum;
			int i;
			absNum1 = ABS_Z_N(num1);
			absNum2 = ABS_Z_N(num2);
			result.b = false;
			//	Если оба числа равны нулю
			if ((POZ_Z_D(num1) == 0) && (POZ_Z_D(num2) == 0))
			{
				result.n = 0;
				result.A[0] = 0;
				return result;
			}
			// Числа имеют одинаковые знаки
			if (POZ_Z_D(num1) == POZ_Z_D(num2))
			{
				sum = Naturalnie::ADD_NN_N(absNum1, absNum2);
				//Если числа отрицательные, то их сумма также отрицательна
				if (POZ_Z_D(num1) == 1)
					result.b = true;
			}
			//	Числа имеют разный знак (либо одно из чисел равно 0)
			// Первое число положительное, второе отрицательное либо 0
			else if (POZ_Z_D(num1) == 2)
			{
				//Если модуль первого больше второго, то вычитаем из первого второе, иначе наоборот
				if (Naturalnie::COM_NN_D(absNum1, absNum2) == 2)
					sum = Naturalnie::SUB_NN_N(absNum1, absNum2);
				else
				{
					sum = Naturalnie::SUB_NN_N(absNum2, absNum1);
					if (Naturalnie::COM_NN_D(absNum2, absNum1) != 0)
						result.b = true;
				}
			}
			// Второе число положительное, первое число отрицательное либо 0
			else if (POZ_Z_D(num2) == 2)
			{
				if (Naturalnie::COM_NN_D(absNum2, absNum1) == 2)
					sum = Naturalnie::SUB_NN_N(absNum2, absNum1);
				else
				{
					sum = Naturalnie::SUB_NN_N(absNum1, absNum2);
					if (Naturalnie::COM_NN_D(absNum2, absNum1) != 0)
						result.b = true;
				}
			}
			result.n = sum.n;
			for (i = 0; i < sum.n + 1; i++)
				result.A[i] = sum.A[i];
			return result;
		}
		// ВЫЧИТАНИЕ ЦЕЛЫХ ЧИСЕЛ (СИБИРЯКОВ И.К. 8305)
		static celoe SUB_ZZ_Z(celoe snum1, celoe snum2)
		{
			Naturalnie::number num1, num2, res;
			celoe result;
			int i;
			/*Первый случай: оба числа либо отрицательные, либо положительные. Работаем с модулями этих чисел*/
			if (celie::POZ_Z_D(snum1) == celie::POZ_Z_D(snum2))
			{
				num1 = celie::ABS_Z_N(snum1);
				num2 = celie::ABS_Z_N(snum2);
				if (Naturalnie::COM_NN_D(num1, num2) == 0)
				{
					result.n = 0;
					result.A[0] = 0;
					return result;
				}
				if (Naturalnie::COM_NN_D(num1, num2) != 1)  // Модуль первого числа больше модуля второго (либо модули равны)
				{
					res = Naturalnie::SUB_NN_N(num1, num2);
					result.b = false;
				}
				else  // Модуль второго числа больше первого
				{
					res = Naturalnie::SUB_NN_N(num2, num1);
					result.b = true;
				}
				result.n = res.n;
				for (i = 0; i <= result.n; i++)
					result.A[i] = res.A[i];
				if (celie::POZ_Z_D(snum1) == 1 && celie::POZ_Z_D(snum2) == 1)  // Если числа отрицательные, то умножаем результат ещё на (-1)
					result = celie::MUL_ZM_Z(result);
			}
			/*Если числа разного знака, то работаем также с модулями этих чисел, но теперь их складываем*/
			if (celie::POZ_Z_D(snum1) != celie::POZ_Z_D(snum2))
			{
				num1 = celie::ABS_Z_N(snum1);
				num2 = celie::ABS_Z_N(snum2);
				res = Naturalnie::ADD_NN_N(num1, num2);
				result.n = res.n;
				result.b = false;
				for (i = 0; i <= result.n; i++)
					result.A[i] = res.A[i];
				if (celie::POZ_Z_D(snum1) == 1 && celie::POZ_Z_D(snum2) == 2)  // Если первое число отрицательное, а второе - положительное, то ещё умножаем на (-1)
					result = celie::MUL_ZM_Z(result);
			}
			if (celie::POZ_Z_D(snum1) == 0)  // Если первое число равно 0, то присваем результату значение второго числа, умноженное на (-1)
				result = celie::MUL_ZM_Z(snum2);
			if (celie::POZ_Z_D(snum2) == 0)  // Если второе число равно 0, то результат равен первому числу
				result = snum1;
			return result;
		}
		// УМНОЖЕНИЕ ЦЕЛЫХ ЧИСЕЛ(СИБИРЯКОВ И.К. 8305)
		static celoe MUL_ZZ_Z(celoe snum1, celoe snum2)
		{
			Naturalnie::number num1, num2, res;
			celoe result;
			int i;
			if (POZ_Z_D(snum1) == 0 || POZ_Z_D(snum2) == 0)
			{
				result.n = 0;
				result.A[0] = 0;
				return result;
			}
			num1 = celie::ABS_Z_N(snum1);
			num2 = celie::ABS_Z_N(snum2);
			res = Naturalnie::MUL_NN_N(num1, num2);  // Работаем с модулями чисел, используем функцию для целых чисел
			result.n = res.n;
			for (i = 0; i <= res.n; i++)
				result.A[i] = res.A[i];
			result.b = false;
			if (celie::POZ_Z_D(snum1) != celie::POZ_Z_D(snum2))  // Если знак чисел разные, то умножаем результат на -1
				result = celie::MUL_ZM_Z(result);
			return result;
		}
		//Частное от деления большего целого числа на меньшее или равное натуральное с остатком(делитель отличен от нуля)(Дягилев 8305)
		static celoe DIV_ZZ_Z(celoe snum1, Naturalnie::number num2)
		{
			Naturalnie::number num1, tmp;
			celoe result;
			num1 = celie::ABS_Z_N(snum1);	//Модуль целого
			tmp = Naturalnie::DIV_NN_N(num1, num2);	//Вычисляем частное по модулю 
			if (celie::POZ_Z_D(snum1) != 1)		//Если целое число было положительным, не меняем частное
			{
				result = celie::TRANS_N_Z(tmp);
				return result;
			}
			else	//Если целое было отрицательным и получился остаток, то уменьшаем результат на 1
			{
				if (Naturalnie::COM_NN_D(num1, (Naturalnie::MUL_NN_N(tmp, num2))) != 0)
					tmp = Naturalnie::ADD_1N_N(tmp);
				result = celie::TRANS_N_Z(tmp);
				result.b = true;
				return result;
			}
		}
		//Остаток от деления большего целого числа на меньшее или равное натуральное с остатком(делитель отличен от нуля)(Дягилев 8305)
		static celoe MOD_ZZ_Z(celoe snum, Naturalnie::number num)
		{
			celoe result, snum2;
			snum2 = celie::TRANS_N_Z(num);
			result = celie::SUB_ZZ_Z(snum, (celie::MUL_ZZ_Z(snum2, (celie::DIV_ZZ_Z(snum, num)))));	//Формула: остаток=делимое-(делитель*частное)
			return result;													//result=snum-(snum2*DIV_ZZ_Z(snum,num)) //snum2 = num(делитель), DIV_ZZ_Z - частное
		}												

};
//--------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------
class racionalnie //КЛАСС РАЦИОНАЛЬНЫХ ЧИСЕЛ
{


public: struct rats
{
	Naturalnie::number znam;
	celie::celoe chisl;
};

		//-------------------------------------
		static std::string ratsToString(const rats& r)
		{
			std::string res;
			res += celie::celoeToString(r.chisl);
			if (r.znam.n != 0 || r.znam.A[0] != 1)
				res += "/" + Naturalnie::numberToString(r.znam);
			return res;

		}
		static bool checkRats(std::string standardString)
		{
			std::regex pattern(R"(\s*-?\d+(/\d+)?\s*)");
			std::smatch matches;
			if (std::regex_match(standardString, matches, pattern))
				return true;
			return false;
		}
		static rats getRats(std::string standardString);
		//-------------------------------------
			//Сокращение дроби (Смеюха 8305)
			static rats RED_Q_Q(rats num)
		{
			rats result;
			Naturalnie::number nod;
			if (num.chisl.A[0] == 0)
			{
				num.znam.A[0] = 1;
				num.znam.n = 0;
				return num;
			}    //Делим оба числа на НОД
			nod = Naturalnie::GCF_NN_N(celie::ABS_Z_N(num.chisl), num.znam);
			num.znam = Naturalnie::DIV_NN_N(num.znam, nod);
			num.chisl = celie::DIV_ZZ_Z(num.chisl, nod);
			return num;
		}
			//Проверка на целое, если рациональное число является целым, то «да», иначе «нет» (Смеюха 8305)
			static bool INT_Q_B(rats num)
			{
				celie::celoe ost;
				bool result;
				if (num.chisl.A[0] == 0)
					return 1;
				Naturalnie::number abs;
				abs = celie::ABS_Z_N(num.chisl);
				if (Naturalnie::COM_NN_D(abs, num.znam) == 1)	//Если числитель меньше знаменателя, но он не равен 0
					return 0;
				ost = celie::MOD_ZZ_Z(num.chisl, num.znam); 	//Если остаток от деления 0
				if (ost.A[0] == 0)
					return 1;
				else
					return 0;
			}
			//Преобразование целого в дробное(Смеюха 8305) 
			static rats TRANS_Z_Q(celie::celoe num)
			{
				rats num1;
				num1.chisl = num;
				num1.znam.n = 0;
				num1.znam.A[0] = 1;
				return num1;
			}
			//Преобразование рационального в целое(если делитель равен 1) (Смеюха 8305)
			static celie::celoe TRANS_Q_Z(rats num)
			{
				celie::celoe num1;
				if (num.znam.n == 0 && num.znam.A[0] == 1)
				{
					num1 = num.chisl;
					return num1;
				}
				else
					throw std::string("Incorrect");	
			}
			//Сложение рациональных чисел(Костин 8305)
			static rats ADD_QQ_Q(rats A, rats B)
			{
				rats C;
				celie::celoe A1, B1;
				int i;

				A = racionalnie::RED_Q_Q(A);
				B = racionalnie::RED_Q_Q(B);
				C.znam = Naturalnie::MUL_NN_N(A.znam, B.znam);
				A1.n = B.znam.n;
				A1.b = false;
				for (i = 0; i <= A1.n; i++)
					A1.A[i] = B.znam.A[i];
				A1 = celie::MUL_ZZ_Z(A1, A.chisl);
				B1.n = A.znam.n;
				B1.b = false;
				for (i = 0; i <= B1.n; i++)
					B1.A[i] = A.znam.A[i];
				B1 = celie::MUL_ZZ_Z(B1, B.chisl);
				C.chisl = celie::ADD_ZZ_Z(A1, B1);
				C = racionalnie::RED_Q_Q(C);
				return C;
			}
			//Вычитание рациональных чисел (Костин 8305)
			static rats SUB_QQ_Q(rats A, rats B)
			{
				rats C;
				celie::celoe A1, B1;
				int i;
				A = racionalnie::RED_Q_Q(A);
				B = racionalnie::RED_Q_Q(B);
				C.znam = Naturalnie::MUL_NN_N(A.znam, B.znam);
				A1.n = B.znam.n;
				A1.b = false;
				for (i = 0; i <= A1.n; i++)
					A1.A[i] = B.znam.A[i];
				A1 = celie::MUL_ZZ_Z(A1, A.chisl);
				B1.n = A.znam.n;
				B1.b = false;
				for (i = 0; i <= B1.n; i++)
					B1.A[i] = A.znam.A[i];
				B1 = celie::MUL_ZZ_Z(B1, B.chisl);
				C.chisl = celie::SUB_ZZ_Z(A1, B1);
				C = racionalnie::RED_Q_Q(C);
				return C;
			}
			//УМНОЖЕНИЕ ДРОБЕЙ (СИБИРЯКОВ И.К. 8305)
			static rats MUL_QQ_Q(rats rnum1, rats rnum2)
			{
				rats result;
				rnum1 = RED_Q_Q(rnum1);
				rnum2 = RED_Q_Q(rnum2);
				result.chisl = celie::MUL_ZZ_Z(rnum1.chisl, rnum2.chisl);
				result.znam = Naturalnie::MUL_NN_N(rnum1.znam, rnum2.znam);
				if (((celie::POZ_Z_D(rnum1.chisl) == 2 && celie::POZ_Z_D(rnum2.chisl) == 1) || ((celie::POZ_Z_D(rnum1.chisl) == 1 && celie::POZ_Z_D(rnum2.chisl) == 2))))
					result.chisl.b = true;
				else
					result.chisl.b = false;
				result = RED_Q_Q(result);
				return result;
			}
			// Деление дробей (СИБИРЯКОВ И.К. 8305)
			static rats DIV_QQ_Q(rats rnum1, rats rnum2)
			{
				rnum1 = racionalnie::RED_Q_Q(rnum1);
				rnum2 = racionalnie::RED_Q_Q(rnum2);
				rats result;
				if (celie::POZ_Z_D(rnum2.chisl) == 0)
					throw std::string("Incorrect");  
				else
				{
					
					result.chisl = celie::MUL_ZZ_Z(rnum1.chisl, celie::TRANS_N_Z(rnum2.znam));
					if (celie::POZ_Z_D(result.chisl) != 0)  
					{
						result.znam = Naturalnie::MUL_NN_N(rnum1.znam, celie::ABS_Z_N(rnum2.chisl));
						
						if (celie::POZ_Z_D(rnum1.chisl) != celie::POZ_Z_D(rnum2.chisl))
							if (result.chisl.b == false)
								result.chisl.b = true;
							else
								if (celie::POZ_Z_D(rnum1.chisl) == 1 && celie::POZ_Z_D(rnum2.chisl) == 1)
									result.chisl.b = false;
					}
				}
				result = racionalnie::RED_Q_Q(result);
				return result;
			}


};
//--------------------------------------------------------------------------------------------------------
std::istream& operator>>(std::istream& is, racionalnie::rats& r)
{
	int x;
	is >> x;  //вводим и обрабатываем числитель
	r.chisl = celie::getCeloeFromInt(x);
	char temp;
	if (is.get(temp) && temp == '/')
	{
		is >> x;
		if (x == 0) throw std::string("Zero divide");
		else
			r.znam = Naturalnie::getNumberFromInt(x);
	}
	else
	{
		is.unget();
		r.znam.n = 0;
		r.znam.A[0] = 1;

	}
	return is;
}
//--------------------------------------------------------------------------------------------------------
class Mnogocleny//КЛАСС МНОГОЧЛЕНОВ
{

public: struct polynomial //структура многочленов
{
	int m;
	racionalnie::rats pol[50];
};

		//-------------------------------------
		static double Znak(double x, bool a)
		{
			if (a) return x;
			else return -x;
		}
		static bool getPoly(std::string standardString, polynomial& poly)
		{


			std::regex patternForFirst(R"((-?(?:\d+(?:/\d+)?)?)(x(?:\^\d+)?))"); //шаблон для первого одночлена
			std::regex pattern(R"(((?:\+|-)(?:\d+(?:/\d+)?)?)(x(?:\^\d+)?)?)"); //шаблон для всех остальных одночленов
			std::smatch matches;
			std::istringstream is(standardString);
			std::string s;
			char temp;
			is >> temp;
			do
			{
				s += temp;
			} while (is >> temp && temp != '-' && temp != '+');
			if (std::regex_match(s, matches, patternForFirst))
			{
				if (matches[2] == "x")
					poly.m = 1;
				else
				{
					std::istringstream power(matches[2]);
					char c;
					power >> c;
					power >> c;
					int x;
					power >> x;
					poly.m = x;
				}

				if (matches[1] == "-")
				{
					poly.pol[0].chisl.b = true;
					poly.pol[0].chisl.A[0] = 1;
					poly.pol[0].chisl.n = 0;
					poly.pol[0].znam.A[0] = 1;
					poly.pol[0].znam.n = 0;
				}
				else if (matches[1] == "")
				{
					poly.pol[0].chisl.b = false;
					poly.pol[0].chisl.A[0] = 1;
					poly.pol[0].chisl.n = 0;
					poly.pol[0].znam.A[0] = 1;
					poly.pol[0].znam.n = 0;
				}
				else
				{

					std::istringstream tempStream(matches[1]);
					tempStream >> poly.pol[0];
					if (poly.pol[0].chisl.A[0] == 0) return false;
				}


				int prevPow = poly.m;
				while (is)
				{
					s = "";
					do
					{
						s += temp;
					} while (is >> temp && temp != '-' && temp != '+');

					if (std::regex_match(s, matches, pattern))
					{
						int pow;
						if (matches[2].matched)
						{
							if (matches[2] == "x")
								pow = 1;
							else
							{
								std::istringstream power(matches[2]);
								char c;
								power >> c;
								power >> c;
								power >> pow;

							}
						}
						else pow = 0;
						if (pow >= prevPow) return false;
						if (matches[1] == "+")
						{
							poly.pol[poly.m - pow].chisl.b = false;
							poly.pol[poly.m - pow].chisl.A[0] = 1;
							poly.pol[poly.m - pow].chisl.n = 0;
							poly.pol[poly.m - pow].znam.A[0] = 1;
							poly.pol[poly.m - pow].znam.n = 0;
						}
						else if (matches[1] == "-")
						{
							poly.pol[poly.m - pow].chisl.b = true;
							poly.pol[poly.m - pow].chisl.A[0] = 1;
							poly.pol[poly.m - pow].chisl.n = 0;
							poly.pol[poly.m - pow].znam.A[0] = 1;
							poly.pol[poly.m - pow].znam.n = 0;
						}
						else
						{
							std::istringstream tempStream(matches[1]);
							tempStream >> poly.pol[poly.m - pow];
						}
						for (int i = poly.m - prevPow + 1; i < poly.m - pow; ++i)
						{
							poly.pol[i].chisl.b = false;
							poly.pol[i].chisl.A[0] = 0;
							poly.pol[i].chisl.n = 0;
							poly.pol[i].znam.A[0] = 1;
							poly.pol[i].znam.n = 0;
						}
						prevPow = pow;
					}
					else return false;
				}
				for (int i = poly.m - prevPow + 1; i <= poly.m; ++i)
				{
					poly.pol[i].chisl.b = false;
					poly.pol[i].chisl.A[0] = 0;
					poly.pol[i].chisl.n = 0;
					poly.pol[i].znam.A[0] = 1;
					poly.pol[i].znam.n = 0;
				}

			}
			else return false;
			return true;
		}
		static std::string polyToString(polynomial poly)
		{
			std::string res;
			bool check = true;
			if (poly.m == 0)
			{
				res += racionalnie::ratsToString(poly.pol[0]);
				check = false; //если первый одночлен является свободным коэффициентом - то нет нужды в дальнейшей обработки многочлена
			}
			else
			{
				if (poly.pol[0].chisl.A[0] == 0) //если первый коэф. нулевой
				{
					//проверяем на ноль все остальные коэффициенты, если все они равны нулю, то просто выводим 0
					check = false;
					for (int i = 1; i <= poly.m; ++i)
						if (poly.pol[i].chisl.A[0] != 0)
						{
							check = true;
							break;
						}
					if (!check)
						res += "0";

				}
				else
				{

					if (poly.pol[0].chisl.b)
						res += "-";
					if (poly.pol[0].chisl.n == 0 && poly.pol[0].chisl.A[0] == 1 && poly.pol[0].znam.n == 0 && poly.pol[0].znam.A[0] == 1) //проверяем модуль коэффициента на равенство единице, чтобы убрать ее при выводе 
					{

						if (poly.m == 1) res += "x";
						else res += "x^" + std::to_string(poly.m);
					}
					else
					{
						Naturalnie::number temp;
						celie::celoeToNumber(poly.pol[0].chisl, temp);
						res += Naturalnie::numberToString(temp);
						if (poly.pol[0].znam.n != 0 || poly.pol[0].znam.A[0] != 1)
							res += "/" + Naturalnie::numberToString(poly.pol[0].znam);
						if (poly.m == 1) res += "x";
						else  res += "x^" + std::to_string(poly.m);
					}
				}

			}
			if (check)
			{
				for (int i = 1; i <= poly.m - 2; ++i) //обработка остальных одночленов 
				{
					if (poly.pol[i].chisl.A[0] != 0)
					{
						if (poly.pol[i].chisl.b)
							res += " - ";
						else res += " + ";
						if (poly.pol[i].chisl.n == 0 && poly.pol[i].chisl.A[0] == 1 && poly.pol[i].znam.n == 0 && poly.pol[i].znam.A[0] == 1) //проверяем модуль коэффициента на равенство единице, чтобы убрать ее при выводе
							res += "x^" + std::to_string(poly.m - i);
						else
						{
							Naturalnie::number temp;
							celie::celoeToNumber(poly.pol[i].chisl, temp);
							res += Naturalnie::numberToString(temp);
							if (poly.pol[i].znam.n != 0 || poly.pol[i].znam.A[0] != 1)
								res += "/" + Naturalnie::numberToString(poly.pol[i].znam);
							res += "x^" + std::to_string(poly.m - i);

						}
					}
				}


				if ((poly.m > 1) && poly.pol[poly.m - 1].chisl.A[0] != 0) //обработка одночлена Cx
				{
					if (poly.pol[poly.m - 1].chisl.b)
						res += " - ";
					else res += " + ";
					if (poly.pol[poly.m - 1].chisl.n == 0 && poly.pol[poly.m - 1].chisl.A[0] == 1 && poly.pol[poly.m - 1].znam.n == 0 && poly.pol[poly.m - 1].znam.A[0] == 1) //проверяем модуль коэффициента на равенство единице, чтобы убрать ее при выводе
						res += "x";
					else
					{
						Naturalnie::number temp;
						celie::celoeToNumber(poly.pol[poly.m - 1].chisl, temp);
						res += Naturalnie::numberToString(temp);
						if (poly.pol[poly.m - 1].znam.n != 0 || poly.pol[poly.m - 1].znam.A[0] != 1)
							res += "/" + Naturalnie::numberToString(poly.pol[poly.m - 1].znam);
						res += "x";

					}
				}

				if ((poly.m > 0) && poly.pol[poly.m].chisl.A[0] != 0) //обработка свободного коэффициента
				{
					if (poly.pol[poly.m].chisl.b)
						res += " - ";
					else res += " + ";
					Naturalnie::number temp;
					celie::celoeToNumber(poly.pol[poly.m].chisl, temp);
					res += Naturalnie::numberToString(temp);
					if (poly.pol[poly.m].znam.n != 0 || poly.pol[poly.m].znam.A[0] != 1)
						res += "/" + Naturalnie::numberToString(poly.pol[poly.m].znam);

				}
				if (poly.pol[0].chisl.A[0] == 0) //если первый коэф. нулевой, то нам нужно убрать лишний плюс и нули в начале строки
				{
					std::string tmp;
					if (res[1] == '-') tmp += '-';
					for (int i = 3; i < res.size(); ++i)
						tmp += res[i];
					res = tmp;
				}
			}
			return res;
		}
		//-------------------------------------


		
		//СТАРШИЙ КОЭФ МНОГОЧЛЕНА(БОГ)
		static racionalnie::rats LED_P_Q(polynomial poly)
		{
			return poly.pol[0];
		}
		//ПРОИЗВОДНАЯ МНОГОЧЛЕНА(БОГ)
		static polynomial DER_P_P(polynomial poly)
		{
			polynomial res;
			res.m = poly.m - 1;
			for (int i = 0; i < poly.m; ++i)
			{
				if (poly.pol[i].chisl.A[0] != 0)
				{
					std::string temp = celie::celoeToString(poly.pol[i].chisl);
					std::istringstream is(temp);
					int x;
					is >> x;
					res.pol[i].chisl = celie::getCeloeFromInt(x*(poly.m - i));
					res.pol[i].znam = poly.pol[i].znam;
				}
				else
					res.pol[i].chisl.A[0] = 0;
			}
			return res;
		}
		//УМНОЖЕНИЕ МНОГОЧЛЕНА НА Х В СТЕПЕНИ K(БОГ)
		static polynomial MUL_Pxk_P(polynomial A, int k)
		{
			while (k > 0)
			{
				A.m++;
				A.pol[A.m].chisl.b = false;
				A.pol[A.m].chisl.n = 0;
				A.pol[A.m].chisl.A[0] = 0;
				A.pol[A.m].znam.n = 0;
				A.pol[A.m].znam.A[0] = 1;
				k--;
			}
			return A;
		}
		// Сложение многочленов (Шарандин 8305)
		static polynomial ADD_PP_P(polynomial num1, polynomial num2)
		{
			int c, k;
			if (num1.m < num2.m)
			{
				c = num2.m;
				k = num2.m - num1.m;
				for (int i = c; i >= k; i--)
				{
					num2.pol[i] = racionalnie::ADD_QQ_Q(num2.pol[i], num1.pol[i - k]);
				}
				return num2;
			}
			else
			{
				c = num1.m;
				k = num1.m - num2.m;
				for (int i = c; i >= k; i--)
				{
					num1.pol[i] = racionalnie::ADD_QQ_Q(num1.pol[i], num2.pol[i - k]);
				}
			}

			int num; // отбрасываем нулевые коэффициенты в начале
			for (num = 0; num <= num1.m; ++num)
				if (num1.pol[num].chisl.A[0] != 0)
					break;

			if (num <= num1.m && num > 0)
			{
				num1.m -= num;
				for (int i = num; i <= num1.m; ++i)
					num1.pol[i - num] = num1.pol[i];
			}
			else if (num == num1.m + 1)
			{
				num1.m = 0;
				num1.pol[0].chisl.A[0] = 0;
				num1.pol[0].chisl.n = 0;
				num1.pol[0].znam.A[0] = 1;
				num1.pol[0].znam.n = 0;
			}


			return num1;
		}
		// Вычитание многочленов (Шарандин 8305)
		static polynomial SUB_PP_P(polynomial num1, polynomial num2)
		{
			int c, k;
			if (num1.m < num2.m)
			{
				c = num2.m;
				k = num2.m - num1.m;
				for (int i = c; i >= k; i--)
				{
					num2.pol[i] = racionalnie::SUB_QQ_Q(num2.pol[i], num1.pol[i - k]);
				}
				return num2;
			}
			else
			{
				c = num1.m;
				k = num1.m - num2.m;
				for (int i = c; i >= k; i--)
				{
					num1.pol[i] = racionalnie::SUB_QQ_Q(num1.pol[i], num2.pol[i - k]);
				}
			}



			int num; // отбрасываем нулевые коэффициенты в начале
			for (num = 0; num <= num1.m; ++num)
				if (num1.pol[num].chisl.A[0] != 0)
					break;

			if (num <= num1.m && num > 0)
			{
				num1.m -= num;
				for (int i = num; i <= num1.m; ++i)
					num1.pol[i - num] = num1.pol[i];
			}
			else if (num == num1.m + 1)
			{
				num1.m = 0;
				num1.pol[0].chisl.A[0] = 0;
				num1.pol[0].chisl.n = 0;
				num1.pol[0].znam.A[0] = 1;
				num1.pol[0].znam.n = 0;
			}


			return num1;
		}
		//Умножение многочлена на рациональное число (Смеюха 8305)
		static polynomial MUL_PQ_P(polynomial poly, racionalnie::rats num)
		{
			for (int i = 0; i <= poly.m; i++)
				poly.pol[i] = racionalnie::MUL_QQ_Q(poly.pol[i], num);
			return poly;
		}
		//Степень многочлена (Шарандин 8305)
		static int DEG_P_N(polynomial num1)
		{
			return num1.m;
		}
		//Умножение многочленов Костин (Александр 8305)
		static polynomial MUL_PP_P(polynomial a, polynomial b)
{

    polynomial res = MUL_PQ_P(b, a.pol[0]);
    res = MUL_Pxk_P(res, a.m);
    for (int i = 1; i <= a.m; ++i)
    {
        polynomial temp = MUL_PQ_P(b, a.pol[i]);
        temp = MUL_Pxk_P(temp, a.m - i);
        res = ADD_PP_P(res, temp);
    }
    return res;
}
		//Частное от деления многочлена на многочлен при делении с остатком (Шадрин Андрей 8305)
		static polynomial DIV_PP_P(polynomial A, polynomial B)
		{
			polynomial S, C;
			int k;
			C.m = 0;
			C.pol[0].chisl.b = false;
			C.pol[0].chisl.n = 0;
			C.pol[0].chisl.A[0] = 0;
			C.pol[0].znam.n = 0;
			C.pol[0].znam.A[0] = 1;
			while (A.m >= B.m)
			{
				S.m = 0;
				S.pol[0] = racionalnie::DIV_QQ_Q(A.pol[0], B.pol[0]);
				k = A.m - B.m;
				if (k != 0)
					S = MUL_Pxk_P(S, k);
				C = ADD_PP_P(C, S);
				S = MUL_PP_P(B, S);
				A = SUB_PP_P(A, S);
			}
			return C;
		}
		//Остаток от деления многочлена на многочлен при делении с остатком (Шадрин Андрей 8305)
		static polynomial MOD_PP_P(polynomial A, polynomial B)
		{
			polynomial temp, //буферный многочлен,
				div_res, // многочлен для вычисления произведения частного на делитель
				res;  //многочлен для результата
			
			div_res = DIV_PP_P(A, B);
			temp = MUL_PP_P(div_res, B);
			res = SUB_PP_P(A, temp);

			return res;
		} //Шадрин Андрей 8305
		//Вынесение из многочлена НОК знаменателей коэффициентов и НОД числителей (Дягилев 8305)
		static racionalnie::rats FAC_P_Q(polynomial poly)
		{
			racionalnie::rats result;
			Naturalnie::number c = celie::ABS_Z_N(poly.pol[0].chisl), z = poly.pol[0].znam;	//Приравниваем числитель и знаменатель первого коэф. 
			for (int i = 0; i < (poly.m); ++i)	//Считаем нод числителей NOD(a1,a2,a3,a4)= NOD( NOD( NOD(a1,a2), a3 ), a4 )
			{
				if (celie::POZ_Z_D(poly.pol[i + 1].chisl) != 0)	//Если коэф. не ноль, то считаем НОД
					c = Naturalnie::GCF_NN_N(c, celie::ABS_Z_N(poly.pol[i + 1].chisl));
			}
			for (int i = 0; i < (poly.m); ++i)	//Считаем нок аналогично нод
			{
				z = Naturalnie::LCM_NN_N(z, poly.pol[i + 1].znam);
			}
			result.chisl = celie::TRANS_N_Z(c);
			result.znam = z;
			return result;	//Возвращаем дробь. Числитель - НОД, знаменатель - НОК
		}
		//НОД многочленов (Швецов 8305)
		static polynomial GCF_PP_P(polynomial poly1, polynomial poly2)
		{
			polynomial pol1,
				pol2;
			if (((poly1.m == 0) && (poly1.pol[0].chisl.A[0] == 0)) || ((poly2.m == 0) && (poly2.pol[0].chisl.A[0] == 0)))
			{
				throw std::string("Incorrect");  // пояснений не нужно
				return poly1;
			}
			while (pol1.m != 0 && pol2.m != 0)
			{
				if (DEG_P_N(pol1) > DEG_P_N(pol2))
				{
					pol1 = MOD_PP_P(pol1, pol2);
				}
				else
				{
					pol2 = MOD_PP_P(pol2, pol1);
				}
				if (pol1.m == 0)
					return pol2;
				if (pol2.m == 0)
					return pol1;
			}
		}

};
//--------------------------------------------------------------------------------------------------------




racionalnie::rats racionalnie::getRats(std::string standardString)
{
	std::istringstream is(standardString);
	rats temp;
	is >> temp;
	return temp;
}