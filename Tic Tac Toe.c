#include<stdio.h>
#include<string.h>
//#include<conio.h>
void display(){
    printf("\nHere are position:");
    printf("\n1\t2\t3");
    printf("\n4\t5\t6");
    printf("\n7\t8\t9");
}
void welcome(){
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    printf("||||                                                                  ||||\n");
    printf("||||                                                                  ||||\n");
    printf("||||    ======== ========  ========   ========    //\\\\     ========   ||||\n");
    printf("||||       ||       ||     ||            ||      //  \\\\    ||         ||||\n");
    printf("||||       ||       ||     ||            ||     //====\\\\   ||         ||||\n");
    printf("||||       ||       ||     ||            ||    //      \\\\  ||         ||||\n");
    printf("||||       ||    ========  ========      ||   //        \\\\ ========   ||||\n");
    printf("||||                                                                  ||||\n");
    printf("||||                    ======== ||====|| ||======                    ||||\n");
    printf("||||                       ||    ||    || ||                          ||||\n");
    printf("||||                       ||    ||    || ||======                    ||||\n");
    printf("||||                       ||    ||    || ||                          ||||\n");
    printf("||||                       ||    ||====|| ||======                    ||||\n");
    printf("||||                                                                  ||||\n");
    printf("||||                                                                  ||||\n");
    printf("||||           ===========================================            ||||\n");
    printf("||||           |  Created By : Pranav Vyas               |            ||||\n");
    printf("||||           |  Email      : pranavvyas4399@gmail.com  |            ||||\n");
    printf("||||           |          Press Enter To Continue        |            ||||\n");
    printf("||||           ===========================================            ||||\n");
    printf("||||                                                                  ||||\n");
    printf("||||                                                                  ||||\n");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
    getchar();
    system("cls");
}
int main(){
    int d,a[3][3],i,p,m,n,g,q=2,h,j;
    char name1[30],name2[30],temp;
    welcome();
    printf("\n Please Enter name of First Player: ");
    gets(name1);
    printf("\n Please Enter name of Second Player: ");
    gets(name2);
    //printf("\n%s , %s",name1,name2);
    display();
    printf("\n%s will take First Turn %s will take Second Turn\n",name1,name2);
    for(h=0;h<3;h++){
        for(j=0;j<3;j++){
            a[h][j]=0;
        }
    }
    for(i=0;i<9;i++){
        printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
        printf("\nInput Your Position : ");
        scanf("%d",&p);
        printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");

        //Declaring things

        if(q%2==0){
            d=111;
        }else if(q%2==1){
            d=120;
        }
        q=q+1;

        //Positition Handling

        switch(p){
            case 1:
                if(a[0][0]==0){
                    a[0][0]=d;
                }else{
                    printf("\nDon't Cheat!!! This place is aleady taken!!!\n");
                    i=i-1;
                    q=q-1;
                }
                break;

            case 2:
                if(a[0][1]==0){
                    a[0][1]=d;
                }else{
                    printf("\nDon't Cheat!!! This place is aleady taken!!!\n");
                    i=i-1;
                    q=q-1;
                }
                break;

            case 3:
                if(a[0][2]==0){
                    a[0][2]=d;
                }else{
                    printf("\nDon't Cheat!!! This place is aleady taken!!!\n");
                    i=i-1;
                    q=q-1;
                }
                break;

            case 4:
                if(a[1][0]==0){
                    a[1][0]=d;
                }else{
                    printf("\nDon't Cheat!!! This place is aleady taken!!!\n");
                    i=i-1;
                    q=q-1;
                }
                break;

            case 5:
                if(a[1][1]==0){
                    a[1][1]=d;
                }else{
                    printf("\nDon't Cheat!!! This place is aleady taken!!!\n");
                    i=i-1;
                    q=q-1;
                }
                break;

            case 6:
                if(a[1][2]==0){
                    a[1][2]=d;
                }else{
                    printf("\nDon't Cheat!!! This place is aleady taken!!!\n");
                i=i-1;
                q=q-1;
                }
                break;

            case 7:
                if(a[2][0]==0){
                    a[2][0]=d;
                }else{
                    printf("\nDon't Cheat!!! This place is aleady taken!!!\n");
                    i=i-1;
                    q=q-1;
                }
                break;

            case 8:
                if(a[2][1]==0){
                    a[2][1]=d;
                }else{
                    printf("\nDon't Cheat!!! This place is aleady taken!!!\n");
                    i=i-1;
                    q=q-1;
                }
                break;

                case 9:
                if(a[2][2]==0){
                    a[2][2]=d;
                }else{
                    printf("\nDon't Cheat!!! This place is aleady taken!!!\n");
                    i=i-1;
                    q=q-1;
                }
                break;

            default:
                printf("\nEnter valid position:\n");
                i=i-1;
                q=q-1;
                break;
        }

        for(m=0;m<3;m++){
            for(n=0;n<3;n++){
                temp=a[m][n];
                printf("%c\t",temp);
            }
            printf("||\t");
            for(n=0;n<3;n++){
                printf("%d\t",(3*m)+(n+1));
            }
            printf("\n");
        }

    // Winners

        for(g=0;g<3;g++){
            if(a[g][0]==a[g][1]){
                if(a[g][1]==a[g][2]){
                    if(a[g][2]==111){
                        printf("\n%s is winner \n",name1);
                        printf("The Game ends now \n");
                        i=11;
                        printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                    }else if(a[g][2]==120){
                        printf("\n%s is winner  \n",name2);
                        printf("The Game ends now \n");
                        i=11;
                        printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                    }
                }
            }else if(a[0][g]==a[1][g]){
                if(a[1][g]==a[2][g]){
                    if(a[2][g]==111){
                        printf("\n%s is winner \n",name1);
                        printf("The Game ends now \n");
                        i=11;
                        printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                    }else if(a[2][g]==120){
                        printf("\n%s is winner  \n",name2);
                        printf("The Game ends now \n");
                        i=11;
                        printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                    }
                }
            }
        }
        if(a[0][0]==a[1][1]){
            if(a[1][1]==a[2][2]){
                if(a[2][2]==111){
                    printf("\n%s is winner \n",name1);
                    printf("The Game ends now \n");
                    i=11;
                    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                }else if(a[2][2]==120){
                    printf("\n%s is winner  \n",name2);
                    printf("The Game ends now \n");
                    i=11;
                    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                }
            }
        }else if(a[0][2]==a[1][1]){
            if(a[1][1]==a[2][0]){
                if(a[0][2]==111){
                    printf("\n%s is winner \n",name1);
                    printf("The Game ends now \n");
                    i=11;
                    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                }else if(a[0][2]==120){
                    printf("\n%s is winner  \n",name2);
                    printf("The Game ends now \n");
                    i=11;
                    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
                }
            }
        }
    }
    if(i==9){
        printf("\n This game is tie!!!");
        printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
    }
    getch();
    return 0;
}
