FUN_00575460:
00575460  55                        PUSH EBP
00575461  8B EC                     MOV EBP,ESP
00575463  51                        PUSH ECX
00575464  8B 0D 0C 76 80 00         MOV ECX,dword ptr [0x0080760c]
0057546A  53                        PUSH EBX
0057546B  56                        PUSH ESI
0057546C  57                        PUSH EDI
0057546D  33 FF                     XOR EDI,EDI
0057546F  3B CF                     CMP ECX,EDI
00575471  74 16                     JZ 0x00575489
00575473  8B F1                     MOV ESI,ECX
00575475  E8 76 68 16 00            CALL 0x006dbcf0
0057547A  56                        PUSH ESI
0057547B  E8 30 8E 1B 00            CALL 0x0072e2b0
00575480  83 C4 04                  ADD ESP,0x4
00575483  89 3D 0C 76 80 00         MOV dword ptr [0x0080760c],EDI
LAB_00575489:
00575489  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0057548C  3B DF                     CMP EBX,EDI
0057548E  0F 84 F0 00 00 00         JZ 0x00575584
00575494  6A 14                     PUSH 0x14
00575496  6A 04                     PUSH 0x4
00575498  6A 14                     PUSH 0x14
0057549A  57                        PUSH EDI
0057549B  E8 F0 8D 13 00            CALL 0x006ae290
005754A0  8B F0                     MOV ESI,EAX
005754A2  8B 83 51 04 00 00         MOV EAX,dword ptr [EBX + 0x451]
005754A8  89 78 04                  MOV dword ptr [EAX + 0x4],EDI
LAB_005754ab:
005754AB  8B 8B 51 04 00 00         MOV ECX,dword ptr [EBX + 0x451]
005754B1  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005754B4  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005754B7  3B D0                     CMP EDX,EAX
005754B9  73 27                     JNC 0x005754e2
005754BB  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005754BE  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
005754C1  0F AF C2                  IMUL EAX,EDX
005754C4  8D 52 01                  LEA EDX,[EDX + 0x1]
005754C7  03 C7                     ADD EAX,EDI
005754C9  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
005754CC  74 14                     JZ 0x005754e2
005754CE  8D 78 08                  LEA EDI,[EAX + 0x8]
005754D1  57                        PUSH EDI
005754D2  56                        PUSH ESI
005754D3  E8 E8 8C 13 00            CALL 0x006ae1c0
005754D8  8B 0F                     MOV ECX,dword ptr [EDI]
005754DA  51                        PUSH ECX
005754DB  E8 B0 09 13 00            CALL 0x006a5e90
005754E0  EB C9                     JMP 0x005754ab
LAB_005754e2:
005754E2  8B 93 51 04 00 00         MOV EDX,dword ptr [EBX + 0x451]
005754E8  52                        PUSH EDX
005754E9  E8 22 8C 13 00            CALL 0x006ae110
005754EE  8B 83 55 04 00 00         MOV EAX,dword ptr [EBX + 0x455]
005754F4  33 FF                     XOR EDI,EDI
005754F6  3B C7                     CMP EAX,EDI
005754F8  89 BB 51 04 00 00         MOV dword ptr [EBX + 0x451],EDI
005754FE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00575501  7E 7B                     JLE 0x0057557e
00575503  8D 83 59 04 00 00         LEA EAX,[EBX + 0x459]
00575509  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0057550C  EB 02                     JMP 0x00575510
LAB_0057550e:
0057550E  33 FF                     XOR EDI,EDI
LAB_00575510:
00575510  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00575513  8B 01                     MOV EAX,dword ptr [ECX]
00575515  3B C7                     CMP EAX,EDI
00575517  74 49                     JZ 0x00575562
00575519  8D 78 0C                  LEA EDI,[EAX + 0xc]
0057551C  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0057551F  85 C0                     TEST EAX,EAX
00575521  74 3F                     JZ 0x00575562
00575523  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00575526  C7 46 04 00 00 00 00      MOV dword ptr [ESI + 0x4],0x0
LAB_0057552d:
0057552D  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00575530  3B CA                     CMP ECX,EDX
00575532  73 1B                     JNC 0x0057554f
00575534  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00575537  0F AF C1                  IMUL EAX,ECX
0057553A  03 46 1C                  ADD EAX,dword ptr [ESI + 0x1c]
0057553D  8D 49 01                  LEA ECX,[ECX + 0x1]
00575540  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
00575543  74 0A                     JZ 0x0057554f
00575545  8B 0F                     MOV ECX,dword ptr [EDI]
00575547  3B 08                     CMP ECX,dword ptr [EAX]
00575549  75 E2                     JNZ 0x0057552d
0057554B  85 C0                     TEST EAX,EAX
0057554D  75 0D                     JNZ 0x0057555c
LAB_0057554f:
0057554F  57                        PUSH EDI
00575550  56                        PUSH ESI
00575551  E8 6A 8C 13 00            CALL 0x006ae1c0
00575556  57                        PUSH EDI
00575557  E8 04 5B 13 00            CALL 0x006ab060
LAB_0057555c:
0057555C  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_00575562:
00575562  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00575565  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00575568  8B 8B 55 04 00 00         MOV ECX,dword ptr [EBX + 0x455]
0057556E  40                        INC EAX
0057556F  83 C2 04                  ADD EDX,0x4
00575572  3B C1                     CMP EAX,ECX
00575574  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00575577  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0057557A  7C 92                     JL 0x0057550e
0057557C  33 FF                     XOR EDI,EDI
LAB_0057557e:
0057557E  56                        PUSH ESI
0057557F  E8 8C 8B 13 00            CALL 0x006ae110
LAB_00575584:
00575584  8B 93 4D 04 00 00         MOV EDX,dword ptr [EBX + 0x44d]
0057558A  89 7A 04                  MOV dword ptr [EDX + 0x4],EDI
LAB_0057558d:
0057558D  8B 83 4D 04 00 00         MOV EAX,dword ptr [EBX + 0x44d]
00575593  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00575596  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00575599  3B D1                     CMP EDX,ECX
0057559B  73 1E                     JNC 0x005755bb
0057559D  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005755A0  8B 70 1C                  MOV ESI,dword ptr [EAX + 0x1c]
005755A3  0F AF CA                  IMUL ECX,EDX
005755A6  8D 52 01                  LEA EDX,[EDX + 0x1]
005755A9  03 CE                     ADD ECX,ESI
005755AB  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
005755AE  74 0B                     JZ 0x005755bb
005755B0  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
005755B3  50                        PUSH EAX
005755B4  E8 D7 08 13 00            CALL 0x006a5e90
005755B9  EB D2                     JMP 0x0057558d
LAB_005755bb:
005755BB  8B 8B 4D 04 00 00         MOV ECX,dword ptr [EBX + 0x44d]
005755C1  51                        PUSH ECX
005755C2  E8 49 8B 13 00            CALL 0x006ae110
005755C7  89 BB 4D 04 00 00         MOV dword ptr [EBX + 0x44d],EDI
005755CD  5F                        POP EDI
005755CE  5E                        POP ESI
005755CF  5B                        POP EBX
005755D0  8B E5                     MOV ESP,EBP
005755D2  5D                        POP EBP
005755D3  C3                        RET
