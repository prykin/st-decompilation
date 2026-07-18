cLoadingTy::SetProcess:
00554F20  55                        PUSH EBP
00554F21  8B EC                     MOV EBP,ESP
00554F23  83 EC 48                  SUB ESP,0x48
00554F26  56                        PUSH ESI
00554F27  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00554F2A  E8 6C D5 EA FF            CALL 0x0040249b
00554F2F  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00554F34  8D 55 BC                  LEA EDX,[EBP + -0x44]
00554F37  8D 4D B8                  LEA ECX,[EBP + -0x48]
00554F3A  6A 00                     PUSH 0x0
00554F3C  52                        PUSH EDX
00554F3D  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00554F40  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00554F46  E8 A5 88 1D 00            CALL 0x0072d7f0
00554F4B  8B F0                     MOV ESI,EAX
00554F4D  83 C4 08                  ADD ESP,0x8
00554F50  85 F6                     TEST ESI,ESI
00554F52  75 59                     JNZ 0x00554fad
00554F54  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00554F57  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
00554F5A  85 C0                     TEST EAX,EAX
00554F5C  7C 0D                     JL 0x00554f6b
00554F5E  6A 00                     PUSH 0x0
00554F60  6A 00                     PUSH 0x0
00554F62  6A 02                     PUSH 0x2
00554F64  8B CE                     MOV ECX,ESI
00554F66  E8 07 E5 EA FF            CALL 0x00403472
LAB_00554f6b:
00554F6B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00554F6E  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
00554F71  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
00554F77  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
00554F7A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00554F7D  85 C0                     TEST EAX,EAX
00554F7F  89 46 40                  MOV dword ptr [ESI + 0x40],EAX
00554F82  77 07                     JA 0x00554f8b
00554F84  C7 46 40 01 00 00 00      MOV dword ptr [ESI + 0x40],0x1
LAB_00554f8b:
00554F8B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00554F8E  C7 46 50 FF FF FF FF      MOV dword ptr [ESI + 0x50],0xffffffff
00554F95  51                        PUSH ECX
00554F96  8B CE                     MOV ECX,ESI
00554F98  E8 93 C2 EA FF            CALL 0x00401230
00554F9D  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00554FA0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00554FA6  5E                        POP ESI
00554FA7  8B E5                     MOV ESP,EBP
00554FA9  5D                        POP EBP
00554FAA  C2 0C 00                  RET 0xc
LAB_00554fad:
00554FAD  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00554FB0  68 B4 8F 7C 00            PUSH 0x7c8fb4
00554FB5  68 CC 4C 7A 00            PUSH 0x7a4ccc
00554FBA  56                        PUSH ESI
00554FBB  6A 00                     PUSH 0x0
00554FBD  68 09 01 00 00            PUSH 0x109
00554FC2  68 0C 8F 7C 00            PUSH 0x7c8f0c
00554FC7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00554FCC  E8 FF 84 15 00            CALL 0x006ad4d0
00554FD1  83 C4 18                  ADD ESP,0x18
00554FD4  85 C0                     TEST EAX,EAX
00554FD6  74 01                     JZ 0x00554fd9
00554FD8  CC                        INT3
LAB_00554fd9:
00554FD9  68 0A 01 00 00            PUSH 0x10a
00554FDE  68 0C 8F 7C 00            PUSH 0x7c8f0c
00554FE3  6A 00                     PUSH 0x0
00554FE5  56                        PUSH ESI
00554FE6  E8 55 0E 15 00            CALL 0x006a5e40
00554FEB  5E                        POP ESI
00554FEC  8B E5                     MOV ESP,EBP
00554FEE  5D                        POP EBP
00554FEF  C2 0C 00                  RET 0xc
