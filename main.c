#include "main.h"
//#define debug


int main()
{
	//������
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
		printf("*   ��ӭʹ�ô�������ϵͳ  *");
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
		printf("*       1��ʹ��˵��       *");
		coord.X = 43;
		coord.Y = 11;
		SetConsoleCursorPosition(hwnd, coord);
		printf("*       2���汾��Ϣ       *");
		coord.X = 43;
		coord.Y = 12;
		SetConsoleCursorPosition(hwnd, coord);
		printf("*       3����������       *");
		coord.X = 43;
		coord.Y = 13;
		SetConsoleCursorPosition(hwnd, coord);
		printf("*       4���˳�����       *");
		coord.X = 43;
		coord.Y = 14;
		SetConsoleCursorPosition(hwnd, coord);
		printf("*                         *");
		coord.X = 43;
		coord.Y = 15;
		SetConsoleCursorPosition(hwnd, coord);
		printf("***************************");
		HANDLE fd = GetStdHandle(STD_OUTPUT_HANDLE);//��ȡ��׼����豸�ľ�������丳���������fd
		CONSOLE_CURSOR_INFO cinfo;//��������ƽṹ��cinfo
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
			printf("������ɶԳ���long long�������ݽ�����������");
			coord.X = 37;
			coord.Y = 9;
			SetConsoleCursorPosition(hwnd, coord);
			printf("��������1��123+456=");
			coord.X = 37;
			coord.Y = 10;
			SetConsoleCursorPosition(hwnd, coord);
			printf("�������1��123+456=579\n");
			coord.X = 37;
			coord.Y = 12;
			SetConsoleCursorPosition(hwnd, coord);
			printf("��������2��123-456=");
			coord.X = 37;
			coord.Y = 13;
			SetConsoleCursorPosition(hwnd, coord);
			printf("�������2��123-456=-333");
			coord.X = 37;
			coord.Y = 15;
			SetConsoleCursorPosition(hwnd, coord);
			printf("��������3��123*456=");
			coord.X = 37;
			coord.Y = 16;
			SetConsoleCursorPosition(hwnd, coord);
			printf("�������3��123*456=56088\n");
			coord.X = 37;
			coord.Y = 18;
			SetConsoleCursorPosition(hwnd, coord);
			printf("��������4��456/123=");
			coord.X = 37;
			coord.Y = 19;
			SetConsoleCursorPosition(hwnd, coord);
			printf("�������4��456/123=3����87\n");
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
			printf("���ߣ���ε��");
			for (i = 0; i < 12; i++)
			{
				printf("\n");
			}
			system("PAUSE");
			break;
		case '3':
			//���ɼ�
			cinfo.dwSize = 10;
			cinfo.bVisible = true;
			SetConsoleCursorInfo(fd, &cinfo);

			//���ݶ�ȡ
			system("cls");
			printf("\n���������ʽ��___________________");
			for (i = 0; i < 19; i++)
			{
				printf("\b");
			}

			//��ȡ����
			Array array1, array2, init_array;
			char sign;
			init_array = input();
			sign = separate(init_array, &array1, &array2);

			#ifdef debug
				printf("\n\narray1=%s\nsign='%c'\narray2=%s\n", array1.array, sign, array2.array);
			#endif

			//����
			switch (sign)
			{
			case '+':
				system("cls");
				printf("\n���������ʽ��___________________");
				for (i = 0; i < 19; i++)
				{
					printf("\b");
				}
				system("cls");
				printf("\n���������ʽ��%s+%s=", array1.array, array2.array);
				plus(array1, array2, '+');
				printf("\n");
				break;
			case '-':
				system("cls");
				printf("\n���������ʽ��___________________");
				for (i = 0; i < 19; i++)
				{
					printf("\b");
				}
				system("cls");
				printf("\n���������ʽ��%s-%s=", array1.array, array2.array);
                subtract(array1, array2, '-');
                printf("\n");
				break;
			case '*':
				system("cls");
				printf("\n���������ʽ��___________________");
				for (i = 0; i < 19; i++)
				{
					printf("\b");
				}
				system("cls");
				printf("\n���������ʽ��%s*%s=", array1.array, array2.array);
				multiply(array1, array2);
				printf("\n");
				break;
			case '/':
				system("cls");
				printf("\n���������ʽ��___________________");
				for (i = 0; i < 19; i++)
				{
					printf("\b");
				}
				system("cls");
				printf("\n���������ʽ��%s/%s=", array1.array, array2.array);
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
			printf("��л����ʹ�ã�");
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
			printf("��Чѡ�������ѡ��");
			Sleep(1000);
			break;
		}
	}
	return 0;
}


Array input(void)
{
	//��ʼ��
	Array init_array;
	init_array.array = (char*)malloc(block_size);
	init_array.size = block_size;

	//��ȡ����
	int i = 0;
	int is_block_size = 0;//�ж�Խ������
	do
	{
		if (!scanf("%c", &init_array.array[i++]))
		{
			printf("INPUT ERROR!");
			exit(1);
		}
		is_block_size++;
		if (is_block_size == block_size && init_array.array[i - 1] != '\n')//�ж��Ƿ�Խ��
		{
			is_block_size = 0;
			array_inflate(&init_array, block_size, ' ');//Խ��������block_size��С�Ŀռ�
		}
	} while (init_array.array[i - 1] != '\n');

	return init_array;
}


void array_inflate(Array* a, int more_size, char sign)
{
	int back = 0;
	if (sign == '+')//�ӷ���ǰ��һλ������������ں����λ��
	{
		back++;
	}
	char* p = (char*)malloc((a->size + more_size + 1) * sizeof(char));//����������ʱ��\0��λ��
	if (p == NULL)
	{
		printf("ERROR! Malloc Failed.\n");
		exit(1);
	}
	if (p != NULL && a != NULL)
	{
		memset(p, '0', a->size + more_size);
		p[a->size + more_size] = '\0';
		memcpy(p + back, a->array, a->size);//��array�е����ݿ�����p
	}
	if (a != NULL)
	{
		free(a->array);//�ͷ�ԭ�����ڴ�
		a->array = NULL;
	}
	a->array = p;//��չ���µĸ�����ڴ�
	a->size += more_size;
}


char separate(Array a, Array* array1, Array* array2)
{
	char sign = 0;
	int cnt = 0;
	char* head = NULL, * end = NULL;//��������β
	head = end = a.array;
	while (1)
	{
		end++;
		cnt++;
		if ((*end == '+') || (*end == '-') || (*end == '*') || (*end == '/'))
		{
			sign = *end;
			*end = '\0';
			array1->size = cnt;//��һ���ַ����ĳ���(����ĩβ\0)
			array1->array = (char*)malloc(array1->size + 1);
			if (array1->array != NULL)
			{
				strcpy(array1->array, head);
			}
			cnt = -1;//����������
			head = end + 1;
		}
		
		if (*end == '=')
		{
			*end = '\0';//��ǵڶ������Ľ�β
			array2->size = cnt;//�ڶ����ַ����ĳ���(������β\0)
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
	bool is_minus = false;//�жϼ���ʱ�Ƿ�Ϊ��

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
	else//λ����ͬ
	{
		if (strcmp(array1->array, array2->array) != -1)//�Ӹ�λ��ʼ���жϵ�һ����һ�����ַ��Ĵ�С
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

	//��'0' ~ '9'ת��Ϊ\x0 ~ \x9���ַ����
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

	if (sign != '#' && sign != '/')//����
	{
		for (i = 0; i < max_size; i++)//��\x0 ~ \x9תΪ�ַ�'0' ~ '9'
		{
			dst[i] += '0';
			if (sign == '-' && i == 0 && dst[i] == '0')//ֻ�м�������������λ��ͬʱ��������λΪ0���Ż�����ѭ��
			{
				subtract_cnt++;
				for (i = 1; i < max_size; i++)//����ѭ��
				{
					dst[i] += '0';
					if (dst[i] == '0')
					{
						subtract_cnt++;
					}
					if ((i + 1) != subtract_cnt)//��������λ�ĵ�һ������
					{
						whether_continue = true;//�����������ѭ��
						break;
					}
				}
				if (whether_continue == false)//�ж��Ƿ��������ѭ��
				{
					break;
				}
			}
		}

		dst += subtract_cnt;//����������λ��0��ָ��ָ���һ����Ч����
		if (subtract_cnt == max_size)//�������Ϊ0��ָ��ǰ��һλ
		{
			dst--;
		}
	}
	

	if (sign == '#')//������С�ڳ���
	{
		printf("0����");
	}
	else if (sign == '$' || sign == '^')//�����м䲽�裬����dst��ֵ
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
	array_inflate(&array1, 1, '+');//��֤��λ�������
	array_inflate(&array2, 1, '+');//��֤��λ�������
	transform(&array1, &array2, &max_size, &min_size, &dst, &src, '+');

	//��src�ӵ�dst��ȥ��ASCII��
	for (i = max_size - min_size; i < max_size; i++)
	{
		dst[i] += src[j++];
	}

	//��λ
	for (i = max_size-1; i >= 0; i--)
	{
		if (dst[i] > 9)
		{
			dst[i] -= 10;
			dst[i - 1] += 1;
		}
	}
	if (dst[0] == 0)//���λû��λ������ǰ��0
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

	//��λ
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
		return (output(dst, max_size, '$'));//�����м䲽�裬����array1תΪ'0' ~ '9'֮���ֵ
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


	if (strcmp(array1.array, "0") == 0 || strcmp(array2.array, "0") == 0)//����Ϊ0��������
	{
		printf("0");
		return;
	}


	transform(&array1, &array2, &max_size, &min_size, &dst, &src, '*');

	result.array = (char*)malloc(array1.size + array2.size + 1);//������˵����λ��+1��������β��\0��
	result.size = array1.size + array2.size;//dstλ��λ����Ϊ���λ��
	int* preserve = (int*)malloc((result.size + 1) * sizeof(int));//�ݴ��м䲽��������ֹchar����Խ��
	//��Ӧ��ϵ��dst->λ���������result->�����src->λ���ٵ���

	//��ʼ������
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

	//��λ
	int x = 0;//��λ����
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

	if (result.array[0] == 0)//��λΪ0����ָ����ƣ�������λ
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
	

	//һЩ�ж����������ټ�����
	if (strcmp(array1.array, "0") == 0)//������Ϊ0��������
	{
		printf("0");
		return;
	}
	else if (array1.size < array2.size)//������С�ڳ�����ֱ�����������Ϊ����
	{
		output(array1.array, array1.size, '#');
		return;
	}
	else if (array1.size == array2.size)//������С�ڳ�����ֱ�����������Ϊ����
	{
		if (strcmp(array1.array, array2.array) == -1)
		{
			output(array1.array, array1.size, '#');
			return;
		}
	}
	else if (strcmp(array2.array, "0") == 0)
	{
		printf("����Ϊ0�����������롣");
		return;
	}
	else if (array1.size == array2.size && strcmp(array1.array, array2.array) == 0)//����һ���������㣬���ٹ���
	{
		printf("1");
		return;
	}


	//���������ڳ���
	Array array2_init = { NULL,0 };//���������array2
	array2_init.array = (char*)malloc(array2.size + 1);
	strcpy(array2_init.array, array2.array);
	array2_init.size = array2.size;
	Array result = { (char*)malloc(2),1 };//���
	sprintf(result.array, "0");//��ʼ��0
	Array temp = { NULL,0 };

	Array array2_temp = { NULL,0 };//����ʱ�ݴ�array2����ֹ����ʱ���ı�
	array2_temp.array = (char*)malloc(array2.size + 1);

	int up = 0;//��������������λ��
	long long _result = 0;//��
	int cnt = 0;


	for (; strcmp(array1.array, "0") != 0;)//û��������for
	{
		
		cnt = 0;
		strcpy(array2.array, array2_init.array);//��������
		array2.size = array2_init.size;
		if (array1.size == array2.size && strcmp(array1.array, array2.array) == -1)//������С�ڳ���
		{
			break;
		}

		if (strcmp(array1.array, array2.array) != -1)//���������������λ
		{
			up = array1.size - array2.size;//��ߵ�λ��
			if (up > 0)//����λ��>0
			{
				array_inflate(&array2, up, '/');//��߳���λ��
			}
			else if (up < 0)
			{
				up = 0;
				break;
			}
		}
		else//�����������θ�λ
		{
			up = array1.size - array2.size - 1;//��ߵ�λ��
			if (up > 0)//����λ��>0
			{
				array_inflate(&array2, up, '/');//��߳���λ��
			}
			else if (up < 0)
			{
				up = 0;//Ϊ������result������׼��
				break;
			}
		}
		

		do//ͬλ��һֱ����ֱ������С�ڼ���
		{
			while (array1.array[0] == '0' && array1.array[1] != '\0')//array1ȥ��ǰ��0
			{
				array1.array++;
				array1.size--;

			}
			if ((array1.size < array2.size) || (array1.size == array2.size && strcmp(array1.array, array2.array) == -1)) //������С�ڼ���
			{
				break;
			}
			strcpy(array2_temp.array, array2.array);//�ݴ�array2
			array2_temp.size = array2.size;

			array1 = subtract(array1, array2, '/');

			strcpy(array2.array, array2_temp.array);//��ԭarray2
			array2.size = array2_temp.size;
			cnt++;
		} while ((array1.size != array2.size && strcmp(array1.array, array2.array) != -1) || (array1.size >= array2.size));
		
		_result = (long long)(pow(10, up) * cnt);//bug�����ĵط�
		cnt = 0;
		long long _result_temp = _result;
		while (_result_temp > 0)//_resultλ��
		{
			_result_temp /= 10;
			cnt++;
		}
		temp.array = (char*)malloc(cnt + 1);
		temp.size = cnt;
		temp.array[cnt] = '\0';
		sprintf(temp.array, "%lld", _result);//����ת�ַ���
		result = plus(result, temp, '/');//���½��
		char* p = (char*)malloc(result.size + 1);//�ؿ�һ���ڴ��result����ֹ����һ�μӷ�����չ�Ŀռ��޷�free
		if (p == NULL)
		{
			printf("MALLOC FAIL!");
			exit(1);
		}
		strcpy(p, result.array);
		free(--result.array);//�ӷ������λ������ָ��ǰ�����ͷ�
		result.array = p;
	}
	
	
	if (!strcmp(array1.array,"0"))//�����ˣ���������
	{
		is_complete = true;
	}

	//���
	output(result.array, result.size, '/');
	if (!is_complete)
	{
		printf("����%s", array1.array);
	}
}