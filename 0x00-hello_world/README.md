
# 0x00. C - Hello, World
Low level programming with C

### About C programming
### 

### 
#### Script that runs a C file through the preprocessor and save the result into another file.
> gcc $CFILE -E -o c

### 
#### Script that compiles a C file but does not link.
> gcc -c $CFILE

### 
#### Script that prints all the groups the current user is part of.
> groups
###
![My name is Betty](https://github.com/Cocorine/alx-system_engineering-devops/blob/main/resources/permissions/2-groups.png)

### 
#### Script that changes the owner of the file hello to the user betty.
> chown betty hello
or
> sudo chown betty hello
###
![My name is Betty](https://github.com/Cocorine/alx-system_engineering-devops/blob/main/resources/permissions/3-new_owner.png)

### 
#### Script that creates an empty file called hello.
> touch hello
###
![My name is Betty](https://github.com/Cocorine/alx-system_engineering-devops/blob/main/resources/permissions/4-empty.png)

### 
#### Script that adds execute permission to the owner of the file hello.
> chmod u+x hello
###
![My name is Betty](https://github.com/Cocorine/alx-system_engineering-devops/blob/main/resources/permissions/5-execute.png)

###
#### Script that adds execute permission to the owner and the group owner, and read permission to other users, to the file hello.
> chmod ug+x,o+r hello
###### Or
> chmod u+x,g+x,o+r hello
###
![My name is Betty](https://github.com/Cocorine/alx-system_engineering-devops/blob/main/resources/permissions/6-multiple_permissions.png)

###
#### Script that adds execution permission to the owner, the group owner and the other users, to the file hello.
> chmod +x hello
###### Or
> chmod a+x hello
###
![My name is Betty](https://github.com/Cocorine/alx-system_engineering-devops/blob/main/resources/permissions/7-everybody.png)

###
#### Script that sets the permission to the file hello as follows.
> chmod 007 hello
###### Or
> chmod -rwx,o+rwx hello
###### Or
> chmod a-rwx,o+rwx hello
###
![My name is Betty](https://github.com/Cocorine/alx-system_engineering-devops/blob/main/resources/permissions/8-James_Bond.png)

###
#### Script that sets the mode of the file hello.
> chmod chmod 753 hello
###
![My name is Betty](https://github.com/Cocorine/alx-system_engineering-devops/blob/main/resources/permissions/9-John_Doe.png)

###
#### Script that sets the mode of the file hello the same as olleh’s mode.
> chmod --reference=olleh hello
###
![My name is Betty](https://github.com/Cocorine/alx-system_engineering-devops/blob/main/resources/permissions/10-mirror_permissions.png)

###
#### Script that adds execute permission to all subdirectories of the current directory for the owner, the group owner and all other users. Regular files should not be changed.
> chmod -R ugo+x .
###
![My name is Betty](https://github.com/Cocorine/alx-system_engineering-devops/blob/main/resources/permissions/11-directories_permissions.png)

###
#### Script that creates a directory called my_dir with permissions 751 in the working directory.
> mkdir -m 751 my_dir
###
![My name is Betty](https://github.com/Cocorine/alx-system_engineering-devops/blob/main/resources/permissions/12-directory_permissions.png)

###
#### Script that changes the group owner to school for the file hello.
> chgrp school hello
###
![My name is Betty](https://github.com/Cocorine/alx-system_engineering-devops/blob/main/resources/permissions/13-change_group.png)

###
#### Script that changes the owner to vincent and the group owner to staff for all the files and directories in the working directory.
> sudo chown -R vincent:staff .
###
![My name is Betty](https://github.com/Cocorine/alx-system_engineering-devops/blob/main/resources/permissions/100-change_owner_and_group.png)

###
#### Script that changes the owner and the group owner of _hello to vincent and staff respectively.
> chown -h vincent:staff _hello
###
![My name is Betty](https://github.com/Cocorine/alx-system_engineering-devops/blob/main/resources/permissions/101-symbolic_link_permissions.png)

### 
#### Script that changes the owner of the file hello to betty only if it is owned by the user guillaume.
> sudo chown --from=guillaume betty hello
###
![My name is Betty](https://github.com/Cocorine/alx-system_engineering-devops/blob/main/resources/permissions/102-if_only.png)

### 
#### Script that will play the StarWars IV episode in the terminal.
> telnet towel.blinkenlights.nl
