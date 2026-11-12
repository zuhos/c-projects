//Program that counts occurence of words in string

#include <string.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct{
	char word[50];
	int count;
} words;


char text[] =
"Nynetjer was the third pharaoh of the Second Dynasty of Egypt. Egyptologists have proposed that his reign happened between the late 29th and early 27th century BC and probably lasted around 40 years. Archaeologically, Nynetjer is the best-attested king of the early Second Dynasty. Most events recorded for his reign on the Palermo Stone are religious festivals and censuses. The probable locations for these events indicate that royal activity was largely confined to the capital Memphis and its vicinity in Lower Egypt. The administrative partition of Egypt into nomes happened during his reign. Nynetjer had a large gallery tomb dug for himself in Saqqara comprising more than 150 rooms, some arranged to model a royal palace. When excavated, the tomb housed funerary equipment and stone tools, some of which were used in a ritual feast for Nynetjer's burial. The subterranean tomb was probably built with associated superstructures, but these were levelled and overbuilt by subsequent pharaohs.";

int main(int argc, char *argv[]) {


	words word_array[1000];
	int n = 0;

	char *token = strtok(text, " ");
 
	while(token != NULL) {
	
		int found = 0;

		for(int i = 0; i < n; i++){
			
			if(strcmp(word_array[i].word, token) == 0){
				word_array[i].count += 1;
				found = 1;
				break;
			}

		}

		 if(!found){
			strcpy(word_array[n].word, token);
			word_array[n].count = 1;
			n++;

		}

		token = strtok(NULL, " ");
	
	}

	int total = n;

 	printf("%20s | %10s | %10s\n", "WORD", "OCCURRENCE", "Percentage");
	for(int i = 0; i < n; i++){
		
		double pcr = ((double)word_array[i].count / total) * 100;
		printf("\n%20s | %10d | %10.1f%% ", word_array[i].word, word_array[i].count, pcr);
		
		pcr = 0;
	}

	printf("\n\n%20s: %10d | \n", "TOTAL", total);

	return 0;
}
