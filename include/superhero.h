#include <iostream>
#include <string>

class superhero{
public:
	superhero(int page_id, std::string name, std::string urlslug, 
	std::string id, std::string alignment, char eye_color,
	char hair_color, char sex, std::string gsm, boolean alive,
	int appearances, std::string first_appearance, int year);
	
	/*Accessors*/
	int getPage_id();

	std::string getName();

	std::string getUrlslug();

	std::string getId();

	std::string getAlignment();

	char getEye_color();
	
	char getHair_color();
	
	char getSex();

	std::string Gsm();

	boolean getLive();

	int getAppearances();

	std::string getFirst_appearance();

	int getYear();

	/*Mutators*/
	void setPage_id(int page_id);

	void setName(std::string name);

	void setUrlslug(std::string urlslug);

	void setId(std::string id);

	void setAlignment(std::string alignment);

	void setEye_color(char eye_color);

	void setHair_color(char hair_color);

	void setSex(char sex);

	void setGsm(std::string gsm);

	void setAlive(boolean alive);

	void setApperences(int appearances);

	void setFirst_appence(std::string first_appearance);

	void setYear(int year);

private:
	int page_id;
	std::string name;
	std::string urlslug;
	std::string id;
	std::string alignment;
	char eye_color;
	char hair_color;
	char sex;
	std::string gsm;
	boolean alive;
	int appearances;
	std::string first_appearance;
	int year;
};
