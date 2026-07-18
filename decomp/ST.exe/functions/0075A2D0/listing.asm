FUN_0075a2d0:
0075A2D0  55                        PUSH EBP
0075A2D1  8B EC                     MOV EBP,ESP
0075A2D3  53                        PUSH EBX
0075A2D4  56                        PUSH ESI
0075A2D5  57                        PUSH EDI
0075A2D6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075A2D9  8B B7 96 01 00 00         MOV ESI,dword ptr [EDI + 0x196]
0075A2DF  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
0075A2E2  85 C0                     TEST EAX,EAX
0075A2E4  75 19                     JNZ 0x0075a2ff
0075A2E6  8B 87 9A 01 00 00         MOV EAX,dword ptr [EDI + 0x19a]
0075A2EC  8D 4E 08                  LEA ECX,[ESI + 0x8]
0075A2EF  51                        PUSH ECX
0075A2F0  57                        PUSH EDI
0075A2F1  FF 50 0C                  CALL dword ptr [EAX + 0xc]
0075A2F4  85 C0                     TEST EAX,EAX
0075A2F6  74 45                     JZ 0x0075a33d
0075A2F8  C7 46 30 01 00 00 00      MOV dword ptr [ESI + 0x30],0x1
LAB_0075a2ff:
0075A2FF  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0075A302  8B 87 2A 01 00 00         MOV EAX,dword ptr [EDI + 0x12a]
0075A308  51                        PUSH ECX
0075A309  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075A30C  8B 97 9E 01 00 00         MOV EDX,dword ptr [EDI + 0x19e]
0075A312  51                        PUSH ECX
0075A313  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075A316  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075A319  51                        PUSH ECX
0075A31A  8D 5E 34                  LEA EBX,[ESI + 0x34]
0075A31D  50                        PUSH EAX
0075A31E  8D 46 08                  LEA EAX,[ESI + 0x8]
0075A321  53                        PUSH EBX
0075A322  50                        PUSH EAX
0075A323  57                        PUSH EDI
0075A324  FF 52 04                  CALL dword ptr [EDX + 0x4]
0075A327  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075A32A  8B 03                     MOV EAX,dword ptr [EBX]
0075A32C  3B C1                     CMP EAX,ECX
0075A32E  72 0D                     JC 0x0075a33d
0075A330  C7 46 30 00 00 00 00      MOV dword ptr [ESI + 0x30],0x0
0075A337  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
LAB_0075a33d:
0075A33D  5F                        POP EDI
0075A33E  5E                        POP ESI
0075A33F  5B                        POP EBX
0075A340  5D                        POP EBP
0075A341  C2 10 00                  RET 0x10
