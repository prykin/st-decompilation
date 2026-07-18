FUN_0075022f:
0075022F  53                        PUSH EBX
00750230  56                        PUSH ESI
00750231  8B F1                     MOV ESI,ECX
00750233  57                        PUSH EDI
00750234  8D 7E 08                  LEA EDI,[ESI + 0x8]
00750237  57                        PUSH EDI
00750238  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0075023E  8B 5C 24 10               MOV EBX,dword ptr [ESP + 0x10]
00750242  85 DB                     TEST EBX,EBX
00750244  74 06                     JZ 0x0075024c
00750246  8B 03                     MOV EAX,dword ptr [EBX]
00750248  53                        PUSH EBX
00750249  FF 50 04                  CALL dword ptr [EAX + 0x4]
LAB_0075024c:
0075024C  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
0075024F  85 C0                     TEST EAX,EAX
00750251  74 1B                     JZ 0x0075026e
00750253  8B 4E 54                  MOV ECX,dword ptr [ESI + 0x54]
00750256  85 C9                     TEST ECX,ECX
00750258  74 0B                     JZ 0x00750265
0075025A  8B 10                     MOV EDX,dword ptr [EAX]
0075025C  51                        PUSH ECX
0075025D  50                        PUSH EAX
0075025E  FF 52 18                  CALL dword ptr [EDX + 0x18]
00750261  83 66 54 00               AND dword ptr [ESI + 0x54],0x0
LAB_00750265:
00750265  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
00750268  50                        PUSH EAX
00750269  8B 08                     MOV ECX,dword ptr [EAX]
0075026B  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_0075026e:
0075026E  8B CE                     MOV ECX,ESI
00750270  89 5E 60                  MOV dword ptr [ESI + 0x60],EBX
00750273  E8 0F 00 00 00            CALL 0x00750287
00750278  57                        PUSH EDI
00750279  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0075027F  5F                        POP EDI
00750280  5E                        POP ESI
00750281  33 C0                     XOR EAX,EAX
00750283  5B                        POP EBX
00750284  C2 04 00                  RET 0x4
