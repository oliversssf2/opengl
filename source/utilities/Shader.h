//
// Created by fongsu on 4/3/19.
//

#ifndef OPENGL_SHADER_H
#define OPENGL_SHADER_H

#include<glad/glad.h>;

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader {
	unsigned int ID;

	Shader(const char* vertexPath, const char* fragmentPath);

	void use();

	void setBool(const std::string &name, bool value) const;
	void setInt(const std::string &name, int value) const;
	void setFloat(const std::string &name, float value) const;
};

Shader::Shader(const char *vertexPath, const char *fragmentPath)
{
	std::string vertexCode;
	std::string fragmentCode;
	std::ifstream vShaderFile;
	std::ifstream fShaderFile;

	vShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
	fShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
	try
	{
		vShaderFile.open(vertexPath);
		fShaderFile.open(fragmentPath);
		std::stringstream vShaderStream, fShaderStream;

		vShaderStream << vShaderFile.rdbuf()
	}

}

#endif //OPENGL_SHADER_H

