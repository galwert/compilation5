#!/usr/bin/bash
RED="\e[31m"
GREEN="\e[32m"
ENDCOLOR="\e[0m"
FOLDER="tests3"

print_diff=0
failed=0
num_of_tests=0

if [ $# -eq 1 ] && [ "$1" = "-d" ]
    then     
        print_diff=1 
        echo -e "< present in res missing in out"
        echo -e "> present in out missing in res"      
fi

for inFile in ${FOLDER}/*.in
do        
    echo -n "running test ${inFile%.in} ... "
    ./hw5 < $inFile | lli > ${inFile%.in}.res 2> /dev/null 
    diff ${inFile%.in}.res ${inFile%.in}.out &> /dev/null

    retval=$?
    if [ $retval -ne 0 ];
        then
            failed=$[$failed+1]
            echo -e "${RED}ERROR${ENDCOLOR}"
        else
            echo -e "${GREEN}PASSED${ENDCOLOR}"
    fi

    if [ $print_diff -eq 1 ]
        then
            diff ${inFile%.in}.res ${inFile%.in}.out
    fi

    num_of_tests=$[$num_of_tests+1]
done

if [ $failed -ne 0 ];
    then
        echo -e "Conclusion: ${RED}Failed${ENDCOLOR} ${failed} out of ${num_of_tests} tests"
    else
        echo -e "Conclusion: ${GREEN}Passed all tests!${ENDCOLOR}"
    fi


