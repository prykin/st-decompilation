FUN_0075e000:
0075E000  55                        PUSH EBP
0075E001  8B EC                     MOV EBP,ESP
0075E003  83 EC 08                  SUB ESP,0x8
0075E006  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075E009  53                        PUSH EBX
0075E00A  56                        PUSH ESI
0075E00B  57                        PUSH EDI
0075E00C  8B B0 B2 01 00 00         MOV ESI,dword ptr [EAX + 0x1b2]
0075E012  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0075E015  85 C0                     TEST EAX,EAX
0075E017  74 2D                     JZ 0x0075e046
0075E019  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
0075E01C  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
0075E01F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0075E022  51                        PUSH ECX
0075E023  8B 13                     MOV EDX,dword ptr [EBX]
0075E025  6A 01                     PUSH 0x1
0075E027  6A 00                     PUSH 0x0
0075E029  8D 0C 90                  LEA ECX,[EAX + EDX*0x4]
0075E02C  8D 56 20                  LEA EDX,[ESI + 0x20]
0075E02F  51                        PUSH ECX
0075E030  6A 00                     PUSH 0x0
0075E032  52                        PUSH EDX
0075E033  E8 78 BE FF FF            CALL 0x00759eb0
0075E038  BF 01 00 00 00            MOV EDI,0x1
0075E03D  C7 46 24 00 00 00 00      MOV dword ptr [ESI + 0x24],0x0
0075E044  EB 57                     JMP 0x0075e09d
LAB_0075e046:
0075E046  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
0075E049  BF 02 00 00 00            MOV EDI,0x2
0075E04E  3B C7                     CMP EAX,EDI
0075E050  73 02                     JNC 0x0075e054
0075E052  8B F8                     MOV EDI,EAX
LAB_0075e054:
0075E054  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
0075E057  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0075E05A  8B 03                     MOV EAX,dword ptr [EBX]
0075E05C  2B C8                     SUB ECX,EAX
0075E05E  3B F9                     CMP EDI,ECX
0075E060  76 02                     JBE 0x0075e064
0075E062  8B F9                     MOV EDI,ECX
LAB_0075e064:
0075E064  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0075E067  83 FF 01                  CMP EDI,0x1
0075E06A  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
0075E06D  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0075E070  76 09                     JBE 0x0075e07b
0075E072  8B 44 81 04               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x4]
0075E076  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0075E079  EB 0D                     JMP 0x0075e088
LAB_0075e07b:
0075E07B  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
0075E07E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0075E081  C7 46 24 01 00 00 00      MOV dword ptr [ESI + 0x24],0x1
LAB_0075e088:
0075E088  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075E08B  8D 55 F8                  LEA EDX,[EBP + -0x8]
0075E08E  52                        PUSH EDX
0075E08F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075E092  8B 08                     MOV ECX,dword ptr [EAX]
0075E094  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075E097  51                        PUSH ECX
0075E098  52                        PUSH EDX
0075E099  50                        PUSH EAX
0075E09A  FF 56 0C                  CALL dword ptr [ESI + 0xc]
LAB_0075e09d:
0075E09D  8B 13                     MOV EDX,dword ptr [EBX]
0075E09F  03 D7                     ADD EDX,EDI
0075E0A1  89 13                     MOV dword ptr [EBX],EDX
0075E0A3  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
0075E0A6  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0075E0A9  2B CF                     SUB ECX,EDI
0075E0AB  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
0075E0AE  5F                        POP EDI
0075E0AF  5E                        POP ESI
0075E0B0  5B                        POP EBX
0075E0B1  85 C0                     TEST EAX,EAX
0075E0B3  75 05                     JNZ 0x0075e0ba
0075E0B5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075E0B8  FF 00                     INC dword ptr [EAX]
LAB_0075e0ba:
0075E0BA  8B E5                     MOV ESP,EBP
0075E0BC  5D                        POP EBP
0075E0BD  C2 1C 00                  RET 0x1c
