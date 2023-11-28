#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Wrong number of arguments" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::ifstream infile(argv[1]);
    std::ofstream outfile ((filename + ".replace").c_str());
    if (infile && outfile)
    {
        std::string line;
        // infile.seekg(0);
        // std::getline(infile, line);
        unsigned long int occ = 0;
        // for (int i = 0; i < 9 ; i++)
        while (!infile.eof())
        {
            std::getline(infile, line);
            occ = line.find( "test" );
            if (occ != std::string::npos)
            {
                unsigned long int j = 0;
                for (j = 0 ; j < occ ; j++)
                {
                    outfile << line[j];
                }
                outfile << "TEST";
                std::cout << "pos : " << j << std::endl;
                j = j + 4; // j + taille de la chaine a chercher (qu'on a trouve)
                std::cout << "line : " << line << std::endl;
                std::cout << "j : " << j << std::endl;
                std::cout << "line[j] : " << line[j] << std::endl;
                std::cout << "line.size() : " << line.size() << std::endl;
                for (unsigned long int i = j ; i < line.size() ; i++)
                {
                    outfile << line[i];
                }
            }
            else
                outfile << line;
            
            outfile << std::endl;
        }

    }
    else if (!infile)
        std::cerr << "Error: can't open infile" << std::endl;
    else if (!outfile)
        std::cerr << "Error: can't open outfile" << std::endl;
    return (0);
}