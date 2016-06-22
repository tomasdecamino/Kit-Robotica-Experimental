/* @author: Tomas de Camino Beck
   @version: 1.0 Jan 2016
   www.inventoria.org
   Hecho en Costa Rica
*/

class button{
 PImage img;//img for display pouposes
 int type =0;//defines the type of commad
 int s =100; //size
 PVector pos = new PVector(-100,-100,0);//display position
 PVector posAnt=new PVector(0,0,0);//display position of previous

 button(int t,PImage i){
   type = t;
   img = i;
 }
  
 //display in position x,y
 void display(int x, int y){
   pushMatrix();
   translate(x,y);
   rotate(type*-HALF_PI);
   image(img,0,0,s,s);
   popMatrix();
 }
 
 //display based on object position and drwa curve with previous
 void display(){
   curve(pos.x+200,pos.y-200,pos.x,pos.y,posAnt.x,posAnt.y,posAnt.x-200,posAnt.y-200);
   pushMatrix();
   translate(pos.x,pos.y);
   rotate(type*-HALF_PI);
   image(img,0,0,s,s);
   popMatrix();
 } 
 
  
}