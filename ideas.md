#Genetic World Simulator Ideas

Component-based architecture

Helps leverage parallelism through vectorization/memory access

##Visualization/Interface
Hotkeys to start, stop, pause, exit program

Escape to exit program

Space to start/pause

Need to restart simulation?

##Systems

* WeatherSystem
	* WaterSystem
* EcoSystem
	* PlantSystem
	* AnimalSystem
	* MatingSystem
	
##Components

* RenderComponent

	Draws the unit.
* GenderComponent

	Might not be needed.
* MovementComponent

	Whether the unit moves, how it moves.
* GrowthComponent

	Age is incorporated.
* IOComponent

	Input-Output meaning what it eats (input) and what it excretes (output).