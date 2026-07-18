SAMPanelTy::ShiftControls:
0053D290  55                        PUSH EBP
0053D291  8B EC                     MOV EBP,ESP
0053D293  83 EC 48                  SUB ESP,0x48
0053D296  53                        PUSH EBX
0053D297  56                        PUSH ESI
0053D298  8B F1                     MOV ESI,ECX
0053D29A  57                        PUSH EDI
0053D29B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0053D29E  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0053D2A1  3B 7E 5C                  CMP EDI,dword ptr [ESI + 0x5c]
0053D2A4  0F 84 B4 00 00 00         JZ 0x0053d35e
0053D2AA  57                        PUSH EDI
0053D2AB  E8 86 7A EC FF            CALL 0x00404d36
0053D2B0  8B 86 74 01 00 00         MOV EAX,dword ptr [ESI + 0x174]
0053D2B6  C7 46 28 24 00 00 00      MOV dword ptr [ESI + 0x28],0x24
0053D2BD  85 FF                     TEST EDI,EDI
0053D2BF  74 02                     JZ 0x0053d2c3
0053D2C1  F7 D8                     NEG EAX
LAB_0053d2c3:
0053D2C3  66 89 46 2E               MOV word ptr [ESI + 0x2e],AX
0053D2C7  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053D2CC  8D 55 BC                  LEA EDX,[EBP + -0x44]
0053D2CF  8D 4D B8                  LEA ECX,[EBP + -0x48]
0053D2D2  6A 00                     PUSH 0x0
0053D2D4  52                        PUSH EDX
0053D2D5  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0053D2D8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053D2DE  E8 0D 05 1F 00            CALL 0x0072d7f0
0053D2E3  8B F0                     MOV ESI,EAX
0053D2E5  83 C4 08                  ADD ESP,0x8
0053D2E8  85 F6                     TEST ESI,ESI
0053D2EA  75 3A                     JNZ 0x0053d326
0053D2EC  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0053D2EF  BB 07 00 00 00            MOV EBX,0x7
0053D2F4  8D B7 B5 01 00 00         LEA ESI,[EDI + 0x1b5]
LAB_0053d2fa:
0053D2FA  8B 06                     MOV EAX,dword ptr [ESI]
0053D2FC  85 C0                     TEST EAX,EAX
0053D2FE  74 0E                     JZ 0x0053d30e
0053D300  8D 4F 18                  LEA ECX,[EDI + 0x18]
0053D303  51                        PUSH ECX
0053D304  50                        PUSH EAX
0053D305  6A 02                     PUSH 0x2
0053D307  8B CF                     MOV ECX,EDI
0053D309  E8 72 8D 1A 00            CALL 0x006e6080
LAB_0053d30e:
0053D30E  83 C6 04                  ADD ESI,0x4
0053D311  4B                        DEC EBX
0053D312  75 E6                     JNZ 0x0053d2fa
0053D314  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0053D317  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053D31D  5F                        POP EDI
0053D31E  5E                        POP ESI
0053D31F  5B                        POP EBX
0053D320  8B E5                     MOV ESP,EBP
0053D322  5D                        POP EBP
0053D323  C2 04 00                  RET 0x4
LAB_0053d326:
0053D326  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053D329  68 1C 78 7C 00            PUSH 0x7c781c
0053D32E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053D333  56                        PUSH ESI
0053D334  6A 00                     PUSH 0x0
0053D336  6A 46                     PUSH 0x46
0053D338  68 98 77 7C 00            PUSH 0x7c7798
0053D33D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053D342  E8 89 01 17 00            CALL 0x006ad4d0
0053D347  83 C4 18                  ADD ESP,0x18
0053D34A  85 C0                     TEST EAX,EAX
0053D34C  74 01                     JZ 0x0053d34f
0053D34E  CC                        INT3
LAB_0053d34f:
0053D34F  6A 46                     PUSH 0x46
0053D351  68 98 77 7C 00            PUSH 0x7c7798
0053D356  6A 00                     PUSH 0x0
0053D358  56                        PUSH ESI
0053D359  E8 E2 8A 16 00            CALL 0x006a5e40
LAB_0053d35e:
0053D35E  5F                        POP EDI
0053D35F  5E                        POP ESI
0053D360  5B                        POP EBX
0053D361  8B E5                     MOV ESP,EBP
0053D363  5D                        POP EBP
0053D364  C2 04 00                  RET 0x4
