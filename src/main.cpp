#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <iostream>

struct Cone{        //Datatype that represents a cone composed of x, y and colour

        float x;
        float y;
        std::string colour;

};

//Variables declaration: These are the input variables to your function
std::vector<float> x_cones;  // x_cones is the input vector of X coords
std::vector<float> y_cones;  // y_cones is the input vector of Y coords
std::vector<std::string> c_cones; //c_cones is the input vector of colours
int i_get;                   // i_get is the index of the cone you have to get

//Declaration of the function get_cone that you have to write inside: gets the three variables mentioned above and returns the selected cone
Cone get_cone(std::vector<float> &x_cones, std::vector<float> &y_cones, std::vector<std::string> &c_cones, int i_get){ 

    Cone cone_out;  //This is the variable you will have to fill in order to storage the selected x and y coordinates 

    //////////////// YOUR FUNCTION GOES HERE /////////////////////////








    //////////////////////////////////////////////////////////////////

    return cone_out;
}


// YOU DON'T HAVE TO WRITE ANYTHING BELOW HERE, ALL YOUR WORK HAS TO BE DONE IN THE FUNCTION MARKED ABOVE, 
// HOWEVER, ALL CODE IS EXPLAINED JUST IN CASE YOU NEED SOME CONTEXT OR UNDERSTANDING ABOUT HOW IT WORKS
int main(int argc, char **argv){

    srand (time(NULL));

    Cone cone_out;

    int n_cones= rand() %10 + 5; //To test your function, the "lidar" will give you a random number of cones between 5 and 15

    for(int i=0; i<n_cones; i++){
        x_cones.push_back(-10.0 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(20.0)))); //Then, random values are assignated to each cone
        y_cones.push_back(-10.0 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(20.0))));

        if(rand() % 2 == 0){    //Also random colours
            c_cones.push_back("blue");
        }else{
            c_cones.push_back("yellow");
        }
    }

    //Following lines are to print in terminal the cones that your lidar has seen
    std::cout << "YOUR LIDAR HAS SEEN " << n_cones << " CONES." << std::endl << std::endl << "The X coordinate vector is: [";

    for(int i=0; i<n_cones-1;i++){
        std::cout << x_cones[i] << ", ";
    }   
        std::cout << x_cones[n_cones-1] << "]" << std::endl << std::endl << "The Y coordinate vector is: [";

    for(int i=0; i<n_cones-1;i++){
        std::cout << y_cones[i] << ", ";
    }   
        std::cout << y_cones[n_cones-1] << "]" << std::endl << std::endl << "The colour coordinate vector is: [";

    for(int i=0; i<n_cones-1;i++){
        std::cout << c_cones[i] << ", ";
    }   
        std::cout << c_cones[n_cones-1] << "]" << std::endl << std::endl;

    //Asks the user what specific cone wants to extract from vector
    std::cout << "Introduce the index of the cone that you want to get: ";
    std::cin >> i_get; 

    //if wrong number, program finishes
    if(i_get >= n_cones || i_get <0){
        std::cout << "The number is out of range, exiting program";
    }else{  //else, here is when your function gets called
        cone_out = get_cone(x_cones, y_cones, c_cones, i_get);

        //Shows the cone you have obtaines
        std::cout << std::endl << std::endl;
        std::cout <<"The cone you have retrieved is [X: " << cone_out.x <<", Y: " << cone_out.y<< ", Colour: "<< cone_out.colour<<"]"<< std::endl<< std::endl;

        //Also shows how are the initial vectors after deleting the cone
        std::cout << "X, Y and Colour vector after retrieving it remain as follows:"<< std::endl<< std::endl<< "X: [";

        for(int i=0; i<x_cones.size();i++){
            std::cout << x_cones[i] << ", ";
        }   
        std::cout << x_cones[n_cones-1] << "]" << std::endl << "Y: [";

        for(int i=0; i<y_cones.size();i++){
            std::cout << y_cones[i] << ", ";
        }   
            std::cout << y_cones[n_cones-1] << "]" << std::endl << "Colour: [";

        for(int i=0; i<c_cones.size();i++){
            std::cout << c_cones[i] << ", ";
        }   
            std::cout << c_cones[n_cones-1] << "]" << std::endl << std::endl;
        }
    return 0;
}

