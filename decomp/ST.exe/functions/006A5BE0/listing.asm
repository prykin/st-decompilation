FUN_006a5be0:
006A5BE0  55                        PUSH EBP
006A5BE1  8B EC                     MOV EBP,ESP
006A5BE3  83 EC 4C                  SUB ESP,0x4c
006A5BE6  53                        PUSH EBX
006A5BE7  56                        PUSH ESI
006A5BE8  57                        PUSH EDI
006A5BE9  33 FF                     XOR EDI,EDI
006A5BEB  8D 5D B4                  LEA EBX,[EBP + -0x4c]
LAB_006a5bee:
006A5BEE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A5BF1  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
006A5BF4  83 F8 10                  CMP EAX,0x10
006A5BF7  7C 05                     JL 0x006a5bfe
006A5BF9  B8 10 00 00 00            MOV EAX,0x10
LAB_006a5bfe:
006A5BFE  3B F8                     CMP EDI,EAX
006A5C00  7D 63                     JGE 0x006a5c65
006A5C02  8A 44 0F 20               MOV AL,byte ptr [EDI + ECX*0x1 + 0x20]
006A5C06  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
006A5C09  A1 8C 14 7F 00            MOV EAX,[0x007f148c]
006A5C0E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006A5C11  83 F8 01                  CMP EAX,0x1
006A5C14  7E 16                     JLE 0x006a5c2c
006A5C16  81 E6 FF 00 00 00         AND ESI,0xff
006A5C1C  68 57 01 00 00            PUSH 0x157
006A5C21  56                        PUSH ESI
006A5C22  E8 E9 A9 08 00            CALL 0x00730610
006A5C27  83 C4 08                  ADD ESP,0x8
006A5C2A  EB 15                     JMP 0x006a5c41
LAB_006a5c2c:
006A5C2C  8B 0D 80 12 7F 00         MOV ECX,dword ptr [0x007f1280]
006A5C32  81 E6 FF 00 00 00         AND ESI,0xff
006A5C38  66 8B 04 71               MOV AX,word ptr [ECX + ESI*0x2]
006A5C3C  25 57 01 00 00            AND EAX,0x157
LAB_006a5c41:
006A5C41  85 C0                     TEST EAX,EAX
006A5C43  8B C6                     MOV EAX,ESI
006A5C45  75 05                     JNZ 0x006a5c4c
006A5C47  B8 20 00 00 00            MOV EAX,0x20
LAB_006a5c4c:
006A5C4C  56                        PUSH ESI
006A5C4D  68 88 CA 7E 00            PUSH 0x7eca88
006A5C52  53                        PUSH EBX
006A5C53  88 44 3D E8               MOV byte ptr [EBP + EDI*0x1 + -0x18],AL
006A5C57  E8 E4 AF 08 00            CALL 0x00730c40
006A5C5C  83 C4 0C                  ADD ESP,0xc
006A5C5F  47                        INC EDI
006A5C60  83 C3 03                  ADD EBX,0x3
006A5C63  EB 89                     JMP 0x006a5bee
LAB_006a5c65:
006A5C65  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006A5C68  8D 45 E8                  LEA EAX,[EBP + -0x18]
006A5C6B  52                        PUSH EDX
006A5C6C  50                        PUSH EAX
006A5C6D  68 74 CA 7E 00            PUSH 0x7eca74
006A5C72  6A 00                     PUSH 0x0
006A5C74  6A 00                     PUSH 0x0
006A5C76  6A 00                     PUSH 0x0
006A5C78  6A 00                     PUSH 0x0
006A5C7A  C6 44 3D E8 00            MOV byte ptr [EBP + EDI*0x1 + -0x18],0x0
006A5C7F  E8 1C B3 08 00            CALL 0x00730fa0
006A5C84  83 C4 1C                  ADD ESP,0x1c
006A5C87  83 F8 01                  CMP EAX,0x1
006A5C8A  5F                        POP EDI
006A5C8B  5E                        POP ESI
006A5C8C  5B                        POP EBX
006A5C8D  75 01                     JNZ 0x006a5c90
006A5C8F  CC                        INT3
LAB_006a5c90:
006A5C90  8B E5                     MOV ESP,EBP
006A5C92  5D                        POP EBP
006A5C93  C3                        RET
