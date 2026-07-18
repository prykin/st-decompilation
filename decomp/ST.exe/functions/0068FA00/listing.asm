FUN_0068fa00:
0068FA00  55                        PUSH EBP
0068FA01  8B EC                     MOV EBP,ESP
0068FA03  83 EC 34                  SUB ESP,0x34
0068FA06  53                        PUSH EBX
0068FA07  56                        PUSH ESI
0068FA08  8B F1                     MOV ESI,ECX
0068FA0A  33 DB                     XOR EBX,EBX
0068FA0C  57                        PUSH EDI
0068FA0D  8B 8E A5 00 00 00         MOV ECX,dword ptr [ESI + 0xa5]
0068FA13  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0068FA16  85 C0                     TEST EAX,EAX
0068FA18  7E 68                     JLE 0x0068fa82
0068FA1A  3B D8                     CMP EBX,EAX
LAB_0068fa1c:
0068FA1C  73 0D                     JNC 0x0068fa2b
0068FA1E  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0068FA21  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0068FA24  0F AF C3                  IMUL EAX,EBX
0068FA27  03 C2                     ADD EAX,EDX
0068FA29  EB 02                     JMP 0x0068fa2d
LAB_0068fa2b:
0068FA2B  33 C0                     XOR EAX,EAX
LAB_0068fa2d:
0068FA2D  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0068FA30  85 D2                     TEST EDX,EDX
0068FA32  74 40                     JZ 0x0068fa74
0068FA34  66 81 7A 7B 00 80         CMP word ptr [EDX + 0x7b],0x8000
0068FA3A  75 38                     JNZ 0x0068fa74
0068FA3C  B9 0D 00 00 00            MOV ECX,0xd
0068FA41  33 C0                     XOR EAX,EAX
0068FA43  8D 7D CC                  LEA EDI,[EBP + -0x34]
0068FA46  F3 AB                     STOSD.REP ES:EDI
0068FA48  8B 86 2C 01 00 00         MOV EAX,dword ptr [ESI + 0x12c]
0068FA4E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0068FA51  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0068FA54  8D 45 CC                  LEA EAX,[EBP + -0x34]
0068FA57  89 4D D6                  MOV dword ptr [EBP + -0x2a],ECX
0068FA5A  50                        PUSH EAX
0068FA5B  8B CA                     MOV ECX,EDX
0068FA5D  C7 45 CC 75 00 00 00      MOV dword ptr [EBP + -0x34],0x75
0068FA64  C6 45 D5 01               MOV byte ptr [EBP + -0x2b],0x1
0068FA68  E8 E8 1A D7 FF            CALL 0x00401555
0068FA6D  8A 45 D4                  MOV AL,byte ptr [EBP + -0x2c]
0068FA70  84 C0                     TEST AL,AL
0068FA72  7F 0E                     JG 0x0068fa82
LAB_0068fa74:
0068FA74  8B 8E A5 00 00 00         MOV ECX,dword ptr [ESI + 0xa5]
0068FA7A  43                        INC EBX
0068FA7B  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0068FA7E  3B D8                     CMP EBX,EAX
0068FA80  7C 9A                     JL 0x0068fa1c
LAB_0068fa82:
0068FA82  5F                        POP EDI
0068FA83  5E                        POP ESI
0068FA84  5B                        POP EBX
0068FA85  8B E5                     MOV ESP,EBP
0068FA87  5D                        POP EBP
0068FA88  C2 04 00                  RET 0x4
