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
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream infile(argv[1]);
    std::ofstream outfile((std::string(argv[1]) + ".replace").c_str());
    if (infile && outfile)
    {
        std::string line;
        size_t occ = 0;
        while (!infile.eof())
        {
            bool modif = false;
            std::getline(infile, line);
            if (infile.bad() || (infile.fail() && !infile.eof()))
            {
                std::cerr << "Error: while reading file" << std::endl;
                return (1);
            }
            size_t j = 0;
            while ((occ = line.find(s1, j)) != std::string::npos)
            {
                modif = true;
                while (j < occ)
                    outfile << line[j++];
                outfile << s2;
                j = j + s1.length();
                occ = line.find(s1, j);
                if (occ == std::string::npos)
                    for (size_t i = j ; i < line.size() ; i++)
                        outfile << line[i];
            }
            if (modif == false)
                outfile << line;
            if (!infile.eof())
                outfile << std::endl;
        }
        return (0);
    }
    else if (!infile)
    {
        std::cerr << "Error: can't open infile" << std::endl;
        remove((std::string(argv[1]) + ".replace").c_str());
    }
    else if (!outfile)
        std::cerr << "Error: can't open outfile" << std::endl;
    return (1);
}
