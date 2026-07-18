FUN_006e68c0:
006E68C0  55                        PUSH EBP
006E68C1  8B EC                     MOV EBP,ESP
006E68C3  83 EC 10                  SUB ESP,0x10
006E68C6  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E68C9  53                        PUSH EBX
006E68CA  56                        PUSH ESI
006E68CB  57                        PUSH EDI
006E68CC  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006E68CF  8B F1                     MOV ESI,ECX
006E68D1  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
006E68D7  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
006E68DD  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006E68E3  8B 8E DC 03 00 00         MOV ECX,dword ptr [ESI + 0x3dc]
006E68E9  BB 01 00 00 00            MOV EBX,0x1
006E68EE  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006E68F1  8B C1                     MOV EAX,ECX
006E68F3  DB 45 10                  FILD dword ptr [EBP + 0x10]
006E68F6  99                        CDQ
006E68F7  D8 3D D0 DF 79 00         FDIVR float ptr [0x0079dfd0]
006E68FD  2B C2                     SUB EAX,EDX
006E68FF  8B 96 80 02 00 00         MOV EDX,dword ptr [ESI + 0x280]
006E6905  D1 F8                     SAR EAX,0x1
006E6907  0F BF 12                  MOVSX EDX,word ptr [EDX]
006E690A  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006E690D  8B 96 A8 00 00 00         MOV EDX,dword ptr [ESI + 0xa8]
006E6913  83 FA 03                  CMP EDX,0x3
006E6916  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006E6919  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006E6920  D9 5D F8                  FSTP float ptr [EBP + -0x8]
006E6923  DB 45 F4                  FILD dword ptr [EBP + -0xc]
006E6926  DC 8E C8 00 00 00         FMUL double ptr [ESI + 0xc8]
006E692C  D9 5D 10                  FSTP float ptr [EBP + 0x10]
006E692F  0F 87 D8 00 00 00         JA 0x006e6a0d
switchD_006e6935::switchD:
006E6935  FF 24 95 DC 6A 6E 00      JMP dword ptr [EDX*0x4 + 0x6e6adc]
switchD_006e6935::caseD_0:
006E693C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E693F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E6942  2B D0                     SUB EDX,EAX
006E6944  03 D1                     ADD EDX,ECX
006E6946  DD D8                     FSTP ST0
006E6948  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
006E694B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E694E  DB 45 0C                  FILD dword ptr [EBP + 0xc]
006E6951  2B C2                     SUB EAX,EDX
006E6953  03 C1                     ADD EAX,ECX
006E6955  D8 4D 10                  FMUL float ptr [EBP + 0x10]
006E6958  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006E695B  D8 4D F8                  FMUL float ptr [EBP + -0x8]
006E695E  DB 45 08                  FILD dword ptr [EBP + 0x8]
006E6961  D8 4D 10                  FMUL float ptr [EBP + 0x10]
006E6964  D8 4D F8                  FMUL float ptr [EBP + -0x8]
006E6967  D9 5D FC                  FSTP float ptr [EBP + -0x4]
006E696A  E9 9E 00 00 00            JMP 0x006e6a0d
switchD_006e6935::caseD_1:
006E696F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E6972  8B D0                     MOV EDX,EAX
006E6974  2B D1                     SUB EDX,ECX
006E6976  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E6979  03 D1                     ADD EDX,ECX
006E697B  2B C8                     SUB ECX,EAX
006E697D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E6980  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006E6983  DD D8                     FSTP ST0
006E6985  DB 45 08                  FILD dword ptr [EBP + 0x8]
006E6988  03 C8                     ADD ECX,EAX
006E698A  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006E698D  D8 4D 10                  FMUL float ptr [EBP + 0x10]
006E6990  D8 4D F8                  FMUL float ptr [EBP + -0x8]
006E6993  DB 45 08                  FILD dword ptr [EBP + 0x8]
006E6996  D8 4D 10                  FMUL float ptr [EBP + 0x10]
006E6999  D8 4D F8                  FMUL float ptr [EBP + -0x8]
006E699C  D9 5D FC                  FSTP float ptr [EBP + -0x4]
006E699F  EB 6C                     JMP 0x006e6a0d
switchD_006e6935::caseD_2:
006E69A1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E69A4  8B D9                     MOV EBX,ECX
006E69A6  2B DA                     SUB EBX,EDX
006E69A8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E69AB  2B DA                     SUB EBX,EDX
006E69AD  2B C8                     SUB ECX,EAX
006E69AF  DD D8                     FSTP ST0
006E69B1  8D 5C 03 FF               LEA EBX,[EBX + EAX*0x1 + -0x1]
006E69B5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E69B8  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
006E69BB  2B CA                     SUB ECX,EDX
006E69BD  DB 45 0C                  FILD dword ptr [EBP + 0xc]
006E69C0  8D 4C 01 FF               LEA ECX,[ECX + EAX*0x1 + -0x1]
006E69C4  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006E69C7  D8 4D 10                  FMUL float ptr [EBP + 0x10]
006E69CA  D8 4D F8                  FMUL float ptr [EBP + -0x8]
006E69CD  DB 45 08                  FILD dword ptr [EBP + 0x8]
006E69D0  EB 2F                     JMP 0x006e6a01
switchD_006e6935::caseD_3:
006E69D2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E69D5  8B D9                     MOV EBX,ECX
006E69D7  2B D8                     SUB EBX,EAX
006E69D9  2B DA                     SUB EBX,EDX
006E69DB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E69DE  DD D8                     FSTP ST0
006E69E0  8D 5C 13 FF               LEA EBX,[EBX + EDX*0x1 + -0x1]
006E69E4  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
006E69E7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006E69EA  DB 45 0C                  FILD dword ptr [EBP + 0xc]
006E69ED  2B CB                     SUB ECX,EBX
006E69EF  2B CA                     SUB ECX,EDX
006E69F1  D8 4D 10                  FMUL float ptr [EBP + 0x10]
006E69F4  8D 54 01 FF               LEA EDX,[ECX + EAX*0x1 + -0x1]
006E69F8  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006E69FB  D8 4D F8                  FMUL float ptr [EBP + -0x8]
006E69FE  DB 45 08                  FILD dword ptr [EBP + 0x8]
LAB_006e6a01:
006E6A01  D8 4D 10                  FMUL float ptr [EBP + 0x10]
006E6A04  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006E6A07  D8 4D F8                  FMUL float ptr [EBP + -0x8]
006E6A0A  D9 5D FC                  FSTP float ptr [EBP + -0x4]
switchD_006e6935::default:
006E6A0D  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006E6A13  D9 55 08                  FST float ptr [EBP + 0x8]
006E6A16  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
006E6A1C  DF E0                     FNSTSW AX
006E6A1E  F6 C4 01                  TEST AH,0x1
006E6A21  74 0A                     JZ 0x006e6a2d
006E6A23  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
006E6A29  33 DB                     XOR EBX,EBX
006E6A2B  EB 2F                     JMP 0x006e6a5c
LAB_006e6a2d:
006E6A2D  DB 45 F4                  FILD dword ptr [EBP + -0xc]
006E6A30  D8 5D 08                  FCOMP float ptr [EBP + 0x8]
006E6A33  DF E0                     FNSTSW AX
006E6A35  F6 C4 41                  TEST AH,0x41
006E6A38  74 0A                     JZ 0x006e6a44
006E6A3A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006E6A3D  48                        DEC EAX
006E6A3E  33 DB                     XOR EBX,EBX
006E6A40  89 07                     MOV dword ptr [EDI],EAX
006E6A42  EB 18                     JMP 0x006e6a5c
LAB_006e6a44:
006E6A44  D9 45 08                  FLD float ptr [EBP + 0x8]
006E6A47  83 EC 08                  SUB ESP,0x8
006E6A4A  DD 1C 24                  FSTP double ptr [ESP]
006E6A4D  E8 FE 76 04 00            CALL 0x0072e150
006E6A52  83 C4 08                  ADD ESP,0x8
006E6A55  E8 2E 78 04 00            CALL 0x0072e288
006E6A5A  89 07                     MOV dword ptr [EDI],EAX
LAB_006e6a5c:
006E6A5C  D9 45 FC                  FLD float ptr [EBP + -0x4]
006E6A5F  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006E6A65  D9 55 FC                  FST float ptr [EBP + -0x4]
006E6A68  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
006E6A6E  DF E0                     FNSTSW AX
006E6A70  F6 C4 01                  TEST AH,0x1
006E6A73  74 14                     JZ 0x006e6a89
006E6A75  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006E6A78  5F                        POP EDI
006E6A79  5E                        POP ESI
006E6A7A  33 C0                     XOR EAX,EAX
006E6A7C  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
006E6A82  5B                        POP EBX
006E6A83  8B E5                     MOV ESP,EBP
006E6A85  5D                        POP EBP
006E6A86  C2 10 00                  RET 0x10
LAB_006e6a89:
006E6A89  8B 96 80 02 00 00         MOV EDX,dword ptr [ESI + 0x280]
006E6A8F  0F BF 4A 02               MOVSX ECX,word ptr [EDX + 0x2]
006E6A93  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006E6A96  DB 45 08                  FILD dword ptr [EBP + 0x8]
006E6A99  D8 5D FC                  FCOMP float ptr [EBP + -0x4]
006E6A9C  DF E0                     FNSTSW AX
006E6A9E  F6 C4 41                  TEST AH,0x41
006E6AA1  74 11                     JZ 0x006e6ab4
006E6AA3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E6AA6  49                        DEC ECX
006E6AA7  5F                        POP EDI
006E6AA8  5E                        POP ESI
006E6AA9  89 08                     MOV dword ptr [EAX],ECX
006E6AAB  33 C0                     XOR EAX,EAX
006E6AAD  5B                        POP EBX
006E6AAE  8B E5                     MOV ESP,EBP
006E6AB0  5D                        POP EBP
006E6AB1  C2 10 00                  RET 0x10
LAB_006e6ab4:
006E6AB4  D9 45 FC                  FLD float ptr [EBP + -0x4]
006E6AB7  83 EC 08                  SUB ESP,0x8
006E6ABA  DD 1C 24                  FSTP double ptr [ESP]
006E6ABD  E8 8E 76 04 00            CALL 0x0072e150
006E6AC2  83 C4 08                  ADD ESP,0x8
006E6AC5  E8 BE 77 04 00            CALL 0x0072e288
006E6ACA  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006E6ACD  5F                        POP EDI
006E6ACE  5E                        POP ESI
006E6ACF  89 01                     MOV dword ptr [ECX],EAX
006E6AD1  8B C3                     MOV EAX,EBX
006E6AD3  5B                        POP EBX
006E6AD4  8B E5                     MOV ESP,EBP
006E6AD6  5D                        POP EBP
006E6AD7  C2 10 00                  RET 0x10
