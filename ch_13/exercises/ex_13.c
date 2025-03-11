//
// Created by erkam on 3/11/25.
//

#include <stdio.h>
#include <string.h>

#define URL_LENGTH 30

void build_index_url(const char* domain, char* index_url);

int main(void)
{
    char domain[] = "knking.com";
    char index_url[URL_LENGTH];
    build_index_url(domain, index_url);
    printf("Index url of %s is %s.\n", domain, index_url);
}

void build_index_url(const char* domain, char* index_url)
{
    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}
