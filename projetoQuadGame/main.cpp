#include "gl/glut.h"

void display1()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);		//Indica a cor a ser utilizada no fundo da janela.
	glClear(GL_COLOR_BUFFER_BIT);			//Limpa o buffer indicado com a cor do GlClearColor
	glColor3f(1.0, 0.0, 0.0);				//Define a cor vermelha (1.0, 0.0, 0.0) como a cor atual
	
	glBegin(GL_POINTS);						
	glVertex2f(0.0, 0.0);					
	glEnd();								/*	Inicialmente, a janela gr�fica est� definida para valores no intervalo [-1,1], tanto em x quanto
											em y. Assim, a fun��o glVertex2f(0.0, 0.0) acende o pixel na posi��o x = 0.0, y = 0.0 (centro). */
	
	
	glFlush();								//Envia uma solicita��o para que o conte�do do Frame Buffer seja exibido.
	glutSwapBuffers();						//Troca os buffers.
}

void display2()
{
	glClear
}

void main14a(int argc, char **argv)
{
	glutInit(&argc, argv);			//Esta fun��o � utilizada para iniciar a biblioteca GLUT
	glutCreateWindow("Ponto");		//Cria uma janela para o OpenGL com o nome "Ponto"
	glutDisplayFunc(display1);		//Registra que a fun��o void display() ser� a fun��o a ser chamada quando a janela gr�fica for atualizada
	glutMainLoop();					//Inicia o gerenciamento de eventos, aguardando que algum evento seja acionado
}


void main (int argc, char **argv)
{
	main14a(argc, (&(&(**argv))) );


	/*Perguntas
	-Que fun��o � utilizada para inicializar uma janela OpenGL?
	-O que a fun��o glutMainLoop() faz? D� um
	*/
}
