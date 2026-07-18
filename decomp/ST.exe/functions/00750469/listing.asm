FUN_00750469:
00750469  55                        PUSH EBP
0075046A  8B EC                     MOV EBP,ESP
0075046C  51                        PUSH ECX
0075046D  53                        PUSH EBX
0075046E  56                        PUSH ESI
0075046F  8B F1                     MOV ESI,ECX
00750471  57                        PUSH EDI
00750472  8D 46 08                  LEA EAX,[ESI + 0x8]
00750475  50                        PUSH EAX
00750476  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00750479  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0075047F  33 FF                     XOR EDI,EDI
00750481  33 DB                     XOR EBX,EBX
00750483  39 7E 40                  CMP dword ptr [ESI + 0x40],EDI
00750486  7E 0D                     JLE 0x00750495
00750488  FF 76 38                  PUSH dword ptr [ESI + 0x38]
0075048B  8D 4E 38                  LEA ECX,[ESI + 0x38]
0075048E  E8 44 DA FF FF            CALL 0x0074ded7
00750493  8B D8                     MOV EBX,EAX
LAB_00750495:
00750495  83 7E 28 00               CMP dword ptr [ESI + 0x28],0x0
00750499  7E 0D                     JLE 0x007504a8
0075049B  FF 76 20                  PUSH dword ptr [ESI + 0x20]
0075049E  8D 4E 20                  LEA ECX,[ESI + 0x20]
007504A1  E8 31 DA FF FF            CALL 0x0074ded7
007504A6  8B F8                     MOV EDI,EAX
LAB_007504a8:
007504A8  85 FF                     TEST EDI,EDI
007504AA  74 21                     JZ 0x007504cd
007504AC  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
007504AF  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
007504B2  6A 00                     PUSH 0x0
007504B4  51                        PUSH ECX
007504B5  50                        PUSH EAX
007504B6  8B CE                     MOV ECX,ESI
007504B8  E8 E7 F9 FF FF            CALL 0x0074fea4
007504BD  85 C0                     TEST EAX,EAX
007504BF  74 0C                     JZ 0x007504cd
007504C1  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
007504C4  8D 47 0C                  LEA EAX,[EDI + 0xc]
007504C7  50                        PUSH EAX
007504C8  FF 51 04                  CALL dword ptr [ECX + 0x4]
007504CB  EB 4D                     JMP 0x0075051a
LAB_007504cd:
007504CD  85 DB                     TEST EBX,EBX
007504CF  74 23                     JZ 0x007504f4
007504D1  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
007504D4  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
007504D7  7F 1B                     JG 0x007504f4
007504D9  7C 08                     JL 0x007504e3
007504DB  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
007504DE  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
007504E1  77 11                     JA 0x007504f4
LAB_007504e3:
007504E3  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
007504E6  8D 47 0C                  LEA EAX,[EDI + 0xc]
007504E9  50                        PUSH EAX
007504EA  FF 51 04                  CALL dword ptr [ECX + 0x4]
007504ED  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007504F0  89 18                     MOV dword ptr [EAX],EBX
007504F2  EB 2B                     JMP 0x0075051f
LAB_007504f4:
007504F4  83 7E 64 00               CMP dword ptr [ESI + 0x64],0x0
007504F8  74 32                     JZ 0x0075052c
007504FA  85 FF                     TEST EDI,EDI
007504FC  74 2E                     JZ 0x0075052c
007504FE  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00750501  8B 76 6C                  MOV ESI,dword ptr [ESI + 0x6c]
00750504  03 45 08                  ADD EAX,dword ptr [EBP + 0x8]
00750507  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0075050A  13 75 0C                  ADC ESI,dword ptr [EBP + 0xc]
0075050D  3B CE                     CMP ECX,ESI
0075050F  7F 1B                     JG 0x0075052c
00750511  7C 07                     JL 0x0075051a
00750513  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
00750516  3B C8                     CMP ECX,EAX
00750518  77 12                     JA 0x0075052c
LAB_0075051a:
0075051A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075051D  89 38                     MOV dword ptr [EAX],EDI
LAB_0075051f:
0075051F  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
00750522  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00750528  33 C0                     XOR EAX,EAX
0075052A  EB 0E                     JMP 0x0075053a
LAB_0075052c:
0075052C  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
0075052F  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00750535  B8 16 02 04 80            MOV EAX,0x80040216
LAB_0075053a:
0075053A  5F                        POP EDI
0075053B  5E                        POP ESI
0075053C  5B                        POP EBX
0075053D  C9                        LEAVE
0075053E  C2 0C 00                  RET 0xc
