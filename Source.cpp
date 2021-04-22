#include "glhelper.h"
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include "stb_image_write.h"

void tick();

void render();

int main(char* args) {
	START_OPEN_GL(4, 6, "OpenGL Template", 1280, 720);

	while (!glfwWindowShouldClose(WINDOW)) {

		tick();

		render();

		// Go at it champ!

		glfwSwapBuffers(WINDOW);
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}

void tick() {

}

void render() {

}