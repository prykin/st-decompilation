FUN_005de5b0:
005DE5B0  55                        PUSH EBP
005DE5B1  8B EC                     MOV EBP,ESP
005DE5B3  81 EC 04 01 00 00         SUB ESP,0x104
005DE5B9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005DE5BC  85 C0                     TEST EAX,EAX
005DE5BE  7C 28                     JL 0x005de5e8
005DE5C0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005DE5C3  50                        PUSH EAX
005DE5C4  A1 18 76 80 00            MOV EAX,[0x00807618]
005DE5C9  50                        PUSH EAX
005DE5CA  51                        PUSH ECX
005DE5CB  E8 70 1B 0D 00            CALL 0x006b0140
005DE5D0  50                        PUSH EAX
005DE5D1  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
005DE5D7  68 28 D9 7C 00            PUSH 0x7cd928
005DE5DC  52                        PUSH EDX
005DE5DD  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005DE5E3  83 C4 10                  ADD ESP,0x10
005DE5E6  EB 25                     JMP 0x005de60d
LAB_005de5e8:
005DE5E8  A1 18 76 80 00            MOV EAX,[0x00807618]
005DE5ED  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005DE5F0  50                        PUSH EAX
005DE5F1  51                        PUSH ECX
005DE5F2  E8 49 1B 0D 00            CALL 0x006b0140
005DE5F7  50                        PUSH EAX
005DE5F8  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
005DE5FE  68 CC 4C 7A 00            PUSH 0x7a4ccc
005DE603  52                        PUSH EDX
005DE604  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005DE60A  83 C4 0C                  ADD ESP,0xc
LAB_005de60d:
005DE60D  A1 18 76 80 00            MOV EAX,[0x00807618]
005DE612  6A 10                     PUSH 0x10
005DE614  50                        PUSH EAX
005DE615  68 48 26 00 00            PUSH 0x2648
005DE61A  E8 21 1B 0D 00            CALL 0x006b0140
005DE61F  8B 15 78 6D 85 00         MOV EDX,dword ptr [0x00856d78]
005DE625  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
005DE62B  50                        PUSH EAX
005DE62C  51                        PUSH ECX
005DE62D  52                        PUSH EDX
005DE62E  FF 15 EC BD 85 00         CALL dword ptr [0x0085bdec]
005DE634  8B E5                     MOV ESP,EBP
005DE636  5D                        POP EBP
005DE637  C3                        RET
