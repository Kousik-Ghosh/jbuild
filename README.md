# jbuild
## A terminal based tool to create basic Java boilerplate for unix-like OS.
### Command at glance
```
    $ jbuild <project-name>
    $ cd <project-name>
    $ jbuild run
```

-   Command to initialize new project
```
    $ jbuild <project-name>
```

-   Creates following directory structure on initialization.
```
  [pwd]
    |
    |_[Project]
        |
        |__src
            |__Runner.java
```

-   Command to run
```
    $ cd <project-name>
    $ jbuild run
```

-   Creates following directory structure on run.
```
  [pwd]
    |
    |_[Project]
        |
        |__src
        |   |__Runner.java
        |
        |__bin
            |__Runner.class
```
# Building jbuild
Build using the following command and put the executale under your class-path.
```
    c++ jbuild.cpp -o jbuild  
```
**Note:** Multiple ``*.java`` files can be ceated under ``src`` directory. Corrosponding all ``*.class`` files will be created under ``bin`` directory.

**Pre-requisite:**
-   Java JDK & JVM
-   C++ compiler