/**
 * @file 2dSimulation.cpp
 * @brief Implementation of my GUI to run a 2d simulation for my Slam Project
 * 
 * Trying to create production level code for my SLAM proeject. Going to create a GUI program in this file
 */


#include "libraries/gui.hpp"

#include <iostream>
// #include 


/* 
My plan for this file is to have a gui that can show me the agent as its making its way around a scene or world of my choosing.
And, I can see it moving about and making its decision in real time. So, I need a gui library that I can influence the agent 
and update the world with. 
*/


namespace gui {

        class GUI{     
         private:
            // Attributes needed
            float x_agent;
            float y_agent;
         public:
            /*
            This function creates the gui window for us using SFML
            */
            void createGuiWindow() {

                return;
            } 

            /*
            Encapsulation function to help us set the position of the agent
            */
            void setPos(float x_units, float y_units) {
                x_agent = x_units;
                y_agent  = y_units;
            }
            
            /*
            Encapsulation function to get the position of the agent
            */
            std::pair<float, float> getPos() {
                return {x_agent, y_agent};
            }
    };

};