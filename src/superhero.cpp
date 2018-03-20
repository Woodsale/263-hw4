#include "superhero.h"
#include <string>

superhero::superhero (int page_id, std::string name, std::string urlslug, 
	std::string id, std::string alignment, char eye_color,
	char hair_color, char sex, std::string gsm, boolean alive,
	int appearances, std::string first_appearance, int year){
	
	this.page_id = page_id;
	this.name = name;
	this.urlslug = urlslug;
	this.id = id;
	this.alignment = alignment;
	this.eye_color = eye.color;
	this.hair_color = hair.color;
	this.sex = sex;
	this.gsm = gsm;
	this.alive = alive;
	this.appearances = appearances;
	this.first_appearance = first_appearance;
	this.year = year;
}
	
	/*Accessors*/
	int superhero::getPage_id(){
		return this.page_id;
	}

	std::string superhero::getName(){
		return this.name;
	}

	std::string superhero::getUrlslug(){
		return this.urlslug;
	}

	std::string superhero::getId(){
		return this.id;
	}

	std::string superhero::getAlignment(){
		return this.alignment;
	}

	char superhero::getEye_color(){
		return this.color;
	}
	
	char superhero::getHair_color(){
		return this.hair_color;
	}
	
	char superhero::getSex(){
		return this.sex;
	}

	std::string superhero::Gsm(){
		return this.gsm;
	}

	boolean superhero::getLive(){
		return this.live;
	}

	int superhero::getAppearances(){
		return this.appearances;
	}

	std::string superhero::getFirst_appearance(){
		return this.first_appearance;
	}

	int superhero::getYear(){
		return this.year;
	}

	/*Mutators*/
	void setPage_id(int page_id){
		this.page_id=page_id;
	}
	void setName(std::string name){
		this.name=name;
	}

	void setUrlslug(std::string urlslug){
		this.name=name;
	}

	void setId(std::string id){
		this.id=id;
	}

	void setAlignment(std::string alignment){
		this.alignment=alignment;
	}

	void setEye_color(char eye_color){
		this.eye_color=eye_color;
	}

	void setHair_color(char hair_color){
		this.hair_color=hair_color;
	}

	void setSex(char sex){
		this.sex=sex;
	}

	void setGsm(std::string gsm){
		this.gsm=gsm;
	}
