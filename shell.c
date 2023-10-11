#include "shell.h"

int main(void)
{
    char command[140];

    for (;;)
    {
        _prompt();
        read_command(command, sizeof(command));
        command_exec(command);
    }

    return 0;
}
