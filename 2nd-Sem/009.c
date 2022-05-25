// Name : Swapnil Baban Shelke
// Class : BCS
// Roll Number : 48
// DITMS

// Program to delete a record from binary file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct person{
    char *name;
    int code;
    int number;
};

int createBinFile(char *fname){
    FILE *fp;
    struct person newrecord; 

    // Open for binary writing 
    fp=fopen(fname, "wb");
    if(!fp){
          printf("Unable to open file!");
          return -1;
    }

    newrecord.name="aaa bbbb"; 
    newrecord.code=12345; 
    newrecord.number=1; 
    fwrite(&newrecord, sizeof(struct person), 1, fp); 

    
    newrecord.name="aaa bbbb"; 
    newrecord.code=34567; 
    newrecord.number=2; 
    fwrite(&newrecord, sizeof(struct person), 1, fp); 

    newrecord.name="aaa bbbb"; 
    newrecord.code=12345; 
    newrecord.number=3; 
    fwrite(&newrecord, sizeof(struct person), 1, fp); 

   fclose(fp);
   return 0; 
}

int readBinFile(char *fname){
    FILE *fp; 
    struct person myrecord; 

    fp=open(fname, "rb");
    if(!fp){
       printf("Unable to open file!");
       return -1;
    }

    printf("The following records are in the binary fiel %s:\n", fname); 
    while(fread(&myrecord, sizeof(struct person),1,fp)!=NULL){
       printf("%s\n",myrecord.name);
       printf("%d\n",myrecord.code);
       printf("%d\n",myrecord.number);
    }
    fclose(fp);
    return 0; 
}

int deleteRecordByName(char *fname, char *searchname){
    FILE *fp;
    FILE *fp_tmp;
    int found=0; 
    struct person myrecord; 

    fp=fopen(fname,"rb");
    if(!fp){
        printf("Unable to open file %s", fname);
        return -1;
    }

    fp_tmp=fopen("tmp.bin", "wb");
    if(!fp_tmp){
        printf("Unable to open the file");
        return -1;
    }

    while (fread(&myrecord,sizeof(struct person),1,fp)!=NULL){
      if(strcmp(searchname, myrecord.name)==0){
          printf("A record with request name found and deleted. \n\n");
      }
      else{
          fwrite(&myrecord, sizeof(struct person), 1, fp_tmp);
      }
    }

    if(! found){
         printf("No records found with the requested name: %s\n\n," ,searchname);
    }
    fclose(fp);
    fclose(fp_tmp);

    remove(fname);
    rename("tmp.bin",fname);

    return 0;
}

int main(){
    int result, errno;

    // setup a new file  on each run. 
    result = createBinFile("test.bin");
    if(result == -1){
        perror("Erro rcreating bin file!");
        exit(1);
    }

    result= readBinFile("test.bin");
    if(result == -1){
        perror("Erro reading bin file!");
        exit(1);
    }

    result = deleteRecordByName("test.bin","cc ddd");
    if(result == -1){
       perror("Error deleting record!"); 
       exit(1);
    }


    result = readBinFile("test.bin");
    if(result == -1){
       perror("Error reading bin file!");
       exit(1);
    }
    return 0;
}