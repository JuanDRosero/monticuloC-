/*
Julieth Tatiana Riaño Mora - 20181020107
Juan David Rosero Torres - 20181020071
Cristian Camilo Martinez Rey 20181020021
*/
#ifndef MONTICULO_H
#define MONTICULO_H

using namespace std;

class monticulo{
	int tam,*arr,posActual;
	public:
		monticulo(int tamanio=10){
			arr = new int[tam+1];	//Puse una posición mas ya que nuca se usa el 0
			posActual=1;
			tam=tamanio;
			for (int i=1;i<=tam;i++){
				arr[i]=-1;
			}
		}
		void insertar(int clave);
		int atender();
		bool monticuloLleno();
		void imprimir();
};

void monticulo::insertar(int clave){
	bool insertado=false;
	int auxPos=posActual;
	int aux;
	if (posActual==1){
		arr[1]=clave;
		insertado=true;
		posActual++;
	} else 
	if (posActual<= tam)
	{
		do{
			if(auxPos==1){
				if(clave> arr[1]){
					arr[1]=clave;
					insertado=true;
					posActual++;
				}
			}else {
				if(clave > arr[auxPos/2]){
					arr[auxPos]=arr[auxPos/2];
					auxPos=auxPos/2;
				}else {
					arr[auxPos]=clave;
					insertado=true;
					posActual++;
				}
			}
			
		} while(!insertado);
	}else{
		cout<<"No se ha podido insertar debido a que el arreglo esta lleno"<<endl;
	}
		
}

int monticulo::atender(){
	int pendiente;
	int i=1;
	pendiente= arr[posActual-1];
	arr[posActual-1]=-1;
	posActual--;
	while(pendiente!=-1){
		if(((2*i)+1)>tam || (2*i)>tam){
				arr[i]=pendiente;
				pendiente =-1;			
		}else{
			if(arr[2*i]>arr[(2*i)+1] && arr[2*i]>pendiente){
				//cout<<arr[2*i]<<endl;
				arr[i]=arr[2*i];
				arr[2*i]=-1;
				i=2*i;
			}else{
			if(arr[(2*i)+1]>arr[2*i] && arr[(2*i)+1]>pendiente){
				//cout<<i<<endl;
				arr[i]=arr[(2*i)+1];
				arr[2*i]=-1;
				i=(2*i)+1;
				//cout<<i<<endl;
				//cout<<pendiente<<endl;
			}else{
				if(pendiente>arr[(2*i)+1] && pendiente>arr[2*i]){
					//cout<<i<<endl;
					arr[i]=pendiente;
					pendiente =-1;
					//cout<<pendiente<<endl;
					//cout<<i<<endl;
					}
				}
			}
		}
		
	}
}

bool monticulo::monticuloLleno(){
	if(posActual>tam){
		return true;
	} else
		return false;
}



void monticulo::imprimir(){
	for (int i=1;i<=tam;i++){
		cout<<arr[i]<<endl;
	}
}

#endif
