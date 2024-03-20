#include <iostream>
#include <fstream>
using namespace std;
double calculateWeightedPercentage(double midMarks, double finalMarks){
	double midPercentage = ((midMarks * 100) / 50);
	double finalPercentage = ((finalMarks * 100) / 100);
	double weightedPercentage = (midPercentage * 0.4) + (finalPercentage * 0.6);
	return weightedPercentage;
}
char calculateGrade(double weightedPercentage){
	if (weightedPercentage >= 85 && weightedPercentage <= 100) {
		return 'A';
	}
	else if (weightedPercentage >= 72 && weightedPercentage < 85) {
		return 'B';
	}
	else if (weightedPercentage >= 59 && weightedPercentage < 72) {
		return 'C';
	}
	else if (weightedPercentage >= 50 && weightedPercentage < 59) {
		return 'D';
	}
	else if (weightedPercentage < 50) {
		return 'F';
	}
}
void displayResults(int* rollNo, double* midMarks, double* finalMarks, double* weightedPercentage, char* grades, int size, int startIndex){
	for (int i = startIndex; i < size; i++)
	{
		if (rollNo[i] != -1)
		{
			cout << "Roll no: " << rollNo[i] << "\tMid Term Marks: " << midMarks[i] << "\tFinal Term Marks: " << finalMarks[i] << "\tWeighted Percentage: " << weightedPercentage[i] << "\tGrade: " << grades[i] << endl;
		}
	}
}
int* intGrow(int* oldArray, int size){
	int* newArray = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = oldArray[i];
	}
	delete[] oldArray;
	return newArray;
}
int* intShrink(int* oldArray, int size, int removeIndex){
	int* newArray = new int[size - 1];
	for (int i = 0, j = 0; i < size; i++)
	{
		if (i != removeIndex)
		{
			newArray[j] = oldArray[i];
			j++;
		}
	}
	delete[] oldArray;
	return newArray;
}
double* doubleGrow(double* oldArray, int size){
	double* newArray = new double[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = oldArray[i];
	}
	delete[] oldArray;
	return newArray;
}
double* doubleShrink(double* oldArray, int size, int removeIndex){
	double* newArray = new double[size - 1];
	for (int i = 0, j = 0; i < size; i++)
	{
		if (i != removeIndex)
		{
			newArray[j] = oldArray[i];
			j++;
		}
	}
	delete[] oldArray;
	return newArray;
}
char* charGrow(char* oldArray, int size){
	char* newArray = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = oldArray[i];
	}
	delete[] oldArray;
	return newArray;
}
char* charShrink(char* oldArray, int size, int removeIndex){
	char* newArray = new char[size - 1];
	for (int i = 0, j = 0; i < size; i++)
	{
		if (i != removeIndex)
		{
			newArray[j] = oldArray[i];
			j++;
		}
	}
	delete[] oldArray;
	return newArray;
}
void sortDescending(int* rollNo, double* midMarks, double* finalMarks, double* weightedPercentage, char* grades, int size, char mode){
	if (mode == 'A')
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++) {

				if (rollNo[i] < rollNo[j])
				{
					int temp = rollNo[i];
					rollNo[i] = rollNo[j];
					rollNo[j] = temp;
					double temp2 = midMarks[i];
					midMarks[i] = midMarks[j];
					midMarks[j] = temp2;
					temp2 = finalMarks[i];
					finalMarks[i] = finalMarks[j];
					finalMarks[j] = temp2;
					temp2 = weightedPercentage[i];
					weightedPercentage[i] = weightedPercentage[j];
					weightedPercentage[j] = temp2;
					char temp3 = grades[i];
					grades[i] = grades[j];
					grades[j] = temp3;
				}
			}
		}
	}
	else if (mode == 'B')
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++) {

				if (midMarks[i] < midMarks[j])
				{
					int temp = rollNo[i];
					rollNo[i] = rollNo[j];
					rollNo[j] = temp;
					double temp2 = midMarks[i];
					midMarks[i] = midMarks[j];
					midMarks[j] = temp2;
					temp2 = finalMarks[i];
					finalMarks[i] = finalMarks[j];
					finalMarks[j] = temp2;
					temp2 = weightedPercentage[i];
					weightedPercentage[i] = weightedPercentage[j];
					weightedPercentage[j] = temp2;
					char temp3 = grades[i];
					grades[i] = grades[j];
					grades[j] = temp3;
				}
			}
		}
	}
	else if (mode == 'C')
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++) {

				if (finalMarks[i] < finalMarks[j])
				{
					int temp = rollNo[i];
					rollNo[i] = rollNo[j];
					rollNo[j] = temp;
					double temp2 = midMarks[i];
					midMarks[i] = midMarks[j];
					midMarks[j] = temp2;
					temp2 = finalMarks[i];
					finalMarks[i] = finalMarks[j];
					finalMarks[j] = temp2;
					temp2 = weightedPercentage[i];
					weightedPercentage[i] = weightedPercentage[j];
					weightedPercentage[j] = temp2;
					char temp3 = grades[i];
					grades[i] = grades[j];
					grades[j] = temp3;
				}
			}
		}
	}
	else if (mode == 'D')
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++) {

				if (weightedPercentage[i] < weightedPercentage[j])
				{
					int temp = rollNo[i];
					rollNo[i] = rollNo[j];
					rollNo[j] = temp;
					double temp2 = midMarks[i];
					midMarks[i] = midMarks[j];
					midMarks[j] = temp2;
					temp2 = finalMarks[i];
					finalMarks[i] = finalMarks[j];
					finalMarks[j] = temp2;
					temp2 = weightedPercentage[i];
					weightedPercentage[i] = weightedPercentage[j];
					weightedPercentage[j] = temp2;
					char temp3 = grades[i];
					grades[i] = grades[j];
					grades[j] = temp3;
				}
			}
		}
	}
	else if (mode == 'E')
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++) {

				if (grades[i] < grades[j])
				{
					int temp = rollNo[i];
					rollNo[i] = rollNo[j];
					rollNo[j] = temp;
					double temp2 = midMarks[i];
					midMarks[i] = midMarks[j];
					midMarks[j] = temp2;
					temp2 = finalMarks[i];
					finalMarks[i] = finalMarks[j];
					finalMarks[j] = temp2;
					temp2 = weightedPercentage[i];
					weightedPercentage[i] = weightedPercentage[j];
					weightedPercentage[j] = temp2;
					char temp3 = grades[i];
					grades[i] = grades[j];
					grades[j] = temp3;
				}
			}
		}
	}
}
void sortAscending(int* rollNo, double* midMarks, double* finalMarks, double* weightedPercentage, char* grades, int size, char mode){
	if (mode == 'A')
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++) {

				if (rollNo[i] > rollNo[j])
				{
					int temp = rollNo[i];
					rollNo[i] = rollNo[j];
					rollNo[j] = temp;
					double temp2 = midMarks[i];
					midMarks[i] = midMarks[j];
					midMarks[j] = temp2;
					temp2 = finalMarks[i];
					finalMarks[i] = finalMarks[j];
					finalMarks[j] = temp2;
					temp2 = weightedPercentage[i];
					weightedPercentage[i] = weightedPercentage[j];
					weightedPercentage[j] = temp2;
					char temp3 = grades[i];
					grades[i] = grades[j];
					grades[j] = temp3;
				}
			}
		}
	}
	else if (mode == 'B')
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++) {

				if (midMarks[i] > midMarks[j])
				{
					int temp = rollNo[i];
					rollNo[i] = rollNo[j];
					rollNo[j] = temp;
					double temp2 = midMarks[i];
					midMarks[i] = midMarks[j];
					midMarks[j] = temp2;
					temp2 = finalMarks[i];
					finalMarks[i] = finalMarks[j];
					finalMarks[j] = temp2;
					temp2 = weightedPercentage[i];
					weightedPercentage[i] = weightedPercentage[j];
					weightedPercentage[j] = temp2;
					char temp3 = grades[i];
					grades[i] = grades[j];
					grades[j] = temp3;
				}
			}
		}
	}
	else if (mode == 'C')
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++) {

				if (finalMarks[i] > finalMarks[j])
				{
					int temp = rollNo[i];
					rollNo[i] = rollNo[j];
					rollNo[j] = temp;
					double temp2 = midMarks[i];
					midMarks[i] = midMarks[j];
					midMarks[j] = temp2;
					temp2 = finalMarks[i];
					finalMarks[i] = finalMarks[j];
					finalMarks[j] = temp2;
					temp2 = weightedPercentage[i];
					weightedPercentage[i] = weightedPercentage[j];
					weightedPercentage[j] = temp2;
					char temp3 = grades[i];
					grades[i] = grades[j];
					grades[j] = temp3;
				}
			}
		}
	}
	else if (mode == 'D')
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++) {

				if (weightedPercentage[i] > weightedPercentage[j])
				{
					int temp = rollNo[i];
					rollNo[i] = rollNo[j];
					rollNo[j] = temp;
					double temp2 = midMarks[i];
					midMarks[i] = midMarks[j];
					midMarks[j] = temp2;
					temp2 = finalMarks[i];
					finalMarks[i] = finalMarks[j];
					finalMarks[j] = temp2;
					temp2 = weightedPercentage[i];
					weightedPercentage[i] = weightedPercentage[j];
					weightedPercentage[j] = temp2;
					char temp3 = grades[i];
					grades[i] = grades[j];
					grades[j] = temp3;
				}
			}
		}
	}
	else if (mode == 'E')
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++) {

				if (grades[i] > grades[j])
				{
					int temp = rollNo[i];
					rollNo[i] = rollNo[j];
					rollNo[j] = temp;
					double temp2 = midMarks[i];
					midMarks[i] = midMarks[j];
					midMarks[j] = temp2;
					temp2 = finalMarks[i];
					finalMarks[i] = finalMarks[j];
					finalMarks[j] = temp2;
					temp2 = weightedPercentage[i];
					weightedPercentage[i] = weightedPercentage[j];
					weightedPercentage[j] = temp2;
					char temp3 = grades[i];
					grades[i] = grades[j];
					grades[j] = temp3;
				}
			}
		}
	}
}
void addNewEntry(int*& rollNo, double*& midMarks, double*& finalMarks, double*& weightedPercentage, char*& grades, int& size, char mode){
	int availableIndex = -1, rollInput;
	if (mode == 'A')
	{
		for (int i = 0; i < size; i++)
		{
			if (rollNo[i] == -1)
			{
				availableIndex = i;
				break;
			}
		}
		if (availableIndex == -1)
		{
			rollNo = intGrow(rollNo, size);
			midMarks = doubleGrow(midMarks, size);
			finalMarks = doubleGrow(finalMarks, size);
			weightedPercentage = doubleGrow(weightedPercentage, size);
			grades = charGrow(grades, size);
			size++;
			availableIndex = size - 1;
		}
		while (true)
		{
			cout << "Enter Roll No: ";
			cin >> rollInput;
			bool is_unique = true;
			for (int i = 0; i < size; i++)
			{
				if (rollInput == rollNo[i])
				{
					cout << "This Roll No already exists. Please try with a unique Roll No.\n";
					is_unique = false;
					break;
				}
			}
			if (is_unique)
			{
				rollNo[availableIndex] = rollInput;
				break;
			}
		}
		cout << "Enter Mid Term Marks: ";
		cin >> midMarks[availableIndex];
		cout << "Enter Final Term Marks: ";
		cin >> finalMarks[availableIndex];
		weightedPercentage[availableIndex] = calculateWeightedPercentage(midMarks[availableIndex], finalMarks[availableIndex]);
		grades[availableIndex] = calculateGrade(weightedPercentage[availableIndex]);
		cout << "Record Added.\n";
	}
	else if (mode == 'B')
	{
		ifstream backup_file;
		backup_file.open("backup.txt");
		char ch;
		int noOfLines = 0;
		while (backup_file.get(ch))
		{
			if (ch == '\n')
			{
				noOfLines++;
			}
		}
		backup_file.close();
		backup_file.open("backup.txt");
		int loop = 0;
		while (!backup_file.eof())
		{
			if (loop <= noOfLines)
			{
				availableIndex = -1;
				for (int i = 0; i < size; i++)
				{
					if (rollNo[i] == -1)
					{
						availableIndex = i;
						break;
					}
				}
				if (availableIndex == -1)
				{
					rollNo = intGrow(rollNo, size);
					midMarks = doubleGrow(midMarks, size);
					finalMarks = doubleGrow(finalMarks, size);
					weightedPercentage = doubleGrow(weightedPercentage, size);
					grades = charGrow(grades, size);
					size++;
					availableIndex = size - 1;
				}
				backup_file >> rollNo[availableIndex] >> midMarks[availableIndex] >> finalMarks[availableIndex] >> weightedPercentage[availableIndex] >> grades[availableIndex];
				loop++;
			}
			else
			{
				break;
			}
		}
		backup_file.close();
	}
}
void deleteEntry(int*& rollNo, double*& midMarks, double*& finalMarks, double*& weightedPercentage, char*& grades, int& size, int removeIndex, char mode){
	if (mode == 'A')
	{
		int rollNoInput;
		bool isPresent = false;
		cout << "Enter Roll no to remove: ";
		cin >> rollNoInput;
		for (int i = 0; i < size; i++)
		{
			if (rollNoInput == rollNo[i])
			{
				isPresent = true;
				removeIndex = i;
				break;
			}
		}
		if (isPresent)
		{
			rollNo = intShrink(rollNo, size, removeIndex);
			midMarks = doubleShrink(midMarks, size, removeIndex);
			finalMarks = doubleShrink(finalMarks, size, removeIndex);
			weightedPercentage = doubleShrink(weightedPercentage, size, removeIndex);
			grades = charShrink(grades, size, removeIndex);
			size--;
			cout << "Record Deleted.\n";
		}
		else
		{
			cout << "The student with this roll no is not present.\n";
		}
	}
	else if (mode == 'B')
	{
		rollNo = intShrink(rollNo, size, removeIndex);
		midMarks = doubleShrink(midMarks, size, removeIndex);
		finalMarks = doubleShrink(finalMarks, size, removeIndex);
		weightedPercentage = doubleShrink(weightedPercentage, size, removeIndex);
		grades = charShrink(grades, size, removeIndex);
		size--;
	}
}
void findGreaterThanX(int* rollNo, double* midMarks, double* finalMarks, double* weightedPercentage, char* grades, int size, char mode){
	if (mode == 'A')
	{
		double threshold;
		cout << "Enter value to find greater than this value: ";
		cin >> threshold;
		sortDescending(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'D');
		for (int i = 0; i < size; i++)
		{
			if (weightedPercentage[i] >= threshold)
			{
				int startIndex = i;
				int endSize = i + 1;
				displayResults(rollNo, midMarks, finalMarks, weightedPercentage, grades, endSize, startIndex);
			}
		}
	}
	else if (mode == 'B')
	{
		double threshold;
		cout << "Enter value to find greater than this value: ";
		cin >> threshold;
		sortAscending(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'D');
		for (int i = 0; i < size; i++)
		{
			if (weightedPercentage[i] >= threshold)
			{
				int startIndex = i;
				int endSize = i + 1;
				displayResults(rollNo, midMarks, finalMarks, weightedPercentage, grades, endSize, startIndex);
			}
		}
	}
	else if (mode == 'C')
	{
		char threshold;
		cout << "Enter grade to find greater than this value: ";
		cin >> threshold;
		if ((threshold == 'A' || threshold == 'B' || threshold == 'C' || threshold == 'D' || threshold == 'F'))
		{
			sortDescending(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'E');
			for (int i = 0; i < size; i++)
			{
				if (grades[i] >= threshold)
				{
					int startIndex = i;
					int endSize = i + 1;
					displayResults(rollNo, midMarks, finalMarks, weightedPercentage, grades, endSize, startIndex);
				}
			}
		}
		else
		{
			cout << "Enter a valid grade.\n";
		}
	}
	else if (mode == 'D')
	{
		char threshold;
		cout << "Enter grade to find greater than this value: ";
		cin >> threshold;
		if ((threshold == 'A' || threshold == 'B' || threshold == 'C' || threshold == 'D' || threshold == 'F'))
		{
			sortAscending(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'E');
			for (int i = 0; i < size; i++)
			{
				if (grades[i] >= threshold)
				{
					int startIndex = i;
					int endSize = i + 1;
					displayResults(rollNo, midMarks, finalMarks, weightedPercentage, grades, endSize, startIndex);
				}
			}
		}
		else
		{
			cout << "Enter a valid grade.\n";
		}
	}
}
void findLessThanX(int* rollNo, double* midMarks, double* finalMarks, double* weightedPercentage, char* grades, int size, char mode){
	if (mode == 'A')
	{
		double threshold;
		cout << "Enter value to find less than this value: ";
		cin >> threshold;
		sortDescending(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'D');
		for (int i = 0; i < size; i++)
		{
			if (weightedPercentage[i] <= threshold)
			{
				int startIndex = i;
				int endSize = i + 1;
				displayResults(rollNo, midMarks, finalMarks, weightedPercentage, grades, endSize, startIndex);
			}
		}
	}
	else if (mode == 'B')
	{
		double threshold;
		cout << "Enter value to find less than this value: ";
		cin >> threshold;
		sortAscending(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'D');
		for (int i = 0; i < size; i++)
		{
			if (weightedPercentage[i] <= threshold)
			{
				int startIndex = i;
				int endSize = i + 1;
				displayResults(rollNo, midMarks, finalMarks, weightedPercentage, grades, endSize, startIndex);
			}
		}
	}
	else if (mode == 'C')
	{
		char threshold;
		cout << "Enter grade to find less than this value: ";
		cin >> threshold;
		if ((threshold == 'A' || threshold == 'B' || threshold == 'C' || threshold == 'D' || threshold == 'F'))
		{
			sortDescending(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'E');
			for (int i = 0; i < size; i++)
			{
				if (grades[i] <= threshold)
				{
					int startIndex = i;
					int endSize = i + 1;
					displayResults(rollNo, midMarks, finalMarks, weightedPercentage, grades, endSize, startIndex);
				}
			}
		}
		else
		{
			cout << "Enter a valid grade.\n";
		}
	}
	else if (mode == 'D')
	{
		char threshold;
		cout << "Enter grade to find less than this value: ";
		cin >> threshold;
		if ((threshold == 'A' || threshold == 'B' || threshold == 'C' || threshold == 'D' || threshold == 'F'))
		{
			sortAscending(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'E');
			for (int i = 0; i < size; i++)
			{
				if (grades[i] <= threshold)
				{
					int startIndex = i;
					int endSize = i + 1;
					displayResults(rollNo, midMarks, finalMarks, weightedPercentage, grades, endSize, startIndex);
				}
			}
		}
		else
		{
			cout << "Enter a valid grade.\n";
		}
	}
}
void studentsCountLessThanX(double* weightedPercentage, int size){
	double threshold;
	cout << "Enter a value to count students with WP less than: ";
	cin >> threshold;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (weightedPercentage[i] <= threshold)
		{
			count++;
		}
	}
	cout << "Total number of students with WP less than " << threshold << " :" << count << endl;
}
void studentsCountGreaterThanX(double* weightedPercentage, int size){
	double threshold;
	cout << "Enter a value to count students with WP greater than: ";
	cin >> threshold;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (weightedPercentage[i] >= threshold)
		{
			count++;
		}
	}
	cout << "Total number of students with WP greater than " << threshold << " :" << count << endl;
}
void backupData(int* rollNo, double* midMarks, double* finalMarks, double* weightedPercentage, char* grades, int size){
	ofstream backup_file;
	backup_file.open("backup.txt");
	if (backup_file.is_open())
	{
		int endSize = 0;
		for (int i = 0; i < size; i++)
		{
			if (rollNo[i] != -1)
			{
				endSize++;
			}
		}
		for (int i = 0; i < size; i++)
		{
			if (rollNo[i] != -1)
			{
				backup_file << rollNo[i] << " " << midMarks[i] << " " << finalMarks[i] << " " << weightedPercentage[i] << " " << grades[i];
				if (i != endSize - 1)
				{
					backup_file << "\n";
				}
			}
		}
		cout << "Backup created successfully.\n";
	}
	else
	{
		cerr << "Error opening the backup file.\n";
	}
	backup_file.close();
}
void restoreData(int*& rollNo, double*& midMarks, double*& finalMarks, double*& weightedPercentage, char*& grades, int& size){
	ifstream backup_file;
	backup_file.open("backup.txt");
	if (backup_file.is_open())
	{
		for (int i = 0; i < size; i++)
		{
			deleteEntry(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, i, 'B');
		}
		addNewEntry(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'B');
		cout << "Backup restored successfully.\n";
	}
	else
	{
		cerr << "Error opening the backup file.\n";
	}
	backup_file.close();
}
int main() {
	char* choice = new char[3];
	int size = 20;
	int* rollNo = new int[size];
	for (int i = 0; i < size; i++)
	{
		rollNo[i] = -1;
	}
	double* midMarks = new double[size];
	double* finalMarks = new double[size];
	double* weightedPercentage = new double[size];
	char* grades = new char[size];
	cout << "================================ Welcome to Student Grades Management System ================================\n\n";
	cout << "1. Sort and display all the records roll number wise in ascending order.\n";
	cout << "2. Sort and display all the records roll number wise in descending order.\n";
	cout << "3. Sort and display all records in ascending order based on marks in Midterm.\n";
	cout << "4. Sort and display all records in descending order based on marks in Midterm.\n";
	cout << "5. Sort and display all records in ascending order based on marks in Finalterm.\n";
	cout << "6. Sort and display all records in descending order based on marks in Finalterm.\n";
	cout << "7. Sort and display all records in ascending order based on weighted percentage.\n";
	cout << "8. Sort and display all records in descending order based on weighted percentage.\n";
	cout << "9. Sort and display all records in ascending order based on Grade.\n";
	cout << "10. Sort and display all records in descending order based on Grade.\n";
	cout << "11. Add a new entry of a student.\n";
	cout << "12. Delete a student record based on roll number.\n";
	cout << "13. Display record of all the students greater than X weighted percentage(in descending order with respect to WP).\n";
	cout << "14. Display record of all the students greater than X weighted percentage(in ascending order with respect to WP).\n";
	cout << "15. Display record of all the students less than or equal to X weighted percentage (in descending order with respect to WP).\n";
	cout << "16. Display record of all the students less than or equal to X weighted percentage (in ascending order with respect to WP).\n";
	cout << "17. Display record of all the students greater than X grade (in descending order with respect to grade).\n";
	cout << "18. Display record of all the students greater than X grade (in ascending order with respect to grade).\n";
	cout << "19. Display record of all the students less than or equal to X grade (in descending order with respect to grade).\n";
	cout << "20. Display record of all the students less than or equal to X grade (in ascending order with respect to grade).\n";
	cout << "21. Display total count of students out of 100 with WP less than equal to X.\n";
	cout << "22. Display total count of students out of 100 with WP greater than equal to X.\n";
	cout << "23. Backup the data in a file.\n";
	cout << "24. Restore the data from file.\n";
	cout << "Enter E or e to exit the system.\n";
	while (true) {
		cout << "Enter your choice from the menu: ";
		cin >> choice;
		if (choice[0] == '1' && choice[1] == '\0') {
			sortAscending(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'A');
			displayResults(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 0);
		}
		else if (choice[0] == '2' && choice[1] == '\0') {
			sortDescending(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'A');
			displayResults(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 0);
		}
		else if (choice[0] == '3' && choice[1] == '\0') {
			sortAscending(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'B');
			displayResults(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 0);
		}
		else if (choice[0] == '4' && choice[1] == '\0') {
			sortDescending(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'B');
			displayResults(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 0);
		}
		else if (choice[0] == '5' && choice[1] == '\0') {
			sortAscending(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'C');
			displayResults(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 0);
		}
		else if (choice[0] == '6' && choice[1] == '\0') {
			sortDescending(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'C');
			displayResults(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 0);
		}
		else if (choice[0] == '7' && choice[1] == '\0') {
			sortAscending(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'D');
			displayResults(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 0);
		}
		else if (choice[0] == '8' && choice[1] == '\0') {
			sortDescending(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'D');
			displayResults(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 0);
		}
		else if (choice[0] == '9' && choice[1] == '\0') {
			sortAscending(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'E');
			displayResults(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 0);
		}
		else if (choice[0] == '1' && choice[1] == '0' && choice[2] == '\0') {
			sortDescending(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'E');
			displayResults(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 0);
		}
		else if (choice[0] == '1' && choice[1] == '1' && choice[2] == '\0') {
			addNewEntry(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'A');
		}
		else if (choice[0] == '1' && choice[1] == '2' && choice[2] == '\0') {
			deleteEntry(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 0, 'A');
		}
		else if (choice[0] == '1' && choice[1] == '3' && choice[2] == '\0') {
			findGreaterThanX(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'A');
		}
		else if (choice[0] == '1' && choice[1] == '4' && choice[2] == '\0') {
			findGreaterThanX(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'B');
		}
		else if (choice[0] == '1' && choice[1] == '5' && choice[2] == '\0') {
			findLessThanX(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'A');
		}
		else if (choice[0] == '1' && choice[1] == '6' && choice[2] == '\0') {
			findLessThanX(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'B');
		}
		else if (choice[0] == '1' && choice[1] == '7' && choice[2] == '\0') {
			findGreaterThanX(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'C');
		}
		else if (choice[0] == '1' && choice[1] == '8' && choice[2] == '\0') {
			findGreaterThanX(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'D');
		}
		else if (choice[0] == '1' && choice[1] == '9' && choice[2] == '\0') {
			findLessThanX(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'C');
		}
		else if (choice[0] == '2' && choice[1] == '0' && choice[2] == '\0') {
			findLessThanX(rollNo, midMarks, finalMarks, weightedPercentage, grades, size, 'D');
		}
		else if (choice[0] == '2' && choice[1] == '1' && choice[2] == '\0') {
			studentsCountLessThanX(weightedPercentage, size);
		}
		else if (choice[0] == '2' && choice[1] == '2' && choice[2] == '\0') {
			studentsCountGreaterThanX(weightedPercentage, size);
		}
		else if (choice[0] == '2' && choice[1] == '3' && choice[2] == '\0') {
			backupData(rollNo, midMarks, finalMarks, weightedPercentage, grades, size);
		}
		else if (choice[0] == '2' && choice[1] == '4' && choice[2] == '\0') {
			restoreData(rollNo, midMarks, finalMarks, weightedPercentage, grades, size);
		}
		else if ((choice[0] == 'E' || choice[0] == 'e') && choice[1] == '\0') {
			cout << "Exiting the system...\n";
			break;
		}
		else {
			cout << "Please enter a valid option\n";
		}
	}
	delete[] rollNo;
	delete[] midMarks;
	delete[] finalMarks;
	delete[] weightedPercentage;
	delete[] grades;
	delete[] choice;
	return 0;
}