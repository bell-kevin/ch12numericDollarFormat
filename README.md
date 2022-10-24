# ch12numericDollarFormat

The project in Program 12-13 shows you how to format the string version of a numeric value. But many programs use numeric versions of numeric values to perform mathematical calculations. For example, a program that calculates the total cost of purchasing some items and adding sales tax would use numeric values to do that work, not strings. The final answer would be a numeric data type such as a double. How do you format a numeric data type into currency format with a dollar sign and commas? You convert the numeric data into a string, using the ostringstream object, then convert that string to currency format. Remember that the ostringstream object takes a numeric data type and converts it to a string as part of its "<<" function. Convert the dollar amount in a numeric data type to a string by using that operation, then convert that string to a "pretty" dollar-formatted value as demonstrated in Program 12-13. 

Create the project shown in Program 12-13 and make sure it works correctly. It takes a string from the user and converts it to a "pretty" dollar-formatted output in the dollarFormat() function. Then make these changes to it:

In the main function, do not ask the user for input (which would be a string or C-string). Instead, create a double variable and assign a value to it, such as 98765.43. Print it to the screen using cout, making sure to add the manipulators that specify it should print 2 decimal places and always show the decimal (see Ch 3) -- but it won't show comma separators. You need to use the dollarFormat() function already written, which inserts those comma separators. But that function needs a string parameter, and the variable to print is a numeric variable.

Overload the dollarFormat function already in the project, so that the new function accepts a double as the parameter, rather than a string as in the original function. This new function will also return a string which is nicely formatted, by first converting the double into a string with the ostringstream "<<" function, then calling the original dollarFormat function to format that string. Note that when using ostringstream, you can set the precision and fix the number of digits, exactly as you would with cout (see Ch 3).

Here is an example:

1[Ch 12 Dollar Formatter](https://github.com/bell-kevin/ch12numericDollarFormat/blob/main/format.PNG)

Take a screenshot of 2 tests of the project, with large numbers that require commas.

![2](https://github.com/bell-kevin/ch12numericDollarFormat/blob/main/format0.PNG)

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots AND the root folder for the project.

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
