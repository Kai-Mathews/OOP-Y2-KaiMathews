# Practical Lab 1 — evidence

Repository URL:https://github.com/Kai-Mathews/OOP-Y2-KaiMathews.git
Final commit identifier: submit separately if adding it here would create a new commit.
Build configuration:
Known unfinished requirements:

## A — Structure and diagnosis

| Fault | First useful diagnostic | Stage and cause | Repair | Verified result |
| --- | --- | --- | --- | --- |
| 1 | missing semi-colon|compiling |add semi-colon |program ran |
| 2 | wrong funciton name|compiling |rename function |program ran |

Build explanation (maximum 80 words):
I build the program using visual studio code in debug mode x64.
Banner.h declares the function.
Banner.cpp defines the function and is called in main.cpp since it's header is included in main.cpp.
Incremental lets you go through each step of the build as it runs, rebuild cleans the build and rebuilds it all at once.

## B — Input recovery

Explain the different jobs of state reset and input removal (two sentences):

## D — Pointer trace

Use observed address values or symbolic labels that identify the same objects consistently.

| State | totalStock | availableStock | dispatchCount | Selected object | Stored pointer value | Pointer's own address | Dereferenced value, if valid |
| --- | --- | --- | --- | --- | --- | --- | --- |
| Before stock update | | | | | | | |
| After stock update | | | | | | | |
| After retargeting/increment | | | | | | | |
| After null reset | | | | | | | Not evaluated |

Explain selectedQuantity, *selectedQuantity and &selectedQuantity:
Explain ownership and why non-null is not a universal safety guarantee:

## E — Tests

Record predictions before running. Do not claim a test passed unless you ran it.

| ID | Input/data | Expected | Actual/exit status | Pass/fail | Interpretation |
| --- | --- | --- | --- | --- | --- |
| P1 | | | | | |
| P2 | | | | | |
| P3 | | | | | |
| P4 | | | | | |
| P5 | | | | | |
| P6 | | | | | |
| P7 | | | | | |
| P8 — own case | | | | | |

Why does the extra test detect something the baseline does not?

Final baseline restored:
Both projects build / recorded limitations:
Source snapshot and evidence submitted:
