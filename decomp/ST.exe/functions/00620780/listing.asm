FUN_00620780:
00620780  55                        PUSH EBP
00620781  8B EC                     MOV EBP,ESP
00620783  83 EC 0C                  SUB ESP,0xc
00620786  8B 81 DD 00 00 00         MOV EAX,dword ptr [ECX + 0xdd]
0062078C  53                        PUSH EBX
0062078D  83 CB FF                  OR EBX,0xffffffff
00620790  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00620793  85 C0                     TEST EAX,EAX
00620795  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00620798  0F 84 BB 00 00 00         JZ 0x00620859
0062079E  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006207A1  48                        DEC EAX
006207A2  0F 88 B1 00 00 00         JS 0x00620859
006207A8  8B D0                     MOV EDX,EAX
006207AA  56                        PUSH ESI
006207AB  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006207AE  57                        PUSH EDI
006207AF  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006207B2  EB 03                     JMP 0x006207b7
LAB_006207b4:
006207B4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_006207b7:
006207B7  8B 89 DD 00 00 00         MOV ECX,dword ptr [ECX + 0xdd]
006207BD  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
006207C0  73 7F                     JNC 0x00620841
006207C2  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006207C5  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
006207C8  0F AF C2                  IMUL EAX,EDX
006207CB  03 C7                     ADD EAX,EDI
006207CD  85 C0                     TEST EAX,EAX
006207CF  74 70                     JZ 0x00620841
006207D1  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006207D4  8D 7A FD                  LEA EDI,[EDX + -0x3]
006207D7  39 7D 0C                  CMP dword ptr [EBP + 0xc],EDI
006207DA  7C 4D                     JL 0x00620829
006207DC  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006207DF  83 C2 03                  ADD EDX,0x3
006207E2  3B FA                     CMP EDI,EDX
006207E4  7F 43                     JG 0x00620829
006207E6  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006207E9  8D 5A FD                  LEA EBX,[EDX + -0x3]
006207EC  39 5D 10                  CMP dword ptr [EBP + 0x10],EBX
006207EF  7C 35                     JL 0x00620826
006207F1  8D 5A 03                  LEA EBX,[EDX + 0x3]
006207F4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006207F7  3B D3                     CMP EDX,EBX
006207F9  7F 2B                     JG 0x00620826
006207FB  89 78 08                  MOV dword ptr [EAX + 0x8],EDI
006207FE  8B 38                     MOV EDI,dword ptr [EAX]
00620800  8B CE                     MOV ECX,ESI
00620802  BB 01 00 00 00            MOV EBX,0x1
00620807  2B CF                     SUB ECX,EDI
00620809  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0062080C  81 F9 94 11 00 00         CMP ECX,0x1194
00620812  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
00620815  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
00620818  76 27                     JBE 0x00620841
0062081A  BB 02 00 00 00            MOV EBX,0x2
0062081F  89 30                     MOV dword ptr [EAX],ESI
00620821  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00620824  EB 1B                     JMP 0x00620841
LAB_00620826:
00620826  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_00620829:
00620829  8B 38                     MOV EDI,dword ptr [EAX]
0062082B  8B D6                     MOV EDX,ESI
0062082D  2B D7                     SUB EDX,EDI
0062082F  81 FA 94 11 00 00         CMP EDX,0x1194
00620835  76 0A                     JBE 0x00620841
00620837  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0062083A  50                        PUSH EAX
0062083B  51                        PUSH ECX
0062083C  E8 2F 04 09 00            CALL 0x006b0c70
LAB_00620841:
00620841  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00620844  4A                        DEC EDX
00620845  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00620848  0F 89 66 FF FF FF         JNS 0x006207b4
0062084E  5F                        POP EDI
0062084F  8B C3                     MOV EAX,EBX
00620851  5E                        POP ESI
00620852  5B                        POP EBX
00620853  8B E5                     MOV ESP,EBP
00620855  5D                        POP EBP
00620856  C2 10 00                  RET 0x10
LAB_00620859:
00620859  8B C3                     MOV EAX,EBX
0062085B  5B                        POP EBX
0062085C  8B E5                     MOV ESP,EBP
0062085E  5D                        POP EBP
0062085F  C2 10 00                  RET 0x10
