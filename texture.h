#pragma once
#include <stb_image.h>
#include <string>
#include <iostream>
#include <vector>
#include <glad/glad.h>

using namespace std;

unsigned int TextureFromFile(const char *path, const string &directory, bool gamma);
unsigned int loadCubemap(vector<std::string> faces);
