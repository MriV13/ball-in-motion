#include <allegro.h>
#include <fstream>
#define ilelvli 50


using namespace std;
volatile long speed = 0;
void increment_speed()
{
    speed++;
}
END_OF_FUNCTION( increment_speed );
LOCK_VARIABLE( speed );
LOCK_FUNCTION( increment_speed );

int kierunek=0;

DATAFILE* data;




bool blokPP(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x-1,y+10)==makecol(128,64,128))return false;
if(getpixel(bufor,x-1,y+5 )==makecol(128,64,128))return false;
if(getpixel(bufor,x-1,y+15)==makecol(128,64,128))return false;
else return true;
}

bool blokPP2(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+21,y+10)==makecol(128,64,128))return false;
if(getpixel(bufor,x+21,y+5 )==makecol(128,64,128))return false;
if(getpixel(bufor,x+21,y+15)==makecol(128,64,128))return false;
else return true;
}

bool blokPP3(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+10,y-1)==makecol(128,64,128))return false;
if(getpixel(bufor,x+5 ,y-1)==makecol(128,64,128))return false;
if(getpixel(bufor,x+15,y-1)==makecol(128,64,128))return false;
else return true;
}


bool blokPP4(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+10,y+21)==makecol(128,64,128))return false;
if(getpixel(bufor,x+5 ,y+21)==makecol(128,64,128))return false;
if(getpixel(bufor,x+15,y+21)==makecol(128,64,128))return false;
else return true;
}

bool blokPP11(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x-1,y+10)==makecol(128,60,128))return false;
if(getpixel(bufor,x-1,y+5 )==makecol(128,60,128))return false;
if(getpixel(bufor,x-1,y+15)==makecol(128,60,128))return false;
else return true;
}

bool blokPP22(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+21,y+10)==makecol(128,60,128))return false;
if(getpixel(bufor,x+21,y+5 )==makecol(128,60,128))return false;
if(getpixel(bufor,x+21,y+15)==makecol(128,60,128))return false;
else return true;
}

bool blokPP33(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+10,y-1)==makecol(128,60,128))return false;
if(getpixel(bufor,x+5 ,y-1)==makecol(128,60,128))return false;
if(getpixel(bufor,x+15,y-1)==makecol(128,60,128))return false;
else return true;
}


bool blokPP44(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+10,y+21)==makecol(128,60,128))return false;
if(getpixel(bufor,x+5 ,y+21)==makecol(128,60,128))return false;
if(getpixel(bufor,x+15,y+21)==makecol(128,60,128))return false;
else return true;
}

bool blokPP111(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x-1,y+10)==makecol(128,56,128))return false;
if(getpixel(bufor,x-1,y+5 )==makecol(128,56,128))return false;
if(getpixel(bufor,x-1,y+15)==makecol(128,56,128))return false;
else return true;
}

bool blokPP222(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+21,y+10)==makecol(128,56,128))return false;
if(getpixel(bufor,x+21,y+5 )==makecol(128,56,128))return false;
if(getpixel(bufor,x+21,y+15)==makecol(128,56,128))return false;
else return true;
}

bool blokPP333(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+10,y-1)==makecol(128,56,128))return false;
if(getpixel(bufor,x+5 ,y-1)==makecol(128,56,128))return false;
if(getpixel(bufor,x+15,y-1)==makecol(128,56,128))return false;
else return true;
}


bool blokPP444(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+10,y+21)==makecol(128,56,128))return false;
if(getpixel(bufor,x+5 ,y+21)==makecol(128,56,128))return false;
if(getpixel(bufor,x+15,y+21)==makecol(128,56,128))return false;
else return true;
}

bool blokPP1111(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x-1,y+10)==makecol(128,52,128))return false;
if(getpixel(bufor,x-1,y+5 )==makecol(128,52,128))return false;
if(getpixel(bufor,x-1,y+15)==makecol(128,52,128))return false;
else return true;
}

bool blokPP2222(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+21,y+10)==makecol(128,52,128))return false;
if(getpixel(bufor,x+21,y+5 )==makecol(128,52,128))return false;
if(getpixel(bufor,x+21,y+15)==makecol(128,52,128))return false;
else return true;
}

bool blokPP3333(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+10,y-1)==makecol(128,52,128))return false;
if(getpixel(bufor,x+5 ,y-1)==makecol(128,52,128))return false;
if(getpixel(bufor,x+15,y-1)==makecol(128,52,128))return false;
else return true;
}


bool blokPP4444(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+10,y+21)==makecol(128,52,128))return false;
if(getpixel(bufor,x+5 ,y+21)==makecol(128,52,128))return false;
if(getpixel(bufor,x+15,y+21)==makecol(128,52,128))return false;
else return true;
}
//************************************************************************************************************************************************BLOK2





bool mozna_w_lewo2(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x-1,y+10)==makecol(255,128,64))return false;
if(getpixel(bufor,x-1,y+5 )==makecol(255,128,64))return false;
if(getpixel(bufor,x-1,y+15)==makecol(255,128,64))return false;
else return true;
}

bool mozna_w_prawo2(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+21,y+10)==makecol(255,128,64))return false;
if(getpixel(bufor,x+21,y+5 )==makecol(255,128,64))return false;
if(getpixel(bufor,x+21,y+15)==makecol(255,128,64))return false;
else return true;
}

bool mozna_w_gore2(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+10,y-1)==makecol(255,128,64))return false;
if(getpixel(bufor,x+5 ,y-1)==makecol(255,128,64))return false;
if(getpixel(bufor,x+15,y-1)==makecol(255,128,64))return false;
else return true;
}

bool mozna_w_dol2(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+10,y+21)==makecol(255,128,64))return false;
if(getpixel(bufor,x+5 ,y+21)==makecol(255,128,64))return false;
if(getpixel(bufor,x+15,y+21)==makecol(255,128,64))return false;
else return true;
}










//************************************************************************************************************************************************BLOK


bool mozna_w_lewo(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x-1,y+10)==makecol(128,128,128))return false;
if(getpixel(bufor,x-1,y+5 )==makecol(128,128,128))return false;
if(getpixel(bufor,x-1,y+15)==makecol(128,128,128))return false;
else return true;
}

bool mozna_w_prawo(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+21,y+10)==makecol(128,128,128))return false;
if(getpixel(bufor,x+21,y+5 )==makecol(128,128,128))return false;
if(getpixel(bufor,x+21,y+15)==makecol(128,128,128))return false;
else return true;
}

bool mozna_w_gore(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+10,y-1)==makecol(128,128,128))return false;
if(getpixel(bufor,x+5 ,y-1)==makecol(128,128,128))return false;
if(getpixel(bufor,x+15,y-1)==makecol(128,128,128))return false;
else return true;
}

bool mozna_w_dol(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+10,y+21)==makecol(128,128,128))return false;
if(getpixel(bufor,x+5 ,y+21)==makecol(128,128,128))return false;
if(getpixel(bufor,x+15,y+21)==makecol(128,128,128))return false;
else return true;
}




//************************************************************************************************************************************************odbitki






bool odb1(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x-1,y+10)==makecol(0,0,255))return false;
if(getpixel(bufor,x-1,y+5 )==makecol(0,0,255))return false;
if(getpixel(bufor,x-1,y+15)==makecol(0,0,255))return false;
else return true;
}

bool odb2(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+10,y-2)==makecol(0,0,254))return false;
if(getpixel(bufor,x+5,y-2)==makecol(0,0,254))return false;
if(getpixel(bufor,x+15,y-2)==makecol(0,0,254))return false;
else return true;
}

bool odb3(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+20,y-2)==makecol(0,0,253))return false;
if(getpixel(bufor,x+10 ,y-2)==makecol(0,0,253))return false;
if(getpixel(bufor,x+15,y-2)==makecol(0,0,253))return false;
else return true;
}

bool odb4(int x, int y, BITMAP* bufor)
{
if(getpixel(bufor,x+20,y+10)==makecol(0,0,252))return false;
if(getpixel(bufor,x ,y+10)==makecol(0,0,252))return false;
if(getpixel(bufor,x+10,y+10)==makecol(0,0,252))return false;
else return true;
}




int gracz_x = 100, gracz_y = 100;

int ktorylvl=0;

int check_lvl(int jaki)
{
	int level=0;
	std::ifstream plik;
	plik.open("data/data.txt", std::ios::out | std::ios::app);
	if(plik.good()==true)plik>>level;
	plik.close();
	return level;
}

void menu()
{
	BITMAP*bufor;
	BITMAP*select=(BITMAP*) data[14].dat;
	bufor = create_bitmap( 640, 480 );
	int selectx=0,selecty=0;
	int lmt=0;
	while( !key[ KEY_ESC ] )
    {
       while( speed > 0 )
    {
        if(key[ KEY_LEFT  ] && selectx!=0  && lmt>75){selectx--; lmt=0;
        }
        if(key[ KEY_RIGHT ] && selectx!=9 && lmt>75){selectx++; lmt=0;
        }
        if(key[ KEY_UP    ] && selecty!=0  && lmt>75){selecty--; lmt=0;
        }
        if(key[ KEY_DOWN  ] && selecty!=4 && lmt>75){selecty++; lmt=0;
        }
        if(key[ KEY_ENTER ] && lmt>75){clear_to_color( bufor, makecol( 255, 255, 0 ) );lmt=0; return;
        }

        speed--;
        lmt++;
	}
	clear_to_color( bufor, makecol( 155, 185, 160 ) );
	 int numer=1;
	
	for(int i=1;i<=5;i++)for(int j=1;j<=10;j++){if(numer<=check_lvl(ktorylvl))textprintf_ex(bufor, font, 10+j*50, 10+i*40, makecol(50, 255, 50), -1, "%d", numer );
	else textprintf_ex(bufor, font, 10+j*50, 10+i*40, makecol(255, 100, 200), -1, "%d", numer );
	numer++;
	}
	
	masked_blit( select, bufor, 0, 0, 53+(selectx)*50, 43+(selecty)*40, 30, 30 );
	
	ktorylvl=(selectx+1)+(selecty*10);
	
	textprintf_ex(bufor, font, 10, 10, makecol(255, 100, 200), -1, "%d", check_lvl(ktorylvl));

    blit( bufor, screen, 0, 0, 0, 0, 640, 480 );
    }
}

int blokx[5000];
int bloky[5000];
int xblok1x[5000];
int xblok1y[5000];
int xblok2x[5000];
int xblok2y[5000];
int xblok3x[5000];
int xblok3y[5000];
int xblok4x[5000];
int xblok4y[5000];
int blok31x[5000];
int blok31y[5000];
int blok32x[5000];
int blok32y[5000];
int blok33x[5000];
int blok33y[5000];
int blok34x[5000];
int blok34y[5000];
int dzix[1000];
int dziy[5000];
int metx[5000];
int mety[5000];
int blok2x[5000];
int blok2y[5000];
int blokPx[5000];
int blokPy[5000];
int blokP2x[5000];
int blokP2y[5000];
int blokP3x[5000];
int blokP3y[5000];
int blokP4x[5000];
int blokP4y[5000];
int kier=0;

void wczytaj_lvl()
{
	BITMAP*level=NULL;
	DATAFILE*data2=NULL;
	


	 for(int i=0;i<=49;i++){blokPx[i]=-20;blokPy[i]-=20;}
	 for(int i=0;i<=49;i++){xblok1x[i]=-20;xblok1y[i]-=20;}
	 for(int i=0;i<=49;i++){xblok2x[i]=-20;xblok2y[i]-=20;}
	 for(int i=0;i<=49;i++){xblok3x[i]=-20;xblok3y[i]-=20;}
	 for(int i=0;i<=49;i++){xblok4x[i]=-20;xblok4y[i]-=20;}
	 for(int i=0;i<=49;i++){blokP2x[i]=-20;blokP2y[i]-=20;}
	 for(int i=0;i<=49;i++){blokP3x[i]=-20;blokP3y[i]-=20;}
	 for(int i=0;i<=49;i++){blokP4x[i]=-20;blokP4y[i]-=20;}
    for(int i=0;i<=49;i++){blokx[i]=-20;bloky[i]-=20;}
     for(int i=0;i<=49;i++){blok31x[i]=-20;blok31y[i]-=20;}
      for(int i=0;i<=49;i++){blok32x[i]=-20;blok32y[i]-=20;}
       for(int i=0;i<=49;i++){blok33x[i]=-20;blok33y[i]-=20;}
        for(int i=0;i<=49;i++){blok34x[i]=-20;blok34y[i]-=20;}
     for(int i=0;i<=49;i++){blok2x[i]=-20;blok2y[i]-=20;}
    for(int i=0;i<=49;i++){metx[i]=-20;mety[i]-=20;}
    if(ktorylvl-1<=ilelvli)data2=load_datafile("data/data2.dat");
	if(ktorylvl-1<=ilelvli)level=(BITMAP*) data2[ktorylvl-1].dat;
	kierunek=0;



for(int i=0;i<=31;i++)for(int j=0;j<=23;j++){
	if(getpixel(level,i,j)==makecol(128,128,128)){blokx[i+j]=i*20; bloky[i+j]=j*20;}
	
	if(getpixel(level,i,j)==makecol(255,255,0)){xblok1x[i+j]=i*20; xblok1y[i+j]=j*20;}
	if(getpixel(level,i,j)==makecol(255,250,0)){xblok2x[i+j]=i*20; xblok2y[i+j]=j*20;}
	if(getpixel(level,i,j)==makecol(255,245,0)){xblok3x[i+j]=i*20; xblok3y[i+j]=j*20;}
	if(getpixel(level,i,j)==makecol(255,240,0)){xblok4x[i+j]=i*20; xblok4y[i+j]=j*20;}
	

	
		if(getpixel(level,i,j)==makecol(128,64,128)){blokPx[i+j]=i*20; blokPy[i+j]=j*20;}
			if(getpixel(level,i,j)==makecol(128,60,128)){blokP2x[i+j]=i*20; blokP2y[i+j]=j*20;}
				if(getpixel(level,i,j)==makecol(128,56,128)){blokP3x[i+j]=i*20; blokP3y[i+j]=j*20;}
					if(getpixel(level,i,j)==makecol(128,52,128)){blokP4x[i+j]=i*20; blokP4y[i+j]=j*20;}
	
	
	            if(getpixel(level,i,j)==makecol(0,0,255)){blok31x[i+j]=i*20; blok31y[i+j]=j*20;}
             	if(getpixel(level,i,j)==makecol(0,0,254)){blok32x[i+j]=i*20; blok32y[i+j]=j*20;}
              	if(getpixel(level,i,j)==makecol(0,0,253)){blok33x[i+j]=i*20; blok33y[i+j]=j*20;}
              	if(getpixel(level,i,j)==makecol(0,0,252)){blok34x[i+j]=i*20; blok34y[i+j]=j*20;}
	if(getpixel(level,i,j)==makecol(0  ,0  ,0  )){dzix [i+j]=i*20; dziy [i+j]=j*20;}
	if(getpixel(level,i,j)==makecol(255,0  ,0  )){metx [i+j]=i*20; mety [i+j]=j*20;}
	if(getpixel(level,i,j)==makecol(0  ,255,0  )){gracz_x   =i*20; gracz_y   =j*20;}
    if(getpixel(level,i,j)==makecol(255,128,64)){blok2x[i+j]=i*20; blok2y[i+j]=j*20;}
}
}




bool przegrana(BITMAP*bufor,int x, int y)
{
if(getpixel(bufor,x+10,y+10)==makecol(0,0,0))return true;
if(getpixel(bufor,x+10,y+5 )==makecol(0,0,0))return true;
if(getpixel(bufor,x+10,y+15)==makecol(0,0,0))return true;
	else return false;
	
if(getpixel(bufor,x-10,y-10)==makecol(0,0,0))return true;
if(getpixel(bufor,x-10,y-5 )==makecol(0,0,0))return true;
if(getpixel(bufor,x-10,y-15)==makecol(0,0,0))return true;
	else return false;
	
if(getpixel(bufor,x+10,y+10)==makecol(0,0,0))return true;
if(getpixel(bufor,x+5 ,y+10)==makecol(0,0,0))return true;
if(getpixel(bufor,x+15,y+10)==makecol(0,0,0))return true;
	else return false;
	
if(getpixel(bufor,x+10,y-10)==makecol(0,0,0))return true;
if(getpixel(bufor,x+5 ,y-10)==makecol(0,0,0))return true;
if(getpixel(bufor,x+15,y-10)==makecol(0,0,0))return true;
	else return false;
	

	
}

BITMAP * gameover;

void wyswietl_GO(BITMAP*bufor)
{
    while(!key[ KEY_ENTER])
		{
            masked_blit( gameover, bufor, 0, 0, 0, 0, gameover->w, gameover->h );
            blit( bufor, screen, 0, 0, 0, 0, 640, 480 );
		}
		
 
wczytaj_lvl();
		return;
		
		
}

bool wygrana
(BITMAP*bufor,int x, int y)
{
	if(getpixel(bufor ,x+10,y+10)!=makecol(255,0,0))return false;
	else return true;
	

}
BITMAP * wygrana0;

void wyswietl_WY(BITMAP*bufor)
{
    while(!key[ KEY_ENTER])
		{
            masked_blit( wygrana0, bufor, 0, 0, 0, 0, wygrana0->w, wygrana0->h );
            blit( bufor, screen, 0, 0, 0, 0, 640, 480 );

		}
		

		return;
}

void zapisz_lvl(int jaki)
{
std::ofstream plik;
plik.open("animation/data.txt", std::ios::trunc | std::ios::in);
plik<<jaki;
plik.close();
}


int main() 
{	
	allegro_init();
	install_keyboard();
	set_color_depth( 32 );
    set_gfx_mode(GFX_AUTODETECT_FULLSCREEN, 640, 480, 0, 0 );
    clear_to_color( screen, makecol( 0, 155, 255 ) );
    install_timer();
     install_int_ex( increment_speed, BPS_TO_TIMER( 200 ) );
     
     data=load_datafile("data/data.dat");


    menu();
    
    
    
    BITMAP*blok;
   
     BITMAP*blok31;
     BITMAP*blok32;
     BITMAP*blok33;
     BITMAP*blok34;
     BITMAP*dziura;
     BITMAP*xblok1;
     BITMAP*xblok2;
     BITMAP*xblok3;
     BITMAP*xblok4;
	 BITMAP*meta;
	 BITMAP*blokP;
	 BITMAP*blokP2;
	 BITMAP*blokP3;
	 BITMAP*blokP4;
	  BITMAP*blok2;
	 
BITMAP * z_tlo;
	 

    
    wczytaj_lvl();
    
    blok=(BITMAP*) data[0].dat;
   
     meta=(BITMAP*) data[13].dat;
    dziura=(BITMAP*) data[10].dat;
     blok2=(BITMAP*) data[1].dat;
      blokP=(BITMAP*) data[6].dat;
      blokP2=(BITMAP*) data[7].dat;
      blokP3=(BITMAP*) data[8].dat;
      blokP4=(BITMAP*) data[9].dat;
     
     blok31=(BITMAP*) data[2].dat;
      blok32=(BITMAP*) data[3].dat;
       blok33=(BITMAP*) data[4].dat;
        blok34=(BITMAP*) data[5].dat;
         xblok1=(BITMAP*) data[16].dat;
         xblok2=(BITMAP*) data[17].dat;
         xblok3=(BITMAP*) data[18].dat;
         xblok4=(BITMAP*) data[19].dat;
       
        z_tlo=(BITMAP*) data[20].dat;
        


    BITMAP * gracz = NULL;
    BITMAP * bufor = NULL;
    BITMAP * meta2  = NULL;
    BITMAP * dziury= NULL;
     BITMAP * blokdziuby1= NULL;
      BITMAP * blokdziuby2= NULL;
       BITMAP * blokdziuby3= NULL;
        BITMAP * blokdziuby4= NULL;
    
 

   

    
	gameover=(BITMAP*) data[11].dat;
	wygrana0=(BITMAP*) data[15].dat;
    gracz = (BITMAP*) data[12].dat;
    bufor = create_bitmap( 640, 480 );
     meta2 = create_bitmap( 640, 480 );
    dziury = create_bitmap( 640, 480 );
   blokdziuby1 = create_bitmap( 640, 480 );
   blokdziuby2 = create_bitmap( 640, 480 );
   blokdziuby3 = create_bitmap( 640, 480 );
   blokdziuby4 = create_bitmap( 640, 480 );
   
     
     
 
   
    
    clear_to_color( bufor , makecol( 0, 255, 255 ) );

    while( !key[ KEY_ESC ] )
    {
       while( speed > 0 )
    {
		if(!przegrana(dziury,gracz_x,gracz_y))
		{
			if(!przegrana(blokdziuby1,gracz_x,gracz_y))
			{

			if(!przegrana(blokdziuby2,gracz_x,gracz_y))
			{

			if(!przegrana(blokdziuby3,gracz_x,gracz_y))
			{

			if(!przegrana(blokdziuby4,gracz_x,gracz_y))
			{

      if( key[ KEY_A ] && kierunek==0 && mozna_w_lewo(gracz_x,gracz_y,bufor) && mozna_w_lewo2(gracz_x,gracz_y,bufor)  ) {kierunek=1;
      }

      if( key[ KEY_D ] && kierunek==0 && mozna_w_prawo(gracz_x,gracz_y,bufor) && mozna_w_prawo2 (gracz_x,gracz_y,bufor)) {kierunek=3;
      }

      if( key[ KEY_W ] && kierunek==0 && mozna_w_gore(gracz_x,gracz_y,bufor) && mozna_w_gore2(gracz_x,gracz_y,bufor)) {kierunek=2;
      }

      if( key[ KEY_S ] && kierunek==0 && mozna_w_dol(gracz_x,gracz_y,bufor) && mozna_w_dol2(gracz_x,gracz_y,bufor)) {kierunek=4;
      }
	}
}
}
}
}


      
      if( key[KEY_F1 ]){menu(); wczytaj_lvl();
      }
      
      if( key[ KEY_R ] ) wczytaj_lvl();
      
   
      
      if(kierunek==1 && mozna_w_lewo(gracz_x,gracz_y,bufor) )gracz_x--;
      if(kierunek==3 && mozna_w_prawo(gracz_x,gracz_y,bufor))gracz_x++;
      if(kierunek==2 && mozna_w_gore(gracz_x,gracz_y,bufor) )gracz_y--;
      if(kierunek==4 && mozna_w_dol(gracz_x,gracz_y,bufor)  )gracz_y++;
      
      if(kierunek==1 && mozna_w_lewo(gracz_x,gracz_y,bufor)==false)kierunek=0;
      if(kierunek==2 && mozna_w_gore(gracz_x,gracz_y,bufor)==false)kierunek=0;
      if(kierunek==3 && mozna_w_prawo(gracz_x,gracz_y,bufor)==false)kierunek=0;
      if(kierunek==4 && mozna_w_dol(gracz_x,gracz_y,bufor)==false)kierunek=0;
      
      
      if(kierunek==1 && mozna_w_lewo2(gracz_x,gracz_y,bufor) )gracz_x--;
      if(kierunek==3 && mozna_w_prawo2(gracz_x,gracz_y,bufor))gracz_x++;
      if(kierunek==2 && mozna_w_gore2(gracz_x,gracz_y,bufor) )gracz_y--;
      if(kierunek==4 && mozna_w_dol2(gracz_x,gracz_y,bufor)  )gracz_y++;

      if(kierunek==1 && mozna_w_lewo2(gracz_x,gracz_y,bufor)==false)kierunek=0;
      if(kierunek==2 && mozna_w_gore2(gracz_x,gracz_y,bufor)==false)kierunek=0;
      if(kierunek==3 && mozna_w_prawo2(gracz_x,gracz_y,bufor)==false)kierunek=0;
      if(kierunek==4 && mozna_w_dol2(gracz_x,gracz_y,bufor)==false)kierunek=0;
      
  

      if(kierunek==1 && odb1(gracz_x,gracz_y,bufor)==false)kierunek=3;
      if(kierunek==3 && odb4(gracz_x,gracz_y,bufor)==false)kierunek=1;
      if(kierunek==2 && odb3(gracz_x,gracz_y,bufor)==false)kierunek=4;
      if(kierunek==4 && odb2(gracz_x,gracz_y,bufor)==false)kierunek=2;




     





 
 
 if(kierunek==1 && blokPP(gracz_x,gracz_y,bufor) )gracz_x;
  if(kierunek==2 && blokPP3(gracz_x,gracz_y,bufor) )gracz_y;
   if(kierunek==3 && blokPP2(gracz_x,gracz_y,bufor) )gracz_x;
    if(kierunek==4 && blokPP4(gracz_x,gracz_y,bufor) )gracz_y;
    
    if(kierunek==1 && blokPP(gracz_x,gracz_y,bufor)==false)kierunek=3 ;
     if(kierunek==2 && blokPP3(gracz_x,gracz_y,bufor)==false)kierunek=3 ;
      if(kierunek==3 && blokPP2(gracz_x,gracz_y,bufor)==false)kierunek=0 ;
       if(kierunek==4 && blokPP4(gracz_x,gracz_y,bufor)==false)kierunek=3 ;
       
       if(kierunek==1 && blokPP11(gracz_x,gracz_y,bufor) )gracz_x;
  if(kierunek==2 && blokPP33(gracz_x,gracz_y,bufor) )gracz_y;
   if(kierunek==3 && blokPP22(gracz_x,gracz_y,bufor) )gracz_x;
    if(kierunek==4 && blokPP44(gracz_x,gracz_y,bufor) )gracz_y;

    if(kierunek==1 && blokPP11(gracz_x,gracz_y,bufor)==false)kierunek=0 ;
     if(kierunek==2 && blokPP33(gracz_x,gracz_y,bufor)==false)kierunek=1 ;
      if(kierunek==3 && blokPP22(gracz_x,gracz_y,bufor)==false)kierunek=1 ;
       if(kierunek==4 && blokPP44(gracz_x,gracz_y,bufor)==false)kierunek=1 ;
       
        if(kierunek==1 && blokPP111(gracz_x,gracz_y,bufor) )gracz_x;
  if(kierunek==2 && blokPP333(gracz_x,gracz_y,bufor) )gracz_y;
   if(kierunek==3 && blokPP222(gracz_x,gracz_y,bufor) )gracz_x;
    if(kierunek==4 && blokPP444(gracz_x,gracz_y,bufor) )gracz_y;

    if(kierunek==1 && blokPP111(gracz_x,gracz_y,bufor)==false)kierunek=2 ;
     if(kierunek==2 && blokPP333(gracz_x,gracz_y,bufor)==false)kierunek=0 ;
      if(kierunek==3 && blokPP222(gracz_x,gracz_y,bufor)==false)kierunek=2 ;
       if(kierunek==4 && blokPP444(gracz_x,gracz_y,bufor)==false)kierunek=2 ;
       
         if(kierunek==1 && blokPP1111(gracz_x,gracz_y,bufor) )gracz_x;
  if(kierunek==2 && blokPP3333(gracz_x,gracz_y,bufor) )gracz_y;
   if(kierunek==3 && blokPP2222(gracz_x,gracz_y,bufor) )gracz_x;
    if(kierunek==4 && blokPP4444(gracz_x,gracz_y,bufor) )gracz_y;

    if(kierunek==1 && blokPP1111(gracz_x,gracz_y,bufor)==false)kierunek=4 ;
     if(kierunek==2 && blokPP3333(gracz_x,gracz_y,bufor)==false)kierunek=4 ;
      if(kierunek==3 && blokPP2222(gracz_x,gracz_y,bufor)==false)kierunek=4 ;
       if(kierunek==4 && blokPP4444(gracz_x,gracz_y,bufor)==false)kierunek=0 ;
    

 

	
      speed--;
}
 




    clear_to_color( bufor , makecol( 0, 255, 255 ) );

     blit( z_tlo, bufor, 0, 0, 0, 0, 640, 480 );
    rect(bufor,0,0,639,479,makecol(128,128,128));
    
    for(int i=0;i<=49;i++)masked_blit( blok   , bufor, 0, 0, blokx[i], bloky[i], 20, 20);
    for(int i=0;i<=49;i++)masked_blit( blok2   , bufor, 0, 0, blok2x[i], blok2y[i], 20, 20);
                           for(int i=0;i<=49;i++)masked_blit( blok31   , bufor, 0, 0, blok31x[i], blok31y[i], 20, 20);
                           for(int i=0;i<=49;i++)masked_blit( blok32   , bufor, 0, 0, blok32x[i], blok32y[i], 20, 20);
                           for(int i=0;i<=49;i++)masked_blit( blok33   , bufor, 0, 0, blok33x[i], blok33y[i], 20, 20);
                           for(int i=0;i<=49;i++)masked_blit( blok34   , bufor, 0, 0, blok34x[i], blok34y[i], 20, 20);
                           
                           for(int i=0;i<=49;i++)masked_blit( blokP , bufor, 0, 0, blokPx[i], blokPy[i], 20, 20);
                             for(int i=0;i<=49;i++)masked_blit( blokP2 , bufor, 0, 0, blokP2x[i], blokP2y[i], 20, 20);
                               for(int i=0;i<=49;i++)masked_blit( blokP3 , bufor, 0, 0, blokP3x[i], blokP3y[i], 20, 20);
                                 for(int i=0;i<=49;i++)masked_blit( blokP4 , bufor, 0, 0, blokP4x[i], blokP4y[i], 20, 20);
  
    for(int i=0;i<=49;i++)masked_blit( meta   , meta2, 0, 0, metx[i], mety[i], 20, 20);
    for(int i=0;i<=49;i++)masked_blit( dziura , dziury , 0, 0, dzix [i], dziy [i], 20, 20);
    for(int i=0;i<=49;i++)masked_blit( xblok1 , blokdziuby1 , 0, 0,  xblok1x[i],  xblok1y [i], 20, 20);
    for(int i=0;i<=49;i++)masked_blit( xblok2 , blokdziuby2 , 0, 0,  xblok2x[i],  xblok2y [i], 20, 20);
    for(int i=0;i<=49;i++)masked_blit( xblok3 , blokdziuby3 , 0, 0,  xblok3x[i],  xblok3y [i], 20, 20);
    for(int i=0;i<=49;i++)masked_blit( xblok4 , blokdziuby4 , 0, 0,  xblok4x[i],  xblok4y [i], 20, 20);
   
   
masked_blit( blokdziuby1, bufor, 0, 0, 0, 0, 640, 480 );
masked_blit( blokdziuby2, bufor, 0, 0, 0, 0, 640, 480 );
masked_blit( blokdziuby3, bufor, 0, 0, 0, 0, 640, 480 );
masked_blit( blokdziuby4, bufor, 0, 0, 0, 0, 640, 480 );
    masked_blit( dziury, bufor, 0, 0, 0, 0, 640, 480 );
    
    
     
    masked_blit( meta2, bufor, 0, 0, 0, 0, 640, 480 );
    
   
    if(przegrana(dziury,gracz_x,gracz_y)){
		wyswietl_GO(bufor);
		wczytaj_lvl();
    }


if(przegrana(blokdziuby1,gracz_x,gracz_y)){
		wyswietl_GO(bufor);
		wczytaj_lvl();
    }
if(przegrana(blokdziuby2,gracz_x,gracz_y)){
		wyswietl_GO(bufor);
		wczytaj_lvl();
    }
if(przegrana(blokdziuby3,gracz_x,gracz_y)){
		wyswietl_GO(bufor);
		wczytaj_lvl();
    }
if(przegrana(blokdziuby4,gracz_x,gracz_y)){
		wyswietl_GO(bufor);
		wczytaj_lvl();
    }
    
    
    
    if(wygrana(meta2,gracz_x,gracz_y)){
		wyswietl_WY(bufor);
		zapisz_lvl(ktorylvl);
		ktorylvl++;
		wczytaj_lvl();
    }
      
    masked_blit( gracz, bufor, 0, 0, gracz_x, gracz_y, gracz->w, gracz->h );
  
    

    blit( bufor, screen, 0, 0, 0, 0, 640, 480 );

      
       
       
    clear_to_color( dziury, makecol( 255, 0, 255 ) );
    clear_to_color( meta2, makecol( 255, 0, 255 ) );
    clear_to_color(blokdziuby1, makecol( 255, 0, 255 ) );
    clear_to_color(blokdziuby2, makecol( 255, 0, 255 ) );
    clear_to_color(blokdziuby3, makecol( 255, 0, 255 ) );
    clear_to_color(blokdziuby4, makecol( 255, 0, 255 ) );
  

}



    
    
    destroy_bitmap( gracz );
   
        destroy_bitmap( meta2 );
          destroy_bitmap( bufor );
    
    allegro_exit();

return 0;
}
END_OF_MAIN();

