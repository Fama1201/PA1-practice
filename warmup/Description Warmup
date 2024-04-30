The task is to develop a program which prints out quotations.

The input of the program is an integer. The integer is in range 0 to 8 (inclusive). The value is an identifier of the quotation to print out.

The output of the program is a quotation. There is a total of 9 different quotations, the input value identifies the particular quotation to print out. The quotations are listed in the sample runs below. Please note the quotation is printed with a newline character (\n) at the end.

The program must validate input data. If the input is invalid, the program detects it, outputs an error message and terminates. If displayed, the error message must be displayed on the standard output (do not send it to the standard error output) and the error message must be terminated by a newline (\n). The input is considered invalid, if:

the program cannot read an integer from the input or
the integer read from the input is outside of interval [0 to 8].
Please note the program outputs various error messages. There is an error message if the program is unable to read the input integer and a different error message if the input integer is outside of the valid range (see example runs below).

Please strictly adhere to the format of the output. The output must exactly match the output of the reference program. The comparison is done by a machine, the machine requires an exact match. If your program provides output different from the reference, the program is considered malfunctioning. Be very careful, the machine is sensitive even to whitespace characters (spaces, newlines, tabulators). Please note that all output lines are followed by a newline character (\n). This applies even to the last line of the output, moreover, this applies even to the error message. Download the enclosed archive. The archive contains a set of testing inputs and the expected outputs. Read Progtest FAQ to learn how to use input/output redirection and how to simplify testing of your programs.

Your program will be tested in a restricted environment. The testing environment limits running time and available memory. The exact time and memory limits are shown in the reference solution testing log. However, neither time nor memory limit could cause a problem in this simple program. Next, the testing environment prohibits the use of functions which are considered "dangerous" (functions to execute other processes, functions to access the network, ... ). If your program uses such functions, the testing environment refuses to execute the program. For example, if your code would be similar to the following:

int main ( int argc, char * argv [] )
{
 
  ...
     
  system ( "pause" ); /* prevent program window from closing */
  return 0;
}
This will not work properly in the testing environment - it is prohibited to execute other programs. (Even if the function were allowed, this would not work properly. The program would infinitely wait for a key to be pressed, however, no one will press any key in the automated testing environment. Thus, the program would be terminated on exceeded time limit.) If you want to keep the pause for your debugging and you want the program to be accepted by the Progtest, use the following trick:

int main ( int argc, char * argv [] )
{
 
  ...

#ifndef __PROGTEST__
  system ( "pause" ); /* this is ignored by Progtest */
#endif /* __PROGTEST__ */
  return 0;
} 
Example program runs:
ml' nob:
0
Qapla'
noH QapmeH wo' Qaw'lu'chugh yay chavbe'lu' 'ej wo' choqmeH may' DoHlu'chugh lujbe'lu'.
ml' nob:
1
Qapla'
bortaS bIr jablu'DI' reH QaQqu' nay'.
ml' nob:
2
Qapla'
Qu' buSHa'chugh SuvwI', batlhHa' vangchugh, qoj matlhHa'chugh, pagh ghaH SuvwI''e'.
ml' nob:
3
Qapla'
bISeH'eghlaH'be'chugh latlh Dara'laH'be'.
ml' nob:
4
Qapla'
qaStaHvIS wa' ram loS SaD Hugh SIjlaH qetbogh loD.
ml' nob:
5
Qapla'
Suvlu'taHvIS yapbe' HoS neH.
ml' nob:
6
Qapla'
Ha'DIbaH DaSop 'e' DaHechbe'chugh yIHoHQo'.
ml' nob:
007
Qapla'
Heghlu'meH QaQ jajvam.
ml' nob:
           8
Qapla'
leghlaHchu'be'chugh mIn lo'laHbe' taj jej.
ml' nob:
29
Qih mi' 29
ml' nob:
-5
Qih mi' -5
ml' nob:
abc
Neh mi'
Advice:
The sample runs above list both the output of your program (boldface font) and user input (regular font). The bold/regular formatting is included here, in the problem statement page, to increase readability of the listing. Your program must output the text without any additional markup.
Do not forget the newline (\n) after the last output line.
The quotations are rather long, moreover, they are difficult to type. This is an intention. We introduced this homework to teach you how to use computers in an efficient way, in particular, to use copy & paste. Sadly, our experience shows that some students do not know copy & paste. Please learn how to use copy & paste on both Windows and UNIX (Linux). Copy & paste is very useful, particularly in the exam test.
You have to compare the output of your program and the reference when testing the program. Once again, this is boring and error prone when done manually, especially in cases like the quotations in this program (long text, not native to most/any of us). And once again, this is an intention. There is quite a lot of free time at the beginning of the semester. Use the time to learn how to test programs efficiently. Read the FAQ, learn how to redirect input and output of a program. Use file comparison utilities to find differences between your output and the reference. Finally, develop a fully automated scripts to test many inputs in one batch. UOS/PS1 module will help you. The testing in the forthcoming homework will be much easier if you learn automated testing techniques now.
Inputs like 1.23 or 1abcd are considered invalid. However, it is more difficult to handle these errors. You may decide to either implement a simplified version of the program where these invalid inputs are accepted as number 1; such program may be awarded up to 100% points. Moreover, there is a bonus test available, the bonus test inputs invalid values similar to the examples above. If your program handles the input in a more strict way and rejects such inputs, the program will be awarded some extra points. Here is an example program run with the bonus test:
ml' nob:
1.23
bIjatlh 'e' yImev