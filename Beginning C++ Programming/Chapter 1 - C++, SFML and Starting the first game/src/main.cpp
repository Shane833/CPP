// Include important libraries here
#include <SFML/Graphics.hpp>

// make code easier to type with using namespace
using namespace sf;

// This is where our game starts from
int main()
{
	// Create a VideoMode object
	VideoMode vm(1920,1080);
	
	// Create and open a window for the game
	RenderWindow window(vm, "Timber!!!", Style::Fullscreen);
	
	while (window.isOpen()){
		/*
		Handle Player Input
		*/
		
		if(Keyboard::isKeyPressed(Keyboard::Escape)){
			window.close();
		}
		
		/*
		Update the Scene
		*/
		
		/*
		Draw the Scene
		*/
		
		// Clear everything from the last frame
		window.clear();
		
		// Draw our game scene here
		
		// Show everything we just drew
		window.display();
	}
	
	return 0;
}