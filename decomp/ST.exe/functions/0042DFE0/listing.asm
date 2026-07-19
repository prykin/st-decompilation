STAllPlayersC::PrepareToCmd:
0042DFE0  55                        PUSH EBP
0042DFE1  8B EC                     MOV EBP,ESP
0042DFE3  83 EC 10                  SUB ESP,0x10
0042DFE6  B8 FF FF 00 00            MOV EAX,0xffff
0042DFEB  53                        PUSH EBX
0042DFEC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0042DFEF  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0042DFF2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042DFF5  56                        PUSH ESI
0042DFF6  8B F1                     MOV ESI,ECX
0042DFF8  57                        PUSH EDI
0042DFF9  85 C0                     TEST EAX,EAX
0042DFFB  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0042DFFE  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0042E005  74 06                     JZ 0x0042e00d
0042E007  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_0042e00d:
0042E00D  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0042E010  85 FF                     TEST EDI,EDI
0042E012  74 06                     JZ 0x0042e01a
0042E014  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_0042e01a:
0042E01A  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
0042E020  33 C9                     XOR ECX,ECX
0042E022  8A CB                     MOV CL,BL
0042E024  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0042E027  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
0042E02A  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0042E02D  C1 E0 04                  SHL EAX,0x4
0042E030  03 C1                     ADD EAX,ECX
0042E032  D1 E0                     SHL EAX,0x1
0042E034  8B 90 23 50 7F 00         MOV EDX,dword ptr [EAX + 0x7f5023]
0042E03A  83 EA 00                  SUB EDX,0x0
0042E03D  0F 84 AD 00 00 00         JZ 0x0042e0f0
0042E043  4A                        DEC EDX
0042E044  74 2E                     JZ 0x0042e074
0042E046  68 50 65 7A 00            PUSH 0x7a6550
0042E04B  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042E050  6A 00                     PUSH 0x0
0042E052  6A 00                     PUSH 0x0
0042E054  68 8F 05 00 00            PUSH 0x58f
0042E059  68 04 60 7A 00            PUSH 0x7a6004
0042E05E  E8 6D F4 27 00            CALL 0x006ad4d0
0042E063  83 C4 18                  ADD ESP,0x18
0042E066  85 C0                     TEST EAX,EAX
0042E068  0F 84 11 01 00 00         JZ 0x0042e17f
0042E06E  CC                        INT3
LAB_0042e074:
0042E074  39 88 D7 4F 7F 00         CMP dword ptr [EAX + 0x7f4fd7],ECX
0042E07A  0F 85 FF 00 00 00         JNZ 0x0042e17f
0042E080  81 B8 D3 4F 7F 00 9A 01 00 00  CMP dword ptr [EAX + 0x7f4fd3],0x19a
0042E08A  0F 85 EF 00 00 00         JNZ 0x0042e17f
0042E090  8B B8 DD 4F 7F 00         MOV EDI,dword ptr [EAX + 0x7f4fdd]
0042E096  33 F6                     XOR ESI,ESI
0042E098  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
0042E09B  85 DB                     TEST EBX,EBX
0042E09D  0F 8E DC 00 00 00         JLE 0x0042e17f
LAB_0042e0a3:
0042E0A3  8D 45 0C                  LEA EAX,[EBP + 0xc]
0042E0A6  8B D6                     MOV EDX,ESI
0042E0A8  50                        PUSH EAX
0042E0A9  8B CF                     MOV ECX,EDI
0042E0AB  E8 C0 EB 27 00            CALL 0x006acc70
0042E0B0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042E0B3  66 3D FF FF               CMP AX,0xffff
0042E0B7  74 1B                     JZ 0x0042e0d4
0042E0B9  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0042E0BF  6A 01                     PUSH 0x1
0042E0C1  50                        PUSH EAX
0042E0C2  51                        PUSH ECX
0042E0C3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0042E0C6  E8 EF 47 FD FF            CALL 0x004028ba
0042E0CB  F6 80 D1 01 00 00 04      TEST byte ptr [EAX + 0x1d1],0x4
0042E0D2  74 0A                     JZ 0x0042e0de
LAB_0042e0d4:
0042E0D4  46                        INC ESI
0042E0D5  3B F3                     CMP ESI,EBX
0042E0D7  7C CA                     JL 0x0042e0a3
0042E0D9  E9 A1 00 00 00            JMP 0x0042e17f
LAB_0042e0de:
0042E0DE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0042E0E1  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
0042E0E8  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0042E0EB  E9 8F 00 00 00            JMP 0x0042e17f
LAB_0042e0f0:
0042E0F0  39 88 87 4F 7F 00         CMP dword ptr [EAX + 0x7f4f87],ECX
0042E0F6  0F 85 83 00 00 00         JNZ 0x0042e17f
0042E0FC  8B 88 83 4F 7F 00         MOV ECX,dword ptr [EAX + 0x7f4f83]
0042E102  83 F9 3C                  CMP ECX,0x3c
0042E105  74 1C                     JZ 0x0042e123
0042E107  81 F9 AE 01 00 00         CMP ECX,0x1ae
0042E10D  75 70                     JNZ 0x0042e17f
0042E10F  66 8B 80 8B 4F 7F 00      MOV AX,word ptr [EAX + 0x7f4f8b]
0042E116  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
0042E11D  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
0042E121  EB 5C                     JMP 0x0042e17f
LAB_0042e123:
0042E123  8D 4D FC                  LEA ECX,[EBP + -0x4]
0042E126  51                        PUSH ECX
0042E127  53                        PUSH EBX
0042E128  8B CE                     MOV ECX,ESI
0042E12A  E8 79 72 FD FF            CALL 0x004053a8
0042E12F  66 3D FF 7F               CMP AX,0x7fff
0042E133  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0042E136  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0042E13D  75 37                     JNZ 0x0042e176
0042E13F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0042E142  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
0042E145  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
0042E149  85 FF                     TEST EDI,EDI
0042E14B  74 02                     JZ 0x0042e14f
0042E14D  89 37                     MOV dword ptr [EDI],ESI
LAB_0042e14f:
0042E14F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0042E152  85 FF                     TEST EDI,EDI
0042E154  74 20                     JZ 0x0042e176
0042E156  56                        PUSH ESI
0042E157  E8 14 CB 27 00            CALL 0x006aac70
0042E15C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0042E15F  89 07                     MOV dword ptr [EDI],EAX
0042E161  8B CE                     MOV ECX,ESI
0042E163  8B F8                     MOV EDI,EAX
0042E165  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
0042E168  8B C1                     MOV EAX,ECX
0042E16A  C1 E9 02                  SHR ECX,0x2
0042E16D  F3 A5                     MOVSD.REP ES:EDI,ESI
0042E16F  8B C8                     MOV ECX,EAX
0042E171  83 E1 03                  AND ECX,0x3
0042E174  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0042e176:
0042E176  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0042E179  51                        PUSH ECX
0042E17A  E8 91 FF 27 00            CALL 0x006ae110
LAB_0042e17f:
0042E17F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0042E182  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0042E185  25 FF FF 00 00            AND EAX,0xffff
0042E18A  81 E1 FF FF 00 00         AND ECX,0xffff
0042E190  C1 E0 10                  SHL EAX,0x10
0042E193  5F                        POP EDI
0042E194  5E                        POP ESI
0042E195  0B C1                     OR EAX,ECX
0042E197  5B                        POP EBX
0042E198  8B E5                     MOV ESP,EBP
0042E19A  5D                        POP EBP
0042E19B  C2 08 00                  RET 0x8
