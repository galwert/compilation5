#!/usr/bin/bash

echo "Compiling ..."
ERROR=$(make 2>&1 > /dev/null)
if [[ $? != 0 ]] 
	then
		echo -e "${RED}Problem with make:${ENDCOLOR}"
        echo "${ERROR}"
        echo -e "${RED}Exiting${ENDCOLOR}"
		exit
fi


dos2unix tests1/run.sh && chmod +x ./tests1/run.sh
dos2unix tests2/run.sh && chmod +x ./tests2/run.sh
dos2unix tests3/run.sh && chmod +x ./tests3/run.sh
dos2unix tests4/run.sh && chmod +x ./tests4/run.sh
dos2unix tests5/run.sh && chmod +x ./tests5/run.sh


if [ $# -eq 1 ] && [ "$1" = "-d" ]
    then     
		./tests1/run.sh -d
		./tests2/run.sh -d
		./tests3/run.sh -d
		./tests4/run.sh -d
		./tests5/run.sh -d
	else
		./tests1/run.sh
		./tests2/run.sh
		./tests3/run.sh
		./tests4/run.sh
		./tests5/run.sh
fi


