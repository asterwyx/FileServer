//
// Created by asterwyx on 11/1/19.
//

#ifndef CLOUDSTORAGESERVER_UTIL_H
#define CLOUDSTORAGESERVER_UTIL_H
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * 将字符串全部转换成大写
 */
char *strupr(char *str);

/**
 * 获得文件的大小 
 */
size_t getFileSize(FILE *fp);

/**
 * 获得文件的mimetype
 */
char *getFileType(const char *filename);
#endif //CLOUDSTORAGESERVER_UTIL_H
