FUN_0073a330:
0073A330  55                        PUSH EBP
0073A331  8B EC                     MOV EBP,ESP
0073A333  57                        PUSH EDI
0073A334  56                        PUSH ESI
0073A335  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0073A338  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073A33B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0073A33E  8B C1                     MOV EAX,ECX
0073A340  8B D1                     MOV EDX,ECX
0073A342  03 C6                     ADD EAX,ESI
0073A344  3B FE                     CMP EDI,ESI
0073A346  76 08                     JBE 0x0073a350
0073A348  3B F8                     CMP EDI,EAX
0073A34A  0F 82 78 01 00 00         JC 0x0073a4c8
LAB_0073a350:
0073A350  F7 C7 03 00 00 00         TEST EDI,0x3
0073A356  75 14                     JNZ 0x0073a36c
0073A358  C1 E9 02                  SHR ECX,0x2
0073A35B  83 E2 03                  AND EDX,0x3
0073A35E  83 F9 08                  CMP ECX,0x8
0073A361  72 29                     JC 0x0073a38c
0073A363  F3 A5                     MOVSD.REP ES:EDI,ESI
switchD_0073a365::switchD:
0073A365  FF 24 95 78 A4 73 00      JMP dword ptr [EDX*0x4 + 0x73a478]
LAB_0073a36c:
0073A36C  8B C7                     MOV EAX,EDI
0073A36E  BA 03 00 00 00            MOV EDX,0x3
0073A373  83 E9 04                  SUB ECX,0x4
0073A376  72 0C                     JC 0x0073a384
switchD_0073a384::default:
0073A378  83 E0 03                  AND EAX,0x3
0073A37B  03 C8                     ADD ECX,EAX
switchD_0073a37d::switchD:
0073A37D  FF 24 85 90 A3 73 00      JMP dword ptr [EAX*0x4 + 0x73a390]
switchD_0073a384::switchD:
0073A384  FF 24 8D 88 A4 73 00      JMP dword ptr [ECX*0x4 + 0x73a488]
switchD_0073a38c::switchD:
0073A38C  FF 24 8D 0C A4 73 00      JMP dword ptr [ECX*0x4 + 0x73a40c]
switchD_0073a37d::caseD_1:
0073A3A0  23 D1                     AND EDX,ECX
0073A3A2  8A 06                     MOV AL,byte ptr [ESI]
0073A3A4  88 07                     MOV byte ptr [EDI],AL
0073A3A6  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
0073A3A9  88 47 01                  MOV byte ptr [EDI + 0x1],AL
0073A3AC  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
0073A3AF  C1 E9 02                  SHR ECX,0x2
0073A3B2  88 47 02                  MOV byte ptr [EDI + 0x2],AL
0073A3B5  83 C6 03                  ADD ESI,0x3
0073A3B8  83 C7 03                  ADD EDI,0x3
0073A3BB  83 F9 08                  CMP ECX,0x8
0073A3BE  72 CC                     JC 0x0073a38c
0073A3C0  F3 A5                     MOVSD.REP ES:EDI,ESI
switchD_0073a3c2::switchD:
0073A3C2  FF 24 95 78 A4 73 00      JMP dword ptr [EDX*0x4 + 0x73a478]
switchD_0073a37d::caseD_2:
0073A3CC  23 D1                     AND EDX,ECX
0073A3CE  8A 06                     MOV AL,byte ptr [ESI]
0073A3D0  88 07                     MOV byte ptr [EDI],AL
0073A3D2  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
0073A3D5  C1 E9 02                  SHR ECX,0x2
0073A3D8  88 47 01                  MOV byte ptr [EDI + 0x1],AL
0073A3DB  83 C6 02                  ADD ESI,0x2
0073A3DE  83 C7 02                  ADD EDI,0x2
0073A3E1  83 F9 08                  CMP ECX,0x8
0073A3E4  72 A6                     JC 0x0073a38c
0073A3E6  F3 A5                     MOVSD.REP ES:EDI,ESI
switchD_0073a3e8::switchD:
0073A3E8  FF 24 95 78 A4 73 00      JMP dword ptr [EDX*0x4 + 0x73a478]
switchD_0073a37d::caseD_3:
0073A3F0  23 D1                     AND EDX,ECX
0073A3F2  8A 06                     MOV AL,byte ptr [ESI]
0073A3F4  88 07                     MOV byte ptr [EDI],AL
0073A3F6  46                        INC ESI
0073A3F7  C1 E9 02                  SHR ECX,0x2
0073A3FA  47                        INC EDI
0073A3FB  83 F9 08                  CMP ECX,0x8
0073A3FE  72 8C                     JC 0x0073a38c
0073A400  F3 A5                     MOVSD.REP ES:EDI,ESI
switchD_0073a402::switchD:
0073A402  FF 24 95 78 A4 73 00      JMP dword ptr [EDX*0x4 + 0x73a478]
switchD_0073a38c::caseD_7:
0073A42C  8B 44 8E E4               MOV EAX,dword ptr [ESI + ECX*0x4 + -0x1c]
0073A430  89 44 8F E4               MOV dword ptr [EDI + ECX*0x4 + -0x1c],EAX
switchD_0073a38c::caseD_6:
0073A434  8B 44 8E E8               MOV EAX,dword ptr [ESI + ECX*0x4 + -0x18]
0073A438  89 44 8F E8               MOV dword ptr [EDI + ECX*0x4 + -0x18],EAX
switchD_0073a38c::caseD_5:
0073A43C  8B 44 8E EC               MOV EAX,dword ptr [ESI + ECX*0x4 + -0x14]
0073A440  89 44 8F EC               MOV dword ptr [EDI + ECX*0x4 + -0x14],EAX
switchD_0073a38c::caseD_4:
0073A444  8B 44 8E F0               MOV EAX,dword ptr [ESI + ECX*0x4 + -0x10]
0073A448  89 44 8F F0               MOV dword ptr [EDI + ECX*0x4 + -0x10],EAX
switchD_0073a38c::caseD_3:
0073A44C  8B 44 8E F4               MOV EAX,dword ptr [ESI + ECX*0x4 + -0xc]
0073A450  89 44 8F F4               MOV dword ptr [EDI + ECX*0x4 + -0xc],EAX
switchD_0073a38c::caseD_2:
0073A454  8B 44 8E F8               MOV EAX,dword ptr [ESI + ECX*0x4 + -0x8]
0073A458  89 44 8F F8               MOV dword ptr [EDI + ECX*0x4 + -0x8],EAX
switchD_0073a38c::caseD_1:
0073A45C  8B 44 8E FC               MOV EAX,dword ptr [ESI + ECX*0x4 + -0x4]
0073A460  89 44 8F FC               MOV dword ptr [EDI + ECX*0x4 + -0x4],EAX
0073A464  8D 04 8D 00 00 00 00      LEA EAX,[ECX*0x4 + 0x0]
0073A46B  03 F0                     ADD ESI,EAX
0073A46D  03 F8                     ADD EDI,EAX
switchD_0073a38c::caseD_0:
0073A46F  FF 24 95 78 A4 73 00      JMP dword ptr [EDX*0x4 + 0x73a478]
switchD_0073a365::caseD_0:
0073A488  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073A48B  5E                        POP ESI
0073A48C  5F                        POP EDI
0073A48D  C9                        LEAVE
0073A48E  C3                        RET
switchD_0073a365::caseD_1:
0073A490  8A 06                     MOV AL,byte ptr [ESI]
0073A492  88 07                     MOV byte ptr [EDI],AL
0073A494  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073A497  5E                        POP ESI
0073A498  5F                        POP EDI
0073A499  C9                        LEAVE
0073A49A  C3                        RET
switchD_0073a365::caseD_2:
0073A49C  8A 06                     MOV AL,byte ptr [ESI]
0073A49E  88 07                     MOV byte ptr [EDI],AL
0073A4A0  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
0073A4A3  88 47 01                  MOV byte ptr [EDI + 0x1],AL
0073A4A6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073A4A9  5E                        POP ESI
0073A4AA  5F                        POP EDI
0073A4AB  C9                        LEAVE
0073A4AC  C3                        RET
switchD_0073a365::caseD_3:
0073A4B0  8A 06                     MOV AL,byte ptr [ESI]
0073A4B2  88 07                     MOV byte ptr [EDI],AL
0073A4B4  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
0073A4B7  88 47 01                  MOV byte ptr [EDI + 0x1],AL
0073A4BA  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
0073A4BD  88 47 02                  MOV byte ptr [EDI + 0x2],AL
0073A4C0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073A4C3  5E                        POP ESI
0073A4C4  5F                        POP EDI
0073A4C5  C9                        LEAVE
0073A4C6  C3                        RET
LAB_0073a4c8:
0073A4C8  8D 74 31 FC               LEA ESI,[ECX + ESI*0x1 + -0x4]
0073A4CC  8D 7C 39 FC               LEA EDI,[ECX + EDI*0x1 + -0x4]
0073A4D0  F7 C7 03 00 00 00         TEST EDI,0x3
0073A4D6  75 24                     JNZ 0x0073a4fc
0073A4D8  C1 E9 02                  SHR ECX,0x2
0073A4DB  83 E2 03                  AND EDX,0x3
0073A4DE  83 F9 08                  CMP ECX,0x8
0073A4E1  72 0D                     JC 0x0073a4f0
0073A4E3  FD                        STD
0073A4E4  F3 A5                     MOVSD.REP ES:EDI,ESI
0073A4E6  FC                        CLD
switchD_0073a4e7::switchD:
0073A4E7  FF 24 95 10 A6 73 00      JMP dword ptr [EDX*0x4 + 0x73a610]
LAB_0073a4f0:
0073A4F0  F7 D9                     NEG ECX
switchD_0073a4f2::switchD:
0073A4F2  FF 24 8D C0 A5 73 00      JMP dword ptr [ECX*0x4 + 0x73a5c0]
LAB_0073a4fc:
0073A4FC  8B C7                     MOV EAX,EDI
0073A4FE  BA 03 00 00 00            MOV EDX,0x3
0073A503  83 F9 04                  CMP ECX,0x4
0073A506  72 0C                     JC 0x0073a514
switchD_0073a514::default:
0073A508  83 E0 03                  AND EAX,0x3
0073A50B  2B C8                     SUB ECX,EAX
switchD_0073a50d::switchD:
0073A50D  FF 24 85 18 A5 73 00      JMP dword ptr [EAX*0x4 + 0x73a518]
switchD_0073a514::switchD:
0073A514  FF 24 8D 10 A6 73 00      JMP dword ptr [ECX*0x4 + 0x73a610]
switchD_0073a50d::caseD_1:
0073A528  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
0073A52B  23 D1                     AND EDX,ECX
0073A52D  88 47 03                  MOV byte ptr [EDI + 0x3],AL
0073A530  4E                        DEC ESI
0073A531  C1 E9 02                  SHR ECX,0x2
0073A534  4F                        DEC EDI
0073A535  83 F9 08                  CMP ECX,0x8
0073A538  72 B6                     JC 0x0073a4f0
0073A53A  FD                        STD
0073A53B  F3 A5                     MOVSD.REP ES:EDI,ESI
0073A53D  FC                        CLD
switchD_0073a53e::switchD:
0073A53E  FF 24 95 10 A6 73 00      JMP dword ptr [EDX*0x4 + 0x73a610]
switchD_0073a50d::caseD_2:
0073A548  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
0073A54B  23 D1                     AND EDX,ECX
0073A54D  88 47 03                  MOV byte ptr [EDI + 0x3],AL
0073A550  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
0073A553  C1 E9 02                  SHR ECX,0x2
0073A556  88 47 02                  MOV byte ptr [EDI + 0x2],AL
0073A559  83 EE 02                  SUB ESI,0x2
0073A55C  83 EF 02                  SUB EDI,0x2
0073A55F  83 F9 08                  CMP ECX,0x8
0073A562  72 8C                     JC 0x0073a4f0
0073A564  FD                        STD
0073A565  F3 A5                     MOVSD.REP ES:EDI,ESI
0073A567  FC                        CLD
switchD_0073a568::switchD:
0073A568  FF 24 95 10 A6 73 00      JMP dword ptr [EDX*0x4 + 0x73a610]
switchD_0073a50d::caseD_3:
0073A570  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
0073A573  23 D1                     AND EDX,ECX
0073A575  88 47 03                  MOV byte ptr [EDI + 0x3],AL
0073A578  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
0073A57B  88 47 02                  MOV byte ptr [EDI + 0x2],AL
0073A57E  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
0073A581  C1 E9 02                  SHR ECX,0x2
0073A584  88 47 01                  MOV byte ptr [EDI + 0x1],AL
0073A587  83 EE 03                  SUB ESI,0x3
0073A58A  83 EF 03                  SUB EDI,0x3
0073A58D  83 F9 08                  CMP ECX,0x8
0073A590  0F 82 5A FF FF FF         JC 0x0073a4f0
0073A596  FD                        STD
0073A597  F3 A5                     MOVSD.REP ES:EDI,ESI
0073A599  FC                        CLD
switchD_0073a59a::switchD:
0073A59A  FF 24 95 10 A6 73 00      JMP dword ptr [EDX*0x4 + 0x73a610]
switchD_0073a4f2::caseD_7:
0073A5C4  8B 44 8E 1C               MOV EAX,dword ptr [ESI + ECX*0x4 + 0x1c]
0073A5C8  89 44 8F 1C               MOV dword ptr [EDI + ECX*0x4 + 0x1c],EAX
switchD_0073a4f2::caseD_6:
0073A5CC  8B 44 8E 18               MOV EAX,dword ptr [ESI + ECX*0x4 + 0x18]
0073A5D0  89 44 8F 18               MOV dword ptr [EDI + ECX*0x4 + 0x18],EAX
switchD_0073a4f2::caseD_5:
0073A5D4  8B 44 8E 14               MOV EAX,dword ptr [ESI + ECX*0x4 + 0x14]
0073A5D8  89 44 8F 14               MOV dword ptr [EDI + ECX*0x4 + 0x14],EAX
switchD_0073a4f2::caseD_4:
0073A5DC  8B 44 8E 10               MOV EAX,dword ptr [ESI + ECX*0x4 + 0x10]
0073A5E0  89 44 8F 10               MOV dword ptr [EDI + ECX*0x4 + 0x10],EAX
switchD_0073a4f2::caseD_3:
0073A5E4  8B 44 8E 0C               MOV EAX,dword ptr [ESI + ECX*0x4 + 0xc]
0073A5E8  89 44 8F 0C               MOV dword ptr [EDI + ECX*0x4 + 0xc],EAX
switchD_0073a4f2::caseD_2:
0073A5EC  8B 44 8E 08               MOV EAX,dword ptr [ESI + ECX*0x4 + 0x8]
0073A5F0  89 44 8F 08               MOV dword ptr [EDI + ECX*0x4 + 0x8],EAX
switchD_0073a4f2::caseD_1:
0073A5F4  8B 44 8E 04               MOV EAX,dword ptr [ESI + ECX*0x4 + 0x4]
0073A5F8  89 44 8F 04               MOV dword ptr [EDI + ECX*0x4 + 0x4],EAX
0073A5FC  8D 04 8D 00 00 00 00      LEA EAX,[ECX*0x4 + 0x0]
0073A603  03 F0                     ADD ESI,EAX
0073A605  03 F8                     ADD EDI,EAX
switchD_0073a4f2::caseD_0:
0073A607  FF 24 95 10 A6 73 00      JMP dword ptr [EDX*0x4 + 0x73a610]
switchD_0073a4e7::caseD_0:
0073A620  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073A623  5E                        POP ESI
0073A624  5F                        POP EDI
0073A625  C9                        LEAVE
0073A626  C3                        RET
switchD_0073a4e7::caseD_1:
0073A628  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
0073A62B  88 47 03                  MOV byte ptr [EDI + 0x3],AL
0073A62E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073A631  5E                        POP ESI
0073A632  5F                        POP EDI
0073A633  C9                        LEAVE
0073A634  C3                        RET
switchD_0073a4e7::caseD_2:
0073A638  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
0073A63B  88 47 03                  MOV byte ptr [EDI + 0x3],AL
0073A63E  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
0073A641  88 47 02                  MOV byte ptr [EDI + 0x2],AL
0073A644  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073A647  5E                        POP ESI
0073A648  5F                        POP EDI
0073A649  C9                        LEAVE
0073A64A  C3                        RET
switchD_0073a4e7::caseD_3:
0073A64C  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
0073A64F  88 47 03                  MOV byte ptr [EDI + 0x3],AL
0073A652  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
0073A655  88 47 02                  MOV byte ptr [EDI + 0x2],AL
0073A658  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
0073A65B  88 47 01                  MOV byte ptr [EDI + 0x1],AL
0073A65E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073A661  5E                        POP ESI
0073A662  5F                        POP EDI
0073A663  C9                        LEAVE
0073A664  C3                        RET
