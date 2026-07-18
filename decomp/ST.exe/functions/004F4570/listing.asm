FUN_004f4570:
004F4570  55                        PUSH EBP
004F4571  8B EC                     MOV EBP,ESP
004F4573  83 EC 08                  SUB ESP,0x8
004F4576  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004F4579  53                        PUSH EBX
004F457A  56                        PUSH ESI
004F457B  8B F1                     MOV ESI,ECX
004F457D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004F4580  83 CB FF                  OR EBX,0xffffffff
004F4583  2B C8                     SUB ECX,EAX
004F4585  57                        PUSH EDI
004F4586  8D 78 0F                  LEA EDI,[EAX + 0xf]
004F4589  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004F458C  C7 45 FC 06 00 00 00      MOV dword ptr [EBP + -0x4],0x6
004F4593  EB 03                     JMP 0x004f4598
LAB_004f4595:
004F4595  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_004f4598:
004F4598  8A 57 FA                  MOV DL,byte ptr [EDI + -0x6]
004F459B  84 D2                     TEST DL,DL
004F459D  74 54                     JZ 0x004f45f3
004F459F  8A 17                     MOV DL,byte ptr [EDI]
004F45A1  43                        INC EBX
004F45A2  3A 14 39                  CMP DL,byte ptr [ECX + EDI*0x1]
004F45A5  75 0B                     JNZ 0x004f45b2
004F45A7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004F45AA  8A 48 07                  MOV CL,byte ptr [EAX + 0x7]
004F45AD  3A 4A 07                  CMP CL,byte ptr [EDX + 0x7]
004F45B0  74 41                     JZ 0x004f45f3
LAB_004f45b2:
004F45B2  C7 46 28 54 00 00 00      MOV dword ptr [ESI + 0x28],0x54
004F45B9  8A 48 07                  MOV CL,byte ptr [EAX + 0x7]
004F45BC  84 C9                     TEST CL,CL
004F45BE  74 06                     JZ 0x004f45c6
004F45C0  33 C0                     XOR EAX,EAX
004F45C2  8A 07                     MOV AL,byte ptr [EDI]
004F45C4  EB 02                     JMP 0x004f45c8
LAB_004f45c6:
004F45C6  33 C0                     XOR EAX,EAX
LAB_004f45c8:
004F45C8  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
004F45CB  33 D2                     XOR EDX,EDX
004F45CD  0F BF C3                  MOVSX EAX,BX
004F45D0  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
004F45D3  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004F45D6  84 C0                     TEST AL,AL
004F45D8  0F 94 C2                  SETZ DL
004F45DB  8D 4E 18                  LEA ECX,[ESI + 0x18]
004F45DE  8B 84 96 FE 02 00 00      MOV EAX,dword ptr [ESI + EDX*0x4 + 0x2fe]
004F45E5  51                        PUSH ECX
004F45E6  50                        PUSH EAX
004F45E7  6A 02                     PUSH 0x2
004F45E9  8B CE                     MOV ECX,ESI
004F45EB  E8 90 1A 1F 00            CALL 0x006e6080
004F45F0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_004f45f3:
004F45F3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004F45F6  47                        INC EDI
004F45F7  49                        DEC ECX
004F45F8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004F45FB  75 98                     JNZ 0x004f4595
004F45FD  5F                        POP EDI
004F45FE  5E                        POP ESI
004F45FF  5B                        POP EBX
004F4600  8B E5                     MOV ESP,EBP
004F4602  5D                        POP EBP
004F4603  C2 0C 00                  RET 0xc
