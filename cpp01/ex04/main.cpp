#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        std::cout << "Usage: ./exe <filename> <string1> <string2>" << std::endl;
        return (1);
    }
    std::string infilename = argv[1];
    std::string outfilename = infilename + ".replace";
    std::ifstream infile(infilename.c_str());
    std::ofstream outfile(outfilename.c_str());

    if (!infile.is_open())
    {
        std::cout << "Error: could not open file1" << std::endl;
        return (1);
    }

    if (!outfile.is_open())
    {
        std::cout << "Error: could not open file2" << std::endl;
        return (1);
    }
    std::string s1 = argv[2];
    if (s1.empty())
    {
        std::cout << "Error: string1 is empty" << std::endl;
        return (1);
    }
    std::string s2 = argv[3];
    std::string line;

    while (std::getline(infile, line))
    {
        std::string newline;
        std::string::size_type pos = 0;
        std::string::size_type prev = 0;

        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            newline.append(line, prev, pos - prev);
            newline.append(s2);
            pos += s1.length();
            prev = pos;
        }
        newline.append(line, prev, std::string::npos);
        outfile << newline;
        if (!infile.eof())
            outfile << std::endl;
    }

    infile.close();
    outfile.close();
    return (0);
}