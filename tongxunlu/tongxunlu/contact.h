#ifndef _CONTACT_H_
#define _CONTACT_H_

#include <stdio.h>
#include <assert.h>
#include <windows.h>

#pragma warning(disable:4996)

//person内部的元素的大小
#define NAME_SIZE 32
#define SEX_SIZE 8
#define TELPHONE_SIZE 16
#define ADDRESS_SIZE 128

//通讯录的初始信息
#define INIT_NUM 2
#define INC_SIZE 2

//文件信息
#define SAVE_FILE "save.txt"

typedef struct person {
	char name[NAME_SIZE];
	char sex[SEX_SIZE];
	int age;
	char telphone[TELPHONE_SIZE];
	char address[ADDRESS_SIZE];
}person_t;

typedef struct contact {
	int cap;    //容量
	int size;   //当前有效好友
	person_t friends[0]; //柔性数组
}contact_t;

void InitContact(contact_t **ct); 
void AddFriend(contact_t **ct);
void ShowContact(contact_t *ct);
void SearchFriend(contact_t *ct);
void ClearContact(contact_t *ct);
void DelFriend(contact_t *ct);
void SortContact(contact_t *ct);
void SaveContact(contact_t *ct);
void ModFriend(contact_t *ct);

#endif