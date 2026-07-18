FUN_0055c320:
0055C320  55                        PUSH EBP
0055C321  8B EC                     MOV EBP,ESP
0055C323  51                        PUSH ECX
0055C324  53                        PUSH EBX
0055C325  8B D1                     MOV EDX,ECX
0055C327  56                        PUSH ESI
0055C328  57                        PUSH EDI
0055C329  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0055C32C  83 C9 FF                  OR ECX,0xffffffff
0055C32F  33 C0                     XOR EAX,EAX
0055C331  8D 5A 44                  LEA EBX,[EDX + 0x44]
0055C334  F2 AE                     SCASB.REPNE ES:EDI
0055C336  F7 D1                     NOT ECX
0055C338  2B F9                     SUB EDI,ECX
0055C33A  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0055C33D  8B C1                     MOV EAX,ECX
0055C33F  8B F7                     MOV ESI,EDI
0055C341  8B FB                     MOV EDI,EBX
0055C343  8D 9A 44 02 00 00         LEA EBX,[EDX + 0x244]
0055C349  C1 E9 02                  SHR ECX,0x2
0055C34C  F3 A5                     MOVSD.REP ES:EDI,ESI
0055C34E  8B C8                     MOV ECX,EAX
0055C350  33 C0                     XOR EAX,EAX
0055C352  83 E1 03                  AND ECX,0x3
0055C355  81 C2 44 04 00 00         ADD EDX,0x444
0055C35B  F3 A4                     MOVSB.REP ES:EDI,ESI
0055C35D  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0055C360  83 C9 FF                  OR ECX,0xffffffff
0055C363  F2 AE                     SCASB.REPNE ES:EDI
0055C365  F7 D1                     NOT ECX
0055C367  2B F9                     SUB EDI,ECX
0055C369  8B C1                     MOV EAX,ECX
0055C36B  8B F7                     MOV ESI,EDI
0055C36D  8B FB                     MOV EDI,EBX
0055C36F  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0055C372  C1 E9 02                  SHR ECX,0x2
0055C375  F3 A5                     MOVSD.REP ES:EDI,ESI
0055C377  8B C8                     MOV ECX,EAX
0055C379  33 C0                     XOR EAX,EAX
0055C37B  83 E1 03                  AND ECX,0x3
0055C37E  F3 A4                     MOVSB.REP ES:EDI,ESI
0055C380  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0055C383  83 C9 FF                  OR ECX,0xffffffff
0055C386  F2 AE                     SCASB.REPNE ES:EDI
0055C388  F7 D1                     NOT ECX
0055C38A  2B F9                     SUB EDI,ECX
0055C38C  8B C1                     MOV EAX,ECX
0055C38E  8B F7                     MOV ESI,EDI
0055C390  8B FA                     MOV EDI,EDX
0055C392  33 D2                     XOR EDX,EDX
0055C394  C1 E9 02                  SHR ECX,0x2
0055C397  F3 A5                     MOVSD.REP ES:EDI,ESI
0055C399  8B C8                     MOV ECX,EAX
0055C39B  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0055C39E  83 E1 03                  AND ECX,0x3
0055C3A1  F3 A4                     MOVSB.REP ES:EDI,ESI
0055C3A3  8B 73 08                  MOV ESI,dword ptr [EBX + 0x8]
0055C3A6  3B D6                     CMP EDX,ESI
0055C3A8  7D 1F                     JGE 0x0055c3c9
LAB_0055c3aa:
0055C3AA  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
0055C3AD  33 C0                     XOR EAX,EAX
0055C3AF  8B 3C 91                  MOV EDI,dword ptr [ECX + EDX*0x4]
0055C3B2  83 C9 FF                  OR ECX,0xffffffff
0055C3B5  F2 AE                     SCASB.REPNE ES:EDI
0055C3B7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055C3BA  F7 D1                     NOT ECX
0055C3BC  49                        DEC ECX
0055C3BD  42                        INC EDX
0055C3BE  3B D6                     CMP EDX,ESI
0055C3C0  8D 4C 08 01               LEA ECX,[EAX + ECX*0x1 + 0x1]
0055C3C4  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0055C3C7  7C E1                     JL 0x0055c3aa
LAB_0055c3c9:
0055C3C9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055C3CC  8B 82 44 06 00 00         MOV EAX,dword ptr [EDX + 0x644]
0055C3D2  8D B2 44 06 00 00         LEA ESI,[EDX + 0x644]
0055C3D8  85 C0                     TEST EAX,EAX
0055C3DA  74 06                     JZ 0x0055c3e2
0055C3DC  56                        PUSH ESI
0055C3DD  E8 7E EC 14 00            CALL 0x006ab060
LAB_0055c3e2:
0055C3E2  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0055C3E5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0055C3E8  03 C7                     ADD EAX,EDI
0055C3EA  50                        PUSH EAX
0055C3EB  E8 20 E8 14 00            CALL 0x006aac10
0055C3F0  85 C0                     TEST EAX,EAX
0055C3F2  89 06                     MOV dword ptr [ESI],EAX
0055C3F4  0F 84 90 00 00 00         JZ 0x0055c48a
0055C3FA  8B 73 08                  MOV ESI,dword ptr [EBX + 0x8]
0055C3FD  33 D2                     XOR EDX,EDX
0055C3FF  85 F6                     TEST ESI,ESI
0055C401  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0055C404  7E 74                     JLE 0x0055c47a
0055C406  3B D6                     CMP EDX,ESI
0055C408  7D 08                     JGE 0x0055c412
LAB_0055c40a:
0055C40A  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
0055C40D  8B 3C 91                  MOV EDI,dword ptr [ECX + EDX*0x4]
0055C410  EB 02                     JMP 0x0055c414
LAB_0055c412:
0055C412  33 FF                     XOR EDI,EDI
LAB_0055c414:
0055C414  83 C9 FF                  OR ECX,0xffffffff
0055C417  33 C0                     XOR EAX,EAX
0055C419  F2 AE                     SCASB.REPNE ES:EDI
0055C41B  F7 D1                     NOT ECX
0055C41D  49                        DEC ECX
0055C41E  8B C1                     MOV EAX,ECX
0055C420  40                        INC EAX
0055C421  3B D6                     CMP EDX,ESI
0055C423  7D 08                     JGE 0x0055c42d
0055C425  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
0055C428  8B 34 91                  MOV ESI,dword ptr [ECX + EDX*0x4]
0055C42B  EB 02                     JMP 0x0055c42f
LAB_0055c42d:
0055C42D  33 F6                     XOR ESI,ESI
LAB_0055c42f:
0055C42F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0055C432  8B C8                     MOV ECX,EAX
0055C434  8B D9                     MOV EBX,ECX
0055C436  C1 E9 02                  SHR ECX,0x2
0055C439  F3 A5                     MOVSD.REP ES:EDI,ESI
0055C43B  8B CB                     MOV ECX,EBX
0055C43D  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0055C440  83 E1 03                  AND ECX,0x3
0055C443  F3 A4                     MOVSB.REP ES:EDI,ESI
0055C445  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0055C448  8B CA                     MOV ECX,EDX
0055C44A  03 F0                     ADD ESI,EAX
0055C44C  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0055C44F  48                        DEC EAX
0055C450  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
0055C453  2B C8                     SUB ECX,EAX
0055C455  F7 D9                     NEG ECX
0055C457  1A C9                     SBB CL,CL
0055C459  83 E1 0A                  AND ECX,0xa
0055C45C  88 0E                     MOV byte ptr [ESI],CL
0055C45E  46                        INC ESI
0055C45F  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
0055C462  8B 73 08                  MOV ESI,dword ptr [EBX + 0x8]
0055C465  42                        INC EDX
0055C466  3B D6                     CMP EDX,ESI
0055C468  7C A0                     JL 0x0055c40a
0055C46A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055C46D  5F                        POP EDI
0055C46E  5E                        POP ESI
0055C46F  5B                        POP EBX
0055C470  C6 42 0A 01               MOV byte ptr [EDX + 0xa],0x1
0055C474  8B E5                     MOV ESP,EBP
0055C476  5D                        POP EBP
0055C477  C2 10 00                  RET 0x10
LAB_0055c47a:
0055C47A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0055C47D  5F                        POP EDI
0055C47E  5E                        POP ESI
0055C47F  5B                        POP EBX
0055C480  C6 40 0A 01               MOV byte ptr [EAX + 0xa],0x1
0055C484  8B E5                     MOV ESP,EBP
0055C486  5D                        POP EBP
0055C487  C2 10 00                  RET 0x10
LAB_0055c48a:
0055C48A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0055C48D  5F                        POP EDI
0055C48E  5E                        POP ESI
0055C48F  5B                        POP EBX
0055C490  C6 41 0A 01               MOV byte ptr [ECX + 0xa],0x1
0055C494  8B E5                     MOV ESP,EBP
0055C496  5D                        POP EBP
0055C497  C2 10 00                  RET 0x10
