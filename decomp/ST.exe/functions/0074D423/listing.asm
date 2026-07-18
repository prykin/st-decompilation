FUN_0074d423:
0074D423  55                        PUSH EBP
0074D424  8B EC                     MOV EBP,ESP
0074D426  51                        PUSH ECX
0074D427  53                        PUSH EBX
0074D428  8B 1D C8 BB 85 00         MOV EBX,dword ptr [0x0085bbc8]
0074D42E  56                        PUSH ESI
0074D42F  8B F1                     MOV ESI,ECX
0074D431  57                        PUSH EDI
0074D432  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0074D435  85 C0                     TEST EAX,EAX
0074D437  74 0E                     JZ 0x0074d447
0074D439  6A FF                     PUSH -0x1
0074D43B  50                        PUSH EAX
0074D43C  FF 15 E0 BC 85 00         CALL dword ptr [0x0085bce0]
0074D442  FF 76 08                  PUSH dword ptr [ESI + 0x8]
0074D445  FF D3                     CALL EBX
LAB_0074d447:
0074D447  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0074D44A  8D 7E 0C                  LEA EDI,[ESI + 0xc]
0074D44D  85 C0                     TEST EAX,EAX
0074D44F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0074D452  74 18                     JZ 0x0074d46c
LAB_0074d454:
0074D454  8D 45 FC                  LEA EAX,[EBP + -0x4]
0074D457  8B CF                     MOV ECX,EDI
0074D459  50                        PUSH EAX
0074D45A  E8 63 0A 00 00            CALL 0x0074dec2
0074D45F  50                        PUSH EAX
0074D460  E8 4B 0E FE FF            CALL 0x0072e2b0
0074D465  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
0074D469  59                        POP ECX
0074D46A  75 E8                     JNZ 0x0074d454
LAB_0074d46c:
0074D46C  8B CF                     MOV ECX,EDI
0074D46E  E8 1E 0A 00 00            CALL 0x0074de91
0074D473  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0074D476  85 C0                     TEST EAX,EAX
0074D478  74 03                     JZ 0x0074d47d
0074D47A  50                        PUSH EAX
0074D47B  FF D3                     CALL EBX
LAB_0074d47d:
0074D47D  83 C6 24                  ADD ESI,0x24
0074D480  56                        PUSH ESI
0074D481  FF 15 84 BB 85 00         CALL dword ptr [0x0085bb84]
0074D487  8B CF                     MOV ECX,EDI
0074D489  E8 F1 09 00 00            CALL 0x0074de7f
0074D48E  5F                        POP EDI
0074D48F  5E                        POP ESI
0074D490  5B                        POP EBX
0074D491  C9                        LEAVE
0074D492  C3                        RET
