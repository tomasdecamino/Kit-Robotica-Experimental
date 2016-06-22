/* @author: Tomas de Camino Beck
   @version: 1.0 Jan 2016
   www.inventoria.org
   Hecho en Costa Rica
*/

import processing.serial.*;
Serial port;

//load button images
PImage img;
PImage img2;
PImage backimg;
PImage eraseimg;

//State variable
boolean newButton=false;
//size of the buttons
int s=100;
//Array that contains a list of Button objects (instructions)
ArrayList<button> instruction = new ArrayList<button>();

void setup() {
  //load images
  img = loadImage("arrow.png");
  img2 = loadImage("play.png");
  backimg = loadImage("paper.jpg");
  eraseimg = loadImage("erase.png");   
  size(600, 600);
  imageMode(CENTER);
  textSize(26);
  textAlign(CENTER);
  //Serial to bluetooth
  println(Serial.list());
  port = new Serial(this, "/dev/rfcomm1", 9600);
}

void draw() {
  // background(255);
  image(backimg, width/2, height/2);
  drawBaseButtons();
  //uses state variable to display drag button
  if (newButton) {
    button b=instruction.get(instruction.size()-1);
    b.display(mouseX, mouseY);
  }
  //Draws the buttons (instructions) in the array
  for (int i=0; i<instruction.size(); i++) {
    button b=instruction.get(i);
    strokeWeight(6);
    stroke(0, 100);
    noFill();
    b.display();
    text(i+1, b.pos.x-5, b.pos.y+10);
  }
}

//arranging the display
void drawBaseButtons() {
  fill(240, 150);
  rect(0, 0, width-1, 124);
  //button left
  pushMatrix();
  translate(60, 60);
  rotate(PI);
  image(img, 0, 0, s, s);
  popMatrix();
  //button rigth
  pushMatrix();
  translate(s+70, 60);
  rotate(0);
  image(img, 0, 0, s, s);
  popMatrix();
  //button UP
  pushMatrix();
  translate(2*s+70, 60);
  rotate(3*HALF_PI);
  image(img, 0, 0, s, s);
  popMatrix();
  //button Down
  pushMatrix();
  translate(3*s+70, 60);
  rotate(HALF_PI);
  image(img, 0, 0, s, s);
  popMatrix();
  //Play button   
  image(img2, width-60, 60, 100, 100);
  image(eraseimg, width-60, height-60, 100, 100);
}

void mousePressed() 
//Chacks if the button its being dragged or placed in new
//position. Check for button clicks
{
  if (!newButton) {
    if (mouseY<124) {
      if (mouseX<115) {
        button b =new button(2, img);
        instruction.add(b);
        newButton=true;
      }
      if (mouseX>115 && mouseX<221) {
        button b =new button(0, img);
        instruction.add(b);
        newButton=true;
      }
      if (mouseX>221 && mouseX<321) {
        button b =new button(1, img);
        instruction.add(b);
        newButton=true;
      }
      if (mouseX>321 && mouseX<421) {
        button b =new button(3, img);
        instruction.add(b);
        newButton=true;
      } 
      if (mouseX>width-120) {
        executeIntructions();
      }
    }
  } else {
    button b=instruction.get(instruction.size()-1);
    println(b);
    b.pos.set(mouseX, mouseY, 0);
    newButton=false;
    if (instruction.size()==1) {
      b.posAnt.set(b.pos);
    } else {
      button bAnt=instruction.get(instruction.size()-2);
      b.posAnt.set(bAnt.pos);
    }
  }
  if (mouseX>width-120&& mouseY>height-120) {
    if (instruction.size()>0) {
      instruction.remove(instruction.size()-1);
    }
  }
}

void executeIntructions() {
//creates commands and sends them to serial
  String cmd="";
  for (int i=0; i<instruction.size(); i++) {
    button b=instruction.get(i);
    cmd+=nf(b.type);
    
  }
  cmd+="/n";
  println(cmd);
  port.write(cmd);
}