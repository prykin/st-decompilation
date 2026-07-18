FUN_0070b430:
0070B430  55                        PUSH EBP
0070B431  8B EC                     MOV EBP,ESP
0070B433  83 EC 54                  SUB ESP,0x54
0070B436  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070B43B  53                        PUSH EBX
0070B43C  56                        PUSH ESI
0070B43D  57                        PUSH EDI
0070B43E  8D 55 B0                  LEA EDX,[EBP + -0x50]
0070B441  8D 4D AC                  LEA ECX,[EBP + -0x54]
0070B444  6A 00                     PUSH 0x0
0070B446  52                        PUSH EDX
0070B447  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0070B44E  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0070B451  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070B457  E8 94 23 02 00            CALL 0x0072d7f0
0070B45C  8B F0                     MOV ESI,EAX
0070B45E  83 C4 08                  ADD ESP,0x8
0070B461  85 F6                     TEST ESI,ESI
0070B463  0F 85 14 01 00 00         JNZ 0x0070b57d
0070B469  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0070B46C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0070B46F  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0070B472  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070B475  8D 45 F0                  LEA EAX,[EBP + -0x10]
0070B478  56                        PUSH ESI
0070B479  50                        PUSH EAX
0070B47A  57                        PUSH EDI
0070B47B  53                        PUSH EBX
0070B47C  E8 8F 6E FE FF            CALL 0x006f2310
0070B481  85 C0                     TEST EAX,EAX
0070B483  75 10                     JNZ 0x0070b495
0070B485  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0070B488  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070B48E  5F                        POP EDI
0070B48F  5E                        POP ESI
0070B490  5B                        POP EBX
0070B491  8B E5                     MOV ESP,EBP
0070B493  5D                        POP EBP
0070B494  C3                        RET
LAB_0070b495:
0070B495  0F BF 55 FA               MOVSX EDX,word ptr [EBP + -0x6]
0070B499  8D 04 95 15 00 00 00      LEA EAX,[EDX*0x4 + 0x15]
0070B4A0  50                        PUSH EAX
0070B4A1  E8 6A F7 F9 FF            CALL 0x006aac10
0070B4A6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070B4A9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070B4AC  89 48 02                  MOV dword ptr [EAX + 0x2],ECX
0070B4AF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070B4B2  66 8B 45 FA               MOV AX,word ptr [EBP + -0x6]
0070B4B6  56                        PUSH ESI
0070B4B7  66 89 02                  MOV word ptr [EDX],AX
0070B4BA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070B4BD  66 C7 41 06 FF FF         MOV word ptr [ECX + 0x6],0xffff
0070B4C3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070B4C6  88 5A 08                  MOV byte ptr [EDX + 0x8],BL
0070B4C9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070B4CC  66 8B 4D F0               MOV CX,word ptr [EBP + -0x10]
0070B4D0  66 89 48 09               MOV word ptr [EAX + 0x9],CX
0070B4D4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070B4D7  66 8B 45 F2               MOV AX,word ptr [EBP + -0xe]
0070B4DB  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0070B4DE  66 89 42 0B               MOV word ptr [EDX + 0xb],AX
0070B4E2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070B4E5  51                        PUSH ECX
0070B4E6  57                        PUSH EDI
0070B4E7  8A 50 08                  MOV DL,byte ptr [EAX + 0x8]
0070B4EA  8B 40 02                  MOV EAX,dword ptr [EAX + 0x2]
0070B4ED  52                        PUSH EDX
0070B4EE  50                        PUSH EAX
0070B4EF  E8 AC F0 FF FF            CALL 0x0070a5a0
0070B4F4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070B4F7  33 FF                     XOR EDI,EDI
0070B4F9  83 C4 14                  ADD ESP,0x14
0070B4FC  89 41 0D                  MOV dword ptr [ECX + 0xd],EAX
0070B4FF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070B502  66 39 38                  CMP word ptr [EAX],DI
0070B505  8B 70 0D                  MOV ESI,dword ptr [EAX + 0xd]
0070B508  7E 63                     JLE 0x0070b56d
LAB_0070b50a:
0070B50A  33 C9                     XOR ECX,ECX
0070B50C  8A 48 08                  MOV CL,byte ptr [EAX + 0x8]
0070B50F  49                        DEC ECX
0070B510  83 F9 1B                  CMP ECX,0x1b
0070B513  77 36                     JA 0x0070b54b
0070B515  33 D2                     XOR EDX,EDX
0070B517  8A 91 E0 B5 70 00         MOV DL,byte ptr [ECX + 0x70b5e0]
switchD_0070b51d::switchD:
0070B51D  FF 24 95 D0 B5 70 00      JMP dword ptr [EDX*0x4 + 0x70b5d0]
switchD_0070b51d::caseD_e:
0070B524  8D 4E 04                  LEA ECX,[ESI + 0x4]
0070B527  89 4C B8 11               MOV dword ptr [EAX + EDI*0x4 + 0x11],ECX
0070B52B  8B 16                     MOV EDX,dword ptr [ESI]
0070B52D  8D 74 16 04               LEA ESI,[ESI + EDX*0x1 + 0x4]
0070B531  EB 2F                     JMP 0x0070b562
switchD_0070b51d::caseD_6:
0070B533  89 74 B8 11               MOV dword ptr [EAX + EDI*0x4 + 0x11],ESI
0070B537  8B 06                     MOV EAX,dword ptr [ESI]
0070B539  03 F0                     ADD ESI,EAX
0070B53B  EB 25                     JMP 0x0070b562
switchD_0070b51d::caseD_1:
0070B53D  56                        PUSH ESI
0070B53E  89 74 B8 11               MOV dword ptr [EAX + EDI*0x4 + 0x11],ESI
0070B542  E8 09 9B FA FF            CALL 0x006b5050
0070B547  03 F0                     ADD ESI,EAX
0070B549  EB 17                     JMP 0x0070b562
switchD_0070b51d::caseD_2:
0070B54B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0070B550  68 82 02 00 00            PUSH 0x282
0070B555  68 E0 FF 7E 00            PUSH 0x7effe0
0070B55A  50                        PUSH EAX
0070B55B  6A CC                     PUSH -0x34
0070B55D  E8 DE A8 F9 FF            CALL 0x006a5e40
LAB_0070b562:
0070B562  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070B565  47                        INC EDI
0070B566  0F BF 08                  MOVSX ECX,word ptr [EAX]
0070B569  3B F9                     CMP EDI,ECX
0070B56B  7C 9D                     JL 0x0070b50a
LAB_0070b56d:
0070B56D  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0070B570  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070B576  5F                        POP EDI
0070B577  5E                        POP ESI
0070B578  5B                        POP EBX
0070B579  8B E5                     MOV ESP,EBP
0070B57B  5D                        POP EBP
0070B57C  C3                        RET
LAB_0070b57d:
0070B57D  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0070B580  68 AC 00 7F 00            PUSH 0x7f00ac
0070B585  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070B58A  56                        PUSH ESI
0070B58B  6A 00                     PUSH 0x0
0070B58D  68 87 02 00 00            PUSH 0x287
0070B592  68 E0 FF 7E 00            PUSH 0x7effe0
0070B597  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070B59C  E8 2F 1F FA FF            CALL 0x006ad4d0
0070B5A1  83 C4 18                  ADD ESP,0x18
0070B5A4  85 C0                     TEST EAX,EAX
0070B5A6  74 01                     JZ 0x0070b5a9
0070B5A8  CC                        INT3
LAB_0070b5a9:
0070B5A9  8D 4D FC                  LEA ECX,[EBP + -0x4]
0070B5AC  51                        PUSH ECX
0070B5AD  E8 4E 00 00 00            CALL 0x0070b600
0070B5B2  83 C4 04                  ADD ESP,0x4
0070B5B5  68 8B 02 00 00            PUSH 0x28b
0070B5BA  68 E0 FF 7E 00            PUSH 0x7effe0
0070B5BF  6A 00                     PUSH 0x0
0070B5C1  56                        PUSH ESI
0070B5C2  E8 79 A8 F9 FF            CALL 0x006a5e40
0070B5C7  5F                        POP EDI
0070B5C8  5E                        POP ESI
0070B5C9  33 C0                     XOR EAX,EAX
0070B5CB  5B                        POP EBX
0070B5CC  8B E5                     MOV ESP,EBP
0070B5CE  5D                        POP EBP
0070B5CF  C3                        RET
