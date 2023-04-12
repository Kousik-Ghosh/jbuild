#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fstream>
#include<iostream>

using namespace std;

void _run(){
   string bin = "./bin";
   struct stat sb;
   if(stat(bin.c_str(), &sb) == 0){
      system("rm -r ./bin");
   }else{
      system("mkdir ./bin");
   }
   system("javac -d ./bin/ ./src/*.java");
   system("cd bin");
   system("java -cp ./bin Runner");
}

void _create_project(int argc, char* argv[]){
   string cmd = "mkdir ";
   string project_name(argv[1]);
   cmd = cmd.append(project_name);
   system(cmd.c_str());

   cmd = "mkdir ";
   cmd = cmd.append("./").append(project_name).append("/").append("src");
   system(cmd.c_str());

   cmd = "touch ";
   cmd = cmd.append("./").append(project_name).append("/").append("src").append("/").append("Runner.java");
   system(cmd.c_str());

   string runner_java = "./";
   runner_java = runner_java.append(project_name).append("/").append("src").append("/").append("Runner.java");
   ofstream outfile;
   outfile.open(runner_java, std::ios::out | std::ios::app);
   outfile<<"public class Runner {\n";
   outfile<<"  public static void main(String[] args){\n";
   outfile<<"\n";
   outfile<<"  }\n";
   outfile<<"}\n";
   outfile.close();

}

int main(int argc, char* argv[]) {
   if(strcmp(argv[1], "run") == 0){
      _run();
   }else{
      _create_project(argc, argv);
   }
   return 0;   
}