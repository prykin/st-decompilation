shortsort:
00730A50  55                        PUSH EBP
00730A51  8B EC                     MOV EBP,ESP
00730A53  83 EC 08                  SUB ESP,0x8
LAB_00730a56:
00730A56  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00730A59  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
00730A5C  76 5B                     JBE 0x00730ab9
00730A5E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00730A61  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00730A64  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00730A67  03 55 10                  ADD EDX,dword ptr [EBP + 0x10]
00730A6A  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00730A6D  EB 09                     JMP 0x00730a78
LAB_00730a6f:
00730A6F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00730A72  03 45 10                  ADD EAX,dword ptr [EBP + 0x10]
00730A75  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00730a78:
00730A78  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00730A7B  3B 4D 0C                  CMP ECX,dword ptr [EBP + 0xc]
00730A7E  77 1A                     JA 0x00730a9a
00730A80  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00730A83  52                        PUSH EDX
00730A84  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00730A87  50                        PUSH EAX
00730A88  FF 55 14                  CALL dword ptr [EBP + 0x14]
00730A8B  83 C4 08                  ADD ESP,0x8
00730A8E  85 C0                     TEST EAX,EAX
00730A90  7E 06                     JLE 0x00730a98
00730A92  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00730A95  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00730a98:
00730A98  EB D5                     JMP 0x00730a6f
LAB_00730a9a:
00730A9A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00730A9D  52                        PUSH EDX
00730A9E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00730AA1  50                        PUSH EAX
00730AA2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00730AA5  51                        PUSH ECX
00730AA6  E8 15 00 00 00            CALL 0x00730ac0
00730AAB  83 C4 0C                  ADD ESP,0xc
00730AAE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00730AB1  2B 55 10                  SUB EDX,dword ptr [EBP + 0x10]
00730AB4  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00730AB7  EB 9D                     JMP 0x00730a56
LAB_00730ab9:
00730AB9  8B E5                     MOV ESP,EBP
00730ABB  5D                        POP EBP
00730ABC  C3                        RET
