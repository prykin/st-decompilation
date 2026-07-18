FUN_0074706a:
0074706A  55                        PUSH EBP
0074706B  8B EC                     MOV EBP,ESP
0074706D  83 EC 0C                  SUB ESP,0xc
00747070  53                        PUSH EBX
00747071  57                        PUSH EDI
00747072  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00747075  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
00747078  50                        PUSH EAX
00747079  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0074707C  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
00747082  33 DB                     XOR EBX,EBX
00747084  39 5F 08                  CMP dword ptr [EDI + 0x8],EBX
00747087  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0074708A  74 44                     JZ 0x007470d0
0074708C  8B 47 F4                  MOV EAX,dword ptr [EDI + -0xc]
0074708F  56                        PUSH ESI
00747090  8D 77 F4                  LEA ESI,[EDI + -0xc]
00747093  8B CE                     MOV ECX,ESI
00747095  FF 50 18                  CALL dword ptr [EAX + 0x18]
00747098  3B C3                     CMP EAX,EBX
0074709A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0074709D  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
007470A0  7E 2D                     JLE 0x007470cf
LAB_007470a2:
007470A2  8B 06                     MOV EAX,dword ptr [ESI]
007470A4  FF 75 08                  PUSH dword ptr [EBP + 0x8]
007470A7  8B CE                     MOV ECX,ESI
007470A9  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
007470AC  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
007470AF  74 13                     JZ 0x007470c4
007470B1  8B 10                     MOV EDX,dword ptr [EAX]
007470B3  8B C8                     MOV ECX,EAX
007470B5  FF 52 18                  CALL dword ptr [EDX + 0x18]
007470B8  3B C3                     CMP EAX,EBX
007470BA  7D 08                     JGE 0x007470c4
007470BC  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
007470BF  7C 03                     JL 0x007470c4
007470C1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_007470c4:
007470C4  FF 45 08                  INC dword ptr [EBP + 0x8]
007470C7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007470CA  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
007470CD  7C D3                     JL 0x007470a2
LAB_007470cf:
007470CF  5E                        POP ESI
LAB_007470d0:
007470D0  FF 75 F4                  PUSH dword ptr [EBP + -0xc]
007470D3  89 5F 08                  MOV dword ptr [EDI + 0x8],EBX
007470D6  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
007470DC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007470DF  5F                        POP EDI
007470E0  5B                        POP EBX
007470E1  C9                        LEAVE
007470E2  C2 04 00                  RET 0x4
