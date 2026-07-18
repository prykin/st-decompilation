FUN_006216e0:
006216E0  55                        PUSH EBP
006216E1  8B EC                     MOV EBP,ESP
006216E3  83 EC 10                  SUB ESP,0x10
006216E6  33 C0                     XOR EAX,EAX
006216E8  56                        PUSH ESI
006216E9  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006216EC  8B F1                     MOV ESI,ECX
006216EE  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006216F4  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006216F7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006216FA  57                        PUSH EDI
006216FB  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
006216FE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00621701  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00621707  89 45 F9                  MOV dword ptr [EBP + -0x7],EAX
0062170A  8B 86 0A 01 00 00         MOV EAX,dword ptr [ESI + 0x10a]
00621710  83 CF FF                  OR EDI,0xffffffff
00621713  85 C0                     TEST EAX,EAX
00621715  89 55 F5                  MOV dword ptr [EBP + -0xb],EDX
00621718  75 13                     JNZ 0x0062172d
0062171A  6A 0A                     PUSH 0xa
0062171C  6A 0D                     PUSH 0xd
0062171E  6A 0A                     PUSH 0xa
00621720  6A 00                     PUSH 0x0
00621722  E8 69 CB 08 00            CALL 0x006ae290
00621727  89 86 0A 01 00 00         MOV dword ptr [ESI + 0x10a],EAX
LAB_0062172d:
0062172D  8B B6 0A 01 00 00         MOV ESI,dword ptr [ESI + 0x10a]
00621733  85 F6                     TEST ESI,ESI
00621735  74 12                     JZ 0x00621749
00621737  8D 4D F0                  LEA ECX,[EBP + -0x10]
0062173A  51                        PUSH ECX
0062173B  56                        PUSH ESI
0062173C  E8 7F CA 08 00            CALL 0x006ae1c0
00621741  5F                        POP EDI
00621742  5E                        POP ESI
00621743  8B E5                     MOV ESP,EBP
00621745  5D                        POP EBP
00621746  C2 04 00                  RET 0x4
LAB_00621749:
00621749  8B C7                     MOV EAX,EDI
0062174B  5F                        POP EDI
0062174C  5E                        POP ESI
0062174D  8B E5                     MOV ESP,EBP
0062174F  5D                        POP EBP
00621750  C2 04 00                  RET 0x4
