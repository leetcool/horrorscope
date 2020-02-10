#include <iostream>
#include <fstream>

static void show_usage(std::string name)
{
    std::cerr << "\nHorrorscope Usage: " << name << " <Optional Arguments> \n\n"
    		  << "Dependencies : \t\tcurl,cowsay,lolcat\n\n"
              << "Options:\n"
              << "\t-1\t\tShow yesterday's horoscope\n"
              << "\t+1\t\tShow tomorrow's horoscope\n"
              << "\t-r\t\tReset the config file\n"
              << "\t-d\t\tInstall dependencies (Only Termux) \n"
              << "\t-h\t\tShow this help message\n"
              << "\tNO ARGUMENT\tShow today's horoscope\n\n"
              << "Repo:\thttps://github.com/leetcool/horrorscope\n"
              << std::endl;
}

int main(int argc, char** argv)
{
	int user_sign;
	std::string CONFIG = "/.config/horrorscope.conf";
	std::string HOME = getenv ("HOME");
	std::string FULL_PATH = HOME+CONFIG;
	std::ifstream Check_File(FULL_PATH);
	std::string tmp_word;
	std::string arg;
	if (argc > 1)
	{
		arg = argv[1];
	}
	if(!Check_File) {
		std::cerr << "Unable to open " << FULL_PATH << std::endl;
		std::cout << "Generating New Config File " << std::endl;
		system("mkdir $HOME/.config &> /dev/null");
		std::cout << "\n Select Your Sign Please \n \n 01. Aries       : 21 March     - 19 April \n 02. Taurus      : 20 April     - 20 May \n 03. Gemini      : 21 May       - 21 June\n 04. Cancer      : 22 June      - 22 July \n 05. Leo         : 23 July      - 22 August \n 06. Virgo       : 23 August    - 22 September \n 07. Libra       : 23 September - 23 October \n 08. Scorpio     : 24 October   - 22 November \n 09. Sagittarius : 23 November  - 21 December \n 10. Capricorn   : 22 December  - 19 January \n 11. Aquarius    : 20 January   - 18 February \n 12. Pisces      : 19 February  - 20 March\n\n Choose Your Sign (1/2/3...) : ";
		std::cin >> user_sign;
		std::cout << "\n You Selected : " << user_sign << "\n" << std::endl;
		switch (user_sign)
		{
		case 1:
			system("rm -rf $HOME/.config/horrorscope.conf &> /dev/null; echo Aries &> $HOME/.config/horrorscope.conf");
			break;
		case 2:
			system("rm -rf $HOME/.config/horrorscope.conf &> /dev/null; echo Taurus &> $HOME/.config/horrorscope.conf");
			break;
		case 3:
			system("rm -rf $HOME/.config/horrorscope.conf &> /dev/null; echo Gemini &> $HOME/.config/horrorscope.conf");
			break;
		case 4:
			system("rm -rf $HOME/.config/horrorscope.conf &> /dev/null; echo Cancer &> $HOME/.config/horrorscope.conf");
			break;
		case 5:
			system("rm -rf $HOME/.config/horrorscope.conf &> /dev/null; echo Leo &> $HOME/.config/horrorscope.conf");
			break;
		case 6:
			system("rm -rf $HOME/.config/horrorscope.conf &> /dev/null; echo Virgo &> $HOME/.config/horrorscope.conf");
			break;
		case 7:
			system("rm -rf $HOME/.config/horrorscope.conf &> /dev/null; echo Libra &> $HOME/.config/horrorscope.conf");
			break;
		case 8:
			system("rm -rf $HOME/.config/horrorscope.conf &> /dev/null; echo Scorpio &> $HOME/.config/horrorscope.conf");
			break;
		case 9:
			system("rm -rf $HOME/.config/horrorscope.conf &> /dev/null; echo Sagittarius &> $HOME/.config/horrorscope.conf");
			break;
		case 10:
			system("rm -rf $HOME/.config/horrorscope.conf &> /dev/null; echo Capricorn &> $HOME/.config/horrorscope.conf");
			break;
		case 11:
			system("rm -rf $HOME/.config/horrorscope.conf &> /dev/null; echo Aquarius &> $HOME/.config/horrorscope.conf");
			break;
		case 12:
			system("rm -rf $HOME/.config/horrorscope.conf &> /dev/null; echo Pisces &> $HOME/.config/horrorscope.conf");
			break;
		default:
			system("rm -rf $HOME/.config/horrorscope.conf");
			break;
		}
		show_usage(argv[0]);
	}
	else{
			Check_File >> tmp_word; // >> reads only till first white space so usefull for reading a word only.

			if (arg == "-1")
			{
				if (tmp_word == "Aries")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/aries-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==4{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==2{print; exit}' | cut -b 4610- | rev | cut -c5- | rev)\";  PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==6{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==7{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==5{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==3{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Taurus")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/taurus-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==4{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==2{print; exit}' | cut -b 4610- | rev | cut -c5- | rev)\";  PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==6{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==7{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==5{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==3{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Gemini")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/gemini-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==4{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==2{print; exit}' | cut -b 4610- | rev | cut -c5- | rev)\";  PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==6{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==7{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==5{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==3{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Cancer")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/cancer-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==4{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==2{print; exit}' | cut -b 4610- | rev | cut -c5- | rev)\";  PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==6{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==7{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==5{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==3{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Leo")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/leo-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==4{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==2{print; exit}' | cut -b 4610- | rev | cut -c5- | rev)\";  PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==6{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==7{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==5{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==3{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Virgo")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/virgo-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==4{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==2{print; exit}' | cut -b 4610- | rev | cut -c5- | rev)\";  PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==6{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==7{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==5{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==3{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Libra")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/libra-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==4{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==2{print; exit}' | cut -b 4610- | rev | cut -c5- | rev)\";  PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==6{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==7{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==5{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==3{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Scorpio")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/scorpio-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==4{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==2{print; exit}' | cut -b 4610- | rev | cut -c5- | rev)\";  PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==6{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==7{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==5{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==3{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Sagittarius")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/sagittarius-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==4{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==2{print; exit}' | cut -b 4610- | rev | cut -c5- | rev)\";  PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==6{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==7{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==5{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==3{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Capricorn")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/capricorn-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==4{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==2{print; exit}' | cut -b 4610- | rev | cut -c5- | rev)\";  PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==6{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==7{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==5{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==3{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Aquarius")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/aquarius-daily-horoscope)\";  PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==4{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==2{print; exit}' | cut -b 4610- | rev | cut -c5- | rev)\";  PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==6{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==7{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==5{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==3{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Pisces")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/pisces-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==4{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==2{print; exit}' | cut -b 4610- | rev | cut -c5- | rev)\";  PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==6{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==7{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==5{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==3{print; exit}' | cut -b 29- | rev | cut -c5- | rev)\";  cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else
				{
					system("rm -rf $HOME/.config/horrorscope.conf");
				}
			}
			else if (arg == "+1")
			{
				if (tmp_word == "Aries")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/aries-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==16{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==14{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==18{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==19{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==17{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==15{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Taurus")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/taurus-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==16{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==14{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==18{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==19{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==17{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==15{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Gemini")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/gemini-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==16{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==14{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==18{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==19{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==17{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==15{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Cancer")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/cancer-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==16{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==14{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==18{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==19{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==17{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==15{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Leo")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/leo-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==16{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==14{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==18{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==19{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==17{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==15{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Virgo")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/virgo-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==16{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==14{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==18{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==19{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==17{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==15{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Libra")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/libra-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==16{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==14{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==18{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==19{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==17{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==15{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Scorpio")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/scorpio-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==16{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==14{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==18{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==19{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==17{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==15{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Sagittarius")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/sagittarius-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==16{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==14{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==18{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==19{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==17{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==15{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Capricorn")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/capricorn-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==16{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==14{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==18{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==19{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==17{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==15{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Aquarius")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/aquarius-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==16{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==14{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==18{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==19{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==17{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==15{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Pisces")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/pisces-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==16{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==14{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==18{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==19{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==17{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==15{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else
				{
					system("rm -rf $HOME/.config/horrorscope.conf");
				}
			}
			else if (arg == "-r")
			{
				system("rm -rf $HOME/.config/horrorscope.conf");
			}
			else if (arg == "-d")
			{
				system("pkg install tsu curl cowsay ruby; gem install lolcat");
			}
			else if (arg == "-h")
			{
				show_usage(argv[0]);
			}
			else
			{
				if (tmp_word == "Aries")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/aries-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==10{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==8{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==12{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==13{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==11{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==9{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Taurus")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/taurus-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==10{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==8{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==12{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==13{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==11{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==9{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Gemini")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/gemini-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==10{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==8{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==12{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==13{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==11{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==9{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Cancer")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/cancer-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==10{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==8{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==12{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==13{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==11{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==9{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Leo")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/leo-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==10{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==8{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==12{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==13{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==11{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==9{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Virgo")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/virgo-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==10{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==8{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==12{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==13{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==11{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==9{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Libra")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/libra-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==10{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==8{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==12{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==13{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==11{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==9{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Scorpio")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/scorpio-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==10{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==8{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==12{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==13{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==11{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==9{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Sagittarius")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/sagittarius-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==10{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==8{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==12{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==13{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==11{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==9{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Capricorn")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/capricorn-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==10{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==8{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==12{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==13{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==11{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==9{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Aquarius")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/aquarius-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==10{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==8{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==12{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==13{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==11{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==9{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else if (tmp_word == "Pisces")
				{
					system("DUMP=\"$(curl -Ss https://vedicrishi.in/horoscope/pisces-daily-horoscope)\"; PART1=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==10{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART2=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==8{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART3=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==12{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART4=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==13{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART5=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==11{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; PART6=\"$(echo $DUMP | grep -Po \"<\s*p[^>]*>(.*?)<\s*/\s*p>\" | awk '/<p/{i++}i==9{print; exit}' | cut -b 30- | rev | cut -c5- | rev)\"; cowsay $PART1$PART2$PART3$PART4$PART5$PART6 | lolcat -a -d 1");
				}
				else
				{
					system("rm -rf $HOME/.config/horrorscope.conf");
				}
			}

			

		}
	return 0;

}
