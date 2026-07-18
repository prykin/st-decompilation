FUN_006747e0:
006747E0  55                        PUSH EBP
006747E1  8B EC                     MOV EBP,ESP
006747E3  51                        PUSH ECX
006747E4  A1 14 19 81 00            MOV EAX,[0x00811914]
006747E9  8B 0D 5C 75 85 00         MOV ECX,dword ptr [0x0085755c]
006747EF  53                        PUSH EBX
006747F0  56                        PUSH ESI
006747F1  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
006747F4  C6 04 08 00               MOV byte ptr [EAX + ECX*0x1],0x0
006747F8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006747FB  57                        PUSH EDI
006747FC  33 DB                     XOR EBX,EBX
006747FE  88 55 FF                  MOV byte ptr [EBP + -0x1],DL
00674801  8D 78 FF                  LEA EDI,[EAX + -0x1]
00674804  85 FF                     TEST EDI,EDI
00674806  7C 76                     JL 0x0067487e
LAB_00674808:
00674808  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0067480B  A1 5C 75 85 00            MOV EAX,[0x0085755c]
00674810  8D 34 1F                  LEA ESI,[EDI + EBX*0x1]
00674813  D1 FE                     SAR ESI,0x1
00674815  8B 14 F1                  MOV EDX,dword ptr [ECX + ESI*0x8]
00674818  8B 0D 0C 19 81 00         MOV ECX,dword ptr [0x0081190c]
0067481E  03 C8                     ADD ECX,EAX
00674820  52                        PUSH EDX
00674821  51                        PUSH ECX
00674822  FF 15 1C 2D 7D 00         CALL dword ptr [0x007d2d1c]
00674828  83 C4 08                  ADD ESP,0x8
0067482B  85 C0                     TEST EAX,EAX
0067482D  7E 05                     JLE 0x00674834
0067482F  8D 5E 01                  LEA EBX,[ESI + 0x1]
00674832  EB 05                     JMP 0x00674839
LAB_00674834:
00674834  7D 21                     JGE 0x00674857
00674836  8D 7E FF                  LEA EDI,[ESI + -0x1]
LAB_00674839:
00674839  3B FB                     CMP EDI,EBX
0067483B  7D CB                     JGE 0x00674808
0067483D  8B 15 5C 75 85 00         MOV EDX,dword ptr [0x0085755c]
00674843  A1 14 19 81 00            MOV EAX,[0x00811914]
00674848  8A 4D FF                  MOV CL,byte ptr [EBP + -0x1]
0067484B  5F                        POP EDI
0067484C  5E                        POP ESI
0067484D  88 0C 10                  MOV byte ptr [EAX + EDX*0x1],CL
00674850  5B                        POP EBX
00674851  8B E5                     MOV ESP,EBP
00674853  5D                        POP EBP
00674854  C2 08 00                  RET 0x8
LAB_00674857:
00674857  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067485A  8B 0D 5C 75 85 00         MOV ECX,dword ptr [0x0085755c]
00674860  5F                        POP EDI
00674861  8B 44 F2 04               MOV EAX,dword ptr [EDX + ESI*0x8 + 0x4]
00674865  8B 15 14 19 81 00         MOV EDX,dword ptr [0x00811914]
0067486B  A3 18 2D 7D 00            MOV [0x007d2d18],EAX
00674870  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
00674873  5E                        POP ESI
00674874  88 04 0A                  MOV byte ptr [EDX + ECX*0x1],AL
00674877  5B                        POP EBX
00674878  8B E5                     MOV ESP,EBP
0067487A  5D                        POP EBP
0067487B  C2 08 00                  RET 0x8
LAB_0067487e:
0067487E  8B 0D 5C 75 85 00         MOV ECX,dword ptr [0x0085755c]
00674884  A1 14 19 81 00            MOV EAX,[0x00811914]
00674889  5F                        POP EDI
0067488A  5E                        POP ESI
0067488B  88 14 08                  MOV byte ptr [EAX + ECX*0x1],DL
0067488E  5B                        POP EBX
0067488F  8B E5                     MOV ESP,EBP
00674891  5D                        POP EBP
00674892  C2 08 00                  RET 0x8
