if(choice==-1)break;
      if(choice!=1 && choice!=2)
      {
          printf("change your choices\n");
          continue;
      }
      printf("enter array index\n");
      scanf("%d",&index);
      if(index<0 || index>9){ printf("your value should be between 1-9\n");
     continue;
          
      }switch(choice){
      case 1:printf("enter the value:\n");
      scanf("%lf",&myvalue);
      myarray[index]=myvalue;
      printf("your write operation is succes\n\n");
      break;
      case 2:printf("myarray[%d]:%f\n",index,myarray[index]);
      break;
      }
      
      
      
      
  }while(choice!=1);
    return 0;
}
