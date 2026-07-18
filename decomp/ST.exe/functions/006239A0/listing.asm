FUN_006239a0:
006239A0  55                        PUSH EBP
006239A1  8B EC                     MOV EBP,ESP
006239A3  83 EC 18                  SUB ESP,0x18
006239A6  53                        PUSH EBX
006239A7  56                        PUSH ESI
006239A8  8B F1                     MOV ESI,ECX
006239AA  57                        PUSH EDI
006239AB  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006239B2  8B 86 AE 02 00 00         MOV EAX,dword ptr [ESI + 0x2ae]
006239B8  83 F8 04                  CMP EAX,0x4
006239BB  0F 87 D0 04 00 00         JA 0x00623e91
switchD_006239c1::switchD:
006239C1  FF 24 85 9C 3E 62 00      JMP dword ptr [EAX*0x4 + 0x623e9c]
switchD_006239c1::caseD_1:
006239C8  8D 45 F0                  LEA EAX,[EBP + -0x10]
006239CB  8D 4D F4                  LEA ECX,[EBP + -0xc]
006239CE  50                        PUSH EAX
006239CF  8B 86 EE 02 00 00         MOV EAX,dword ptr [ESI + 0x2ee]
006239D5  8D 55 F8                  LEA EDX,[EBP + -0x8]
006239D8  51                        PUSH ECX
006239D9  52                        PUSH EDX
006239DA  50                        PUSH EAX
006239DB  8B CE                     MOV ECX,ESI
006239DD  E8 D3 DA DD FF            CALL 0x004014b5
006239E2  85 C0                     TEST EAX,EAX
006239E4  0F 8E A7 04 00 00         JLE 0x00623e91
006239EA  66 8B 8E C2 02 00 00      MOV CX,word ptr [ESI + 0x2c2]
006239F1  66 8B 96 C6 02 00 00      MOV DX,word ptr [ESI + 0x2c6]
006239F8  66 8B 86 CA 02 00 00      MOV AX,word ptr [ESI + 0x2ca]
006239FF  66 89 4E 54               MOV word ptr [ESI + 0x54],CX
00623A03  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00623A06  66 89 56 56               MOV word ptr [ESI + 0x56],DX
00623A0A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00623A0D  66 89 46 58               MOV word ptr [ESI + 0x58],AX
00623A11  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00623A14  89 8E C2 02 00 00         MOV dword ptr [ESI + 0x2c2],ECX
00623A1A  89 96 C6 02 00 00         MOV dword ptr [ESI + 0x2c6],EDX
00623A20  89 86 CA 02 00 00         MOV dword ptr [ESI + 0x2ca],EAX
switchD_006239c1::caseD_0:
00623A26  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00623A2D  5F                        POP EDI
00623A2E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00623A31  5E                        POP ESI
00623A32  5B                        POP EBX
00623A33  8B E5                     MOV ESP,EBP
00623A35  5D                        POP EBP
00623A36  C3                        RET
switchD_006239c1::caseD_2:
00623A37  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00623A3D  8B 86 0F 03 00 00         MOV EAX,dword ptr [ESI + 0x30f]
00623A43  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00623A49  3B D0                     CMP EDX,EAX
00623A4B  0F 82 40 04 00 00         JC 0x00623e91
00623A51  8A 86 53 03 00 00         MOV AL,byte ptr [ESI + 0x353]
00623A57  84 C0                     TEST AL,AL
00623A59  75 1C                     JNZ 0x00623a77
00623A5B  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
00623A5F  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
00623A63  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
00623A67  50                        PUSH EAX
00623A68  51                        PUSH ECX
00623A69  52                        PUSH EDX
00623A6A  8B CE                     MOV ECX,ESI
00623A6C  E8 C6 1B DE FF            CALL 0x00405637
00623A71  88 86 53 03 00 00         MOV byte ptr [ESI + 0x353],AL
LAB_00623a77:
00623A77  8B CE                     MOV ECX,ESI
00623A79  E8 45 08 DE FF            CALL 0x004042c3
00623A7E  8A 86 53 03 00 00         MOV AL,byte ptr [ESI + 0x353]
00623A84  84 C0                     TEST AL,AL
00623A86  74 57                     JZ 0x00623adf
00623A88  6A 01                     PUSH 0x1
00623A8A  8B CE                     MOV ECX,ESI
00623A8C  E8 35 D8 DD FF            CALL 0x004012c6
00623A91  85 C0                     TEST EAX,EAX
00623A93  75 07                     JNZ 0x00623a9c
00623A95  8B CE                     MOV ECX,ESI
00623A97  E8 AB 06 DE FF            CALL 0x00404147
LAB_00623a9c:
00623A9C  8B 86 63 03 00 00         MOV EAX,dword ptr [ESI + 0x363]
00623AA2  85 C0                     TEST EAX,EAX
00623AA4  75 39                     JNZ 0x00623adf
00623AA6  E8 E7 E3 DD FF            CALL 0x00401e92
00623AAB  85 C0                     TEST EAX,EAX
00623AAD  89 86 63 03 00 00         MOV dword ptr [ESI + 0x363],EAX
00623AB3  74 2A                     JZ 0x00623adf
00623AB5  8B 8E CA 02 00 00         MOV ECX,dword ptr [ESI + 0x2ca]
00623ABB  8B 96 C6 02 00 00         MOV EDX,dword ptr [ESI + 0x2c6]
00623AC1  6A 01                     PUSH 0x1
00623AC3  6A 05                     PUSH 0x5
00623AC5  6A 14                     PUSH 0x14
00623AC7  83 E9 28                  SUB ECX,0x28
00623ACA  68 82 00 00 00            PUSH 0x82
00623ACF  51                        PUSH ECX
00623AD0  8B 8E C2 02 00 00         MOV ECX,dword ptr [ESI + 0x2c2]
00623AD6  52                        PUSH EDX
00623AD7  51                        PUSH ECX
00623AD8  8B C8                     MOV ECX,EAX
00623ADA  E8 B1 1C DE FF            CALL 0x00405790
LAB_00623adf:
00623ADF  C7 86 AE 02 00 00 03 00 00 00  MOV dword ptr [ESI + 0x2ae],0x3
00623AE9  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00623AEF  5F                        POP EDI
00623AF0  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00623AF6  83 C0 07                  ADD EAX,0x7
00623AF9  89 86 0F 03 00 00         MOV dword ptr [ESI + 0x30f],EAX
00623AFF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00623B02  5E                        POP ESI
00623B03  5B                        POP EBX
00623B04  8B E5                     MOV ESP,EBP
00623B06  5D                        POP EBP
00623B07  C3                        RET
switchD_006239c1::caseD_3:
00623B08  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00623B0E  8B 86 0F 03 00 00         MOV EAX,dword ptr [ESI + 0x30f]
00623B14  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00623B1A  3B D0                     CMP EDX,EAX
00623B1C  0F 82 C1 00 00 00         JC 0x00623be3
00623B22  8B 86 CA 02 00 00         MOV EAX,dword ptr [ESI + 0x2ca]
00623B28  8B 8E C6 02 00 00         MOV ECX,dword ptr [ESI + 0x2c6]
00623B2E  8B 96 C2 02 00 00         MOV EDX,dword ptr [ESI + 0x2c2]
00623B34  6A 01                     PUSH 0x1
00623B36  50                        PUSH EAX
00623B37  51                        PUSH ECX
00623B38  52                        PUSH EDX
00623B39  8B CE                     MOV ECX,ESI
00623B3B  E8 1E 21 DE FF            CALL 0x00405c5e
00623B40  8B CE                     MOV ECX,ESI
00623B42  E8 AA 15 DE FF            CALL 0x004050f1
00623B47  6A 01                     PUSH 0x1
00623B49  8B CE                     MOV ECX,ESI
00623B4B  C7 86 AE 02 00 00 04 00 00 00  MOV dword ptr [ESI + 0x2ae],0x4
00623B55  E8 87 16 DE FF            CALL 0x004051e1
00623B5A  8B 8E C2 02 00 00         MOV ECX,dword ptr [ESI + 0x2c2]
00623B60  50                        PUSH EAX
00623B61  8B 86 C6 02 00 00         MOV EAX,dword ptr [ESI + 0x2c6]
00623B67  50                        PUSH EAX
00623B68  51                        PUSH ECX
00623B69  8B CE                     MOV ECX,ESI
00623B6B  E8 8D 0E DE FF            CALL 0x004049fd
00623B70  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
00623B74  8A 86 62 02 00 00         MOV AL,byte ptr [ESI + 0x262]
00623B7A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00623B80  56                        PUSH ESI
00623B81  52                        PUSH EDX
00623B82  50                        PUSH EAX
00623B83  E8 C6 FE DD FF            CALL 0x00403a4e
00623B88  8B 8E 0D 01 00 00         MOV ECX,dword ptr [ESI + 0x10d]
00623B8E  51                        PUSH ECX
00623B8F  8B CE                     MOV ECX,ESI
00623B91  E8 D6 E5 DD FF            CALL 0x0040216c
00623B96  8B 5E 18                  MOV EBX,dword ptr [ESI + 0x18]
00623B99  33 C0                     XOR EAX,EAX
00623B9B  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
00623B9F  8A 86 8E 00 00 00         MOV AL,byte ptr [ESI + 0x8e]
00623BA5  53                        PUSH EBX
00623BA6  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
00623BAA  0F BF 7E 47               MOVSX EDI,word ptr [ESI + 0x47]
00623BAE  56                        PUSH ESI
00623BAF  50                        PUSH EAX
00623BB0  51                        PUSH ECX
00623BB1  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00623BB7  52                        PUSH EDX
00623BB8  57                        PUSH EDI
00623BB9  E8 03 13 DE FF            CALL 0x00404ec1
00623BBE  85 C0                     TEST EAX,EAX
00623BC0  75 06                     JNZ 0x00623bc8
00623BC2  FE 8E 14 03 00 00         DEC byte ptr [ESI + 0x314]
LAB_00623bc8:
00623BC8  8B 86 BA 02 00 00         MOV EAX,dword ptr [ESI + 0x2ba]
00623BCE  85 C0                     TEST EAX,EAX
00623BD0  7D 39                     JGE 0x00623c0b
00623BD2  8B CE                     MOV ECX,ESI
00623BD4  E8 6E 05 DE FF            CALL 0x00404147
00623BD9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00623BDC  5F                        POP EDI
00623BDD  5E                        POP ESI
00623BDE  5B                        POP EBX
00623BDF  8B E5                     MOV ESP,EBP
00623BE1  5D                        POP EBP
00623BE2  C3                        RET
switchD_006239c1::caseD_4:
00623BE3  8B 86 BA 02 00 00         MOV EAX,dword ptr [ESI + 0x2ba]
00623BE9  85 C0                     TEST EAX,EAX
00623BEB  7D 1E                     JGE 0x00623c0b
00623BED  83 BE AE 02 00 00 04      CMP dword ptr [ESI + 0x2ae],0x4
00623BF4  0F 85 97 02 00 00         JNZ 0x00623e91
00623BFA  8B CE                     MOV ECX,ESI
00623BFC  E8 46 05 DE FF            CALL 0x00404147
00623C01  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00623C04  5F                        POP EDI
00623C05  5E                        POP ESI
00623C06  5B                        POP EBX
00623C07  8B E5                     MOV ESP,EBP
00623C09  5D                        POP EBP
00623C0A  C3                        RET
LAB_00623c0b:
00623C0B  8B 86 CE 02 00 00         MOV EAX,dword ptr [ESI + 0x2ce]
00623C11  33 D2                     XOR EDX,EDX
00623C13  8A 96 AD 02 00 00         MOV DL,byte ptr [ESI + 0x2ad]
00623C19  8B 0C 95 C0 04 7D 00      MOV ECX,dword ptr [EDX*0x4 + 0x7d04c0]
00623C20  3B C1                     CMP EAX,ECX
00623C22  7C 51                     JL 0x00623c75
00623C24  8A 96 DF 02 00 00         MOV DL,byte ptr [ESI + 0x2df]
00623C2A  84 D2                     TEST DL,DL
00623C2C  74 30                     JZ 0x00623c5e
00623C2E  3B C1                     CMP EAX,ECX
00623C30  75 0D                     JNZ 0x00623c3f
00623C32  6A 09                     PUSH 0x9
00623C34  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
00623C3A  E8 15 0C DE FF            CALL 0x00404854
LAB_00623c3f:
00623C3F  8B 86 DB 02 00 00         MOV EAX,dword ptr [ESI + 0x2db]
00623C45  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
00623C4B  50                        PUSH EAX
00623C4C  6A 09                     PUSH 0x9
00623C4E  8B CF                     MOV ECX,EDI
00623C50  E8 0F D4 DD FF            CALL 0x00401064
00623C55  6A 09                     PUSH 0x9
00623C57  8B CF                     MOV ECX,EDI
00623C59  E8 5E F4 DD FF            CALL 0x004030bc
LAB_00623c5e:
00623C5E  8B 86 DB 02 00 00         MOV EAX,dword ptr [ESI + 0x2db]
00623C64  8B 8E D7 02 00 00         MOV ECX,dword ptr [ESI + 0x2d7]
00623C6A  3B C1                     CMP EAX,ECX
00623C6C  7D 07                     JGE 0x00623c75
00623C6E  40                        INC EAX
00623C6F  89 86 DB 02 00 00         MOV dword ptr [ESI + 0x2db],EAX
LAB_00623c75:
00623C75  8A 86 E0 02 00 00         MOV AL,byte ptr [ESI + 0x2e0]
00623C7B  84 C0                     TEST AL,AL
00623C7D  74 45                     JZ 0x00623cc4
00623C7F  8B 86 E1 02 00 00         MOV EAX,dword ptr [ESI + 0x2e1]
00623C85  8B 8E E5 02 00 00         MOV ECX,dword ptr [ESI + 0x2e5]
00623C8B  3B C1                     CMP EAX,ECX
00623C8D  75 16                     JNZ 0x00623ca5
00623C8F  6A 0A                     PUSH 0xa
00623C91  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
00623C97  C6 86 E0 02 00 00 00      MOV byte ptr [ESI + 0x2e0],0x0
00623C9E  E8 BE EA DD FF            CALL 0x00402761
00623CA3  EB 1F                     JMP 0x00623cc4
LAB_00623ca5:
00623CA5  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
00623CAB  50                        PUSH EAX
00623CAC  6A 0A                     PUSH 0xa
00623CAE  8B CF                     MOV ECX,EDI
00623CB0  E8 AF D3 DD FF            CALL 0x00401064
00623CB5  6A 0A                     PUSH 0xa
00623CB7  8B CF                     MOV ECX,EDI
00623CB9  E8 FE F3 DD FF            CALL 0x004030bc
00623CBE  FF 86 E1 02 00 00         INC dword ptr [ESI + 0x2e1]
LAB_00623cc4:
00623CC4  8B 86 CE 02 00 00         MOV EAX,dword ptr [ESI + 0x2ce]
00623CCA  8B 8E D2 02 00 00         MOV ECX,dword ptr [ESI + 0x2d2]
00623CD0  3B C1                     CMP EAX,ECX
00623CD2  7D 1B                     JGE 0x00623cef
00623CD4  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
00623CDA  50                        PUSH EAX
00623CDB  6A 0E                     PUSH 0xe
00623CDD  8B CF                     MOV ECX,EDI
00623CDF  E8 80 D3 DD FF            CALL 0x00401064
00623CE4  6A 0E                     PUSH 0xe
00623CE6  8B CF                     MOV ECX,EDI
00623CE8  E8 CF F3 DD FF            CALL 0x004030bc
00623CED  EB 19                     JMP 0x00623d08
LAB_00623cef:
00623CEF  75 1D                     JNZ 0x00623d0e
00623CF1  8B 86 BA 02 00 00         MOV EAX,dword ptr [ESI + 0x2ba]
00623CF7  85 C0                     TEST EAX,EAX
00623CF9  7C 0D                     JL 0x00623d08
00623CFB  6A 0E                     PUSH 0xe
00623CFD  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
00623D03  E8 59 EA DD FF            CALL 0x00402761
LAB_00623d08:
00623D08  FF 86 CE 02 00 00         INC dword ptr [ESI + 0x2ce]
LAB_00623d0e:
00623D0E  DB 86 CA 02 00 00         FILD dword ptr [ESI + 0x2ca]
00623D14  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
00623D1A  51                        PUSH ECX
00623D1B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00623D21  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00623D27  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00623D2D  D9 1C 24                  FSTP float ptr [ESP]
00623D30  DB 86 C6 02 00 00         FILD dword ptr [ESI + 0x2c6]
00623D36  51                        PUSH ECX
00623D37  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00623D3D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00623D43  D9 1C 24                  FSTP float ptr [ESP]
00623D46  DB 86 C2 02 00 00         FILD dword ptr [ESI + 0x2c2]
00623D4C  51                        PUSH ECX
00623D4D  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00623D53  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00623D59  D9 1C 24                  FSTP float ptr [ESP]
00623D5C  E8 78 08 DE FF            CALL 0x004045d9
00623D61  8B 8E DB 02 00 00         MOV ECX,dword ptr [ESI + 0x2db]
00623D67  8B 86 D7 02 00 00         MOV EAX,dword ptr [ESI + 0x2d7]
00623D6D  3B C8                     CMP ECX,EAX
00623D6F  75 11                     JNZ 0x00623d82
00623D71  8B CE                     MOV ECX,ESI
00623D73  E8 CF 03 DE FF            CALL 0x00404147
00623D78  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00623D7B  5F                        POP EDI
00623D7C  5E                        POP ESI
00623D7D  5B                        POP EBX
00623D7E  8B E5                     MOV ESP,EBP
00623D80  5D                        POP EBP
00623D81  C3                        RET
LAB_00623d82:
00623D82  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
00623D88  85 FF                     TEST EDI,EDI
00623D8A  0F 84 01 01 00 00         JZ 0x00623e91
00623D90  DB 86 CA 02 00 00         FILD dword ptr [ESI + 0x2ca]
00623D96  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00623D9C  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00623DA2  E8 E1 A4 10 00            CALL 0x0072e288
00623DA7  8B D8                     MOV EBX,EAX
00623DA9  A0 4D 87 80 00            MOV AL,[0x0080874d]
00623DAE  3C FF                     CMP AL,0xff
00623DB0  0F 84 97 00 00 00         JZ 0x00623e4d
00623DB6  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
00623DBC  85 C0                     TEST EAX,EAX
00623DBE  0F 84 89 00 00 00         JZ 0x00623e4d
00623DC4  DB 86 C6 02 00 00         FILD dword ptr [ESI + 0x2c6]
00623DCA  8D 55 E8                  LEA EDX,[EBP + -0x18]
00623DCD  8D 45 EC                  LEA EAX,[EBP + -0x14]
00623DD0  52                        PUSH EDX
00623DD1  50                        PUSH EAX
00623DD2  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00623DD8  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00623DDE  E8 A5 A4 10 00            CALL 0x0072e288
00623DE3  DB 86 C2 02 00 00         FILD dword ptr [ESI + 0x2c2]
00623DE9  50                        PUSH EAX
00623DEA  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00623DF0  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00623DF6  E8 8D A4 10 00            CALL 0x0072e288
00623DFB  8B 8F 0C 01 00 00         MOV ECX,dword ptr [EDI + 0x10c]
00623E01  50                        PUSH EAX
00623E02  51                        PUSH ECX
00623E03  8B CF                     MOV ECX,EDI
00623E05  E8 49 01 DE FF            CALL 0x00403f53
00623E0A  85 DB                     TEST EBX,EBX
00623E0C  7C 3F                     JL 0x00623e4d
00623E0E  83 FB 05                  CMP EBX,0x5
00623E11  7D 3A                     JGE 0x00623e4d
00623E13  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00623E16  85 D2                     TEST EDX,EDX
00623E18  7C 33                     JL 0x00623e4d
00623E1A  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
00623E1D  3B D1                     CMP EDX,ECX
00623E1F  7D 2C                     JGE 0x00623e4d
00623E21  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
00623E28  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
00623E2B  03 C3                     ADD EAX,EBX
00623E2D  85 C0                     TEST EAX,EAX
00623E2F  7C 1C                     JL 0x00623e4d
00623E31  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
00623E34  7D 17                     JGE 0x00623e4d
00623E36  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
00623E39  85 FF                     TEST EDI,EDI
00623E3B  74 10                     JZ 0x00623e4d
00623E3D  0F AF C1                  IMUL EAX,ECX
00623E40  03 C7                     ADD EAX,EDI
00623E42  33 C9                     XOR ECX,ECX
00623E44  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
00623E47  8B C1                     MOV EAX,ECX
00623E49  85 C0                     TEST EAX,EAX
00623E4B  74 28                     JZ 0x00623e75
LAB_00623e4d:
00623E4D  8A 86 E9 02 00 00         MOV AL,byte ptr [ESI + 0x2e9]
00623E53  84 C0                     TEST AL,AL
00623E55  75 3A                     JNZ 0x00623e91
00623E57  6A 00                     PUSH 0x0
00623E59  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
00623E5F  E8 1E EB DD FF            CALL 0x00402982
00623E64  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00623E67  C6 86 E9 02 00 00 01      MOV byte ptr [ESI + 0x2e9],0x1
00623E6E  5F                        POP EDI
00623E6F  5E                        POP ESI
00623E70  5B                        POP EBX
00623E71  8B E5                     MOV ESP,EBP
00623E73  5D                        POP EBP
00623E74  C3                        RET
LAB_00623e75:
00623E75  8A 86 E9 02 00 00         MOV AL,byte ptr [ESI + 0x2e9]
00623E7B  84 C0                     TEST AL,AL
00623E7D  74 12                     JZ 0x00623e91
00623E7F  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
00623E85  E8 85 FE DD FF            CALL 0x00403d0f
00623E8A  C6 86 E9 02 00 00 00      MOV byte ptr [ESI + 0x2e9],0x0
switchD_006239c1::default:
00623E91  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00623E94  5F                        POP EDI
00623E95  5E                        POP ESI
00623E96  5B                        POP EBX
00623E97  8B E5                     MOV ESP,EBP
00623E99  5D                        POP EBP
00623E9A  C3                        RET
