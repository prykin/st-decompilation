FUN_006c3480:
006C3480  55                        PUSH EBP
006C3481  8B EC                     MOV EBP,ESP
006C3483  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C3486  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C3489  3D 85 00 00 00            CMP EAX,0x85
006C348E  77 1A                     JA 0x006c34aa
006C3490  3D 85 00 00 00            CMP EAX,0x85
006C3495  74 4E                     JZ 0x006c34e5
006C3497  8B C8                     MOV ECX,EAX
006C3499  83 E9 0F                  SUB ECX,0xf
006C349C  74 47                     JZ 0x006c34e5
006C349E  49                        DEC ECX
006C349F  74 03                     JZ 0x006c34a4
006C34A1  83 E9 0C                  SUB ECX,0xc
LAB_006c34a4:
006C34A4  33 C0                     XOR EAX,EAX
006C34A6  5D                        POP EBP
006C34A7  C2 10 00                  RET 0x10
LAB_006c34aa:
006C34AA  8B C8                     MOV ECX,EAX
006C34AC  81 E9 86 00 00 00         SUB ECX,0x86
006C34B2  74 F0                     JZ 0x006c34a4
006C34B4  83 E9 7B                  SUB ECX,0x7b
006C34B7  74 1D                     JZ 0x006c34d6
006C34B9  83 E9 11                  SUB ECX,0x11
006C34BC  75 E6                     JNZ 0x006c34a4
006C34BE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C34C1  25 F0 FF 00 00            AND EAX,0xfff0
006C34C6  2D 40 F1 00 00            SUB EAX,0xf140
006C34CB  74 D7                     JZ 0x006c34a4
006C34CD  83 E8 30                  SUB EAX,0x30
006C34D0  33 C0                     XOR EAX,EAX
006C34D2  5D                        POP EBP
006C34D3  C2 10 00                  RET 0x10
LAB_006c34d6:
006C34D6  83 FA 1B                  CMP EDX,0x1b
006C34D9  75 0A                     JNZ 0x006c34e5
006C34DB  C7 05 CC 68 85 00 01 00 00 00  MOV dword ptr [0x008568cc],0x1
LAB_006c34e5:
006C34E5  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C34E8  51                        PUSH ECX
006C34E9  52                        PUSH EDX
006C34EA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C34ED  50                        PUSH EAX
006C34EE  52                        PUSH EDX
006C34EF  FF 15 28 BE 85 00         CALL dword ptr [0x0085be28]
006C34F5  5D                        POP EBP
006C34F6  C2 10 00                  RET 0x10
