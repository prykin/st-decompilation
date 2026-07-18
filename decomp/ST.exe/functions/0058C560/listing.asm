FUN_0058c560:
0058C560  55                        PUSH EBP
0058C561  8B EC                     MOV EBP,ESP
0058C563  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0058C566  56                        PUSH ESI
0058C567  8B F1                     MOV ESI,ECX
0058C569  57                        PUSH EDI
0058C56A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0058C56D  8B 96 31 02 00 00         MOV EDX,dword ptr [ESI + 0x231]
0058C573  89 86 49 02 00 00         MOV dword ptr [ESI + 0x249],EAX
0058C579  83 FA 01                  CMP EDX,0x1
0058C57C  89 8E 4D 02 00 00         MOV dword ptr [ESI + 0x24d],ECX
0058C582  74 4D                     JZ 0x0058c5d1
0058C584  83 EA 00                  SUB EDX,0x0
0058C587  74 38                     JZ 0x0058c5c1
0058C589  83 EA 02                  SUB EDX,0x2
0058C58C  0F 85 4E 01 00 00         JNZ 0x0058c6e0
0058C592  68 DC BA 7C 00            PUSH 0x7cbadc
0058C597  68 CC 4C 7A 00            PUSH 0x7a4ccc
0058C59C  6A 00                     PUSH 0x0
0058C59E  6A 00                     PUSH 0x0
0058C5A0  68 1B 01 00 00            PUSH 0x11b
0058C5A5  68 B8 BA 7C 00            PUSH 0x7cbab8
0058C5AA  E8 21 0F 12 00            CALL 0x006ad4d0
0058C5AF  83 C4 18                  ADD ESP,0x18
0058C5B2  85 C0                     TEST EAX,EAX
0058C5B4  0F 84 26 01 00 00         JZ 0x0058c6e0
0058C5BA  CC                        INT3
LAB_0058c5c1:
0058C5C1  C7 86 31 02 00 00 03 00 00 00  MOV dword ptr [ESI + 0x231],0x3
0058C5CB  5F                        POP EDI
0058C5CC  5E                        POP ESI
0058C5CD  5D                        POP EBP
0058C5CE  C2 08 00                  RET 0x8
LAB_0058c5d1:
0058C5D1  C7 86 31 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x231],0x2
0058C5DB  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
0058C5E1  C1 E1 07                  SHL ECX,0x7
0058C5E4  0F BF 52 23               MOVSX EDX,word ptr [EDX + 0x23]
0058C5E8  C1 E0 07                  SHL EAX,0x7
0058C5EB  51                        PUSH ECX
0058C5EC  8B 8E 51 02 00 00         MOV ECX,dword ptr [ESI + 0x251]
0058C5F2  50                        PUSH EAX
0058C5F3  8B 86 55 02 00 00         MOV EAX,dword ptr [ESI + 0x255]
0058C5F9  C1 E0 07                  SHL EAX,0x7
0058C5FC  C1 E1 07                  SHL ECX,0x7
0058C5FF  4A                        DEC EDX
0058C600  50                        PUSH EAX
0058C601  51                        PUSH ECX
0058C602  89 96 39 02 00 00         MOV dword ptr [ESI + 0x239],EDX
0058C608  C7 86 35 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x235],0x1
0058C612  C7 86 3D 02 00 00 B6 04 00 00  MOV dword ptr [ESI + 0x23d],0x4b6
0058C61C  E8 B7 08 12 00            CALL 0x006aced8
0058C621  8B F8                     MOV EDI,EAX
0058C623  83 C4 10                  ADD ESP,0x10
0058C626  85 FF                     TEST EDI,EDI
0058C628  0F 84 B2 00 00 00         JZ 0x0058c6e0
0058C62E  8B 86 51 02 00 00         MOV EAX,dword ptr [ESI + 0x251]
0058C634  8B 96 49 02 00 00         MOV EDX,dword ptr [ESI + 0x249]
0058C63A  2B C2                     SUB EAX,EDX
0058C63C  C7 86 71 02 00 00 E2 03 00 00  MOV dword ptr [ESI + 0x271],0x3e2
0058C646  C1 E0 0F                  SHL EAX,0xf
0058C649  99                        CDQ
0058C64A  F7 FF                     IDIV EDI
0058C64C  8B 96 4D 02 00 00         MOV EDX,dword ptr [ESI + 0x24d]
0058C652  C7 86 65 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x265],0x0
0058C65C  C7 86 61 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x261],0x0
0058C666  8B C8                     MOV ECX,EAX
0058C668  8B 86 55 02 00 00         MOV EAX,dword ptr [ESI + 0x255]
0058C66E  2B C2                     SUB EAX,EDX
0058C670  89 8E 59 02 00 00         MOV dword ptr [ESI + 0x259],ECX
0058C676  C1 E0 0F                  SHL EAX,0xf
0058C679  99                        CDQ
0058C67A  F7 FF                     IDIV EDI
0058C67C  8B D1                     MOV EDX,ECX
0058C67E  C1 E2 05                  SHL EDX,0x5
0058C681  03 D1                     ADD EDX,ECX
0058C683  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
0058C686  66 8B 96 49 02 00 00      MOV DX,word ptr [ESI + 0x249]
0058C68D  66 69 D2 C9 00            IMUL DX,DX,0xc9
0058C692  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0058C695  D1 E1                     SHL ECX,0x1
0058C697  C1 F9 08                  SAR ECX,0x8
0058C69A  8D 4C 11 64               LEA ECX,[ECX + EDX*0x1 + 0x64]
0058C69E  66 89 4E 41               MOV word ptr [ESI + 0x41],CX
0058C6A2  0F BF C9                  MOVSX ECX,CX
0058C6A5  8B D0                     MOV EDX,EAX
0058C6A7  89 86 5D 02 00 00         MOV dword ptr [ESI + 0x25d],EAX
0058C6AD  C1 E2 05                  SHL EDX,0x5
0058C6B0  03 D0                     ADD EDX,EAX
0058C6B2  89 8E 69 02 00 00         MOV dword ptr [ESI + 0x269],ECX
0058C6B8  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0058C6BB  66 8B 96 4D 02 00 00      MOV DX,word ptr [ESI + 0x24d]
0058C6C2  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0058C6C5  D1 E0                     SHL EAX,0x1
0058C6C7  C1 F8 08                  SAR EAX,0x8
0058C6CA  66 69 D2 C9 00            IMUL DX,DX,0xc9
0058C6CF  8D 44 10 64               LEA EAX,[EAX + EDX*0x1 + 0x64]
0058C6D3  0F BF D0                  MOVSX EDX,AX
0058C6D6  66 89 46 43               MOV word ptr [ESI + 0x43],AX
0058C6DA  89 96 6D 02 00 00         MOV dword ptr [ESI + 0x26d],EDX
LAB_0058c6e0:
0058C6E0  5F                        POP EDI
0058C6E1  5E                        POP ESI
0058C6E2  5D                        POP EBP
0058C6E3  C2 08 00                  RET 0x8
