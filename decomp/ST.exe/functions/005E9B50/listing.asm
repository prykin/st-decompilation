FUN_005e9b50:
005E9B50  55                        PUSH EBP
005E9B51  8B EC                     MOV EBP,ESP
005E9B53  81 EC D4 08 00 00         SUB ESP,0x8d4
005E9B59  56                        PUSH ESI
005E9B5A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005E9B5D  57                        PUSH EDI
005E9B5E  B9 23 02 00 00            MOV ECX,0x223
005E9B63  33 C0                     XOR EAX,EAX
005E9B65  8D BD 2C F7 FF FF         LEA EDI,[EBP + 0xfffff72c]
005E9B6B  F3 AB                     STOSD.REP ES:EDI
005E9B6D  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E9B72  8D 55 BC                  LEA EDX,[EBP + -0x44]
005E9B75  8D 4D B8                  LEA ECX,[EBP + -0x48]
005E9B78  6A 00                     PUSH 0x0
005E9B7A  52                        PUSH EDX
005E9B7B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005E9B7E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E9B84  E8 67 3C 14 00            CALL 0x0072d7f0
005E9B89  8B F0                     MOV ESI,EAX
005E9B8B  83 C4 08                  ADD ESP,0x8
005E9B8E  85 F6                     TEST ESI,ESI
005E9B90  0F 85 22 01 00 00         JNZ 0x005e9cb8
005E9B96  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005E9B99  8B 86 64 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a64]
005E9B9F  85 C0                     TEST EAX,EAX
005E9BA1  0F 85 03 01 00 00         JNZ 0x005e9caa
005E9BA7  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E9BAD  E8 98 8E E1 FF            CALL 0x00402a4a
005E9BB2  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E9BB8  E8 F8 8C E1 FF            CALL 0x004028b5
005E9BBD  B9 23 02 00 00            MOV ECX,0x223
005E9BC2  33 C0                     XOR EAX,EAX
005E9BC4  8D BD 2C F7 FF FF         LEA EDI,[EBP + 0xfffff72c]
005E9BCA  6A 00                     PUSH 0x0
005E9BCC  F3 AB                     STOSD.REP ES:EDI
005E9BCE  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E9BD3  C7 85 2C F7 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff72c],0x1
005E9BDD  C7 85 30 F7 FF FF 09 00 00 00  MOV dword ptr [EBP + 0xfffff730],0x9
005E9BE7  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005E9BEA  C7 85 38 F7 FF FF CB 00 00 00  MOV dword ptr [EBP + 0xfffff738],0xcb
005E9BF4  89 8D 34 F7 FF FF         MOV dword ptr [EBP + 0xfffff734],ECX
005E9BFA  C7 85 3C F7 FF FF 3F 02 00 00  MOV dword ptr [EBP + 0xfffff73c],0x23f
005E9C04  8B 90 82 06 00 00         MOV EDX,dword ptr [EAX + 0x682]
005E9C0A  05 4C 05 00 00            ADD EAX,0x54c
005E9C0F  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
005E9C12  89 8D 40 F7 FF FF         MOV dword ptr [EBP + 0xfffff740],ECX
005E9C18  8B 90 36 01 00 00         MOV EDX,dword ptr [EAX + 0x136]
005E9C1E  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
005E9C21  C7 85 48 F7 FF FF 04 01 00 00  MOV dword ptr [EBP + 0xfffff748],0x104
005E9C2B  89 8D 44 F7 FF FF         MOV dword ptr [EBP + 0xfffff744],ECX
005E9C31  8B 90 3A 01 00 00         MOV EDX,dword ptr [EAX + 0x13a]
005E9C37  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005E9C3A  89 95 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],EDX
005E9C40  C7 45 90 00 01 00 00      MOV dword ptr [EBP + -0x70],0x100
005E9C47  8D B5 2C F7 FF FF         LEA ESI,[EBP + 0xfffff72c]
005E9C4D  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
005E9C50  C7 85 7C F7 FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffff77c],0x0
005E9C5A  89 95 78 F7 FF FF         MOV dword ptr [EBP + 0xfffff778],EDX
005E9C60  C7 85 80 F7 FF FF A0 C0 00 00  MOV dword ptr [EBP + 0xfffff780],0xc0a0
005E9C6A  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
005E9C6D  56                        PUSH ESI
005E9C6E  89 95 B8 F7 FF FF         MOV dword ptr [EBP + 0xfffff7b8],EDX
005E9C74  C7 85 BC F7 FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffff7bc],0x0
005E9C7E  C7 85 C0 F7 FF FF A2 C0 00 00  MOV dword ptr [EBP + 0xfffff7c0],0xc0a2
005E9C88  8B 11                     MOV EDX,dword ptr [ECX]
005E9C8A  6A 00                     PUSH 0x0
005E9C8C  50                        PUSH EAX
005E9C8D  6A 06                     PUSH 0x6
005E9C8F  FF 52 08                  CALL dword ptr [EDX + 0x8]
005E9C92  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E9C97  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E9C9D  8B 88 54 05 00 00         MOV ECX,dword ptr [EAX + 0x554]
005E9CA3  51                        PUSH ECX
005E9CA4  52                        PUSH EDX
005E9CA5  E8 86 97 0C 00            CALL 0x006b3430
LAB_005e9caa:
005E9CAA  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005E9CAD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005E9CB2  5F                        POP EDI
005E9CB3  5E                        POP ESI
005E9CB4  8B E5                     MOV ESP,EBP
005E9CB6  5D                        POP EBP
005E9CB7  C3                        RET
LAB_005e9cb8:
005E9CB8  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005E9CBB  68 24 DE 7C 00            PUSH 0x7cde24
005E9CC0  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E9CC5  56                        PUSH ESI
005E9CC6  6A 00                     PUSH 0x0
005E9CC8  68 03 03 00 00            PUSH 0x303
005E9CCD  68 5C DD 7C 00            PUSH 0x7cdd5c
005E9CD2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E9CD8  E8 F3 37 0C 00            CALL 0x006ad4d0
005E9CDD  83 C4 18                  ADD ESP,0x18
005E9CE0  85 C0                     TEST EAX,EAX
005E9CE2  74 01                     JZ 0x005e9ce5
005E9CE4  CC                        INT3
LAB_005e9ce5:
005E9CE5  68 03 03 00 00            PUSH 0x303
005E9CEA  68 5C DD 7C 00            PUSH 0x7cdd5c
005E9CEF  6A 00                     PUSH 0x0
005E9CF1  56                        PUSH ESI
005E9CF2  E8 49 C1 0B 00            CALL 0x006a5e40
005E9CF7  5F                        POP EDI
005E9CF8  5E                        POP ESI
005E9CF9  8B E5                     MOV ESP,EBP
005E9CFB  5D                        POP EBP
005E9CFC  C3                        RET
