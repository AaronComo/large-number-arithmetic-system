#include "main.h"
//#define debug


int main()
{
	//主界面
	while (1)
	{
		system("cls");
		HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD coord;

		coord.X = 43;
		coord.Y = 6;
		SetConsoleCursorPosition(hwnd, coord);
		printf("***************************");
		coord.X = 43;
		coord.Y = 7;
		SetConsoleCursorPosition(hwnd, coord);
		printf("*   欢迎使用大数运算系统  *");
		coord.X = 43;
		coord.Y = 8;
		SetConsoleCursorPosition(hwnd, coord);
		printf("***************************");
		coord.X = 43;
		coord.Y = 9;
		SetConsoleCursorPosition(hwnd, coord);
		printf("*                         *");
		coord.X = 43;
		coord.Y = 10;
		SetConsoleCursorPosition(hwnd, coord);
		printf("*       1、使用说明       *");
		coord.X = 43;
		coord.Y = 11;
		SetConsoleCursorPosition(hwnd, coord);
		printf("*       2、版本信息       *");
		coord.X = 43;
		coord.Y = 12;
		SetConsoleCursorPosition(hwnd, coord);
		printf("*       3、进行运算       *");
		coord.X = 43;
		coord.Y = 13;
		SetConsoleCursorPosition(hwnd, coord);
		printf("*       4、退出程序       *");
		coord.X = 43;
		coord.Y = 14;
		SetConsoleCursorPosition(hwnd, coord);
		printf("*                         *");
		coord.X = 43;
		coord.Y = 15;
		SetConsoleCursorPosition(hwnd, coord);
		printf("***************************");
		HANDLE fd = GetStdHandle(STD_OUTPUT_HANDLE);//获取标准输出设备的句柄，将其赋给句柄变量fd
		CONSOLE_CURSOR_INFO cinfo;//引入光标控制结构体cinfo
		cinfo.dwSize = 10;
		cinfo.bVisible = false;
		SetConsoleCursorInfo(fd, &cinfo);
		
		int i;
		char ch = getch();
		switch (ch)
		{
		case '1':
			system("cls");
			coord.X = 37;
			coord.Y = 6;
			SetConsoleCursorPosition(hwnd, coord);
			printf("本程序可对超过long long类型数据进行四则运算");
			coord.X = 37;
			coord.Y = 9;
			SetConsoleCursorPosition(hwnd, coord);
			printf("输入样例1：123+456=");
			coord.X = 37;
			coord.Y = 10;
			SetConsoleCursorPosition(hwnd, coord);
			printf("输出样例1：123+456=579\n");
			coord.X = 37;
			coord.Y = 12;
			SetConsoleCursorPosition(hwnd, coord);
			printf("输入样例2：123-456=");
			coord.X = 37;
			coord.Y = 13;
			SetConsoleCursorPosition(hwnd, coord);
			printf("输出样例2：123-456=-333");
			coord.X = 37;
			coord.Y = 15;
			SetConsoleCursorPosition(hwnd, coord);
			printf("输入样例3：123*456=");
			coord.X = 37;
			coord.Y = 16;
			SetConsoleCursorPosition(hwnd, coord);
			printf("输出样例3：123*456=56088\n");
			coord.X = 37;
			coord.Y = 18;
			SetConsoleCursorPosition(hwnd, coord);
			printf("输入样例4：456/123=");
			coord.X = 37;
			coord.Y = 19;
			SetConsoleCursorPosition(hwnd, coord);
			printf("输出样例4：456/123=3……87\n");
			for (i = 0; i < 6; i++)
			{
				printf("\n");
			}
			system("PAUSE");
			break;
		case '2':
			system("cls");
			coord.X = 52;
			coord.Y = 11;
			SetConsoleCursorPosition(hwnd, coord);
			printf("Version: 2.0\n");
			coord.X = 52;
			coord.Y = 14;
			SetConsoleCursorPosition(hwnd, coord);
			printf("作者：刘蔚峰");
			for (i = 0; i < 12; i++)
			{
				printf("\n");
			}
			system("PAUSE");
			break;
		case '3':
			//光标可见
			cinfo.dwSize = 10;
			cinfo.bVisible = true;
			SetConsoleCursorInfo(fd, &cinfo);

			//数据读取
			system("cls");
			printf("\n请输入计算式：___________________");
			for (i = 0; i < 19; i++)
			{
				printf("\b");
			}

			//读取数据
			Array array1, array2, init_array;
			char sign;
			init_array = input();
			sign = separate(init_array, &array1, &array2);

			#ifdef debug
				printf("\n\narray1=%s\nsign='%c'\narray2=%s\n", array1.array, sign, array2.array);
			#endif

			//计算
			switch (sign)
			{
			case '+':
				system("cls");
				printf("\n请输入计算式：___________________");
				for (i = 0; i < 19; i++)
				{
					printf("\b");
				}
				system("cls");
				printf("\n请输入计算式：%s+%s=", array1.array, array2.array);
				plus(array1, array2, '+');
				printf("\n");
				break;
			case '-':
				system("cls");
				printf("\n请输入计算式：___________________");
				for (i = 0; i < 19; i++)
				{
					printf("\b");
				}
				system("cls");
				printf("\n请输入计算式：%s-%s=", array1.array, array2.array);
                subtract(array1, array2, '-');
                printf("\n");
				break;
			case '*':
				system("cls");
				printf("\n请输入计算式：___________________");
				for (i = 0; i < 19; i++)
				{
					printf("\b");
				}
				system("cls");
				printf("\n请输入计算式：%s*%s=", array1.array, array2.array);
				multiply(array1, array2);
				printf("\n");
				break;
			case '/':
				system("cls");
				printf("\n请输入计算式：___________________");
				for (i = 0; i < 19; i++)
				{
					printf("\b");
				}
				system("cls");
				printf("\n请输入计算式：%s/%s=", array1.array, array2.array);
				divide(array1, array2);
				printf("\n");
				break;
			default:
				break;
			}
			for (i = 0; i < 22; i++)
			{
				printf("\n");
			}
			system("PAUSE");
			break;
		case '4':
			system("cls");
			coord.X = 54;
			coord.Y = 13;
			SetConsoleCursorPosition(hwnd, coord);
			printf("感谢您的使用！");
			for (i = 0; i < 14; i++)
			{
				printf("\n");
			}
			system("PAUSE");
			return 0;
		default:
			coord.X = 46;
			coord.Y = 17;
			SetConsoleCursorPosition(hwnd, coord);
			printf("无效选项，请重新选择！");
			Sleep(1000);
			break;
		}
	}
	return 0;
}


Array input(void)
{
	//初始化
	Array init_array;
	init_array.array = (char*)malloc(block_size);
	init_array.size = block_size;

	//读取数据
	int i = 0;
	int is_block_size = 0;//判断越界条件
	do
	{
		if (!scanf("%c", &init_array.array[i++]))
		{
			printf("INPUT ERROR!");
			exit(1);
		}
		is_block_size++;
		if (is_block_size == block_size && init_array.array[i - 1] != '\n')//判断是否越界
		{
			is_block_size = 0;
			array_inflate(&init_array, block_size, ' ');//越界则增加block_size大小的空间
		}
	} while (init_array.array[i - 1] != '\n');

	return init_array;
}


void array_inflate(Array* a, int more_size, char sign)
{
	int back = 0;
	if (sign == '+')//加法在前加一位，其余运算均在后面加位数
	{
		back++;
	}
	char* p = (char*)malloc((a->size + more_size + 1) * sizeof(char));//给除法增长时的\0留位置
	if (p == NULL)
	{
		printf("ERROR! Malloc Failed.\n");
		exit(1);
	}
	if (p != NULL && a != NULL)
	{
		memset(p, '0', a->size + more_size);
		p[a->size + more_size] = '\0';
		memcpy(p + back, a->array, a->size);//将array中的数据拷贝到p
	}
	if (a != NULL)
	{
		free(a->array);//释放原来的内存
		a->array = NULL;
	}
	a->array = p;//扩展到新的更大的内存
	a->size += more_size;
}


char separate(Array a, Array* array1, Array* array2)
{
	char sign = 0;
	int cnt = 0;
	char* head = NULL, * end = NULL;//大数的首尾
	head = end = a.array;
	while (1)
	{
		end++;
		cnt++;
		if ((*end == '+') || (*end == '-') || (*end == '*') || (*end == '/'))
		{
			sign = *end;
			*end = '\0';
			array1->size = cnt;//第一个字符串的长度(不含末尾\0)
			array1->array = (char*)malloc(array1->size + 1);
			if (array1->array != NULL)
			{
				strcpy(array1->array, head);
			}
			cnt = -1;//计数器重置
			head = end + 1;
		}
		
		if (*end == '=')
		{
			*end = '\0';//标记第二个数的结尾
			array2->size = cnt;//第二个字符串的长度(不含结尾\0)
			array2->array = (char*)malloc(array2->size + 1);
			if (array2->array != NULL)
			{
				strcpy(array2->array, head);
			}
			break;
		}
	}

	return sign;
}


bool transform(Array* array1, Array* array2, int* max_size, int* min_size, char** dst, char** src, char sign)
{
	bool is_minus = false;//判断减法时是否为负

	if (array1->size > array2->size)
	{
		*max_size = array1->size;
		*min_size = array2->size;
		*dst = array1->array;
		*src = array2->array;
	}
	else if (array1->size < array2->size)
	{
		*max_size = array2->size;
		*min_size = array1->size;
		*dst = array2->array;
		*src = array1->array;
		is_minus = true;
	}
	else//位数相同
	{
		if (strcmp(array1->array, array2->array) != -1)//从高位开始，判断第一个不一样的字符的大小
		{
			*max_size = array1->size;
			*min_size = array2->size;
			*dst = array1->array;
			*src = array2->array;
		}
		else
		{
			*max_size = array2->size;
			*min_size = array1->size;
			*dst = array2->array;
			*src = array1->array;
			is_minus = true;
		}
	}

	//将'0' ~ '9'转换为\x0 ~ \x9的字符表达
	if (sign != '/')
	{
		int i = 0, j = 0;
		char num = '0';
		for (i = 0; i < array1->size; i++)
		{
			array1->array[i] -= num;
		}
		for (i = 0; i < array2->size; i++)
		{
			array2->array[i] -= num;
		}
	}
	

	return is_minus;
}


Array output(char* dst, int max_size, char sign)
{
	int i;
	int subtract_cnt = 0;
	int whether_continue = false;

	if (sign != '#' && sign != '/')//除法
	{
		for (i = 0; i < max_size; i++)//将\x0 ~ \x9转为字符'0' ~ '9'
		{
			dst[i] += '0';
			if (sign == '-' && i == 0 && dst[i] == '0')//只有减法且两个数高位相同时（减完后高位为0）才会进入此循环
			{
				subtract_cnt++;
				for (i = 1; i < max_size; i++)//减法循环
				{
					dst[i] += '0';
					if (dst[i] == '0')
					{
						subtract_cnt++;
					}
					if ((i + 1) != subtract_cnt)//若遇到高位的第一个非零
					{
						whether_continue = true;//继续跑完减法循环
						break;
					}
				}
				if (whether_continue == false)//判断是否继续减法循环
				{
					break;
				}
			}
		}

		dst += subtract_cnt;//减法跳过高位的0，指针指向第一个有效数字
		if (subtract_cnt == max_size)//减法结果为0，指针前移一位
		{
			dst--;
		}
	}
	

	if (sign == '#')//被除数小于除数
	{
		printf("0……");
	}
	else if (sign == '$' || sign == '^')//除法中间步骤，返回dst的值
	{
		Array _dst = { dst,max_size };
		return _dst;
	}
	printf("%s", dst);
}


Array plus(Array array1, Array array2, char sign)
{
	int i = 0, j = 0;
	char num = '\0';
	int max_size = 0;
	int min_size = 0;
	char* dst = NULL, * src = NULL;
	array_inflate(&array1, 1, '+');//保证进位不会溢出
	array_inflate(&array2, 1, '+');//保证进位不会溢出
	transform(&array1, &array2, &max_size, &min_size, &dst, &src, '+');

	//将src加到dst里去（ASCII）
	for (i = max_size - min_size; i < max_size; i++)
	{
		dst[i] += src[j++];
	}

	//进位
	for (i = max_size-1; i >= 0; i--)
	{
		if (dst[i] > 9)
		{
			dst[i] -= 10;
			dst[i - 1] += 1;
		}
	}
	if (dst[0] == 0)//最高位没进位，跳过前置0
	{
		dst++;
		max_size--;
	}

	if (sign == '/')
	{
		return (output(dst, max_size, '^'));
	}

	output(dst, max_size, '+');
}


Array subtract(Array array1, Array array2, char sign)
{
	int i = 0, j = 0;
	char num = '\0';
	int max_size = 0;
	int min_size = 0;
	char* dst = NULL, * src = NULL;
	if (transform(&array1, &array2, &max_size, &min_size, &dst, &src, '-'))
	{
		printf("-");
	}

	//dst-src
	for (i = max_size - min_size; i < max_size; i++)
	{
		dst[i] -= src[j++];
	}

	//借位
	for (i = max_size - 1; i > 0; i--)
	{
		if (dst[i] < 0)
		{
			dst[i] += 10;
			dst[i - 1] -= 1;
			if (dst[0] == 0)
			{
				dst++;
				max_size--;
			}
		}
	}

	if (sign == '/')
	{
		return (output(dst, max_size, '$'));//除法中间步骤，返回array1转为'0' ~ '9'之后的值
	}

	output(dst, max_size, '-');
}


void multiply(Array array1, Array array2)
{
	int i = 0, j = 0, k = 0;
	char num = '\0';
	int max_size = 0;
	int min_size = 0;
	int result_size = 0;
	char* dst = NULL, * src = NULL;
	Array result;


	if (strcmp(array1.array, "0") == 0 || strcmp(array2.array, "0") == 0)//因子为0不做计算
	{
		printf("0");
		return;
	}


	transform(&array1, &array2, &max_size, &min_size, &dst, &src, '*');

	result.array = (char*)malloc(array1.size + array2.size + 1);//两数相乘的最大位数+1（包含结尾的\0）
	result.size = array1.size + array2.size;//dst位数位数改为最大位数
	int* preserve = (int*)malloc((result.size + 1) * sizeof(int));//暂存中间步骤结果，防止char类型越界
	//对应关系：dst->位数多的数，result->结果，src->位数少的数

	//初始化数组
	for (i = 0; i < result.size + 1; i++)
	{
		preserve[i] = 0;
		result.array[i] = 0;
	}

	//dst*src
	for (i = result.size - 1, j = min_size - 1; j >= 0; i += (max_size - 1), j--)
	{
		for (k = max_size - 1; k >= 0; k--)
		{
			int t = (dst[k] * src[j]);
			preserve[i--] += t;
		}
	}

	//进位
	int x = 0;//进位的数
	for (i = result.size - 1; i > 0; i--)
	{
		if (preserve[i] > 9)
		{
			x = preserve[i] / 10;
			preserve[i] %= 10;
			preserve[i - 1] += x;
		}
	}

	for (i = 0; i < result.size; i++)
	{
		result.array[i] = preserve[i];
		#ifdef debug
			printf("%p: %d\n", &preserve[i], preserve[i]);
		#endif
	}

	if (result.array[0] == 0)//高位为0，则指针后移，跳过此位
	{
		result.array++;
		result.size--;
	}
	output(result.array, result.size, '*');
	free(preserve);
}


void divide(Array array1, Array array2)
{
	int i = 0, j = 0;
	char num = '\0';
	int max_size = 0;
	int min_size = 0;
	int is_complete = false;
	

	//一些判断条件，减少计算量
	if (strcmp(array1.array, "0") == 0)//被除数为0，不计算
	{
		printf("0");
		return;
	}
	else if (array1.size < array2.size)//被除数小于除数，直接输出被除数为余数
	{
		output(array1.array, array1.size, '#');
		return;
	}
	else if (array1.size == array2.size)//被除数小于除数，直接输出被除数为余数
	{
		if (strcmp(array1.array, array2.array) == -1)
		{
			output(array1.array, array1.size, '#');
			return;
		}
	}
	else if (strcmp(array2.array, "0") == 0)
	{
		printf("除数为0，请重新输入。");
		return;
	}
	else if (array1.size == array2.size && strcmp(array1.array, array2.array) == 0)//两数一样不做计算，减少功耗
	{
		printf("1");
		return;
	}


	//被除数大于除数
	Array array2_init = { NULL,0 };//保存最初的array2
	array2_init.array = (char*)malloc(array2.size + 1);
	strcpy(array2_init.array, array2.array);
	array2_init.size = array2.size;
	Array result = { (char*)malloc(2),1 };//结果
	sprintf(result.array, "0");//初始置0
	Array temp = { NULL,0 };

	Array array2_temp = { NULL,0 };//减法时暂存array2，防止减法时被改变
	array2_temp.array = (char*)malloc(array2.size + 1);

	int up = 0;//除数向上增长的位数
	long long _result = 0;//商
	int cnt = 0;


	for (; strcmp(array1.array, "0") != 0;)//没被除尽进for
	{
		
		cnt = 0;
		strcpy(array2.array, array2_init.array);//除数重置
		array2.size = array2_init.size;
		if (array1.size == array2.size && strcmp(array1.array, array2.array) == -1)//被除数小于除数
		{
			break;
		}

		if (strcmp(array1.array, array2.array) != -1)//除数可增长到最高位
		{
			up = array1.size - array2.size;//提高的位数
			if (up > 0)//增长位数>0
			{
				array_inflate(&array2, up, '/');//提高除数位数
			}
			else if (up < 0)
			{
				up = 0;
				break;
			}
		}
		else//除数增长到次高位
		{
			up = array1.size - array2.size - 1;//提高的位数
			if (up > 0)//增长位数>0
			{
				array_inflate(&array2, up, '/');//提高除数位数
			}
			else if (up < 0)
			{
				up = 0;//为后续的result计算做准备
				break;
			}
		}
		

		do//同位数一直计算直到余数小于减数
		{
			while (array1.array[0] == '0' && array1.array[1] != '\0')//array1去除前置0
			{
				array1.array++;
				array1.size--;

			}
			if ((array1.size < array2.size) || (array1.size == array2.size && strcmp(array1.array, array2.array) == -1)) //被减数小于减数
			{
				break;
			}
			strcpy(array2_temp.array, array2.array);//暂存array2
			array2_temp.size = array2.size;

			array1 = subtract(array1, array2, '/');

			strcpy(array2.array, array2_temp.array);//还原array2
			array2.size = array2_temp.size;
			cnt++;
		} while ((array1.size != array2.size && strcmp(array1.array, array2.array) != -1) || (array1.size >= array2.size));
		
		_result = (long long)(pow(10, up) * cnt);//bug产生的地方
		cnt = 0;
		long long _result_temp = _result;
		while (_result_temp > 0)//_result位数
		{
			_result_temp /= 10;
			cnt++;
		}
		temp.array = (char*)malloc(cnt + 1);
		temp.size = cnt;
		temp.array[cnt] = '\0';
		sprintf(temp.array, "%lld", _result);//整数转字符串
		result = plus(result, temp, '/');//更新结果
		char* p = (char*)malloc(result.size + 1);//重开一块内存给result，防止其下一次加法中扩展的空间无法free
		if (p == NULL)
		{
			printf("MALLOC FAIL!");
			exit(1);
		}
		strcpy(p, result.array);
		free(--result.array);//加法不会进位，所以指针前移再释放
		result.array = p;
	}
	
	
	if (!strcmp(array1.array,"0"))//除尽了，无需余数
	{
		is_complete = true;
	}

	//输出
	output(result.array, result.size, '/');
	if (!is_complete)
	{
		printf("……%s", array1.array);
	}
}