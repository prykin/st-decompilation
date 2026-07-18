FUN_004a9c80:
004A9C80  55                        PUSH EBP
004A9C81  8B EC                     MOV EBP,ESP
004A9C83  83 EC 20                  SUB ESP,0x20
004A9C86  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004A9C89  85 C0                     TEST EAX,EAX
004A9C8B  A1 3C 74 80 00            MOV EAX,[0x0080743c]
004A9C90  75 3A                     JNZ 0x004a9ccc
004A9C92  25 FF 00 00 00            AND EAX,0xff
004A9C97  83 E8 00                  SUB EAX,0x0
004A9C9A  0F 84 89 00 00 00         JZ 0x004a9d29
004A9CA0  48                        DEC EAX
004A9CA1  74 16                     JZ 0x004a9cb9
004A9CA3  48                        DEC EAX
004A9CA4  75 1D                     JNZ 0x004a9cc3
004A9CA6  A0 3C 74 80 00            MOV AL,[0x0080743c]
004A9CAB  C7 05 38 74 80 00 00 00 C0 3F  MOV dword ptr [0x00807438],0x3fc00000
004A9CB5  FE C8                     DEC AL
004A9CB7  EB 42                     JMP 0x004a9cfb
LAB_004a9cb9:
004A9CB9  C7 05 38 74 80 00 00 00 80 3F  MOV dword ptr [0x00807438],0x3f800000
LAB_004a9cc3:
004A9CC3  A0 3C 74 80 00            MOV AL,[0x0080743c]
004A9CC8  FE C8                     DEC AL
004A9CCA  EB 2F                     JMP 0x004a9cfb
LAB_004a9ccc:
004A9CCC  25 FF 00 00 00            AND EAX,0xff
004A9CD1  83 E8 00                  SUB EAX,0x0
004A9CD4  74 14                     JZ 0x004a9cea
004A9CD6  48                        DEC EAX
004A9CD7  74 05                     JZ 0x004a9cde
004A9CD9  48                        DEC EAX
004A9CDA  74 4D                     JZ 0x004a9d29
004A9CDC  EB 16                     JMP 0x004a9cf4
LAB_004a9cde:
004A9CDE  C7 05 38 74 80 00 00 00 20 40  MOV dword ptr [0x00807438],0x40200000
004A9CE8  EB 0A                     JMP 0x004a9cf4
LAB_004a9cea:
004A9CEA  C7 05 38 74 80 00 00 00 C0 3F  MOV dword ptr [0x00807438],0x3fc00000
LAB_004a9cf4:
004A9CF4  A0 3C 74 80 00            MOV AL,[0x0080743c]
004A9CF9  FE C0                     INC AL
LAB_004a9cfb:
004A9CFB  A2 3C 74 80 00            MOV [0x0080743c],AL
004A9D00  E8 C2 B0 F5 FF            CALL 0x00404dc7
004A9D05  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004A9D0B  C7 45 EC 0F 00 00 00      MOV dword ptr [EBP + -0x14],0xf
004A9D12  C7 45 F0 09 01 00 00      MOV dword ptr [EBP + -0x10],0x109
004A9D19  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
004A9D20  8B 01                     MOV EAX,dword ptr [ECX]
004A9D22  8D 55 E0                  LEA EDX,[EBP + -0x20]
004A9D25  52                        PUSH EDX
004A9D26  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_004a9d29:
004A9D29  8B E5                     MOV ESP,EBP
004A9D2B  5D                        POP EBP
004A9D2C  C2 04 00                  RET 0x4
