#include <iostream>
#include <string>


using namespace std;

int main(){
    string dictionary;

    while (true) {
        cout << "Search your word (type 'exit' to quit): ";
        getline(cin, dictionary);

        if (dictionary == "exit") {
            break;
        }

        if (dictionary == "ABACUS") {
            cout << "AROUND 4000 YEARS AGO, THE CHINESE INVENTED THE ABACUS. IT IS BELIEVED TO BE THE FIRST COMPUTER. IT WAS MADE FROM WOODEN RACK THAT HAS METAL RODS WITH BEADS ATTACH TO THEM.";
         } else if (dictionary == "NAPIER'S BONE") {
            cout << "INVENTED BY JOHN NAPIER, THIS DEVICE USES 9 DIFFERENT IVORY STRIPS MARKED WITH NUMBERS TO MULTIPLY AND DIVIDE FOR CALCULATIONS.";
         } else if (dictionary == "PASCALINE") {
            cout << "INVENTED BY FRENCH MATHEMATICIAN-PHILOSOPHER BLAISE PASCAL. THE FIRST MECHANICAL AND AUTOMATIC CALCULATOR. IT COULD PERFORM ADDITION AND SUBTRACTION IN QUICK TIME.";
         } else if (dictionary == "STEPPED RECKONER") {
            cout << "INVENTED TO DEVELOP PASCAL'S INVENTION BY WILLHELM LEIBNIZ. IT IS ALSO KNOWN AS LEIBNIZ WHEEL. IT IS A DIGITAL MECHANICAL CALCULATOR AND WAS MADE OF FLUTED DRUMS INSTEAD OF GEARS.";
         } else if (dictionary == "ANALYTICAL ENGINE") {
            cout << "INVENTED BY CHARLES BABBAGE, A MECHANICAL COMPUTER THAT USED PUNCH CARDS AS INPUT. IT WAS CAPABLE OF PERFORMING OR SOLVING ANY MATHEMATICAL PROBLEM AND STORING INFORMATION AS A PERMANENT MEMORY.";
        } else if (dictionary == "TABULATING MACHINE") {
            cout << "INVENTED BY HERMAN HOLLERITH, A MECHANICAL TABULATOR THAT WAS BASED ON PUNCH CARDS. IT WAS CAPABLE OF TABULATING STATISTICS AND RECORD OR SORT DATA OR INFORMATION.";
         } else if (dictionary == "DIFFERENTIAL ANALYZER") {
            cout << "WAS THE FIRST ELECTRONIC INTRODUCED IN THE YEAR 1930 IN THE U.S, AN ANALOG DEVICE THAT WAS INVENTED BY VANNERVAR BUSH. THIS MACHINE CONSISTS OF VACUUM TUBES TO SWITCH ELECTRICAL SIGNALS TO PERFORM CALCULATIONS.";
        } else if (dictionary == "MARK 1") {
            cout << "INVENTED BY HOWARD AIKEN TO PERFORM LARGE CALCULATIONS OR CALCULATIONS INVOLVING LARGE NUMBERS. WAS BUILT AS A PARTNERSHIP BETWEEN IBM AND HARVARD. FIRST PROGRAMMABLE DIGITAL COMPUTER.";
         } else if (dictionary == "FIRST GENERATION COMPUTERS") {
            cout << "IN THE PERIOD OF THE YEAR 1940-1956, WAS REFERRED TO AS THE PERIOD OF FIRST GENERATION OF COMPUTERS. THESE MACHINES ARE SLOW, HUGE AND EXPENSIVE. VACUUM TUBES WERE USED AS THE BASIC COMPONENTS OF CPU AND MEMORY. IT IS DEPENDENT ON BATCH OPERATING SYSTEMS AND PUNCH CARDS.";
         } else if (dictionary == "SECOND GENERATION COMPUTERS") {
            cout << "IT WAS THE TIME TRANSISTORS WERE USED IN COMPUTERS. TRANSISTOR COMPUTERS ARE FASTER THAN FIRST GENERATION COMPUTERS. FOR PRIMARY MEMORY, MAGNETIC CORES WERE USED, AND FOR SECONDARY MEMORY MAGNETIC DISC AND TAPES FOR STORAGE PURPOSES.";
        } else if (dictionary == "THIRD GENERATION COMPUTERS") {
            cout << "INTEGRATED CIRCUITS ARE USED, ARE MORE RELIABLE, EFFICIENT AND SMALLER IN SIZE. IT USED REMOTE PROCESSING, TIME-SHARING, AND MULTIPROGRAMMING AS OPERATING SYSTEM.";
        } else if (dictionary == "FOURTH GENERATION COMPUTERS") {
            cout << "IT USED VLSI(VERY LARGE SCALE INTEGRATED) CIRCUITS. VLSI IS A CHIP CONTAINING BILLIONS OF TRANSISTORS AND OTHER CIRCUIT ELEMENTS AND BECAUSE OF THESE CHIPS, THE COMPUTERS OF THIS GENERATION ARE MORE COMPACT, POWERFUL, FAST, AND AFFORDABLE.";
        } else if (dictionary == "FIFTH GENERATION COMPUTERS") {
            cout << "USES ULSI(ULTRA LARGE SCALE INTEGRATED) CIRCUITS. MICROPROCESSORS CHIPS WITH TEN MILLION ELECTRONIC COMPONENTS ARE USED IN THESE COMPUTERS. PARALLEL PROCESSING HARDWARE AND AI SOFTWARE ARE ALSO USED IN FIFTH GENERATION. THE PROGRAMMING LANGUAGES LIKE C++, JAVA, .NET, ETC ARE USED.";
        } else if (dictionary == "COMPUTER") {
            cout << "IS AN ELECTRONIC DEVICE THAT CAN RECEIVE, STORE, PROCESS, AND OUTPUT DATA. A MACHINE THAT CAN PERFORM TASKS AND OPERATIONS, RANGING FROM SIMPLE CALCULATIONS TO COMPLEX SIMULATIONS AND ARTIFICIAL INTELLIGENCE.";
        } else if (dictionary == "DIGITAL COMPUTERS") {
            cout << "CAPABLE OF PROCESSING INFORMATION IN DIGITAL DISCRETE FORM.";
        } else if (dictionary == "ANALOG COMPUTERS") {
            cout << "USED TO PROCESS DATA GENERATED BY ONGOING PHYSICAL PROCESSES.";
        } else if (dictionary == "HYBRID COMPUTERS") {
            cout << "USES BOTH ANALOG AND DIGITAL TECHNOLOGY. HAS THE SPEED OF AN ANALOG AND THE ACCURACY OF A DIGITAL COMPUTER.";
        } else if (dictionary == "SUPERCOMPUTERS") {
            cout << "MOST POWERFUL AND EXPENSIVE COMPUTERS THAT ARE USED FOR COMPLEX SCIENTIFIC CALCULATIONS, SIMULATIONS, AND RESEARCH.";
        } else if (dictionary == "MAINFRAME COMPUTERS") {
            cout << "THESE ARE LARGE AND POWERFUL COMPUTERS THAT ARE USED BY LARGE ORGANIZATIONS SUCH AS BANKS, AIRLINES, AND GOVERNMENT AGENCIES.";
        } else if (dictionary == "MINI COMPUTERS") {
            cout << "SMALLER AND LESS POWERFUL THAN MAINFRAME COMPUTERS, BUT THEY ARE STILL CAPABLE OF HANDLING MULTIPLE USERS AND PROCESSING LARGE AMOUNT OF DATA.";
        } else if (dictionary == "PERSONAL COMPUTERS") {
            cout << "THESE ARE SMALL AND AFFORDABLE COMPUTERS THAT ARE DESIGNED FOR INDIVIDUAL USERS.";
        } else if (dictionary == "WORKSTATIONS") {
            cout << "THESE ARE HIGH-PERFORMANCE COMPUTERS THAT ARE USED BY PROFESSIONALS SUCH AS ARCHITECTS, ENGINEERS, AND DESIGNERS TO RUN COMPLEX SOFTWARE APPLICATIONS FOR TASKS SUCH AS 3D MODELING, ANIMATION, AND SCIENTIFIC VISUALIZATION.";
        } else if (dictionary == "EMBEDDED SYSTEMS") {
            cout << "THESE ARE SPECIALIZED COMPUTERS THAT ARE BUILT INTO OTHER DEVICES SUCH AS CARS, APPLIANCES, AND MEDICAL EQUIPMENT TO CONTROL THEIR OPERATIONS AND PERFORM SPECIFIC FUNCTIONS.";
        } else if (dictionary == "MOBILE DEVICES") {
            cout << "THESE ARE SMALL AND PORTABLE COMPUTERS THAT ARE DESIGNED FOR ON-THE-GO USE, SUCH AS SMARTPHONES, TABLETS, AND LAPTOPS.";
        } else if (dictionary == "MICRO COMPUTERS") {
            cout << "THESE TYPE OF DIGITAL COMPUTER USES MICROPROCESSOR AND INCLUDE BOTH DESKTOPS AND LAPTOPS. THESE COMPUTERS CAN WORK ON SMALL VOLUME OF DATA, ARE VERY VERSATILE AND CAN HANDLE VARIETY OF APPLICATIONS.";
        } else if (dictionary == "PERIPHERAL DEVICES") {
            cout << "DEVICES THAT ARE USED FOR PERFORMING THE SPECIFIC FUNCTIONS AND ARE CONNECTED TO THE COMPUTER EXTERNALLY.";
        } else if (dictionary == "SYSTEM SOFTWARE") {
            cout << "THESE ARE THOSE SOFTWARE, WITHOUT WHICH OUR PC, LAPTOP WON'T RUN.";
        } else if (dictionary == "APPLICATION SOFTWARE") {
            cout << "THESE ARE THOSE SOFTWARE, WITHOUT WHICH OUR PC, LAPTOP CAN RUN.";
        } else if (dictionary == "HACKER") {
            cout << "THEY WILL JUST WARN YOU SOMETHING ABOUT MALICIOUS ACTIVITY GOING AROUND IN YOUR COMPUTER.";
        } else if (dictionary == "CRACKER") {
            cout << "THEY WILL TRY TO STEAL YOUR INFORMATION WITHOUT INFORMING YOU.";
        } else {
            cout << "Word not found!";
        }
        cout << "\n\n";
    }
    return 0;
}
