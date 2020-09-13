#include "Manager.h"

Manager::Manager()
{
    
}

Manager::~Manager()
{
    
}

void Manager::run(const char * command)
{
    fin.open(command);
    flog.open("log.txt", ios::app);
    if(!fin)
    {
        flog << "File Open Error" << endl;
        return;
    }

    char cmd[32];
    
    while (!fin.eof())
    {
        /* You must fill here */

        /* =============== example ===============
        fin >> cmd;
        or
        fin.getline(cmd, 32);
        char * tmp = strtok(cmd, " ");
        if(strcmp(tmp, "LOAD") == 0)
        {
            if(LOAD())
            {
                PrintSuccess("LOAD");
            }
            else
            {
                PrintErrorCode(100);
            }
        }
        ...
        else if(strcmp(tmp, "EXIT") == 0)
        {
            PrintSuccess("EXIT");
            break;
        }
        else
        {
            flog << "========== ERROR ==========" << endl;
            flog << "Command Error" << endl;
            flog << "===========================" << endl << endl;
        }
        */
    }
    fin.close();
    flog.close();
}

bool Manager::LOAD()
{

}

bool Manager::ADD()
{

}

bool Manager::QPOP()
{

}

bool Manager::SEARCH()
{

}

bool Manager::PRINT()
{

}

bool Manager::BPOP()
{

}

void Manager::PrintErrorCode(int num)
{
    flog << "========== ERROR ==========" << endl;
    flog << num << endl;
    flog << "===========================" << endl << endl;
}

void Manager::PrintSuccess(char * act)
{
    flog << "========== " << act << " ==========" << endl;
    flog << "Success" << endl;
    flog << "============================" << endl << endl;
}
