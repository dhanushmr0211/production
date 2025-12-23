#!/bin/bash

while true
do
    echo
    echo "SHELL SCRIPT MENU"
    echo
    echo "1. Save ls -ltr output to golisting file"
    echo "2. Display First day of Odd Sem 3rd Sem"
    echo "3. Check backup status based on current day"
    echo "4. Exit"
    echo

    read -p "Enter your choice [1-4]: " choice

    case $choice in
        1)
            # Part (a)
            ls -ltr > golisting
            echo "Output saved to file 'golisting'"
            ;;
        2)
            # Part (b)
            day=01
            month=08
            year=2024
            echo "First day of Odd Sem 3rd Sem is $day/$month/$year"
            ;;
        3)
            # Part (c)
            dayname=$(date +%A)

            if [ "$dayname" = "Sunday" ]; then
                echo "Today is $dayname : Full system backup day."
            elif [ "$dayname" = "Wednesday" ]; then
                echo "Today is $dayname : No backup scheduled."
            else
                echo "Today is $dayname : Incremental backup day."
            fi
            ;;
        4)
            echo "Exiting... Have a nice day!"
            break
            ;;
        *)
            echo "Invalid choice. Please enter a number between 1 and 4."
            ;;
    esac
done