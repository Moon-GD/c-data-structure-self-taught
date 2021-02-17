#pragma once

typedef struct {
	int max;
	int ptr;
	int* stk;
} IntStack;

//���� �ʱ�ȭ
int Initialize(IntStack* s, int max);

// ���ÿ� �����͸� Ǫ��
int Push(IntStack* s, int x);

// ���ÿ��� �����͸� ��
int Pop(IntStack* s, int* x);

//���ÿ��� �����͸� ��ũ
int Peek(const IntStack* s, int* x);

//���� ����
void Clear(IntStack* s);

//���� �ִ� �뷮
int Capacity(const IntStack* s);

// ������ ������ ����
int Size(const IntStack* s);

// ������ ��� �ִ��� ����
int IsEmpty(const IntStack* s);

// ������ ���� á���� ����
int IsFull(const IntStack* s);

// ���ÿ��� �ε��� �˻�
int Search(const IntStack* s, int x);

// ��� ������ ���
void Print(const IntStack* s);

// ���� ����
void Terminate(IntStack* s);