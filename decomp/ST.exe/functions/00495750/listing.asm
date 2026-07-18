FUN_00495750:
00495750  55                        PUSH EBP
00495751  8B EC                     MOV EBP,ESP
00495753  83 EC 68                  SUB ESP,0x68
00495756  56                        PUSH ESI
00495757  57                        PUSH EDI
00495758  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0049575B  8B F1                     MOV ESI,ECX
0049575D  57                        PUSH EDI
0049575E  E8 6D 08 25 00            CALL 0x006e5fd0
00495763  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
00495766  83 F8 60                  CMP EAX,0x60
00495769  77 6C                     JA 0x004957d7
0049576B  74 4E                     JZ 0x004957bb
0049576D  83 F8 09                  CMP EAX,0x9
00495770  0F 87 D9 00 00 00         JA 0x0049584f
switchD_00495776::switchD:
00495776  FF 24 85 5C 58 49 00      JMP dword ptr [EAX*0x4 + 0x49585c]
switchD_00495776::caseD_2:
0049577D  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00495780  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
00495783  50                        PUSH EAX
00495784  E8 B7 F5 24 00            CALL 0x006e4d40
00495789  83 F8 01                  CMP EAX,0x1
0049578C  0F 85 BD 00 00 00         JNZ 0x0049584f
00495792  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
00495798  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
0049579B  5F                        POP EDI
0049579C  33 C0                     XOR EAX,EAX
0049579E  5E                        POP ESI
0049579F  8B E5                     MOV ESP,EBP
004957A1  5D                        POP EBP
004957A2  C2 04 00                  RET 0x4
switchD_00495776::caseD_3:
004957A5  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
004957A8  51                        PUSH ECX
004957A9  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004957AC  E8 8F F5 24 00            CALL 0x006e4d40
004957B1  5F                        POP EDI
004957B2  33 C0                     XOR EAX,EAX
004957B4  5E                        POP ESI
004957B5  8B E5                     MOV ESP,EBP
004957B7  5D                        POP EBP
004957B8  C2 04 00                  RET 0x4
LAB_004957bb:
004957BB  33 D2                     XOR EDX,EDX
004957BD  33 C0                     XOR EAX,EAX
004957BF  66 8B 57 18               MOV DX,word ptr [EDI + 0x18]
004957C3  89 56 1C                  MOV dword ptr [ESI + 0x1c],EDX
004957C6  66 8B 47 1A               MOV AX,word ptr [EDI + 0x1a]
004957CA  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
004957CD  5F                        POP EDI
004957CE  33 C0                     XOR EAX,EAX
004957D0  5E                        POP ESI
004957D1  8B E5                     MOV ESP,EBP
004957D3  5D                        POP EBP
004957D4  C2 04 00                  RET 0x4
LAB_004957d7:
004957D7  83 F8 61                  CMP EAX,0x61
004957DA  74 73                     JZ 0x0049584f
004957DC  3D 02 81 00 00            CMP EAX,0x8102
004957E1  75 6C                     JNZ 0x0049584f
004957E3  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
004957E6  8D 4D 08                  LEA ECX,[EBP + 0x8]
004957E9  8D 55 FC                  LEA EDX,[EBP + -0x4]
004957EC  51                        PUSH ECX
004957ED  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
004957F0  52                        PUSH EDX
004957F1  6A 00                     PUSH 0x0
004957F3  50                        PUSH EAX
004957F4  51                        PUSH ECX
004957F5  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004957FB  E8 20 C4 24 00            CALL 0x006e1c20
00495800  D9 45 08                  FLD float ptr [EBP + 0x8]
00495803  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
00495809  E8 7A 8A 29 00            CALL 0x0072e288
0049580E  D9 45 FC                  FLD float ptr [EBP + -0x4]
00495811  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
00495817  50                        PUSH EAX
00495818  E8 6B 8A 29 00            CALL 0x0072e288
0049581D  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
00495820  50                        PUSH EAX
00495821  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00495824  52                        PUSH EDX
00495825  50                        PUSH EAX
00495826  8D 4D 98                  LEA ECX,[EBP + -0x68]
00495829  68 38 BC 7A 00            PUSH 0x7abc38
0049582E  51                        PUSH ECX
0049582F  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00495835  A1 48 67 80 00            MOV EAX,[0x00806748]
0049583A  83 C4 18                  ADD ESP,0x18
0049583D  8D 55 98                  LEA EDX,[EBP + -0x68]
00495840  6A 40                     PUSH 0x40
00495842  68 1C BC 7A 00            PUSH 0x7abc1c
00495847  52                        PUSH EDX
00495848  50                        PUSH EAX
00495849  FF 15 EC BD 85 00         CALL dword ptr [0x0085bdec]
switchD_00495776::caseD_0:
0049584F  5F                        POP EDI
00495850  33 C0                     XOR EAX,EAX
00495852  5E                        POP ESI
00495853  8B E5                     MOV ESP,EBP
00495855  5D                        POP EBP
00495856  C2 04 00                  RET 0x4
