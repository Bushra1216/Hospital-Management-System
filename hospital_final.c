#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h>


void homeScreen(void);
void title(void);
void login(void);

struct  info
{
    char name[40],department[60],day[20],disease[30] ,a[5],pm[7],gender[10],dis[40],nam[30],dy[20],Appnam[10],Appg[12],AppPhn[20],AppT[8];
    int id,age,serial_no,token_no;
   char PatientTim[8],Ptag[4];

    float time;

   double TIm;
   long unsigned int phone_no;
}d[100];

  int i,j,k,num=1,n,sum=0,flag,e,r;

int main(void)
{ homeScreen();
   title();
   login();
  int ch;

 printf("\n\n\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||ADMIN  PANEL||||||||||||||||||||||||||||||||||||||||||\n");
    start:
    while(ch!=7)
   {  system("COLOR 5E");
   printf("\n\n\n\t\t\t\t\t\t1.ABOUT US\n");
   printf("\n\n\t\t\t\t\t\t2.CONTACT INFORMATION\n");
   printf("\n\n\t\t\t\t\t\t3.SPECIALITIES\n");
   printf("\n\n\t\t\t\t\t\t4.DOCTOR INFORMATION\n");
   printf("\n\n\t\t\t\t\t\t5.PATIENT INFORMATION\n");
   printf("\n\n\t\t\t\t\t\t6.PATIENT APPOINTMENT\n");
   printf("\n\n\t\t\t\t\t\t7.Exit\n");

   printf("\n\n\t\t\t\t\tEnter Your Choice: ");
   scanf("%d", &ch);

    switch(ch)
    {
    case 1:
      About_us();
      system("cls");
      break;
    case 2:
        Contact_information();
        system("cls");
        break;

    case 3:
        Specialities();
        system("cls");
        break;

    case 4:
        Doctors_Informations();
        system("cls");
        break;
    case 5:
        Patients_Informations();
        break;
    case 6:
        Patient_Appointment();
        break;
    case 7:
      return(0);
         default:
printf("\nYour choice is invalid.Try again.\n");
    }
   }
goto start;
}
int About_us()
{  system("cls");

  printf("\n                                                                                     ABOUT US                                                                   \n");
printf(" \nEvercare Hospital Dhaka is the first and only hospital to be accredited by the Joint Commission International (JCI) . The JCI Gold Seal of Approval is a globally recognized and reflects an organization’s commitment to best practices in quality and patient safety. Evercare Hospital Dhaka was first accredited by JCI in 2008 and till date remains the only hospital in Bangladesh to hold this international recognized standard. Accreditation by recognized international institutions such as JCI are crucial to drive compliance and improve quality and cost-effectiveness across the hospitals and has become a priority for health care organizations across the world.EHD is a 425-bed multi-disciplinary super-specialty tertiary care hospital in Bangladesh, providing comprehensive health care with the latest medical, surgical and diagnostic facilities. These services are provided by expert medical professionals, skilled nurses and technologists using state-of-the-art equipment, modern well researched protocols & processes. The eleven-storied modern structure with 435,000 square feet floor space, was conceptualized & designed by renowned architecture company Smith Group of United States of America.\n\nEvercare Hospital Dhaka is a world-class hospital with an aim to establish a close synergy among medical skills, trained manpower, technology and advancements in IT. Because we believe in Transforming Health care.\n");
printf("\n\n\t Press any key to continue...");
getch();
}

int Contact_information()
{system("cls");
    system("COLOR D");
    printf("\n                                                    Contact Information                   \n\n");
    printf("\n       Address             : Plot: 81, Block: E, Bashundhara R/A, Dhaka 1229, Bangladesh");
    printf("\n       Emergency Contact   : (02)-8431679, (02)-8431161, (02)-8431691");
    printf("\n       E-mail              : For general enquiries:feedback@evercarebd.com");
    printf("\n\n");
    printf("\n       • Information Desk     : (02)-8431661 Ext: 3333\n");
    printf("\n       • Admission Desk       : (02)-8431661 Ext: 1091 & 2112\n");
    printf("\n       • Billing Information  : (02)-8431661 Ext: 1353\n");
    printf("\n       • Pharmacy             : (02)-8431661 Ext: 1041\n");
    printf("\n       • Sample Collection    : (02)-8431661 Ext: 1346\n");
    printf("\n       • Report Delivery      : (02)-8431661 Ext: 1202\n");
    printf("\n       • Security Control Room: 01755521328\n");
    printf("\n       • Food Village         : (02)-8431661 Ext: 6100\n");
    printf("\n       • Emergency Ambulance  :01712983748 \n");

   printf("\n\n\t Press any key to continue...");
    getch();

}

int Specialities()
{  system("cls");
     system("COLOR 30");
    printf("\n                                                                              Specialities                                                              \n\n");
    printf("\n    • Cancer Care Center\n");
    printf("\n    • Joint Care & Wellness Center\n");
    printf("\n    • Cardiology\n");
    printf("\n    • Cardiac Electrophysiology & Heart Failure\n");
    printf("\n    • Children Development Center\n");
    printf("\n    • Dental & Maxillofacial Surgery\n");
    printf("\n    • Dermatology & Venereology \n");
    printf("\n    • Diagnostic & Interventional Radiology \n");
    printf("\n    • ENT & Cochlear Implant\n");
    printf("\n    • Fertility Center\n");
    printf("\n    • Gastroenterology & Hepatology\n");
    printf("\n    • General & Laparoscopic\n");
    printf("\n    • Hematology/STC\n");
    printf("\n    • Internal Medicine\n");
    printf("\n    • Lab Medicine\n");
    printf("\n    • Neurology\n");
    printf("\n    • Neurosurgery\n");
    printf("\n    • Orthopaedic & Trauma Department \n");
    printf("\n\n\t Press any key to continue...");
    getch();


}


int Doctors_Informations()
{  system("cls");

  system("COLOR 9");
printf("\n\t\t\t\t\t<<<<<<<<<<<<<<< DOCTORS  INFORMATION  >>>>>>>>>>>>>>>>>\n");
   int ch=0,count=0;
   begin:
   while(ch!=5)
   {
   printf("\n\n\t\t 1.Add Doctor Info\n");
   printf("\n\t\t 2. View Doctor Info\n");
   printf("\n\t\t 3. Update Info\n");
   printf("\n\t\t 4. Search Doctor Info\n");
   printf("\n\t\t 5.Main");

   printf("\n\n\n\t\tEnter Your Choice: ");
   scanf("%d", &ch);

   switch(ch)
    {
    case 1:
      Add_Doctor_Info();

       break;
      case 2:
     View_Doctor_Info();
     break;

     case 3:
         Update_Doctor_Info();
        break;


      case 4:
      Search_Doctor_Info();
      break;
      case 5:
     system("cls");
     printf("\n\n\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||ADMIN  PANEL||||||||||||||||||||||||||||||||||||||||||\n");
     return   'goto start';

    break;



      getch();

    }

   }
}

int Patients_Informations()
{
    system("cls");
   system("COLOR 3f");
   printf("\n\t\t\t\t\t<<<<<<<<<<<<<<< PATIENTS  INFORMATION  >>>>>>>>>>>>>>>>>\n");
   int ch=0,count=0;
   while(ch!=5)
   {
   printf("\n\n\t\t\t1.Add Patient Info\n");
   printf("\n\t\t\t2.View Patient Info\n");
   printf("\n\t\t\t3.Update Patient Info\n");
   printf("\n\t\t\t4.Delete Patient Info\n");
  printf("\n\t\t\t5.Search Patient Info\n");
   printf("\n\t\t\t6.Main");

   printf("\n\n\t\tEnter Your Choice: ");
   scanf("%d", &ch);

   switch(ch)
    {
     case 1:
        Add_Patient_Info();

        break;
      case 2:
     View_Patient_Info();
     break;

     case 3:
         Update_Patient_Info();
        break;

     case 4:
        Delete_Patient_Info();
        break;

     case 5:
      Search_Patient_Info();
      break;
     case 6:
     system("cls");
       printf("\n\n\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||ADMIN  PANEL||||||||||||||||||||||||||||||||||||||||||\n");
      return   'goto start';



      break;

    }


}

}

void homeScreen(void)
{printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tWELLCOME TO");
printf("\n\n\t\t\t\t\t\t\t\t\t  OUR EVERCARE HOSPITAL");
printf("\n\n\t\t\t\t\t\t\t\t*******************************************");

printf("\n\t\t\t\t\t\t\t\t*******************************************\n");
printf("\n\n\nPress any key to continue.......");
getch();
system("cls");

}
void title(void)
{  printf("\n\n \t\t\t\t\t\---------------------------------------------------------------");

  printf("\n\n\n\t\t\t\t\t\t\t\tEVERCARE HOSPITAL");
    printf("\n\n\t\t\t\t\t---------------------------------------------------------------");
   getch();
}

void login(void)
{   int i;
   char username[30],password[30];
   char exact_username[30]= "Revels";
   char exact_password[10]="99999";
   for(i=0;i<=2;i++)
   {printf("\n\n\n\t\t\t Please enter username :");
   scanf("%s",&username);
   printf("\n\n\n\t\t\tPlease enter password :");
   scanf("%s",&password);
       if(strcmp(username,exact_username)==0&& strcmp(password,exact_password)==0)
         {      system("cls");
         printf("\n\n\n\n\n\n");
           printf("\n\n\n\n\n\n\n\n\n\n\n\t\t");
          system("COLOR A");
             for(int a=0;a<120;a++)
             {  Sleep(12);
                 printf("%c",219);
             }

             printf("\n\n\n\n\n\t\t\t\t\tYour Login is Successful..........................");
         getch();


          break;
         }

         else{
            printf("\n\n\n\t\t\tYour login is unsuccessful.");
            printf("\n\t\t\tPlease try again.");
            getch();


         }

      }
      system("cls");

}

int Add_Doctor_Info()
{ int n,sum;
    printf("\n\n\tHow many doctors' information do you want to add:");
    scanf("%d", &n);
    sum = n + num;

    for (i = num; i < sum; i++)
    {
        printf("Enter the id:");
        scanf("%d", &d[i].id);

        printf("Enter the name:");
        scanf("%s", d[i].name);

        printf("Enter Department:");
        scanf("%s", d[i].department);

        printf("Enter Age:");
        scanf("%d", &d[i].age);

        printf("Enter Day:");
        scanf("%s", d[i].day);

        printf("Enter Time:");
        scanf("%f%s", &d[i].time, d[i].a);

        num++;
        printf("\n");
    }
}




int View_Doctor_Info()
{  system("COLOR F4");
   system("cls");

printf("          \n\n\t\t\t\t\t***********View Information**************\n\n  "  );
printf("\n\tId\t\t Name\t\tDepartment\tAge\t\t Day\t\t Time\n\n ");
    for(i=1; i<num; i++)
    {
        printf("\n   \t%d  \t\t%s \t\t%s\t\t%d\t\t%s\t  \t %.2f %s ",d[i].id,d[i].name,d[i].department,d[i].age,d[i].day,d[i].time,d[i].a);
    }
}

int  Update_Doctor_Info()
{
int q,p;

    printf("What do you want to update ?\n");
    printf("Enter your option\n");
    printf("1.Id\n2.Name\n3.Department\n4.Age\n5.Day\n6.Time\n");
    printf(" Choice option=");
    scanf("%d",&q);
    if(q<=6)
    {
        printf("Enter the serial no of that Doctor =");
        scanf("%d",&p);
        if(p<num)
        {
            if(q==1)
            {
                printf("Enter the new Id :");
                scanf("%d",&d[p].id);

            }
            else if(q==2)
            {
                printf("Enter the new Name :");
                scanf("%s",&d[p].name);
            }
            else if(q==3)
            {
                printf("Enter the new Department :");
                scanf("%s",&d[p].department);
            }

            else if(q==4)
            {
                printf("Enter the Age :");
                scanf("%d",&d[p].age);
            }

            else if(q==5)
            {
                printf("Enter the new Day :");
                scanf("%s",&d[p].day);
            }
            else if(q==6)
            {
                printf("Enter the new Time :");
                scanf("%f%s",&d[p].time,&d[p].a);
            }
        }
        else
        {
            printf("\n\nInvalid Serial No.\nPlease Try Again !\n\n");
        }
    }
}

int Search_Doctor_Info()
{   int sear,f;
    float m;
    char u[100];
    printf(" What do you want to search ?\n");
    printf("1.Id.\n2.Name\n3.Department\n4.Age\n5.Day\n6.Time\n\nOption = ");
    scanf("%d",&sear);
    switch(sear)
    {
    case 1:
        {
        int flag=1;
        printf("Enter Id = ");
        scanf("%d",&f);
        for(k=0; k<num; k++)
        {
            if(f==d[k].id)
            {
        printf("\nId             = %d", d[k].id );
        printf("\nName           = %s", d[k].name);
        printf("\nDepartment     = %s", d[k].department);
        printf("\nAge            = %d", d[k].age);
        printf("\nDay            = %s", d[k].day);
        printf("\nTime           = %.2f %s", d[k].time,d[k].a);

              flag=0;
            }

        }
        if(flag==1)
            printf("\nThe information is not found\n\n");
    break;
    }
    case 2:
    {
        int flag=1;

        printf("Enter name =");
        scanf("%s",&u);

        for(k=0; k<num; k++)
        {
            if(strcmp(u,d[k].name)==0)
            {
        printf("\nId             = %d", d[k].id );
        printf("\nName           = %s", d[k].name);
        printf("\nDepartment     = %s", d[k].department);
        printf("\nAge            = %d", d[k].age);
        printf("\nDay            = %s", d[k].day);
        printf("\nTime           = %.2f %s", d[k].time,d[k].a);

                flag=0;

            }
        }
        if(flag==1)
            printf("Not Found\n\n");

    break;

    }
    case 3:
    {
        int flag=1;

        printf("Enter Department = ");
        scanf("%s",&u);

        for(k=0; k<num; k++)
        {
            if(strcmp(u,d[k].department)==0)
            {
        printf("\nId             = %d", d[k].id );
        printf("\nName           = %s", d[k].name);
        printf("\nDepartment     = %s", d[k].department);
        printf("\nAge            = %d", d[k].age);
        printf("\nDay            = %s", d[k].day);
        printf("\nTime           = %.2f %s\n\n", d[k].time,d[k].a);
            flag=0;
            }


        }
        if(flag==1)
            printf("\nThe information is not found\n");
    break;


    }
    case 4:
    {
        int flag=1;
        printf("Enter Age = ");
        scanf("%d",&f);
        for(k=0; k<num; k++)
        {
            if(f==d[k].age)
            {
        printf("\nId             = %d", d[k].id );
        printf("\nName           = %s", d[k].name);
        printf("\nDepartment     = %s", d[k].department);
        printf("\nAge            = %d", d[k].age);
        printf("\nDay            = %s", d[k].day);
        printf("\nTime           = %.2f %s\n\n", d[k].time,d[k].a);

              flag=0;
            }

        }
        if(flag==1)
            printf("The information is not found\n\n");

    break;

    }
    case 5:
    {
        int flag=1;
        printf("Enter Day = ");
        scanf("%s",&u);
        for(k=0; k<num; k++)
        {
            if(strcmp(u,d[k].day)==0)
            {
        printf("\nId             = %d", d[k].id );
        printf("\nName           = %s", d[k].name);
        printf("\nDepartment     = %s", d[k].department);
        printf("\nAge            = %d", d[k].age);
        printf("\nDay            = %s", d[k].day);
        printf("\nTime           = %.2f %s\n\n", d[k].time,d[k].a);

              flag=0;
            }

        }
        if(flag==1)
            printf("\nThe information is not found\n");
    break;
    }
    case 6:
    {
        int flag=1;
        printf("Enter time = ");
        scanf("%f%s",&m,&u);
        for(k=0; k<num; k++)
        {
            if(m==d[k].time)
            {
        printf("\nId             = %d", d[k].id );
        printf("\nName           = %s", d[k].name);
        printf("\nDepartment     = %s", d[k].department);
        printf("\nAge            = %d", d[k].age);
        printf("\nDay            = %s", d[k].day);
        printf("\nTime           = %.2f %s\n\n", d[k].time,d[k].a);
        flag=0;
            }

        }
        if(flag==1)
            printf("\nThe information is not found\n");
    break;

    }
    default:
        printf("Wrong Input\n");
    }

 getch();
}


int Add_Patient_Info()
{
   printf("How many info do you want to add:");
   scanf("%d",&n);
   sum=n+num;
    for(int e=num,j=0;e<sum;e++)
    {
    printf("Enter the Serial number:");
    scanf("%d", &d[e].serial_no);

    printf("Enter the Name:");
     scanf("%s",&d[e].nam );

    printf("Enter Age:");
       scanf("%s",&d[e].Ptag);

    printf("Enter Disease:");
       scanf("%s", &d[e].dis);

    printf("Enter Day:");
    scanf("%s",&d[e].dy);

    printf("Enter Time:");
    scanf(" %s",&d[e].PatientTim);

     j++;

     num++;
   printf("\n");
    }
}
int View_Patient_Info()
{
   system("cls");

   printf("     \n\n\t\t\t\t\t**********************View Information***********************\n\n");
   printf("    \n\n\tSerial Number \t\tName\t\tAge   \t\tDisease  \t\tDay  \t\tTime\n\n");
   for(int e=1;e<num;e++)
   {
      printf("\n    \t%d   \t\t\t%s\t\t%s  \t\t%s  \t\t%s   \t\t%s  \n\n" ,d[e].serial_no,d[e].nam,d[e].Ptag,d[e].dis,d[e].dy,d[e].PatientTim);
   }
}

int Update_Patient_Info()
{
    int q, p;

    printf("What do you want to update?\n");
    printf("Enter your option\n");
    printf("1.Serial Number\n2.Name\n3.Age\n4.Disease\n5.Day\n6.Time\n");
    printf("Choice option=");
    scanf("%d", &q);

    if (q <= 6)
    {
        printf("Enter the serial number of the patient you want to update: ");
        scanf("%d", &p);

        int found = 0;

        for (int i = 1; i < num; i++)
        {
            if (d[i].serial_no == p)
            {
                found = 1;

                if (q == 1)
                {
                    printf("Enter the new Serial Number: ");
                    scanf("%d", &d[i].serial_no);
                }
                else if (q == 2)
                {
                    printf("Enter the new Name: ");
                    scanf("%s", &d[i].nam);
                }
                else if (q == 3)
                {
                    printf("Enter the new Age: ");
                    scanf("%s", &d[i].Ptag);
                }
                else if (q == 4)
                {
                    printf("Enter the new Disease: ");
                    scanf("%s ", &d[i].dis);
                }
                else if (q == 5)
                {
                    printf("Enter the new Day: ");
                    scanf("%s", &d[i].dy);
                }
                else if (q == 6)
                {
                    printf("Enter the new Time: ");
                    scanf(" %s", &d[i].PatientTim);
                }

                printf("Patient record updated successfully.\n");
                break; // Exit the loop once the record is found and updated
            }
        }

        if (!found)
        {
            printf("\n\nPatient with Serial No. %d not found.\n\n", p);
        }
    }
    else
    {
        printf("\n\nInvalid Option.\nPlease Try Again !\n\n");
    }
}



int Delete_Patient_Info()
{
   int serial, del;
    printf("Please enter the serial number of the patient you want to remove: ");
    scanf("%d", &serial);

    int found = 0; // Flag to check if the specified serial number is found

    for (int i = 1; i < num; i++)
    {
        if (d[i].serial_no == serial)
        {
            found = 1;

            printf("\n\n1.Remove whole record of the patient.\n2.Remove serial number.\n3.Remove name\n4.Remove age\n5.Remove disease \n6.Remove Day\n7.Remove Time\n");
            printf("What do you want to delete: ");
            scanf("%d", &del);

            switch (del)
            {
            case 1:
                // Shift elements one place to the left
                for (int j = i; j < num - 1; j++)
                {
                    strcpy(d[j].nam, d[j + 1].nam);
                    strcpy(d[j].dis, d[j + 1].dis);
                    strcpy(d[j].Ptag, d[j + 1].Ptag);
                    strcpy(d[j].dy, d[j + 1].dy);
                    strcpy(d[j].PatientTim, d[j + 1].PatientTim);
                }
                num--; // Decrement the total number of records
                break;

            case 2:
                d[i].serial_no = 0;
                break;

            case 3:
                strcpy(d[i].nam, "DELETED");
                break;

            case 4:
                strcpy(d[i].Ptag, "DELETED");
                break;

            case 5:
                strcpy(d[i].dis, "DELETED");
                break;

            case 6:
                strcpy(d[i].dy, "DELETED");
                break;

            case 7:
                strcpy(d[i].PatientTim, "DELETED");
                break;
            }

            break; // Exit the loop once the record is found and deleted
        }
    }

    if (!found)
    {
        printf("\n\nPatient with Serial No. %d not found.\n\n", serial);
    }
}
int Search_Patient_Info()
{   int serial,sear,f;
    float m;
    char u[100];

    printf("What do you want to search ?\n");
    printf("1.Serial no.\n2.Name\n3.Age\n4.Disease\n5.Day\n6.Time\n\nOption = ");
    scanf("%d",&sear);
    int found = 0; // Flag to check if the specified serial number is found

    switch(sear)
    {

     case 1:
    {
        printf("Enter Serial number of the patient=");
        scanf("%d", &serial);

        for (k = 0; k < num; k++)
        {
            if (serial == d[k].serial_no)
            {
                found = 1;
                printf("\nSerial Number  = %d", d[k].serial_no);
                printf("\nName           = %s", d[k].nam);
                printf("\nAge            = %s", d[k].Ptag);
                printf("\nDisease        = %s", d[k].dis);
                printf("\nDay            = %s", d[k].dy);
                printf("\nTime           = %s\n", d[k].PatientTim);
                break;
            }
        }

        if (!found)
        {
            printf("\n\nNot Found\n\n");
        }
        break;
    }
    case 2:
    {
        int flag=1;

        printf("Enter name=");
        scanf("%s",&u);

        for(k=0; k<num; k++)
        {
            if(strcmp(u,d[k].nam)==0)
            {
        printf("\nSerial Number  = %d", d[k].serial_no );
        printf("\nName           = %s", d[k].nam);
        printf("\nAge            = %s", d[k].Ptag);
        printf("\nDisease        = %s", d[k].dis);
        printf("\nDay            = %s", d[k].dy);
        printf("\nTime           = %s\n", d[k].PatientTim);
                flag=0;

            }
        }
        if(flag==1)
            printf("\nNot Found\n");

    break;

    }
    case 3:
    {
        int  flag=1;

        printf("Enter Age = ");
        scanf("%s",&u);

        for(k=0; k<num; k++)
        {
           if(strcmp(u,d[k].Ptag)==0)
            {
        printf("\nSerial Number  = %d", d[k].serial_no );
        printf("\nName           = %s", d[k].nam);
        printf("\nAge            = %s", d[k].Ptag);
        printf("\nDisease        = %s", d[k].dis);
        printf("\nDay            = %s", d[k].dy);
        printf("\nTime           = %s\n", d[k].PatientTim);

                flag=0;
            }


        }
        if(flag==1)
            printf("\nNot Found\n");
    break;


    }
    case 4:
    {
        int  flag=1;
        printf("Enter Disease = ");
        scanf("%s",&u);
        for(k=0; k<num; k++)
        {
            if(strcmp(u,d[k].dis)==0)
            {
        printf("\nSerial Number  = %d", d[k].serial_no );
        printf("\nName           = %s", d[k].nam);
        printf("\nAge            = %s", d[k].Ptag);
        printf("\nDisease        = %s", d[k].dis);
        printf("\nDay            = %s", d[k].dy);
        printf("\nTime           = %s\n", d[k].PatientTim);

                flag=0;
            }

        }
        if(flag==1)
            printf("Not Found\n\n");
    break;

    }
    case 5:
    {
        int  flag=1;
        printf("Enter Day = ");
        scanf("%s",&u);
        for(k=0; k<num; k++)
        {
            if(strcmp(u,d[k].dy)==0)
            {
        printf("\nSerial Number  = %d", d[k].serial_no );
        printf("\nName           = %s", d[k].nam);
        printf("\nAge            = %s", d[k].Ptag);
        printf("\nDisease        = %s", d[k].dis);
        printf("\nDay            = %s", d[k].dy);
        printf("\nTime           =  %s\n", d[k].PatientTim);

               flag=0;
            }

        }
        if(flag==1)
            printf("Not Found");
    break;
    }
    case 6:
    {
        int  flag=1;
        printf("Enter time = ");
        scanf("%s",&u);
        for(k=0; k<num; k++)
        {
           if(strcmp(u,d[k].PatientTim)==0)
            {
        printf("\nSerial Number  = %d", d[k].serial_no );
        printf("\nName           = %s", d[k].nam);
        printf("\nAge            = %s", d[k].Ptag);
        printf("\nDisease        = %s", d[k].dis);
        printf("\nDay            = %s", d[k].dy);
        printf("\nTime           = %s\n", d[k].PatientTim);

               flag=0;
            }

        }
        if(flag==1)
            printf("Not Found\n\n");
    break;

    }
    default:
        printf("Wrong Input\n");
    }
  getch();
}

int Patient_Appointment()
{ system("cls");

   int ch;
   while(ch!=4)
   {
   printf("\n\n1.Add Appointment\n");
   printf("\n2. View Appointment\n");
   printf("\n3.Main\n");

   printf("\nEnter Your Choice: ");
   scanf("%d", &ch);

   switch(ch)
    {
    case 1:
        Add_Appointment();

        break;
    case 2:
     View_Appointment();
     break;


    case 3:
          system("cls");
          return 'goto start';
        break;

    }
   }
}


int Add_Appointment()
{
   system("cls");
   printf("\n\n");
   printf("Total Appointment:");
   scanf("%d",&n);
   sum=n+num;
    for(i=num,j=0;i<sum;i++)
    {
    printf("Enter Token No.:");
    scanf("%d", &d[i].token_no);

    printf("Enter the Name:");
     scanf("%s",&d[i].Appnam );

    printf("Enter Age:");
    scanf("%s",&d[i].Appg );

    printf("Enter Gender:");
    scanf("%s",&d[i].gender);

    printf("Enter Phone No.:");
    scanf("%s",&d[i].AppPhn);

    printf("Enter Appointment Time:");
    scanf("%s",&d[i].AppT);


     j++;
     num++;
     printf("\n");
    }


}

int View_Appointment()
{
    system("cls");

   printf("     \n\n\n\t\t\t**********************View Appointment List***********************\n\n" );
   printf(" Token No.\t\tName\t\tAge\t\tGender\t\tPhone No.\t\tAppointment time \n\n");
   for(r=1;r<num;r++)
    {
      printf("\n  %d  \t\t%s \t\t%s\t\t%s\t\t%s \t\t %s",d[r].token_no,d[r].Appnam,d[r].Appg,d[r].gender,d[r].AppPhn,d[r].AppT);

    }

}


