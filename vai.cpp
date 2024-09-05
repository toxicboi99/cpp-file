#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime> // must include this header file to use time function

using namespace std;

// function to wish user according to time
void wishme(){
    // current date  and time based on your system timezone
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning Boss"<<endl;
        string phrase = "Good Morning Boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon Boss"<<endl;
        string phrase = "Good Afternoon Boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    
    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening Boss"<<endl;
        string phrase = "Good Evening Boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl
        << dt <<endl;
}

int main()
{
    system("cls");

    cout<<"\t\t\t<============================================= W E L C O M E ==========================================>"<<endl;
    cout<<"\t\t\t<============================================= I'M A VIRTUAL ASSISTANT ==========================================>"<<endl;
    cout<<"\t\t\t<============================================= MY NAME IS Ritesh Virtual AI ==========================================>"<<endl;
    cout<<"\t\t\t<============================================= I'M HERE TO HELP YOU ==========================================>"<<endl<<endl;

    char password[20]; //to take password
    char ch[100]; // to take command from the user

    do
    {
        cout<<"======================="<<endl;
        cout<<"| ENTER YOUR PASSWORD |"<<endl;
        cout<<"======================="<<endl<<endl;
        string phrase = "enter your password";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        gets(password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(strcmp(password, "Ritesh")==0){
            cout<<"\n<==================================================================================================>\n\n";
            wishme();
            do{
                cout<<"\n<==================================================================================================>\n\n";
                cout<<endl<<"How can i help you boss...."<<endl<<endl;

                string phrase = "How can i help you boss";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Your query ===> ";
                gets(ch);
                cout<<endl;
                cout<<"Here is the result for your query ===> ";

                if(strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0 ){
                    cout<<"Hello Boss....."<<endl;
                    string phrase = "Hello Boss";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                
                else if(strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0 ){
                    cout<<"Good Bye sir, have a nice day!!!!"<<endl;
                    string phrase = "Good Bye sir, have a nice day";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
                
                else if(strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0 || strcmp(ch, "about") == 0 ){
                    cout<<"I'm a virtual assistant created by Ritesh Prasad Shah !!!"<<endl;
                    string phrase = "I am a virtual assistant created by Ritesh Prasad Shah";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how is your day") == 0 ){
                    cout<<"I'm good sir, tell me how can i help you.."<<endl;
                    string phrase = "I'm good sir, tell me how can i help you";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "time") == 0 || strcmp(ch, "date") == 0){
                    // make function to show date and time
                    datetime();
                }

                else if(strcmp(ch, "open notepad") == 0){
                    cout<<"openining notepad....."<<endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(strcmp(ch, "open google") == 0){
                    cout<<"openining google....."<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if(strcmp(ch, "open youtube") == 0){
                    cout<<"openining YouTube....."<<endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if(strcmp(ch, "open instagram") == 0){
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.instagram.com");
                }
                
                 else if (strcmp(ch, "open facebook") == 0) {
                    cout<<"openining Facebook....."<<endl;
                    string phrase = "opening Facebook";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.facebook.com");
                 } 
                else if (strcmp(ch, "open gmail") == 0) {
                    cout<<"openining gmail....."<<endl;
                    string phrase = "opening gmail";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://mail.google.com");
                }
                else if (strcmp(ch, "open linkedin") == 0) {
                    cout<<"openining linkedin....."<<endl;
                    string phrase = "opening linkedin";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.linkedin.com");
                 }
                else if (strcmp(ch, "open twitter") == 0) {
                    cout<<"openining twitter....."<<endl;
                    string phrase = "opening twitter";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start https://www.twitter.com");
                 } 
                 else if (strcmp(ch, "open notepad") == 0) {
                    cout<<"openining notepad....."<<endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start notepad");
                 } 
                 else if (strcmp(ch, "open calculator") == 0) {
                    cout<<"openining calculator....."<<endl;
                    string phrase = "opening calculator";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start calc");
                 } 
                 else if (strcmp(ch, "open edge") == 0) {
                    cout<<"openining edge....."<<endl;
                    string phrase = "opening edge";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start msedge");
                 } 
                 else if (strcmp(ch, "open file explorer") == 0) {
                    cout<<"openining file explorer....."<<endl;
                    string phrase = "opening file explorer";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start explorer");
                 } 
                 else if (strcmp(ch, "open word") == 0) {
                    cout<<"openining word....."<<endl;
                    string phrase = "opening word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start winword");
                 } 
                 else if (strcmp(ch, "open excel") == 0) {
                    cout<<"openining excel....."<<endl;
                    string phrase = "opening excel";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start excel");
                 } 
                 else if (strcmp(ch, "open powerpoint") == 0) {
                    cout<<"openining powerpoint....."<<endl;
                    string phrase = "opening powerpoint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start powerpnt");
                 } 
                 else if (strcmp(ch, "open outlook") == 0) {
                    cout<<"openining outlook....."<<endl;
                    string phrase = "opening outlook";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start outlook");
                 } 
                 else if (strcmp(ch, "open onenote") == 0) {
                    cout<<"openining onenote....."<<endl;
                    string phrase = "opening onenote";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start onenote");
                 } 
                 else if (strcmp(ch, "open access") == 0) {
                    cout<<"openining access....."<<endl;
                    string phrase = "opening access";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start msaccess");
                 }
                 else if (strcmp(ch, "open publisher") == 0) {
                    cout<<"openining publisher....."<<endl;
                    string phrase = "opening publisher";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start mspub");
                 }
                 else if (strcmp(ch, "open command prompt") == 0) {
                    cout<<"openining command prompt....."<<endl;
                    string phrase = "opening command prompt";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start cmd");
                 } 
                 else if (strcmp(ch, "open task manager") == 0) {
                    cout<<"openining task manager....."<<endl;
                    string phrase = "opening task manager";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start taskmgr");
                 } 
                 else if (strcmp(ch, "open settings") == 0) {
                    cout<<"openining settings....."<<endl;
                    string phrase = "opening settings";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start ms-settings:");
                 } 
                 else if (strcmp(ch, "open paint") == 0) {
                    cout<<"openining paint....."<<endl;
                    string phrase = "opening paint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start mspaint");
                 } 
                 else if (strcmp(ch, "open wordpad") == 0) {
                    cout<<"openining wordpad....."<<endl;
                    string phrase = "opening wordpad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start write");
                 } 
                 else if (strcmp(ch, "open powershell") == 0) {
                    cout<<"openining powershell....."<<endl;
                    string phrase = "opening powershell";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start powershell");
                 } 
                 else if (strcmp(ch, "open control panel") == 0) {
                    cout<<"openining control panel....."<<endl;
                    string phrase = "opening control panel";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start control");
                 } 
                 else if (strcmp(ch, "open device manager") == 0) {
                    cout<<"openining device manager....."<<endl;
                    string phrase = "opening device manager";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start devmgmt.msc");
                 } 
                 else if (strcmp(ch, "open disk management") == 0) {
                    cout<<"openining disk management....."<<endl;
                    string phrase = "opening disk management";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start diskmgmt.msc");
                 } 
                 else if (strcmp(ch, "open windows update") == 0) {
                    cout<<"openining windows update....."<<endl;
                    string phrase = "opening windows update";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start ms-settings:windowsupdate");
                 } 
                 else if (strcmp(ch, "open event viewer") == 0) {
                    cout<<"openining event viewer....."<<endl;
                    string phrase = "opening event viewer";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start eventvwr.msc");
                 }
                 else if (strcmp(ch, "open performance monitor") == 0) {
                    cout<<"openining performance monitor....."<<endl;
                    string phrase = "opening performance monitor";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start perfmon.msc");
                 }
                 else if (strcmp(ch, "open resource monitor") == 0) {
                    cout<<"openining resource monitor....."<<endl;
                    string phrase = "opening resource monitor";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start resmon");
                 }
                 else if (strcmp(ch, "open services") == 0) {
                    cout<<"openining services....."<<endl;
                    string phrase = "opening services";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start services.msc");
                }
                else if (strcmp(ch, "open system information") == 0) {
                    cout<<"openining system information....."<<endl;
                    string phrase = "opening system information";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start msinfo32");
                }
                else if (strcmp(ch, "open system properties") == 0) {
                    cout<<"openining system properties....."<<endl;
                    string phrase = "opening system properties";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start sysdm.cpl");
                }
                else if (strcmp(ch, "open registry editor") == 0) {
                    cout<<"openining registry editor....."<<endl;
                    string phrase = "opening registry editor";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start regedit");
                }
                else if (strcmp(ch, "open network connections") == 0) {
                    cout<<"openining network connections....."<<endl;
                    string phrase = "opening network connections";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start ncpa.cpl");
                }
                else if (strcmp(ch, "open network and sharing center") == 0) {
                    cout<<"openining network and sharing center....."<<endl;
                    string phrase = "opening network and sharing center";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start control.exe /name Microsoft.NetworkAndSharingCenter");
                }
                else if (strcmp(ch, "open sound settings") == 0) {
                    cout<<"openining sound settings....."<<endl;
                    string phrase = "opening sound settings";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start mmsys.cpl");
                }
                else if (strcmp(ch, "open windows defender") == 0) {
                    cout<<"openining windows defender....."<<endl;
                    string phrase = "opening windows defender";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start windowsdefender:");
                }
                else if (strcmp(ch, "open windows security") == 0) {
                    cout<<"openining windows security....."<<endl;
                    string phrase = "opening windows security";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start ms-settings:windowsdefender");
                }
                else if (strcmp(ch, "open firewall") == 0) {
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start firewall.cpl");
                }
                else if (strcmp(ch, "open microsoft store") == 0) {
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start ms-windows-store:");
                }
                else if (strcmp(ch, "open snipping tool") == 0) {
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start SnippingTool");
                 }
                 else if (strcmp(ch, "open windows media player") == 0) {
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start wmplayer");
                 }
                 else if (strcmp(ch, "open magnifier") == 0) {
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start magnify");
                 }
                 else if (strcmp(ch, "open narrator") == 0) {
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start narrator");
                 }
                 else if (strcmp(ch, "open on screen keyboard") == 0) {
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start osk");
                 }
                 else if (strcmp(ch, "open disk cleanup") == 0) {
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start cleanmgr");
                 }
                 else if (strcmp(ch, "open character map") == 0) {
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start charmap");
                 }
                 else if (strcmp(ch, "open system restore") == 0) {
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start rstrui");
                 }
                 else if (strcmp(ch, "open remote desktop") == 0) {
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start mstsc");
                 }
                 else if (strcmp(ch, "open credential manager") == 0) {
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start control /name Microsoft.CredentialManager");
                 }
                 else if (strcmp(ch, "open data execution prevention") == 0) {
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start systempropertiesdataexecutionprevention");
                 }
                 else if (strcmp(ch, "open system protection") == 0) {
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start systempropertiesprotection");
                 }
                 else if (strcmp(ch, "open advanced system settings") == 0) {
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                     system("start systempropertiesadvanced");
                 }

                else{
                    cout<<"Sorry could not understand your query please ty again !!!"<<endl;
                    string phrase = "Sorry could not understand your query please ty again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


            }while(1);
        }
        else
                {
                    system("cls");

                    cout << "\t\t\t<============================= W E L C O M E=============================>" << endl;
                    cout << "\t\t\t<============================= I'M VIRTUAL ASSISTANT =============================>" << endl;
                    cout << "\t\t\t<============================= MY NAME IS INERTIA =============================>" << endl;
                    cout << "\t\t\t<============================= I'M HERE TO HELP YOU AND MAKE YOUR LIFE EASY =============================>" << endl
                         << endl;

                    cout << "======================" << endl;
                    cout << "X Incorrect Password X" << endl;
                    cout << "======================" << endl
                         << endl;
                    string phrase = "Incorrect Password, Please enter correct password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);
    

    return 0;
}