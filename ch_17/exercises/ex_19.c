//
// Created by erkam on 3/18/25.
//

#include <stdio.h>
#include <string.h>


struct file_command
{
    char* cmd_name;
    void (*cmd_ptr)(void);
};

void  open_file(void);
void  close_file(void);
void* parse_command(const struct file_command commands[], int size, const char* searching_command);

int main(void)
{
    struct file_command file_cmd[] = {{"open", open_file}, {"close", close_file}};
    int                 size       = sizeof(file_cmd) / sizeof(file_cmd[0]);

    char* input = "close";

    void (*cmd)(void) = parse_command(file_cmd, size, input);
    if (cmd != NULL)
        cmd();

    return 0;
}

void* parse_command(const struct file_command commands[], int size, const char* searching_command)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(commands[i].cmd_name, searching_command) == 0)
            return commands[i].cmd_ptr;
    }

    return NULL;
}

void open_file(void) { printf("%s is called.\n", __FUNCTION__); }

void close_file(void) { printf("%s is called.\n", __FUNCTION__); }