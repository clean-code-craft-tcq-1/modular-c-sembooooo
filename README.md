# Topic: Modularity

## Divide into files

### Summary:
The 25-pair color code, is used to identify wires in telecommunications cables.
Different codes are used for wire leads on devices such as transformers or in building wiring.
For more details refer to [This Wiki](https://en.wikipedia.org/wiki/25-pair_color_code). 

There are 25 possible pairs of colors. 

- Each pair of colors maps to a corresponding number
- Such numbers translate to a pair of colors -
a major color and a minor color

## Exercise Details:

### Modularity

The entire translation program is in a single file.
Before adding features and making it bigger,
split the file.
This exercise has a limit on the loc (lines of code)
per file. See the workflow for details.

### New Feature Request

The color coding needs to be printed as a reference manual for wiring personnel.
This manual is a mapping from the color-names to the corresponding numbers.
Add a function that would format the color coding in a form that someone can print.
Also resolve any coding guideline violations.

## My Assignment Details:(Work in progress)
--Excuse me for my grammatical mistakes.
Wanted to write this file to let my intention behind splitting into a readable format.

Divided it into the following units
1. MajorColor
2. MinorColor
3. ColorPair
4. ColorPairTest
5. Telecomm_ColorCode

### MajorColor
This unit contains all the handling of MajorColor.
String array of MajorColor is moved into this unit
and an interface is provided for other units. So its
the unit responsibility to properly order the strings
and enum in the same fashion.
Added a macro which tells maximum number of characters
in MajorColor. Updating this macro falls under this 
units responsibility.

### MinorColor
This unit contains all the handling of Minor Color.
The reasoning is same as MajorColor Unit.

### ColorPair
This unit contains all the handling at color pair level.
Maximum Characters in a color pair Macro is now calculated
with a macro from MajorColorunit , MinorColor unit and
extra buffer length.
So if there is any change in the length of major color and 
minor color length. no need to change other modules.
Didnt wanted to keep size as constant instead a configurable macro
Wanted to place it in this unit as it is an colorpair level length

### ColorPairEvaluate
This was some confusing unit for me. As this only provides APIs for
evaluation.
Even though this is at colorpair level i wanted to have seperate unit
for evaluation API. So if any more evaluation APIs are to come they
will sit here.
Renamed the APIs from test...() to Evaluate...() as it sounded nice.

### Telecomm_ColorCode
I did not find a good name for this unit as the purpose of this file
was a little ambigious. Contains code that evaluates the other code.
Contains a function that prints the manual.
So got into the amibiguity," So is it a manual printer or a testing code ? ".
This unit contains the testcases and color code manual implementation.
Any other implementation at color code level fall in this unit. (for now)






