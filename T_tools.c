/*
  Physical    device with center(Px,Py) and "radius", Pr
  Theoretical device with center(Tx,Ty) and "radius", Tr
  (px,py) on the pysical device corresponds to (tx,ty) 
  on the theoretical.  The relationships between the two 
  devices :
  (px - Px)/Pr = (tx - Tx)/Tr
  (py - Py)/Pr = (ty - Ty)/Tr
*/

#include <FPT.h>


int g;
double Px,Py,Pr ;
double Tx,Ty,Tr;
double Point_size = 1 ;

void T_point(double tx, double ty)
{
  double px,py ;
  px=(((tx-Tx)/Tr)*(Pr))+Px;
  py=(((ty-Ty)/Tr)*(Pr))+Py;
  //  printf("(%lf, %lf) ",px,py);
  G_point(px,py);
}


void T_line(double txs, double tys, double txe, double tye)
{
  double pxs,pys,pxe,pye ;
  pxs=(((txs-Tx)/Tr)*(Pr))+Px;
  pys=(((tys-Ty)/Tr)*(Pr))+Py;
  pxe=(((txe-Tx)/Tr)*(Pr))+Px;
  pye=(((tye-Ty)/Tr)*(Pr))+Py;
  G_line(pxs, pys, pxe, pye);

}



void T_circle(double txcen, double tycen, double tradius)
{
  double pxcen,pycen,pradius ;
  pxcen=(((txcen-Tx)/Tr)*(Pr))+Px;
  pycen=(((tycen-Ty)/Tr)*(Pr))+Py;
  pradius=tradius*(Pr/Tr);
  G_circle(pxcen, pycen, pradius);
}


void T_wait_click(double p[2], double t[2])
{
 G_wait_click(p);
 t[0]=(((p[0]-Px)/Pr)*(Tr))+Tx;
 t[1]=(((p[1]-Py)/Pr)*(Tr))+Ty;
}



void T_grid(double delta)
{

       
 
}


