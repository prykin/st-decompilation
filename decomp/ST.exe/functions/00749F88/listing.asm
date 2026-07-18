FUN_00749f88:
00749F88  55                        PUSH EBP
00749F89  8B EC                     MOV EBP,ESP
00749F8B  51                        PUSH ECX
00749F8C  53                        PUSH EBX
00749F8D  56                        PUSH ESI
00749F8E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00749F91  57                        PUSH EDI
00749F92  8D 5E 70                  LEA EBX,[ESI + 0x70]
00749F95  53                        PUSH EBX
00749F96  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00749F99  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
00749F9F  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00749FA2  6A 02                     PUSH 0x2
00749FA4  5F                        POP EDI
00749FA5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00749FA8  3B C7                     CMP EAX,EDI
00749FAA  75 03                     JNZ 0x00749faf
00749FAC  53                        PUSH EBX
00749FAD  EB 24                     JMP 0x00749fd3
LAB_00749faf:
00749FAF  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
00749FB2  33 DB                     XOR EBX,EBX
00749FB4  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00749FB7  75 24                     JNZ 0x00749fdd
00749FB9  8D 4E F4                  LEA ECX,[ESI + -0xc]
00749FBC  8B C1                     MOV EAX,ECX
00749FBE  F7 D8                     NEG EAX
00749FC0  1B C0                     SBB EAX,EAX
00749FC2  23 C6                     AND EAX,ESI
00749FC4  50                        PUSH EAX
00749FC5  53                        PUSH EBX
00749FC6  6A 01                     PUSH 0x1
00749FC8  E8 39 D4 FF FF            CALL 0x00747406
00749FCD  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00749FD0  89 7E 08                  MOV dword ptr [ESI + 0x8],EDI
LAB_00749fd3:
00749FD3  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00749FD9  33 C0                     XOR EAX,EAX
00749FDB  EB 73                     JMP 0x0074a050
LAB_00749fdd:
00749FDD  FF 76 50                  PUSH dword ptr [ESI + 0x50]
00749FE0  FF 15 80 BB 85 00         CALL dword ptr [0x0085bb80]
00749FE6  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00749FE9  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
00749FEC  56                        PUSH ESI
00749FED  E8 6F D1 FF FF            CALL 0x00747161
00749FF2  8B F8                     MOV EDI,EAX
00749FF4  3B FB                     CMP EDI,EBX
00749FF6  7D 0D                     JGE 0x0074a005
00749FF8  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00749FFB  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A001  8B C7                     MOV EAX,EDI
0074A003  EB 4B                     JMP 0x0074a050
LAB_0074a005:
0074A005  8B 46 F4                  MOV EAX,dword ptr [ESI + -0xc]
0074A008  8D 7E F4                  LEA EDI,[ESI + -0xc]
0074A00B  6A 01                     PUSH 0x1
0074A00D  8B CF                     MOV ECX,EDI
0074A00F  FF 50 28                  CALL dword ptr [EAX + 0x28]
0074A012  53                        PUSH EBX
0074A013  8B CF                     MOV ECX,EDI
0074A015  E8 03 08 00 00            CALL 0x0074a81d
0074A01A  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
0074A01D  8B 80 9C 00 00 00         MOV EAX,dword ptr [EAX + 0x9c]
0074A023  3B C3                     CMP EAX,EBX
0074A025  74 06                     JZ 0x0074a02d
0074A027  8B 08                     MOV ECX,dword ptr [EAX]
0074A029  50                        PUSH EAX
0074A02A  FF 51 14                  CALL dword ptr [ECX + 0x14]
LAB_0074a02d:
0074A02D  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
0074A030  75 0A                     JNZ 0x0074a03c
0074A032  89 5E 54                  MOV dword ptr [ESI + 0x54],EBX
0074A035  8B 07                     MOV EAX,dword ptr [EDI]
0074A037  8B CF                     MOV ECX,EDI
0074A039  FF 50 70                  CALL dword ptr [EAX + 0x70]
LAB_0074a03c:
0074A03C  8B 07                     MOV EAX,dword ptr [EDI]
0074A03E  8B CF                     MOV ECX,EDI
0074A040  FF 50 7C                  CALL dword ptr [EAX + 0x7c]
0074A043  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074A046  8B F0                     MOV ESI,EAX
0074A048  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A04E  8B C6                     MOV EAX,ESI
LAB_0074a050:
0074A050  5F                        POP EDI
0074A051  5E                        POP ESI
0074A052  5B                        POP EBX
0074A053  C9                        LEAVE
0074A054  C2 0C 00                  RET 0xc
