FUN_0074ffd2:
0074FFD2  55                        PUSH EBP
0074FFD3  8B EC                     MOV EBP,ESP
0074FFD5  51                        PUSH ECX
0074FFD6  53                        PUSH EBX
0074FFD7  56                        PUSH ESI
0074FFD8  8B F1                     MOV ESI,ECX
0074FFDA  57                        PUSH EDI
0074FFDB  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0074FFDE  8D 5E 20                  LEA EBX,[ESI + 0x20]
0074FFE1  85 C0                     TEST EAX,EAX
0074FFE3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0074FFE6  74 1B                     JZ 0x00750003
LAB_0074ffe8:
0074FFE8  8D 45 FC                  LEA EAX,[EBP + -0x4]
0074FFEB  8B CB                     MOV ECX,EBX
0074FFED  50                        PUSH EAX
0074FFEE  E8 CF DE FF FF            CALL 0x0074dec2
0074FFF3  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0074FFF6  83 C0 0C                  ADD EAX,0xc
0074FFF9  50                        PUSH EAX
0074FFFA  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074FFFD  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00750001  75 E5                     JNZ 0x0074ffe8
LAB_00750003:
00750003  8B CB                     MOV ECX,EBX
00750005  E8 87 DE FF FF            CALL 0x0074de91
0075000A  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
0075000D  8D 7E 38                  LEA EDI,[ESI + 0x38]
00750010  85 C0                     TEST EAX,EAX
00750012  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00750015  74 1B                     JZ 0x00750032
LAB_00750017:
00750017  8D 45 FC                  LEA EAX,[EBP + -0x4]
0075001A  8B CF                     MOV ECX,EDI
0075001C  50                        PUSH EAX
0075001D  E8 A0 DE FF FF            CALL 0x0074dec2
00750022  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00750025  83 C0 0C                  ADD EAX,0xc
00750028  50                        PUSH EAX
00750029  FF 51 08                  CALL dword ptr [ECX + 0x8]
0075002C  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00750030  75 E5                     JNZ 0x00750017
LAB_00750032:
00750032  8B CF                     MOV ECX,EDI
00750034  E8 58 DE FF FF            CALL 0x0074de91
00750039  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
0075003C  85 C0                     TEST EAX,EAX
0075003E  74 1B                     JZ 0x0075005b
00750040  8B 4E 54                  MOV ECX,dword ptr [ESI + 0x54]
00750043  85 C9                     TEST ECX,ECX
00750045  74 0B                     JZ 0x00750052
00750047  8B 10                     MOV EDX,dword ptr [EAX]
00750049  51                        PUSH ECX
0075004A  50                        PUSH EAX
0075004B  FF 52 18                  CALL dword ptr [EDX + 0x18]
0075004E  83 66 54 00               AND dword ptr [ESI + 0x54],0x0
LAB_00750052:
00750052  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
00750055  50                        PUSH EAX
00750056  8B 08                     MOV ECX,dword ptr [EAX]
00750058  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_0075005b:
0075005B  8D 4E 50                  LEA ECX,[ESI + 0x50]
0075005E  E8 A1 D1 FF FF            CALL 0x0074d204
00750063  8B CF                     MOV ECX,EDI
00750065  E8 15 DE FF FF            CALL 0x0074de7f
0075006A  8B CB                     MOV ECX,EBX
0075006C  E8 0E DE FF FF            CALL 0x0074de7f
00750071  83 C6 08                  ADD ESI,0x8
00750074  56                        PUSH ESI
00750075  FF 15 84 BB 85 00         CALL dword ptr [0x0085bb84]
0075007B  5F                        POP EDI
0075007C  5E                        POP ESI
0075007D  5B                        POP EBX
0075007E  C9                        LEAVE
0075007F  C3                        RET
