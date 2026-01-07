#include <iostream>

int days(int idate[],int fdate[]){
    int days=0;

    //in middle years
    if (fdate[2]-idate[2]>1){
        for (int i=idate[2]+1;i<=fdate[2]-1;i++){
            if(i%4==0 && i%100!=0){
                days+=366;
            }else{
                days+=365;
            }
        }
    }
        
    //if i and f year are different
    if (fdate[2]!=idate[2]){     
        //intial year
        //remaning months in intial_year
        for (int i=idate[1]+1;i<=12;i++){
            if(i==4 || i==6 || i==9 || i==11){
                days+=30;
            }else if(i==2){
                if(idate[2]%4==0 && idate[2]%100!=0)
                days+=29;
                else{
                    days+=28;
                }
            }else{
                days+=31;
            }
            }
    
    //remaining days in initial_month
    if(idate[1]==4 || idate[1]==6 || idate[1]==9 || idate[1]==11){
        days+= 30-idate[0];
    }else if(idate[1]==2){
        if(idate[2]%4==0 && idate[2]%100!=0)
            days+=29-idate[0];
        else{
            days+=28-idate[0];
        }
    }else{
        days+= 31-idate[0];
    }

    //final year
    //remaining months in final_year
    for (int i=1;i<=fdate[1]-1;i++){
        if(i==4 || i==6 || i==9 || i==11){
            days+=30;
        }else if(i==2){
            if(idate[2]%4==0 && idate[2]%100!=0)
            days+=29;
            else{
                days+=28;
            }
        }else{
            days+=31;
        }
    }


    //remaining days in final_month
    days+=fdate[0];
}

    //if i and f are same year
    if(idate[2]==fdate[2]){                
        //remaning months in year
        
        // months with gap>=2
        if(fdate[1]-idate[1]>1){
            //initial month
                if(idate[1]==4 || idate[1]==6 || idate[1]==9 || idate[1]==11){
                    days+=30-idate[0];
                }else if(idate[1]==2){
                    if(idate[2]%4==0 && idate[2]%100!=0)
                        days+=29-idate[0];
                    else{
                        days+=28-idate[0];
                    }
                }else{
                    days+=31-idate[0];
                }
            //months in between
            for (int i=idate[1]+1;i<fdate[1];i++){
                if(i==4 || i==6 || i==9 || i==11){
                    days+=30;
                }else if(i==2){
                    if(idate[2]%4==0 && idate[2]%100!=0)
                        days+=29;
                    else{
                        days+=28;
                    }
                }else{
                    days+=31;
                }
            }
            //final month
            days+=fdate[0];
        
        }
        //for consecutive months
        else if (fdate[1]!=idate[1]){ 
            //in initial month
            if(idate[1]==4 || idate[1]==6 || idate[1]==9 || idate[1]==11){
                days+= 30-idate[0];
            }else if(idate[1]==2){
                if(idate[2]%4==0 && idate[2]%100!=0)
                days+=29-idate[0];
                else{
                    days+=28-idate[0];
                }
            }else{
                days+= 31-idate[0];
            }
            //remaining days in final_month
            days+=fdate[0];
        }
        //for same months
        else{
            days+= fdate[0]-idate[0];
        }
    }

    return days;
}

int validity(int idate[],int fdate[]){ //dates
    //validity
    int valid=1;
    for (int i=0;i<3;i++){
        if (idate[i]<0)
            valid=0;
    }
    for (int i=0;i<3;i++){
        if (fdate[i]<0)
            valid=0;
    }

//initial date
    if (idate[1]>12)
        valid=0;
    if(idate[1]==4 || idate[1]==6 || idate[1]==9 || idate[1]==11){
        if(idate[0]>30)
            valid=0;
    }else if(idate[1]==2){
        if(idate[2]%4==0 && idate[2]%100!=0)
            if(idate[0]>29)
                valid=0;
        else{
            if(idate[0]>28)
                valid=0;
        }
    }else{
        if(idate[0]>31)
                valid=0;
    }
//final date
    if (fdate[1]>12)
        valid=0;
    if(fdate[1]==4 || fdate[1]==6 || fdate[1]==9 || fdate[1]==11){
        if(fdate[0]>30)
            valid=0;
    }else if(fdate[1]==2){
        if(fdate[2]%4==0 && fdate[2]%100!=0)
            if(fdate[0]>29)
                valid=0;
        else{
            if(fdate[0]>28)
                valid=0;
        }
    }else{
        if(fdate[0]>31)
                valid=0;
    }

    return valid;
}

int swap(int idate[],int fdate[]){ //after checking validity of dates
    int need=0;
    for(int i=0;i<3;i++){
        if(idate[2]>fdate[2]){
            need=1;
        }else if (idate[2]==fdate[2]){
            if(idate[1]>fdate[1]){
                need=1;
            }else if (idate[1]==fdate[1]){
                if(idate[0]>fdate[0]){
                    need=1;
                }
            }
        }
    }
    return need;
}

int main(){
    int idate[3];
    int fdate[3];
    std::cout<<"Enter initial date :\t";
    for(int i=0;i<3;i++){
        std::cin>>idate[i];
    }
    std::cout<<"Enter final date :\t";
    for(int i=0;i<3;i++){
        std::cin>>fdate[i];
    }

    if (validity(idate,fdate)){
        if (swap(idate,fdate)){
            std::cout<<"//Note :: Initial and Final dates are swaped to get the original result."<<std::endl;
             std::cout<<"Number of days in between is -"<<days(fdate,idate)<<std::endl;
        }else{
            std::cout<<"Number of days in between is "<<days(idate,fdate)<<std::endl;
        }
    }
    else{
        std::cout<<"Invalid date entered."<<std::endl;
    }
}