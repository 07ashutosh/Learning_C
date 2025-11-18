#include <stdio.h>
#include <stdlib.h>


    struct vehicle{
        char model[20];
        int year;
        
    };

    union Engine{
        int batteryCapacity;
        float petrolCC;
        float dieselCC;
        struct vehicle vhc;   
    }einfo;
    



int main(){
    // struct vehicle car;
    // union Engine engine;
    // printf("enter the model no:");
    // scanf("%s",&car.model);
    // printf("rnter the year of mfg:");
    // scanf("%s",&car.year);
    // printf("enter the battery capicity:");
    // scanf("%d",&engine.batteryCapacity);
    // printf("enter the petrol cc:");
    // scanf("%f",&engine.petrolCC);
    // printf("thats your vehicle details\n");
    // printf("model: %s\n", car.model);
    // printf("year: %d\n", car.year);
    // printf("battery capacity: %d\n", engine.batteryCapacity);
    // printf("petrol cc: %.2f\n", engine.petrolCC);
    // return 0;
    // einfo.vhc.year = 2020;
    // printf("vehicle year: %d\n", einfo.vhc.year);
    // einfo.batteryCapacity = 5000;
    // printf("battery capacity: %d\n", einfo.batteryCapacity);
    // printf("vehicle year after setting battery capacity: %d\n", einfo.vhc.year);
    // return 0;

    struct vehicle bike = {"Honda CB500X", 2019};
    einfo.vhc = bike;
    printf("Bike Model: %s\n", einfo.vhc.model);
    printf("Bike Year: %d\n", einfo.vhc.year);
    einfo.petrolCC = 471.0;
    printf("Bike Petrol CC: %.2f\n", einfo.petrolCC);
    printf("Bike Model after setting Petrol CC: %s\n", einfo.vhc.model);

}

    