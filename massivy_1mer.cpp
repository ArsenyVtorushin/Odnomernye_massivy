#include <iostream>
#include <cstdlib>

int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));

	const int size = 20;
	int arr_1[size]{};

	std::cout << "Array: \n";
	for (int i = 0; i < size; i++)
	{
		arr_1[i] = rand();
		std::cout << arr_1[i] << ", ";
	}

	int max = arr_1[0], min = arr_1[0];
	for (int i = 1; i < size; i++)
	{
		if (arr_1[i] > max)
		{
			max = arr_1[i];
		}
		if (arr_1[i] < min)
		{
			min = arr_1[i];
		}
	}

	std::cout << "\n\nMax: " << max << "\nMin: " << min;



	std::cout << "\n\n\n==================================================================\n\n\n";


	int start, end;

	std::cout << "������� �������� �������:\n   ��������� �����: ";
	std::cin >> start;
	std::cout << "   �������� �����: ";
	std::cin >> end;

	int range = abs(end - start);

	int *arr_2 = new int[range];

	std::cout << "Array: \n";
	for (int i = 0; i < range; i++)
	{
		arr_2[i] = rand() % range + start;
		std::cout << arr_2[i] << ", ";
	}

	int maximum;
	std::cout << "\n\n������� �����, ������ �������� ������ ��������: ";
	std::cin >> maximum;

	std::cout << "\n��������, ������ " << maximum << ": \n";
	for (int i = 0; i < range; i++)
	{
		if (arr_2[i] < maximum)
		{
			std::cout << arr_2[i] << ", ";
		}
	}



	std::cout << "\n\n\n==================================================================\n\n\n";



	int profit[12]{};
	
	std::cout << "������� ������� ����� �� ���::\n\n";

	int month = 1;
	for (int i = 0; i < 12; i++)
	{
		std::cout << "  �� " << month << "-�� �����: ";
		std::cin >> profit[i];
		month++;
	}

	int monthStart, monthEnd;
	std::cout << "\n����� ������ �������� �������� �������?\n����� (�����):";
	std::cin >> monthStart;
	std::cout << " � ";
	std::cin >> monthEnd;

	int maxProf = profit[0], minProf = profit[0];
	for (int i = monthStart - 1; i < monthEnd; i++)
	{
		if (profit[i] > maxProf)
		{
			maxProf = profit[i];
		}
		if (profit[i] < minProf)
		{
			minProf = profit[i];
		}
	}

	std::cout << "\n���������� ������� �� ���� ������: " << maxProf
		<< "\n���������� ������� �� ���� ������: " << minProf << "\n\n";

	return 0;
}