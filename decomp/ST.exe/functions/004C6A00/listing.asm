TLOBldMark::GetMessage:
004C6A00  55                        PUSH EBP
004C6A01  8B EC                     MOV EBP,ESP
004C6A03  83 EC 48                  SUB ESP,0x48
004C6A06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004C6A0B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004C6A0E  56                        PUSH ESI
004C6A0F  8D 55 BC                  LEA EDX,[EBP + -0x44]
004C6A12  8D 4D B8                  LEA ECX,[EBP + -0x48]
004C6A15  6A 00                     PUSH 0x0
004C6A17  52                        PUSH EDX
004C6A18  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004C6A1B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004C6A21  E8 CA 6D 26 00            CALL 0x0072d7f0
004C6A26  8B F0                     MOV ESI,EAX
004C6A28  83 C4 08                  ADD ESP,0x8
004C6A2B  85 F6                     TEST ESI,ESI
004C6A2D  75 64                     JNZ 0x004c6a93
004C6A2F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004C6A32  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
004C6A35  2B C6                     SUB EAX,ESI
004C6A37  74 40                     JZ 0x004c6a79
004C6A39  83 E8 02                  SUB EAX,0x2
004C6A3C  74 1D                     JZ 0x004c6a5b
004C6A3E  48                        DEC EAX
004C6A3F  75 40                     JNZ 0x004c6a81
004C6A41  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C6A44  E8 1E AD F3 FF            CALL 0x00401767
004C6A49  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004C6A4C  33 C0                     XOR EAX,EAX
004C6A4E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004C6A54  5E                        POP ESI
004C6A55  8B E5                     MOV ESP,EBP
004C6A57  5D                        POP EBP
004C6A58  C2 04 00                  RET 0x4
LAB_004c6a5b:
004C6A5B  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
004C6A5E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C6A61  50                        PUSH EAX
004C6A62  E8 70 E7 F3 FF            CALL 0x004051d7
004C6A67  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004C6A6A  33 C0                     XOR EAX,EAX
004C6A6C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004C6A72  5E                        POP ESI
004C6A73  8B E5                     MOV ESP,EBP
004C6A75  5D                        POP EBP
004C6A76  C2 04 00                  RET 0x4
LAB_004c6a79:
004C6A79  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C6A7C  E8 20 C8 F3 FF            CALL 0x004032a1
LAB_004c6a81:
004C6A81  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004C6A84  33 C0                     XOR EAX,EAX
004C6A86  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004C6A8C  5E                        POP ESI
004C6A8D  8B E5                     MOV ESP,EBP
004C6A8F  5D                        POP EBP
004C6A90  C2 04 00                  RET 0x4
LAB_004c6a93:
004C6A93  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004C6A96  68 44 D3 7A 00            PUSH 0x7ad344
004C6A9B  68 CC 4C 7A 00            PUSH 0x7a4ccc
004C6AA0  56                        PUSH ESI
004C6AA1  6A 00                     PUSH 0x0
004C6AA3  68 B6 00 00 00            PUSH 0xb6
004C6AA8  68 F4 D2 7A 00            PUSH 0x7ad2f4
004C6AAD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004C6AB3  E8 18 6A 1E 00            CALL 0x006ad4d0
004C6AB8  83 C4 18                  ADD ESP,0x18
004C6ABB  85 C0                     TEST EAX,EAX
004C6ABD  74 01                     JZ 0x004c6ac0
004C6ABF  CC                        INT3
LAB_004c6ac0:
004C6AC0  68 B7 00 00 00            PUSH 0xb7
004C6AC5  68 F4 D2 7A 00            PUSH 0x7ad2f4
004C6ACA  6A 00                     PUSH 0x0
004C6ACC  56                        PUSH ESI
004C6ACD  E8 6E F3 1D 00            CALL 0x006a5e40
004C6AD2  8B C6                     MOV EAX,ESI
004C6AD4  5E                        POP ESI
004C6AD5  8B E5                     MOV ESP,EBP
004C6AD7  5D                        POP EBP
004C6AD8  C2 04 00                  RET 0x4
