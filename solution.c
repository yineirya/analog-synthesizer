#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct AnalogSynthesiser 
{
    char *model;        // Model of the synthesiser
    int num_keys;       // Number of keys on the synthesiser
    int osc_count;      // Number of oscillators
    float cutoff_freq;  // Cutoff frequency
};
//1. Initialize Synthesiser
struct AnalogSynthesiser * init_synthesiser(char *model, int num_keys){
    struct AnalogSynthesiser* synthesiser = (struct AnalogSynthesiser*) malloc(sizeof(struct AnalogSynthesiser));
    if (synthesiser == NULL){
        printf("Memory Alloctaion failed");
        return NULL;
    }
    synthesiser->model = (char *)malloc(strlen(model) + 1);
    if (synthesiser == NULL){
        printf("Memory Alloctaion failed");
        return NULL;
    }
    strcpy(synthesiser->model, model);
    synthesiser->num_keys = num_keys;
    return synthesiser;
}

//2. Display Synthesiser Information
void display_synthesiser_info(struct AnalogSynthesiser *synthesiser){
    if (synthesiser == NULL){
        printf("Error");
        return;
    }
    printf("Synthesiser Model: %s", synthesiser->model);
    if (synthesiser->num_keys !=0){
        printf(" | Number of Keys: %d", synthesiser->num_keys);
    }
    if (synthesiser->num_keys !=0 && synthesiser->osc_count != 0){
        printf(" | Oscillator Count: %d", synthesiser->osc_count);
    }
    if (synthesiser->num_keys !=0 && synthesiser->osc_count != 0 && synthesiser->cutoff_freq != 0.00){
        printf(" | Cutoff Frequency: %.2f Hz\n", synthesiser->cutoff_freq);
    }
    printf("\n");
}

//3. Set Synthesiser Settings
void set_synthesiser_settings(struct AnalogSynthesiser *synthesiser, int osc_count, float cutoff_freq){
    if (synthesiser == NULL){
        printf("Error");
        return;
    }
    synthesiser->osc_count = osc_count;
    synthesiser->cutoff_freq = cutoff_freq;
}
int main(void){
        // Initialize analog synthesiser
    struct AnalogSynthesiser *synthesiser = init_synthesiser("Moog Model D", 61);
        // Check if synthesiser is NULL
    if (synthesiser == NULL) return 1;
        // Display synthesiser information
    display_synthesiser_info(synthesiser);
        // Set synthesiser settings
    set_synthesiser_settings(synthesiser, 3, 220.0);
    // Display updated synthesiser information
    display_synthesiser_info(synthesiser);
    // Free memory
    free(synthesiser->model);
    free(synthesiser);
    return 0;
}