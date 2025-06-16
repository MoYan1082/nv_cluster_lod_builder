#include <iostream>
#include <string>
#include <filesystem>
#include <cassert>
#include <fstream>
#include <vector>

#include "nvclusterlod/nvclusterlod_mesh.h"

using namespace nvclusterlod;

struct Vertex
{
	int x, y, z;
};
struct UV
{
	int u, v;
};
struct Normal
{
	int x, y, z;
};
struct Mesh
{
	std::vector<Vertex> vertices;
	std::vector<UV> uv;
	std::vector<Normal> normal;
	std::vector<int32_t> indices;
};



int main()
{
	std::string modelPath = "E:\\nv_cluster_lod_builder\\models\\Sponza-master\\sponza.obj";
	assert(std::filesystem::exists(modelPath));

	std::ifstream modelFile(modelPath);

	int maxLenToRead = 20;

	std::string matNameUsed = "None";
	std::string objName = "";
	std::vector<Mesh> meshes;

	std::string line;
	while (std::getline(modelFile, line))
	{
		// std::cout << line << std::endl;
		if (line.find("mtllib") != -1)
		{
			matNameUsed = line.substr(line.find(" ") + 1);
			std::cout << matNameUsed << std::endl;
		}
		else if(line[0] == 'o') { } 
		else if(line[0] == 'g') { } 
		else if(line[0] == 'v') 
		{
			if (line[1] == 't')
			{

			}
			else if (line[1] == 'n')
			{

			}
			else
			{

			}
		} 
		else if (line[0] == 'f')
		{

		}

		// if(--maxLenToRead <= 0) break;
	}



	MeshInput meshInput;
	meshInput.indices = nullptr;
	meshInput.indexCount = 0;



	std::cout << "Hello!";
	return 0;
}