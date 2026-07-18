FUN_006cee10:
006CEE10  55                        PUSH EBP
006CEE11  8B EC                     MOV EBP,ESP
006CEE13  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CEE16  8B 41 4C                  MOV EAX,dword ptr [ECX + 0x4c]
006CEE19  85 C0                     TEST EAX,EAX
006CEE1B  7D 3E                     JGE 0x006cee5b
006CEE1D  83 F8 FE                  CMP EAX,-0x2
006CEE20  74 0E                     JZ 0x006cee30
006CEE22  83 F8 FF                  CMP EAX,-0x1
006CEE25  74 09                     JZ 0x006cee30
006CEE27  B8 0A 00 00 00            MOV EAX,0xa
006CEE2C  5D                        POP EBP
006CEE2D  C2 08 00                  RET 0x8
LAB_006cee30:
006CEE30  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CEE33  56                        PUSH ESI
006CEE34  8B 71 44                  MOV ESI,dword ptr [ECX + 0x44]
006CEE37  33 C9                     XOR ECX,ECX
006CEE39  81 C2 C4 00 00 00         ADD EDX,0xc4
LAB_006cee3f:
006CEE3F  39 32                     CMP dword ptr [EDX],ESI
006CEE41  74 0B                     JZ 0x006cee4e
006CEE43  41                        INC ECX
006CEE44  83 C2 04                  ADD EDX,0x4
006CEE47  83 F9 0A                  CMP ECX,0xa
006CEE4A  7C F3                     JL 0x006cee3f
006CEE4C  EB 02                     JMP 0x006cee50
LAB_006cee4e:
006CEE4E  8B C1                     MOV EAX,ECX
LAB_006cee50:
006CEE50  83 F8 FE                  CMP EAX,-0x2
006CEE53  5E                        POP ESI
006CEE54  75 05                     JNZ 0x006cee5b
006CEE56  B8 01 00 00 00            MOV EAX,0x1
LAB_006cee5b:
006CEE5B  5D                        POP EBP
006CEE5C  C2 08 00                  RET 0x8
