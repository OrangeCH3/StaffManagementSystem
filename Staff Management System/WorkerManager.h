#pragma once
#include<iostream>
using namespace std;
#include "Worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:

	//���캯��
	WorkerManager();

	//չʾ�˵�
	void Show_Menu();

	//�˳�ϵͳ
	void ExitSystem();

	//��¼�ļ��е���������
	int m_EmpNum;
	//Ա�������ָ��
	Worker** m_EmpArray;
	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;
	
	//����ְ������ж�ְ���Ƿ���ڣ������ڷ���ְ���������е�λ�ã������ڷ���-1
	int IsExist(int id);
	
	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//����ְ��
	void Add_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	//�����ļ�
	void save();

	//��������
	~WorkerManager();
}; 
