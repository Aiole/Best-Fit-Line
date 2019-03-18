

#include "T_tools.c"

int pic()
{
  int i=0,ch = 0, temptemp;
  double m[2];
  double n[2];
  double xi[100];
  double yi[100];
  char str[100];
  double x,y,xhi,xlo,yhi,ylo,dif,hi,lo,slope,b;
  double deg,estdeg,xmean,ymean,ysum,xsum,xdif,ydif,numsumt,densumt
 ,numsum,densum;
  G_rgb(0,0,0) ; G_clear() ;
  G_rgb(1,0,0);
  sprintf(str,"(Tx,Ty) = (%.2lf, %.2lf)    Tr = %.2lf",Tx,Ty,Tr) ;
  G_draw_string(str, Px - 200, Py + Pr - 25) ;
  G_rgb(0.5,0.5,0.5) ;
  T_grid(1.0);
  G_rgb(0.2,0.85,0) ;
  G_fill_rectangle(0, 0, 50, 50);
  G_rgb(0,0.3,1) ;
  T_line(Tx-Tr,0,  Tx+Tr,0) ; // x-axis
  T_line(0,Ty-Tr,  0,Ty+Tr) ; // y-axis
  G_rgb(1,0.3,0.5);
  G_draw_string("Graph", 0,20) ;
  x = Tx - Tr ;
  /*
  while (x <= Tx + Tr) {
    G_rgb(0,.3,1) ;
    y=sin(x);
    x = x + 0.001*Tr ;
    T_point(x,y) ;
    G_rgb(1,1,1) ;
    y=pow(2,x);
    x = x + 0.001*Tr ;
    T_point(x,y) ;
  }



 meanx=0;
  meany=0;
  m=1;
  i=100;
  scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
  while(i>0){
  xy1dist=pow((m*(x1-meanx)+meany-y1),2);
  xy2dist=pow((m*(x2-meanx)+meany-y2),2);
  xy3dist=pow((m*(x3-meanx)+meany-y3),2);
  // derivative of xy1dist, xy2dist,xy3dist
  totalxy= xy1dist + xy2dist + xy3dist;
  printf("total= %lf \n", totalxy);
  i--;
  G_wait_click(p[1]);
  }

 
 a=loge(x);
 b=loge(w);
 e^a=x
 e^b=w
 1/x
(loge(w)-loge(x))/w-x


  */

  G_rgb(1,1,0) ;
 // T_point(Tx,Ty) ; // plot the theoretical center 
                 // (which aligns with the pysical center)
 
  

   G_rgb(0,1,0.5);
   i = 0;
   T_wait_click(m,n);
   while(i<999){
     
   if (n[0]<-2.5 && n[1]<-2.5){
     xmean = xsum/i;
     ymean = ysum/i;
      i--;
     while(i>=0){
       numsum += ((xi[i] - xmean) * (yi[i] - ymean));
       densum += ((xi[i] - xmean) * (xi[i] - xmean));
       i--;
     }
     
     slope = numsum/densum;
     b = ymean - (slope*xmean);
     
    while (x <= Tx + Tr) {
    T_point(x,y) ;
    G_rgb(1,1,1) ;
    y=(slope*x)+b;
    x = x + 0.001*Tr ;
    T_point(x,y) ;
  }
    
    break;
   }
   
   T_point(n[0],n[1]);
   xi[i]=n[0];
   yi[i]=n[1];
   printf("x: %lf\n", n[0]);
   printf("y: %lf\n", n[1]);
   printf("i: %d\n", i);
   xsum+=xi[i];
   ysum+=yi[i];
   i++;
   T_wait_click(m,n);

 }



  
}




int main()
{
  double m[2];
  double n[2];
  double n1, n2;
  Px = 300 ;  Py =300 ;  Pr = 300 ;
  Tx = 0 ;  Ty = 0 ;  Tr = 3 ;

  double screen_size = 2*Pr + 1 ;
  G_init_graphics(screen_size, screen_size) ;
  int k ;
  while (0 == 0) {
    pic() ;
    k = G_wait_key() ;
    

    if (k == 'q') {
      break ;
    } else if (k == 65361) {
      // left arrow
      Tx -= 0.01*Tr ;
    } else if (k == 65362) {
      // up arrow
      Ty += 0.01*Tr ;
    } else if (k == 65363) {
      // right arrow
      Tx += 0.01*Tr ;
    } else if (k == 65364) {
      // down arrow
       Ty -= 0.01*Tr ;
    } else if (k == 'i') {
      Tr *= 0.98 ;
    } else if (k == 'o') {
      Tr /= 0.98 ;
    }

  }


}
