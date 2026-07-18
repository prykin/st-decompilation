FUN_005396e0:
005396E0  55                        PUSH EBP
005396E1  8B EC                     MOV EBP,ESP
005396E3  83 EC 48                  SUB ESP,0x48
005396E6  8B D1                     MOV EDX,ECX
005396E8  56                        PUSH ESI
005396E9  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005396EC  57                        PUSH EDI
005396ED  8B 42 5C                  MOV EAX,dword ptr [EDX + 0x5c]
005396F0  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005396F3  3B F0                     CMP ESI,EAX
005396F5  0F 84 AD 00 00 00         JZ 0x005397a8
005396FB  B9 08 00 00 00            MOV ECX,0x8
00539700  33 C0                     XOR EAX,EAX
00539702  8D 7A 18                  LEA EDI,[EDX + 0x18]
00539705  89 72 5C                  MOV dword ptr [EDX + 0x5c],ESI
00539708  F3 AB                     STOSD.REP ES:EDI
0053970A  8B 82 74 01 00 00         MOV EAX,dword ptr [EDX + 0x174]
00539710  C7 42 28 24 00 00 00      MOV dword ptr [EDX + 0x28],0x24
00539717  85 F6                     TEST ESI,ESI
00539719  74 02                     JZ 0x0053971d
0053971B  F7 D8                     NEG EAX
LAB_0053971d:
0053971D  66 89 42 2C               MOV word ptr [EDX + 0x2c],AX
00539721  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00539726  8D 55 BC                  LEA EDX,[EBP + -0x44]
00539729  8D 4D B8                  LEA ECX,[EBP + -0x48]
0053972C  6A 00                     PUSH 0x0
0053972E  52                        PUSH EDX
0053972F  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00539732  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00539738  E8 B3 40 1F 00            CALL 0x0072d7f0
0053973D  8B F0                     MOV ESI,EAX
0053973F  83 C4 08                  ADD ESP,0x8
00539742  85 F6                     TEST ESI,ESI
00539744  75 29                     JNZ 0x0053976f
00539746  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00539749  8B 81 84 01 00 00         MOV EAX,dword ptr [ECX + 0x184]
0053974F  85 C0                     TEST EAX,EAX
00539751  74 0C                     JZ 0x0053975f
00539753  8D 51 18                  LEA EDX,[ECX + 0x18]
00539756  52                        PUSH EDX
00539757  50                        PUSH EAX
00539758  6A 02                     PUSH 0x2
0053975A  E8 21 C9 1A 00            CALL 0x006e6080
LAB_0053975f:
0053975F  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00539762  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00539767  5F                        POP EDI
00539768  5E                        POP ESI
00539769  8B E5                     MOV ESP,EBP
0053976B  5D                        POP EBP
0053976C  C2 04 00                  RET 0x4
LAB_0053976f:
0053976F  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00539772  68 30 75 7C 00            PUSH 0x7c7530
00539777  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053977C  56                        PUSH ESI
0053977D  6A 00                     PUSH 0x0
0053977F  6A 68                     PUSH 0x68
00539781  68 90 74 7C 00            PUSH 0x7c7490
00539786  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053978C  E8 3F 3D 17 00            CALL 0x006ad4d0
00539791  83 C4 18                  ADD ESP,0x18
00539794  85 C0                     TEST EAX,EAX
00539796  74 01                     JZ 0x00539799
00539798  CC                        INT3
LAB_00539799:
00539799  6A 68                     PUSH 0x68
0053979B  68 90 74 7C 00            PUSH 0x7c7490
005397A0  6A 00                     PUSH 0x0
005397A2  56                        PUSH ESI
005397A3  E8 98 C6 16 00            CALL 0x006a5e40
LAB_005397a8:
005397A8  5F                        POP EDI
005397A9  5E                        POP ESI
005397AA  8B E5                     MOV ESP,EBP
005397AC  5D                        POP EBP
005397AD  C2 04 00                  RET 0x4
