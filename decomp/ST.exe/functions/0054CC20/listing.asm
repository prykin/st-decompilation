FUN_0054cc20:
0054CC20  55                        PUSH EBP
0054CC21  8B EC                     MOV EBP,ESP
0054CC23  83 EC 4C                  SUB ESP,0x4c
0054CC26  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054CC2B  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0054CC2E  56                        PUSH ESI
0054CC2F  8D 55 B8                  LEA EDX,[EBP + -0x48]
0054CC32  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0054CC35  6A 00                     PUSH 0x0
0054CC37  52                        PUSH EDX
0054CC38  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0054CC3B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054CC41  E8 AA 0B 1E 00            CALL 0x0072d7f0
0054CC46  8B F0                     MOV ESI,EAX
0054CC48  83 C4 08                  ADD ESP,0x8
0054CC4B  85 F6                     TEST ESI,ESI
0054CC4D  75 77                     JNZ 0x0054ccc6
0054CC4F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0054CC52  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0054CC55  8D 45 FC                  LEA EAX,[EBP + -0x4]
0054CC58  50                        PUSH EAX
0054CC59  51                        PUSH ECX
0054CC5A  8B CE                     MOV ECX,ESI
0054CC5C  E8 DB 84 EB FF            CALL 0x0040513c
0054CC61  85 C0                     TEST EAX,EAX
0054CC63  74 18                     JZ 0x0054cc7d
0054CC65  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0054CC6B  68 EF 00 00 00            PUSH 0xef
0054CC70  68 30 84 7C 00            PUSH 0x7c8430
0054CC75  52                        PUSH EDX
0054CC76  6A FC                     PUSH -0x4
0054CC78  E8 C3 91 15 00            CALL 0x006a5e40
LAB_0054cc7d:
0054CC7D  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0054CC80  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0054CC83  8B 06                     MOV EAX,dword ptr [ESI]
0054CC85  51                        PUSH ECX
0054CC86  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0054CC89  52                        PUSH EDX
0054CC8A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0054CC8D  51                        PUSH ECX
0054CC8E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0054CC91  52                        PUSH EDX
0054CC92  51                        PUSH ECX
0054CC93  8B CE                     MOV ECX,ESI
0054CC95  FF 50 08                  CALL dword ptr [EAX + 0x8]
0054CC98  8B F0                     MOV ESI,EAX
0054CC9A  85 F6                     TEST ESI,ESI
0054CC9C  74 17                     JZ 0x0054ccb5
0054CC9E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0054CCA4  68 F0 00 00 00            PUSH 0xf0
0054CCA9  68 30 84 7C 00            PUSH 0x7c8430
0054CCAE  52                        PUSH EDX
0054CCAF  56                        PUSH ESI
0054CCB0  E8 8B 91 15 00            CALL 0x006a5e40
LAB_0054ccb5:
0054CCB5  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0054CCB8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054CCBD  8B C6                     MOV EAX,ESI
0054CCBF  5E                        POP ESI
0054CCC0  8B E5                     MOV ESP,EBP
0054CCC2  5D                        POP EBP
0054CCC3  C2 14 00                  RET 0x14
LAB_0054ccc6:
0054CCC6  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0054CCC9  83 FE FC                  CMP ESI,-0x4
0054CCCC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054CCD2  75 26                     JNZ 0x0054ccfa
0054CCD4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0054CCD7  52                        PUSH EDX
0054CCD8  68 88 84 7C 00            PUSH 0x7c8488
0054CCDD  6A 00                     PUSH 0x0
0054CCDF  6A 00                     PUSH 0x0
0054CCE1  68 F3 00 00 00            PUSH 0xf3
0054CCE6  68 30 84 7C 00            PUSH 0x7c8430
0054CCEB  E8 E0 07 16 00            CALL 0x006ad4d0
0054CCF0  83 C4 18                  ADD ESP,0x18
0054CCF3  85 C0                     TEST EAX,EAX
0054CCF5  74 28                     JZ 0x0054cd1f
0054CCF7  CC                        INT3
LAB_0054ccfa:
0054CCFA  68 58 84 7C 00            PUSH 0x7c8458
0054CCFF  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054CD04  6A 00                     PUSH 0x0
0054CD06  6A 00                     PUSH 0x0
0054CD08  68 F5 00 00 00            PUSH 0xf5
0054CD0D  68 30 84 7C 00            PUSH 0x7c8430
0054CD12  E8 B9 07 16 00            CALL 0x006ad4d0
0054CD17  83 C4 18                  ADD ESP,0x18
0054CD1A  85 C0                     TEST EAX,EAX
0054CD1C  74 01                     JZ 0x0054cd1f
0054CD1E  CC                        INT3
LAB_0054cd1f:
0054CD1F  68 F7 00 00 00            PUSH 0xf7
0054CD24  68 30 84 7C 00            PUSH 0x7c8430
0054CD29  6A 00                     PUSH 0x0
0054CD2B  56                        PUSH ESI
0054CD2C  E8 0F 91 15 00            CALL 0x006a5e40
0054CD31  8B C6                     MOV EAX,ESI
0054CD33  5E                        POP ESI
0054CD34  8B E5                     MOV ESP,EBP
0054CD36  5D                        POP EBP
0054CD37  C2 14 00                  RET 0x14
