#include <iostream>
#include <string>

struct CandyBar {
	char name[40];
	float weight;
	int heat;
};

void setbar(
	CandyBar&, 
	const char* name = "Millennium Munch", 
	const float weight = 2.85, 
	const int heat = 350);
void show_bar(const CandyBar&);

int main(void)
{
	CandyBar bar = {"my bar", 4.29f, 39};

	show_bar(bar);
	setbar(bar);
	show_bar(bar);

	return 0;
}

void setbar(
	CandyBar& bar,
	const char* name,
	const float weight,
	const int heat)
{
	strcpy(bar.name, name);
	bar.weight = weight;
	bar.heat = heat;
}
void show_bar(const CandyBar& bar)
{
	std::cout << bar.name << std::endl;
	std::cout << bar.weight << std::endl;
	std::cout << bar.heat << std::endl;
}