//Bonacci Francesco 0900050944 Prova1A

#include "element.h"

int compareRicette(Ricetta r1, Ricetta r2)
{
	if (r1.numIngredientiUsati != r2.numIngredientiUsati) {

		return strcmp(r1.nomeRicetta, r2.nomeRicetta);

	} else {

		return r1.numIngredientiUsati - r2.numIngredientiUsati;

	}
}

int compare(element el1, element el2)
{
	//Da rimappare

	/*if (t1.giorno != t2.giorno)
			return (t1.giorno - t2.giorno);
	else {

		if (t1.stima != t2.stima)
			return (t1.stima - t2.stima);
		else
			return strcmp(t1.cliente, t2.cliente);	
	}*/

	return 0; //caso specifico
}

boolean isEqual(element el1, element el2)
{
	return (compare(el1, el2) == 0);
}

boolean isLess(element el1, element el2)
{
	return (compare(el1, el2) < 0);
}

//element getElement()
//{
//	element el;
//	scanf("%d", &el.prop);
//	return el; 
//}

void printElement(element el)
{
	printf("%s %d\n", el.nomeIngrediente, el.quantitaIngrediente);
}