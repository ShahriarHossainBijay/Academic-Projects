#include<windows.h>
#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<GL/glu.h>
#include<Gl/glut.h>

using namespace std;

int c1 = 00, c2=-500, c3=-200, c4=220;
int s1 = 75, s2=75, s3=75, s4=75;
int tx=100,ty=90;
bool day= true ;


void drawCircle(int r, int x, int y)
{
    glBegin(GL_POLYGON);
        for(int i=0; i<360; i++)
        {
            float theta = i*3.142/180;
            glVertex2d(r*cos(theta) + x , r*sin(theta) + y);
        }
    glEnd();
}




void update(int value)
{
    if(c1 > 640)
       c1 = -850;
    c1 += s1;

    if(c2 > 640)
       c2 = -850;
    c2 += s2;

    if(c3 > 640)
        c3 = -850;
    c3 += s3;

    if(c4 > 640)
        c4 = -850;
    c4 += s4;

glutPostRedisplay();


glutTimerFunc(100, update, 0);
}

void handleKeypress(unsigned char key, int x, int y) {
if(key=='a')
        s1 += 10;
    if(key=='b')
        s1 = 0;

    if(key=='c')
        s2 += 10;
    if(key=='d')
        s2 = 0;

    if(key=='e')
        s3 += 10;
    if(key=='f')
        s3 = 0;

    if(key=='g')
        s4 += 10;
    if(key=='h')
        s4 = 0;

    if(key=='r')
    day=true;
    if(key=='t')
    day=false;

glutPostRedisplay();
}

void day_time()
{
    glClear(GL_COLOR_BUFFER_BIT);
//Road
glColor3ub(300,300,300);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-400,-200);
glVertex2i(640,-200);
glVertex2i(640,10);
glVertex2i(-400,10);
glEnd();
//Sky
glColor3ub(100,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-400,10);
glVertex2i(640,10);
glVertex2i(640,480);
glVertex2i(-400,480);
glEnd();

//sun
float theta;
glBegin(GL_POLYGON);
glColor3ub(255,255,0);
for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(380+53*cos(theta),400+53*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255,0,0);
float t;
for(int i=0;i<360;i++)
{
    t=i*3.142/180;
    glVertex2f(380+50*cos(t),400+50*sin(t));
}
glEnd();

// cloud
float ta;
glBegin(GL_POLYGON);
glColor3ub(255,255,255);
for(int i=0;i<180;i++)
{
    ta=i*3.142/180;
    glVertex2f(210+100*cos(ta),400+30*sin(ta));
}
glEnd();

float thh;
glBegin(GL_POLYGON);
glColor3ub(255,255,255);
for(int i=0;i<180;i++)
{
    thh=i*3.142/180;
    glVertex2f(-50+70*cos(thh),440+20*sin(thh));
}
glEnd();

float tha;
glBegin(GL_POLYGON);
glColor3ub(255,255,255);
for(int i=0;i<180;i++)
{
    tha=i*3.142/180;
    glVertex2f(30+80*cos(tha),380+15*sin(tha));
}
glEnd();

float thaa;
glBegin(GL_POLYGON);
glColor3ub(255,255,255);
for(int i=0;i<180;i++)
{
    thaa=i*3.142/180;
    glVertex2f(-350+50*cos(thaa),435+20*sin(thaa));
}
glEnd();
float that;
glBegin(GL_POLYGON);
glColor3ub(255,255,255);
for(int i=0;i<180;i++)
{
    that=i*3.142/180;
    glVertex2f(-300+50*cos(that),435+40*sin(that));
}
glEnd();
float thta;
glBegin(GL_POLYGON);
glColor3ub(255,255,255);
for(int i=0;i<180;i++)
{
    thta=i*3.142/180;
    glVertex2f(-250+50*cos(thta),435+20*sin(thta));
}
glEnd();
float thhaa;
glBegin(GL_POLYGON);
glColor3ub(255,255,255);
for(int i=0;i<180;i++)
{
    thhaa=i*3.142/180;
    glVertex2f(480+30*cos(thhaa),410+15*sin(thhaa));
}
glEnd();
float thhaaa;
glBegin(GL_POLYGON);
glColor3ub(255,255,255);
for(int i=0;i<180;i++)
{
    thhaaa=i*3.142/180;
    glVertex2f(530+30*cos(thhaaa),410+25*sin(thhaaa));
}
glEnd();
float tthhaaa;
glBegin(GL_POLYGON);
glColor3ub(255,255,255);
for(int i=0;i<180;i++)
{
    tthhaaa=i*3.142/180;
    glVertex2f(580+30*cos(tthhaaa),410+15*sin(tthhaaa));
}
glEnd();

// 1st House
glColor3ub(0,0,0);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(520,10);
glVertex2i(540,10);
glVertex2i(540,200);
glVertex2i(520,150);
glEnd();

glColor3ub(0,0,0);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(340,10);
glVertex2i(360,10);
glVertex2i(360,150);
glVertex2i(340,200);
glEnd();

glColor3ub(0,0,0);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(520,150);
glVertex2i(540,200);
glVertex2i(340,200);
glVertex2i(360,150);
glEnd();
// 2nd House
glColor3ub(450,650,650);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(145,10);
glVertex2i(340,10);
glVertex2i(340,220);
glVertex2i(145,220);
glEnd();

glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(140,220);
glVertex2i(350,220);
glVertex2i(350,230);
glVertex2i(140,230);
glEnd();

glColor3ub(450,650,650);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(200,230);
glVertex2i(340,230);
glVertex2i(340,300);
glVertex2i(200,300);
glEnd();

glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(190,300);
glVertex2i(350,300);
glVertex2i(350,310);
glVertex2i(190,310);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(220,250);
glVertex2i(260,250);
glVertex2i(260,280);
glVertex2i(220,280);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(280,250);
glVertex2i(320,250);
glVertex2i(320,280);
glVertex2i(280,280);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(160,10);
glVertex2i(220,10);
glVertex2i(220,100);
glVertex2i(160,100);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(250,40);
glVertex2i(300,40);
glVertex2i(300,100);
glVertex2i(250,100);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(250,130);
glVertex2i(300,130);
glVertex2i(300,190);
glVertex2i(250,190);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(160,130);
glVertex2i(210,130);
glVertex2i(210,190);
glVertex2i(160,190);
glEnd();


//5th house
glColor3ub(700,300,600);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-280,10);
glVertex2i(-40,10);
glVertex2i(-40,400);
glVertex2i(-280,400);
glEnd();

glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-290,400);
glVertex2i(-30,400);
glVertex2i(-30,410);
glVertex2i(-290,410);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-260,330);
glVertex2i(-210,330);
glVertex2i(-210,370);
glVertex2i(-260,370);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-190,330);
glVertex2i(-140,330);
glVertex2i(-140,370);
glVertex2i(-190,370);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-120,330);
glVertex2i(-65,330);
glVertex2i(-65,370);
glVertex2i(-120,370);
glEnd();

//3rd House
glColor3ub(200,400,600);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-150,10);
glVertex2i(125,10);
glVertex2i(125,270);
glVertex2i(-150,270);
glEnd();

glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-160,270);
glVertex2i(130,270);
glVertex2i(130,280);
glVertex2i(-160,280);
glEnd();


glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-60,10);
glVertex2i(30,10);
glVertex2i(30,100);
glVertex2i(-60,100);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-120,30);
glVertex2i(-80,30);
glVertex2i(-80,100);
glVertex2i(-120,100);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(50,30);
glVertex2i(90,30);
glVertex2i(90,100);
glVertex2i(50,100);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(40,130);
glVertex2i(70,130);
glVertex2i(70,160);
glVertex2i(40,160);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(80,130);
glVertex2i(110,130);
glVertex2i(110,160);
glVertex2i(80,160);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-10,130);
glVertex2i(20,130);
glVertex2i(20,160);
glVertex2i(-10,160);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-50,130);
glVertex2i(-20,130);
glVertex2i(-20,160);
glVertex2i(-50,160);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-100,130);
glVertex2i(-70,130);
glVertex2i(-70,160);
glVertex2i(-100,160);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-140,130);
glVertex2i(-110,130);
glVertex2i(-110,160);
glVertex2i(-140,160);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(40,200);
glVertex2i(70,200);
glVertex2i(70,230);
glVertex2i(40,230);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(80,200);
glVertex2i(110,200);
glVertex2i(110,230);
glVertex2i(80,230);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-10,200);
glVertex2i(20,200);
glVertex2i(20,230);
glVertex2i(-10,230);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-50,200);
glVertex2i(-20,200);
glVertex2i(-20,230);
glVertex2i(-50,230);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-100,200);
glVertex2i(-70,200);
glVertex2i(-70,230);
glVertex2i(-100,230);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-140,200);
glVertex2i(-110,200);
glVertex2i(-110,230);
glVertex2i(-140,230);
glEnd();

//4th house

glColor3ub(655,455,655);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-400,10);
glVertex2i(-220,10);
glVertex2i(-220,310);
glVertex2i(-400,310);
glEnd();

glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-400,310);
glVertex2i(-210,310);
glVertex2i(-210,320);
glVertex2i(-400,320);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-380,10);
glVertex2i(-300,10);
glVertex2i(-300,130);
glVertex2i(-380,130);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-280,30);
glVertex2i(-240,30);
glVertex2i(-240,80);
glVertex2i(-280,80);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-280,100);
glVertex2i(-240,100);
glVertex2i(-240,150);
glVertex2i(-280,150);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-280,170);
glVertex2i(-240,170);
glVertex2i(-240,220);
glVertex2i(-280,220);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-280,240);
glVertex2i(-240,240);
glVertex2i(-240,290);
glVertex2i(-280,290);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-320,240);
glVertex2i(-360,240);
glVertex2i(-360,290);
glVertex2i(-320,290);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-320,170);
glVertex2i(-360,170);
glVertex2i(-360,220);
glVertex2i(-320,220);
glEnd();

//6th house
glColor3ub(650,550,550);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(540,10);
glVertex2i(640,10);
glVertex2i(640,380);
glVertex2i(540,380);
glEnd();

glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(530,380);
glVertex2i(640,380);
glVertex2i(640,390);
glVertex2i(530,390);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(580,10);
glVertex2i(640,10);
glVertex2i(640,110);
glVertex2i(580,110);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(580,130);
glVertex2i(630,130);
glVertex2i(630,170);
glVertex2i(580,170);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(580,190);
glVertex2i(630,190);
glVertex2i(630,230);
glVertex2i(580,230);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(580,250);
glVertex2i(630,250);
glVertex2i(630,290);
glVertex2i(580,290);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(580,310);
glVertex2i(630,310);
glVertex2i(630,350);
glVertex2i(580,350);
glEnd();

// right tree

glColor3ub(555,0,0);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(128,10);
glVertex2i(142,10);
glVertex2i(142,280);
glVertex2i(128,280);
glEnd();

glColor3ub(0,355,0);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(50,280);
glVertex2i(215,280);
glVertex2i(150,350);
glVertex2i(120,350);
glEnd();

glColor3ub(0,355,0);
glPointSize(10.0);
glBegin(GL_POLYGON);
glVertex2i(50,320);
glVertex2i(215,320);
glVertex2i(135,380);
glEnd();


//2nd Road
glColor3ub(0,355,0);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(640,-200);
glVertex2i(640,-400);
glVertex2i(-400,-400);
glVertex2i(-400,-200);
glEnd();
//Divider
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-370,-80);
glVertex2i(-250,-80);
glVertex2i(-250,-110);
glVertex2i(-370,-110);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-200,-80);
glVertex2i(-80,-80);
glVertex2i(-80,-110);
glVertex2i(-200,-110);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-30,-80);
glVertex2i(100,-80);
glVertex2i(100,-110);
glVertex2i(-30,-110);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(150,-80);
glVertex2i(280,-80);
glVertex2i(280,-110);
glVertex2i(150,-110);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(570,-80);
glVertex2i(640,-80);
glVertex2i(640,-110);
glVertex2i(570,-110);
glEnd();
//crossing
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(370,-85);
glVertex2i(500,-85);
glVertex2i(500,-105);
glVertex2i(370,-105);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(370,-190);
glVertex2i(500,-190);
glVertex2i(500,-170);
glVertex2i(370,-170);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(370,-147);
glVertex2i(500,-147);
glVertex2i(500,-127);
glVertex2i(370,-127);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(370,-65);
glVertex2i(500,-65);
glVertex2i(500,-45);
glVertex2i(370,-45);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(370,-25);
glVertex2i(500,-25);
glVertex2i(500,-5);
glVertex2i(370,-5);
glEnd();

//car1
glPushMatrix();
glTranslated(c1, -100,0);
glScalef(0.69f,0.69f,0);
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2d(70,50);
glVertex2d(40,80);
glVertex2d(100,100);
glVertex2d(130,150);
glVertex2d(230,150);
glVertex2d(300,100);
glVertex2d(400,80);
glVertex2d(370,50);
glVertex2d(70,50);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0,61,121);
glVertex2d(130,140);
glVertex2d(140,140);
glVertex2d(140,100);
glVertex2d(110,100);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,128,0);
glVertex2d(150,140);
glVertex2d(200,140);
glVertex2d(200,100);
glVertex2d(150,100);
glEnd();

glBegin(GL_POLYGON);
glColor3f(255,255,0);
glVertex2d(210,140);
glVertex2d(230,140);
glVertex2d(280,100);
glVertex2d(210,100);
glEnd();


glColor3ub(45,0,0);
drawCircle(30,320,50);
drawCircle(30,130,50);
glPopMatrix();



//car2
glPushMatrix();
glTranslated(c2, -100,0);
glScalef(0.69f,0.69f,0);
glBegin(GL_POLYGON);
glColor3ub(255,26,141);

glVertex2d(70,50);
glVertex2d(40,80);
glVertex2d(100,100);
glVertex2d(130,150);
glVertex2d(230,150);
glVertex2d(300,100);
glVertex2d(400,80);
glVertex2d(370,50);
glVertex2d(70,50);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,125,0);
glVertex2d(130,140);
glVertex2d(140,140);
glVertex2d(140,100);
glVertex2d(110,100);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0,0,128);
glVertex2d(150,140);
glVertex2d(200,140);
glVertex2d(200,100);
glVertex2d(150,100);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0,125,0);
glVertex2d(210,140);
glVertex2d(230,140);
glVertex2d(280,100);
glVertex2d(210,100);
glEnd();


glColor3ub(0,0,0);
drawCircle(30,320,50);
drawCircle(30,130,50);
glPopMatrix();



//car3
glPushMatrix();
glTranslated(-c3, -210,0);
glRotatef(180,0,1,0);
glScalef(0.69f,0.69f,0);
glBegin(GL_POLYGON);
glColor3ub(242,9,15);

glVertex2d(70,50);
glVertex2d(40,80);
glVertex2d(100,100);
glVertex2d(130,150);
glVertex2d(230,150);
glVertex2d(300,100);
glVertex2d(400,80);
glVertex2d(370,50);
glVertex2d(70,50);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,1,0);
glVertex2d(130,140);
glVertex2d(140,140);
glVertex2d(140,100);
glVertex2d(110,100);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2d(150,140);
glVertex2d(200,140);
glVertex2d(200,100);
glVertex2d(150,100);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,1,0);
glVertex2d(210,140);
glVertex2d(230,140);
glVertex2d(280,100);
glVertex2d(210,100);
glEnd();


glColor3ub(1,1,0);
drawCircle(30,320,50);
drawCircle(30,130,50);
glPopMatrix();


//car4
glPushMatrix();
glTranslated(-c4,-210,0);
glRotatef(180,0,1,0);
glScalef(0.69f,0.69f,0);
glBegin(GL_POLYGON);
glColor3ub(64,0,64);
glVertex2d(70,50);
glVertex2d(40,80);
glVertex2d(100,100);
glVertex2d(130,150);
glVertex2d(230,150);
glVertex2d(300,100);
glVertex2d(400,80);
glVertex2d(370,50);
glVertex2d(70,50);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,1,0);
glVertex2d(130,140);
glVertex2d(140,140);
glVertex2d(140,100);
glVertex2d(110,100);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2d(150,140);
glVertex2d(200,140);
glVertex2d(200,100);
glVertex2d(150,100);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,1,0);
glVertex2d(210,140);
glVertex2d(230,140);
glVertex2d(280,100);
glVertex2d(210,100);
glEnd();


glColor3ub(1,1,1);
drawCircle(30,320,50);
drawCircle(30,130,50);
glPopMatrix();
glEnd();

//park
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(340,-350);
glVertex2i(560,-290);
glVertex2i(560,-300);
glVertex2i(340,-360);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_TRIANGLES);
glVertex2i(430,-370);
glVertex2i(470,-370);
glVertex2i(450,-320);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_LINES);
glVertex2i(-400,-390);
glVertex2i(-380,-250);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_LINES);
glVertex2i(-360,-390);
glVertex2i(-380,-250);
glEnd();
glBegin(GL_LINES);
glVertex2i(-205,-390);
glVertex2i(-185,-250);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_LINES);
glVertex2i(-150,-390);
glVertex2i(-180,-250);
glEnd();

glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-380,-250);
glVertex2i(-180,-250);
glVertex2i(-180,-240);
glVertex2i(-380,-240);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-245,-360);
glVertex2i(-320,-360);
glVertex2i(-320,-340);
glVertex2i(-245,-340);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_LINES);
glVertex2i(-320,-340);
glVertex2i(-320,-250);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_LINES);
glVertex2i(-245,-340);
glVertex2i(-245,-250);
glEnd();

//park tree1
glColor3ub(555,0,0);
glBegin(GL_QUADS);
glVertex2i(-100,-380);
glVertex2i(-87,-380);
glVertex2i(-87,-210);
glVertex2i(-100,-210);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,455,0);
float a;
for(int i=0;i<360;i++)
{
    a=i*3.142/180;
    glVertex2f(-90+50*cos(a),-200+40*sin(a));
}

glEnd();

//park tree2
glColor3ub(555,0,0);
glBegin(GL_QUADS);
glVertex2i(15,-400);
glVertex2i(25,-400);
glVertex2i(25,-150);
glVertex2i(15,-150);
glEnd();
glColor3ub(0,455,0);
glPointSize(10.0);
glBegin(GL_POLYGON);
glVertex2i(-80,-160);
glVertex2i(120,-160);
glVertex2i(20,-120);
glEnd();
glColor3ub(0,455,0);
glPointSize(10.0);
glBegin(GL_POLYGON);
glVertex2i(-100,-140);
glVertex2i(140,-140);
glVertex2i(20,-100);
glEnd();
//park tree 3

glColor3ub(555,0,0);
glBegin(GL_QUADS);
glVertex2i(230,-390);
glVertex2i(240,-390);
glVertex2i(240,-170);
glVertex2i(230,-170);
glEnd();
glColor3ub(0,455,0);
glPointSize(10.0);
glBegin(GL_POLYGON);
glVertex2i(110,-180);
glVertex2i(350,-180);
glVertex2i(235,-120);
glEnd();
glColor3ub(0,455,0);
glPointSize(10.0);
glBegin(GL_POLYGON);
glVertex2i(110,-145);
glVertex2i(350,-145);
glVertex2i(235,-90);
glEnd();

//park man-1
float m;
glBegin(GL_POLYGON);
glColor3ub(255,255,255);
for(int i=0;i<360;i++)
{
    m=i*3.142/180;
    glVertex2f(70+10*cos(m),-290+10*sin(m));
}
glEnd();
glColor3ub(255,255,255);
glBegin(GL_QUADS);
glVertex2i(50,-300);
glVertex2i(90,-300);
glVertex2i(80,-370);
glVertex2i(60,-370);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(60,-370);
glVertex2i(53,-400);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(80,-370);
glVertex2i(87,-400);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(52,-300);
glVertex2i(45,-360);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(90,-305);
glVertex2i(99,-360);
glEnd();
//park man-2
float mn;
glBegin(GL_POLYGON);
glColor3ub(255,255,255);
for(int i=0;i<360;i++)
{
    mn=i*3.142/180;
    glVertex2f(70+tx+10*cos(mn),-320+10*sin(mn));
}
glEnd();
glColor3ub(255,255,255);
glBegin(GL_QUADS);
glVertex2i(50+tx,-330);
glVertex2i(90+tx,-330);
glVertex2i(80+tx,-370);
glVertex2i(60+tx,-370);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(60+tx,-370);
glVertex2i(53+tx,-400);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(80+tx,-370);
glVertex2i(87+tx,-400);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(52+tx,-335);
glVertex2i(45+tx,-360);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(92+tx,-335);
glVertex2i(99+tx,-360);
glEnd();
//park man-3
float ma;
glBegin(GL_POLYGON);
glColor3ub(255,255,255);
for(int i=0;i<360;i++)
{
    ma=i*3.142/180;
    glVertex2f(360+10*cos(ma),-300+10*sin(ma));
}
glEnd();
glColor3ub(255,255,255);
glBegin(GL_QUADS);
glVertex2i(350,-310);
glVertex2i(370,-310);
glVertex2i(365,-343);
glVertex2i(355,-350);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(357,-350);
glVertex2i(350,-375);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(364,-350);
glVertex2i(371,-375);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(368,-315);
glVertex2i(373,-345);
glEnd();
// Park man-4
float man;
glBegin(GL_POLYGON);
glColor3ub(255,255,255);
for(int i=0;i<360;i++)
{
    man=i*3.142/180;
    glVertex2f(540+10*cos(man),-235+10*sin(man));
}
glEnd();
glColor3ub(255,255,255);
glBegin(GL_QUADS);
glVertex2i(530,-245);
glVertex2i(550,-245);
glVertex2i(547,-293);
glVertex2i(533,-298);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(535,-298);
glVertex2i(528,-335);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(542,-293);
glVertex2i(552,-335);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(532,-247);
glVertex2i(525,-292);
glEnd();
//park man-5
float man1;
glBegin(GL_POLYGON);
glColor3ub(255,255,255);
for(int i=0;i<360;i++)
{
    man1=i*3.142/180;
    glVertex2f(-283+10*cos(man1),-290+10*sin(man1));
}
glEnd();
glColor3ub(255,255,255);
glBegin(GL_QUADS);
glVertex2i(-263,-300);
glVertex2i(-303,-300);
glVertex2i(-293,-340);
glVertex2i(-273,-340);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(-290,-340);
glVertex2i(-293,-380);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(-270,-340);
glVertex2i(-273,-380);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(-265,-310);
glVertex2i(-245,-330);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(-300,-310);
glVertex2i(-320,-330);
glEnd();
// crossing man-1
float mna;
glBegin(GL_POLYGON);
glColor3ub(255,255,255);
for(int i=0;i<360;i++)
{
    mna=i*3.142/180;
    glVertex2f(380+tx+10*cos(mna),100+10*sin(mna));
}
glEnd();

glColor3ub(255,255,255);
glBegin(GL_QUADS);
glVertex2i(465,90);
glVertex2i(495,90);
glVertex2i(490,45);
glVertex2i(470,45);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(472,45);
glVertex2i(467,10);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(488,45);
glVertex2i(493,10);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(467,87);
glVertex2i(458,57);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(493,88);
glVertex2i(500,57);
glEnd();
// crossing man-2
float mnaa;
glBegin(GL_POLYGON);
glColor3ub(255,255,255);
for(int i=0;i<360;i++)
{
    mnaa=i*3.142/180;
    glVertex2f(480-ty+10*cos(mnaa),100+10*sin(mnaa));
}
glEnd();

glColor3ub(255,255,255);
glBegin(GL_QUADS);
glVertex2i(465-ty,90);
glVertex2i(495-ty,90);
glVertex2i(490-ty,45);
glVertex2i(470-ty,45);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(472-ty,45);
glVertex2i(467-ty,10);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(488-ty,45);
glVertex2i(493-ty,10);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(467-ty,87);
glVertex2i(458-ty,57);
glEnd();
glColor3ub(255,255,255);
glBegin(GL_LINES);
glVertex2i(493-ty,88);
glVertex2i(500-ty,57);
glEnd();
}
void night_time()
{
    glClear(GL_COLOR_BUFFER_BIT);
//Road
glColor3ub(300,300,300);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-400,-200);
glVertex2i(640,-200);
glVertex2i(640,10);
glVertex2i(-400,10);
glEnd();
//Sky
glColor3ub(0,0,0);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-400,10);
glVertex2i(640,10);
glVertex2i(640,480);
glVertex2i(-400,480);
glEnd();

//sun
float theta;
glBegin(GL_POLYGON);
glColor3ub(255,255,0);
for(int i=0;i<360;i++)
{
    theta=i*3.142/180;
    glVertex2f(380+53*cos(theta),400+53*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255,255,255);
float t;
for(int i=0;i<360;i++)
{
    t=i*3.142/180;
    glVertex2f(380+50*cos(t),400+50*sin(t));
}
glEnd();

// cloud
float ta;
glBegin(GL_POLYGON);
glColor3ub(100,100,100);
for(int i=0;i<180;i++)
{
    ta=i*3.142/180;
    glVertex2f(210+100*cos(ta),400+30*sin(ta));
}
glEnd();

float thh;
glBegin(GL_POLYGON);
glColor3ub(100,100,100);
for(int i=0;i<180;i++)
{
    thh=i*3.142/180;
    glVertex2f(-50+70*cos(thh),440+20*sin(thh));
}
glEnd();

float tha;
glBegin(GL_POLYGON);
glColor3ub(100,100,100);
for(int i=0;i<180;i++)
{
    tha=i*3.142/180;
    glVertex2f(30+80*cos(tha),380+15*sin(tha));
}
glEnd();

float thaa;
glBegin(GL_POLYGON);
glColor3ub(100,100,100);
for(int i=0;i<180;i++)
{
    thaa=i*3.142/180;
    glVertex2f(-350+50*cos(thaa),435+20*sin(thaa));
}
glEnd();
float that;
glBegin(GL_POLYGON);
glColor3ub(100,100,100);
for(int i=0;i<180;i++)
{
    that=i*3.142/180;
    glVertex2f(-300+50*cos(that),435+40*sin(that));
}
glEnd();
float thta;
glBegin(GL_POLYGON);
glColor3ub(100,100,100);
for(int i=0;i<180;i++)
{
    thta=i*3.142/180;
    glVertex2f(-250+50*cos(thta),435+20*sin(thta));
}
glEnd();
float thhaa;
glBegin(GL_POLYGON);
glColor3ub(100,100,100);
for(int i=0;i<180;i++)
{
    thhaa=i*3.142/180;
    glVertex2f(480+30*cos(thhaa),410+15*sin(thhaa));
}
glEnd();
float thhaaa;
glBegin(GL_POLYGON);
glColor3ub(100,100,100);
for(int i=0;i<180;i++)
{
    thhaaa=i*3.142/180;
    glVertex2f(530+30*cos(thhaaa),410+25*sin(thhaaa));
}
glEnd();
float tthhaaa;
glBegin(GL_POLYGON);
glColor3ub(100,100,100);
for(int i=0;i<180;i++)
{
    tthhaaa=i*3.142/180;
    glVertex2f(580+30*cos(tthhaaa),410+15*sin(tthhaaa));
}
glEnd();

// 1st House
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(520,10);
glVertex2i(540,10);
glVertex2i(540,200);
glVertex2i(520,150);
glEnd();

glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(340,10);
glVertex2i(360,10);
glVertex2i(360,150);
glVertex2i(340,200);
glEnd();

glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(520,150);
glVertex2i(540,200);
glVertex2i(340,200);
glVertex2i(360,150);
glEnd();
// 2nd House
glColor3ub(450,650,650);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(145,10);
glVertex2i(340,10);
glVertex2i(340,220);
glVertex2i(145,220);
glEnd();

glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(140,220);
glVertex2i(350,220);
glVertex2i(350,230);
glVertex2i(140,230);
glEnd();

glColor3ub(450,650,650);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(200,230);
glVertex2i(340,230);
glVertex2i(340,300);
glVertex2i(200,300);
glEnd();

glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(190,300);
glVertex2i(350,300);
glVertex2i(350,310);
glVertex2i(190,310);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(220,250);
glVertex2i(260,250);
glVertex2i(260,280);
glVertex2i(220,280);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(280,250);
glVertex2i(320,250);
glVertex2i(320,280);
glVertex2i(280,280);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(160,10);
glVertex2i(220,10);
glVertex2i(220,100);
glVertex2i(160,100);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(250,40);
glVertex2i(300,40);
glVertex2i(300,100);
glVertex2i(250,100);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(250,130);
glVertex2i(300,130);
glVertex2i(300,190);
glVertex2i(250,190);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(160,130);
glVertex2i(210,130);
glVertex2i(210,190);
glVertex2i(160,190);
glEnd();


//5th house
glColor3ub(700,300,600);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-280,10);
glVertex2i(-40,10);
glVertex2i(-40,400);
glVertex2i(-280,400);
glEnd();

glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-290,400);
glVertex2i(-30,400);
glVertex2i(-30,410);
glVertex2i(-290,410);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-260,330);
glVertex2i(-210,330);
glVertex2i(-210,370);
glVertex2i(-260,370);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-190,330);
glVertex2i(-140,330);
glVertex2i(-140,370);
glVertex2i(-190,370);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-120,330);
glVertex2i(-65,330);
glVertex2i(-65,370);
glVertex2i(-120,370);
glEnd();

//3rd House
glColor3ub(200,400,600);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-150,10);
glVertex2i(125,10);
glVertex2i(125,270);
glVertex2i(-150,270);
glEnd();

glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-160,270);
glVertex2i(130,270);
glVertex2i(130,280);
glVertex2i(-160,280);
glEnd();


glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-60,10);
glVertex2i(30,10);
glVertex2i(30,100);
glVertex2i(-60,100);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-120,30);
glVertex2i(-80,30);
glVertex2i(-80,100);
glVertex2i(-120,100);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(50,30);
glVertex2i(90,30);
glVertex2i(90,100);
glVertex2i(50,100);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(40,130);
glVertex2i(70,130);
glVertex2i(70,160);
glVertex2i(40,160);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(80,130);
glVertex2i(110,130);
glVertex2i(110,160);
glVertex2i(80,160);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-10,130);
glVertex2i(20,130);
glVertex2i(20,160);
glVertex2i(-10,160);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-50,130);
glVertex2i(-20,130);
glVertex2i(-20,160);
glVertex2i(-50,160);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-100,130);
glVertex2i(-70,130);
glVertex2i(-70,160);
glVertex2i(-100,160);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-140,130);
glVertex2i(-110,130);
glVertex2i(-110,160);
glVertex2i(-140,160);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(40,200);
glVertex2i(70,200);
glVertex2i(70,230);
glVertex2i(40,230);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(80,200);
glVertex2i(110,200);
glVertex2i(110,230);
glVertex2i(80,230);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-10,200);
glVertex2i(20,200);
glVertex2i(20,230);
glVertex2i(-10,230);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-50,200);
glVertex2i(-20,200);
glVertex2i(-20,230);
glVertex2i(-50,230);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-100,200);
glVertex2i(-70,200);
glVertex2i(-70,230);
glVertex2i(-100,230);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-140,200);
glVertex2i(-110,200);
glVertex2i(-110,230);
glVertex2i(-140,230);
glEnd();

//4th house

glColor3ub(655,455,655);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-400,10);
glVertex2i(-220,10);
glVertex2i(-220,310);
glVertex2i(-400,310);
glEnd();

glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-400,310);
glVertex2i(-210,310);
glVertex2i(-210,320);
glVertex2i(-400,320);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-380,10);
glVertex2i(-300,10);
glVertex2i(-300,130);
glVertex2i(-380,130);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-280,30);
glVertex2i(-240,30);
glVertex2i(-240,80);
glVertex2i(-280,80);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-280,100);
glVertex2i(-240,100);
glVertex2i(-240,150);
glVertex2i(-280,150);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-280,170);
glVertex2i(-240,170);
glVertex2i(-240,220);
glVertex2i(-280,220);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-280,240);
glVertex2i(-240,240);
glVertex2i(-240,290);
glVertex2i(-280,290);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-320,240);
glVertex2i(-360,240);
glVertex2i(-360,290);
glVertex2i(-320,290);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-320,170);
glVertex2i(-360,170);
glVertex2i(-360,220);
glVertex2i(-320,220);
glEnd();

//6th house
glColor3ub(650,550,550);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(540,10);
glVertex2i(640,10);
glVertex2i(640,380);
glVertex2i(540,380);
glEnd();

glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(530,380);
glVertex2i(640,380);
glVertex2i(640,390);
glVertex2i(530,390);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(580,10);
glVertex2i(640,10);
glVertex2i(640,110);
glVertex2i(580,110);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(580,130);
glVertex2i(630,130);
glVertex2i(630,170);
glVertex2i(580,170);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(580,190);
glVertex2i(630,190);
glVertex2i(630,230);
glVertex2i(580,230);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(580,250);
glVertex2i(630,250);
glVertex2i(630,290);
glVertex2i(580,290);
glEnd();

glColor3ub(200,200,200);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(580,310);
glVertex2i(630,310);
glVertex2i(630,350);
glVertex2i(580,350);
glEnd();


// right tree

glColor3ub(555,0,0);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(128,10);
glVertex2i(142,10);
glVertex2i(142,280);
glVertex2i(128,280);
glEnd();

glColor3ub(0,355,0);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(50,280);
glVertex2i(215,280);
glVertex2i(150,350);
glVertex2i(120,350);
glEnd();

glColor3ub(0,355,0);
glPointSize(10.0);
glBegin(GL_POLYGON);
glVertex2i(50,320);
glVertex2i(215,320);
glVertex2i(135,380);
glEnd();


//2nd Road
glColor3ub(0,355,0);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(640,-200);
glVertex2i(640,-400);
glVertex2i(-400,-400);
glVertex2i(-400,-200);
glEnd();
//Divider
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-370,-80);
glVertex2i(-250,-80);
glVertex2i(-250,-110);
glVertex2i(-370,-110);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-200,-80);
glVertex2i(-80,-80);
glVertex2i(-80,-110);
glVertex2i(-200,-110);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-30,-80);
glVertex2i(100,-80);
glVertex2i(100,-110);
glVertex2i(-30,-110);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(150,-80);
glVertex2i(280,-80);
glVertex2i(280,-110);
glVertex2i(150,-110);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(570,-80);
glVertex2i(640,-80);
glVertex2i(640,-110);
glVertex2i(570,-110);
glEnd();
//crossing
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(370,-85);
glVertex2i(500,-85);
glVertex2i(500,-105);
glVertex2i(370,-105);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(370,-190);
glVertex2i(500,-190);
glVertex2i(500,-170);
glVertex2i(370,-170);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(370,-147);
glVertex2i(500,-147);
glVertex2i(500,-127);
glVertex2i(370,-127);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(370,-65);
glVertex2i(500,-65);
glVertex2i(500,-45);
glVertex2i(370,-45);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(370,-25);
glVertex2i(500,-25);
glVertex2i(500,-5);
glVertex2i(370,-5);
glEnd();

//car1
glPushMatrix();
glTranslated(c1, -100,0);
glScalef(0.69f,0.69f,0);
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2d(70,50);
glVertex2d(40,80);
glVertex2d(100,100);
glVertex2d(130,150);
glVertex2d(230,150);
glVertex2d(300,100);
glVertex2d(400,80);
glVertex2d(370,50);
glVertex2d(70,50);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0,61,121);
glVertex2d(130,140);
glVertex2d(140,140);
glVertex2d(140,100);
glVertex2d(110,100);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,128,0);
glVertex2d(150,140);
glVertex2d(200,140);
glVertex2d(200,100);
glVertex2d(150,100);
glEnd();

glBegin(GL_POLYGON);
glColor3f(255,255,0);
glVertex2d(210,140);
glVertex2d(230,140);
glVertex2d(280,100);
glVertex2d(210,100);
glEnd();


glColor3ub(45,0,0);
drawCircle(30,320,50);
drawCircle(30,130,50);
glPopMatrix();



//car2
glPushMatrix();
glTranslated(c2, -100,0);
glScalef(0.69f,0.69f,0);
glBegin(GL_POLYGON);
glColor3ub(255,26,141);

glVertex2d(70,50);
glVertex2d(40,80);
glVertex2d(100,100);
glVertex2d(130,150);
glVertex2d(230,150);
glVertex2d(300,100);
glVertex2d(400,80);
glVertex2d(370,50);
glVertex2d(70,50);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,125,0);
glVertex2d(130,140);
glVertex2d(140,140);
glVertex2d(140,100);
glVertex2d(110,100);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0,0,128);
glVertex2d(150,140);
glVertex2d(200,140);
glVertex2d(200,100);
glVertex2d(150,100);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0,125,0);
glVertex2d(210,140);
glVertex2d(230,140);
glVertex2d(280,100);
glVertex2d(210,100);
glEnd();


glColor3ub(0,0,0);
drawCircle(30,320,50);
drawCircle(30,130,50);
glPopMatrix();



//car3
glPushMatrix();
glTranslated(-c3, -210,0);
glRotatef(180,0,1,0);
glScalef(0.69f,0.69f,0);
glBegin(GL_POLYGON);
glColor3ub(242,9,15);

glVertex2d(70,50);
glVertex2d(40,80);
glVertex2d(100,100);
glVertex2d(130,150);
glVertex2d(230,150);
glVertex2d(300,100);
glVertex2d(400,80);
glVertex2d(370,50);
glVertex2d(70,50);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,1,0);
glVertex2d(130,140);
glVertex2d(140,140);
glVertex2d(140,100);
glVertex2d(110,100);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2d(150,140);
glVertex2d(200,140);
glVertex2d(200,100);
glVertex2d(150,100);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,1,0);
glVertex2d(210,140);
glVertex2d(230,140);
glVertex2d(280,100);
glVertex2d(210,100);
glEnd();


glColor3ub(1,1,0);
drawCircle(30,320,50);
drawCircle(30,130,50);
glPopMatrix();


//car4
glPushMatrix();
glTranslated(-c4,-210,0);
glRotatef(180,0,1,0);
glScalef(0.69f,0.69f,0);
glBegin(GL_POLYGON);
glColor3ub(64,0,64);
glVertex2d(70,50);
glVertex2d(40,80);
glVertex2d(100,100);
glVertex2d(130,150);
glVertex2d(230,150);
glVertex2d(300,100);
glVertex2d(400,80);
glVertex2d(370,50);
glVertex2d(70,50);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,1,0);
glVertex2d(130,140);
glVertex2d(140,140);
glVertex2d(140,100);
glVertex2d(110,100);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2d(150,140);
glVertex2d(200,140);
glVertex2d(200,100);
glVertex2d(150,100);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,1,0);
glVertex2d(210,140);
glVertex2d(230,140);
glVertex2d(280,100);
glVertex2d(210,100);
glEnd();


glColor3ub(1,1,1);
drawCircle(30,320,50);
drawCircle(30,130,50);
glPopMatrix();
glEnd();

//park
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(340,-350);
glVertex2i(560,-290);
glVertex2i(560,-300);
glVertex2i(340,-360);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_TRIANGLES);
glVertex2i(430,-370);
glVertex2i(470,-370);
glVertex2i(450,-320);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_LINES);
glVertex2i(-400,-390);
glVertex2i(-380,-250);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_LINES);
glVertex2i(-360,-390);
glVertex2i(-380,-250);
glEnd();
glBegin(GL_LINES);
glVertex2i(-205,-390);
glVertex2i(-185,-250);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_LINES);
glVertex2i(-150,-390);
glVertex2i(-180,-250);
glEnd();

glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-380,-250);
glVertex2i(-180,-250);
glVertex2i(-180,-240);
glVertex2i(-380,-240);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_QUADS);
glVertex2i(-245,-360);
glVertex2i(-320,-360);
glVertex2i(-320,-340);
glVertex2i(-245,-340);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_LINES);
glVertex2i(-320,-340);
glVertex2i(-320,-250);
glEnd();
glColor3ub(255,255,255);
glPointSize(10.0);
glBegin(GL_LINES);
glVertex2i(-245,-340);
glVertex2i(-245,-250);
glEnd();

//park tree1
glColor3ub(555,0,0);
glBegin(GL_QUADS);
glVertex2i(-100,-380);
glVertex2i(-87,-380);
glVertex2i(-87,-210);
glVertex2i(-100,-210);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,455,0);
float a;
for(int i=0;i<360;i++)
{
    a=i*3.142/180;
    glVertex2f(-90+50*cos(a),-200+40*sin(a));
}

glEnd();

//park tree2
glColor3ub(555,0,0);
glBegin(GL_QUADS);
glVertex2i(15,-400);
glVertex2i(25,-400);
glVertex2i(25,-150);
glVertex2i(15,-150);
glEnd();
glColor3ub(0,455,0);
glPointSize(10.0);
glBegin(GL_POLYGON);
glVertex2i(-80,-160);
glVertex2i(120,-160);
glVertex2i(20,-120);
glEnd();
glColor3ub(0,455,0);
glPointSize(10.0);
glBegin(GL_POLYGON);
glVertex2i(-100,-140);
glVertex2i(140,-140);
glVertex2i(20,-100);
glEnd();
//park tree 3

glColor3ub(555,0,0);
glBegin(GL_QUADS);
glVertex2i(230,-390);
glVertex2i(240,-390);
glVertex2i(240,-170);
glVertex2i(230,-170);
glEnd();
glColor3ub(0,455,0);
glPointSize(10.0);
glBegin(GL_POLYGON);
glVertex2i(110,-180);
glVertex2i(350,-180);
glVertex2i(235,-120);
glEnd();
glColor3ub(0,455,0);
glPointSize(10.0);
glBegin(GL_POLYGON);
glVertex2i(110,-145);
glVertex2i(350,-145);
glVertex2i(235,-90);
glEnd();

}


void myDisplay()
{
if(day)
    {
        day_time();
    }
     if(!day)
    {
        night_time();
    }
glFlush();
}
void myInit()
{
    glClearColor(1.0,1.0,1.0,0.0);
    glColor3f(0.0f,0.0f,0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-400,640.0,-400,480.0);
}

int main(int argc, char** argv)
{

    cout << "Press a : To Running Black Car" << endl;
    cout << "Press b : To Stop Black Car" << endl;
    cout << "Press c : To Running Pink Car" << endl;
    cout << "Press d : To Stop Pink Car " << endl;
    cout << "Press e : To Running Red Car" << endl;
    cout << "Press f : To Stop Pink Car" << endl;
    cout << "Press g : To Running Violet Car" << endl;
    cout << "Press h : To Stop Violet Car " << endl;
    cout << "Press r : For Day Mode " << endl;
    cout << "Press t : For Night Mode " << endl;
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(100,150);
    glutCreateWindow("City Residential Area View");
    glutDisplayFunc(myDisplay);
    myInit();
    glutTimerFunc(1000,update,0);
    glutKeyboardFunc(handleKeypress);
    glutMainLoop();

}
