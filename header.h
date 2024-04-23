#pragma once
#include<iostream>
#include<ctype.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
namespace P10
{
#define max_plaetze 255
#define GROESSE 20
	struct Vokabeln
	{
		char englisch[GROESSE];
		char deutsch[GROESSE];
	};
#include"VokabelTrainer.h"
	using namespace std;
}
