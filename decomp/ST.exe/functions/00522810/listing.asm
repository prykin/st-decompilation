FUN_00522810:
00522810  55                        PUSH EBP
00522811  8B EC                     MOV EBP,ESP
00522813  83 EC 48                  SUB ESP,0x48
00522816  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052281B  53                        PUSH EBX
0052281C  56                        PUSH ESI
0052281D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00522820  57                        PUSH EDI
00522821  8D 55 BC                  LEA EDX,[EBP + -0x44]
00522824  8D 4D B8                  LEA ECX,[EBP + -0x48]
00522827  6A 00                     PUSH 0x0
00522829  52                        PUSH EDX
0052282A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0052282D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00522833  E8 B8 AF 20 00            CALL 0x0072d7f0
00522838  83 C4 08                  ADD ESP,0x8
0052283B  85 C0                     TEST EAX,EAX
0052283D  0F 85 D1 03 00 00         JNZ 0x00522c14
00522843  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00522846  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00522849  83 C9 FF                  OR ECX,0xffffffff
0052284C  8D 58 6C                  LEA EBX,[EAX + 0x6c]
0052284F  33 C0                     XOR EAX,EAX
00522851  F2 AE                     SCASB.REPNE ES:EDI
00522853  F7 D1                     NOT ECX
00522855  2B F9                     SUB EDI,ECX
00522857  53                        PUSH EBX
00522858  8B D1                     MOV EDX,ECX
0052285A  8B F7                     MOV ESI,EDI
0052285C  8B FB                     MOV EDI,EBX
0052285E  53                        PUSH EBX
0052285F  C1 E9 02                  SHR ECX,0x2
00522862  F3 A5                     MOVSD.REP ES:EDI,ESI
00522864  8B CA                     MOV ECX,EDX
00522866  83 E1 03                  AND ECX,0x3
00522869  F3 A4                     MOVSB.REP ES:EDI,ESI
0052286B  E8 70 4F 19 00            CALL 0x006b77e0
00522870  53                        PUSH EBX
00522871  53                        PUSH EBX
00522872  E8 09 4F 19 00            CALL 0x006b7780
00522877  A1 A1 87 80 00            MOV EAX,[0x008087a1]
0052287C  33 F6                     XOR ESI,ESI
0052287E  3B C6                     CMP EAX,ESI
00522880  0F 85 7D 03 00 00         JNZ 0x00522c03
00522886  39 35 A5 87 80 00         CMP dword ptr [0x008087a5],ESI
0052288C  0F 85 71 03 00 00         JNZ 0x00522c03
00522892  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
00522899  0F 84 64 03 00 00         JZ 0x00522c03
0052289F  A0 4E 87 80 00            MOV AL,[0x0080874e]
005228A4  84 C0                     TEST AL,AL
005228A6  0F 84 57 03 00 00         JZ 0x00522c03
005228AC  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
005228B3  0F 84 4A 03 00 00         JZ 0x00522c03
005228B9  6A 06                     PUSH 0x6
005228BB  68 6C 41 7C 00            PUSH 0x7c416c
005228C0  53                        PUSH EBX
005228C1  E8 2A BE 20 00            CALL 0x0072e6f0
005228C6  83 C4 0C                  ADD ESP,0xc
005228C9  85 C0                     TEST EAX,EAX
005228CB  0F 85 93 00 00 00         JNZ 0x00522964
005228D1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005228D7  3B CE                     CMP ECX,ESI
005228D9  0F 84 85 00 00 00         JZ 0x00522964
005228DF  A0 4D 87 80 00            MOV AL,[0x0080874d]
005228E4  68 88 13 00 00            PUSH 0x1388
005228E9  50                        PUSH EAX
005228EA  E8 23 1B EE FF            CALL 0x00404412
005228EF  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
005228F6  74 30                     JZ 0x00522928
005228F8  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
005228FE  68 E8 03 00 00            PUSH 0x3e8
00522903  51                        PUSH ECX
00522904  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0052290A  E8 27 1A EE FF            CALL 0x00404336
0052290F  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
00522915  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0052291B  68 10 27 00 00            PUSH 0x2710
00522920  52                        PUSH EDX
00522921  E8 C1 2C EE FF            CALL 0x004055e7
00522926  EB 18                     JMP 0x00522940
LAB_00522928:
00522928  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0052292E  33 C0                     XOR EAX,EAX
00522930  A0 4D 87 80 00            MOV AL,[0x0080874d]
00522935  68 10 27 00 00            PUSH 0x2710
0052293A  50                        PUSH EAX
0052293B  E8 2B 35 EE FF            CALL 0x00405e6b
LAB_00522940:
00522940  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00522946  51                        PUSH ECX
00522947  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0052294D  E8 3B 22 EE FF            CALL 0x00404b8d
00522952  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
00522958  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0052295E  52                        PUSH EDX
0052295F  E8 92 FF ED FF            CALL 0x004028f6
LAB_00522964:
00522964  6A 06                     PUSH 0x6
00522966  68 64 41 7C 00            PUSH 0x7c4164
0052296B  53                        PUSH EBX
0052296C  E8 7F BD 20 00            CALL 0x0072e6f0
00522971  83 C4 0C                  ADD ESP,0xc
00522974  85 C0                     TEST EAX,EAX
00522976  75 3E                     JNZ 0x005229b6
00522978  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0052297E  3B CE                     CMP ECX,ESI
00522980  74 34                     JZ 0x005229b6
00522982  A0 4D 87 80 00            MOV AL,[0x0080874d]
00522987  68 88 13 00 00            PUSH 0x1388
0052298C  50                        PUSH EAX
0052298D  E8 80 1A EE FF            CALL 0x00404412
00522992  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00522998  51                        PUSH ECX
00522999  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0052299F  E8 E9 21 EE FF            CALL 0x00404b8d
005229A4  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
005229AA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005229B0  52                        PUSH EDX
005229B1  E8 40 FF ED FF            CALL 0x004028f6
LAB_005229b6:
005229B6  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
005229BD  0F 84 B6 00 00 00         JZ 0x00522a79
005229C3  6A 04                     PUSH 0x4
005229C5  68 5C 41 7C 00            PUSH 0x7c415c
005229CA  53                        PUSH EBX
005229CB  E8 20 BD 20 00            CALL 0x0072e6f0
005229D0  83 C4 0C                  ADD ESP,0xc
005229D3  85 C0                     TEST EAX,EAX
005229D5  75 3E                     JNZ 0x00522a15
005229D7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005229DD  3B CE                     CMP ECX,ESI
005229DF  74 34                     JZ 0x00522a15
005229E1  A0 4D 87 80 00            MOV AL,[0x0080874d]
005229E6  68 E8 03 00 00            PUSH 0x3e8
005229EB  50                        PUSH EAX
005229EC  E8 45 19 EE FF            CALL 0x00404336
005229F1  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
005229F7  51                        PUSH ECX
005229F8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005229FE  E8 8A 21 EE FF            CALL 0x00404b8d
00522A03  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
00522A09  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00522A0F  52                        PUSH EDX
00522A10  E8 E1 FE ED FF            CALL 0x004028f6
LAB_00522a15:
00522A15  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
00522A1C  74 5B                     JZ 0x00522a79
00522A1E  6A 05                     PUSH 0x5
00522A20  68 54 41 7C 00            PUSH 0x7c4154
00522A25  53                        PUSH EBX
00522A26  E8 C5 BC 20 00            CALL 0x0072e6f0
00522A2B  83 C4 0C                  ADD ESP,0xc
00522A2E  85 C0                     TEST EAX,EAX
00522A30  75 3E                     JNZ 0x00522a70
00522A32  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00522A38  3B CE                     CMP ECX,ESI
00522A3A  74 34                     JZ 0x00522a70
00522A3C  A0 4D 87 80 00            MOV AL,[0x0080874d]
00522A41  68 E8 03 00 00            PUSH 0x3e8
00522A46  50                        PUSH EAX
00522A47  E8 9B 2B EE FF            CALL 0x004055e7
00522A4C  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00522A52  51                        PUSH ECX
00522A53  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00522A59  E8 2F 21 EE FF            CALL 0x00404b8d
00522A5E  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
00522A64  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00522A6A  52                        PUSH EDX
00522A6B  E8 86 FE ED FF            CALL 0x004028f6
LAB_00522a70:
00522A70  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
00522A77  75 5B                     JNZ 0x00522ad4
LAB_00522a79:
00522A79  6A 07                     PUSH 0x7
00522A7B  68 48 41 7C 00            PUSH 0x7c4148
00522A80  53                        PUSH EBX
00522A81  E8 6A BC 20 00            CALL 0x0072e6f0
00522A86  83 C4 0C                  ADD ESP,0xc
00522A89  85 C0                     TEST EAX,EAX
00522A8B  75 3E                     JNZ 0x00522acb
00522A8D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00522A93  3B CE                     CMP ECX,ESI
00522A95  74 34                     JZ 0x00522acb
00522A97  A0 4D 87 80 00            MOV AL,[0x0080874d]
00522A9C  68 10 27 00 00            PUSH 0x2710
00522AA1  50                        PUSH EAX
00522AA2  E8 C4 33 EE FF            CALL 0x00405e6b
00522AA7  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00522AAD  51                        PUSH ECX
00522AAE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00522AB4  E8 D4 20 EE FF            CALL 0x00404b8d
00522AB9  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
00522ABF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00522AC5  52                        PUSH EDX
00522AC6  E8 2B FE ED FF            CALL 0x004028f6
LAB_00522acb:
00522ACB  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
00522AD2  74 46                     JZ 0x00522b1a
LAB_00522ad4:
00522AD4  6A 03                     PUSH 0x3
00522AD6  68 44 41 7C 00            PUSH 0x7c4144
00522ADB  53                        PUSH EBX
00522ADC  E8 0F BC 20 00            CALL 0x0072e6f0
00522AE1  83 C4 0C                  ADD ESP,0xc
00522AE4  85 C0                     TEST EAX,EAX
00522AE6  75 29                     JNZ 0x00522b11
00522AE8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00522AEE  3B CE                     CMP ECX,ESI
00522AF0  74 1F                     JZ 0x00522b11
00522AF2  A0 4D 87 80 00            MOV AL,[0x0080874d]
00522AF7  6A 64                     PUSH 0x64
00522AF9  50                        PUSH EAX
00522AFA  E8 07 16 EE FF            CALL 0x00404106
00522AFF  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00522B05  51                        PUSH ECX
00522B06  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00522B0C  E8 7C 20 EE FF            CALL 0x00404b8d
LAB_00522b11:
00522B11  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
00522B18  75 3F                     JNZ 0x00522b59
LAB_00522b1a:
00522B1A  6A 06                     PUSH 0x6
00522B1C  68 3C 41 7C 00            PUSH 0x7c413c
00522B21  53                        PUSH EBX
00522B22  E8 C9 BB 20 00            CALL 0x0072e6f0
00522B27  83 C4 0C                  ADD ESP,0xc
00522B2A  85 C0                     TEST EAX,EAX
00522B2C  75 2B                     JNZ 0x00522b59
00522B2E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00522B34  3B CE                     CMP ECX,ESI
00522B36  74 21                     JZ 0x00522b59
00522B38  33 D2                     XOR EDX,EDX
00522B3A  6A 64                     PUSH 0x64
00522B3C  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
00522B42  52                        PUSH EDX
00522B43  E8 AB 28 EE FF            CALL 0x004053f3
00522B48  A0 4D 87 80 00            MOV AL,[0x0080874d]
00522B4D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00522B53  50                        PUSH EAX
00522B54  E8 34 20 EE FF            CALL 0x00404b8d
LAB_00522b59:
00522B59  6A 04                     PUSH 0x4
00522B5B  68 34 41 7C 00            PUSH 0x7c4134
00522B60  53                        PUSH EBX
00522B61  E8 8A BB 20 00            CALL 0x0072e6f0
00522B66  83 C4 0C                  ADD ESP,0xc
00522B69  85 C0                     TEST EAX,EAX
00522B6B  75 18                     JNZ 0x00522b85
00522B6D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00522B73  3B CE                     CMP ECX,ESI
00522B75  74 0E                     JZ 0x00522b85
00522B77  33 D2                     XOR EDX,EDX
00522B79  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
00522B7F  52                        PUSH EDX
00522B80  E8 41 23 EE FF            CALL 0x00404ec6
LAB_00522b85:
00522B85  6A 03                     PUSH 0x3
00522B87  68 30 41 7C 00            PUSH 0x7c4130
00522B8C  53                        PUSH EBX
00522B8D  E8 5E BB 20 00            CALL 0x0072e6f0
00522B92  83 C4 0C                  ADD ESP,0xc
00522B95  85 C0                     TEST EAX,EAX
00522B97  75 6A                     JNZ 0x00522c03
00522B99  A1 88 2A 80 00            MOV EAX,[0x00802a88]
00522B9E  3B C6                     CMP EAX,ESI
00522BA0  74 61                     JZ 0x00522c03
00522BA2  39 B0 14 01 00 00         CMP dword ptr [EAX + 0x114],ESI
00522BA8  74 3E                     JZ 0x00522be8
00522BAA  8B 90 F8 00 00 00         MOV EDX,dword ptr [EAX + 0xf8]
00522BB0  33 C9                     XOR ECX,ECX
00522BB2  3B D6                     CMP EDX,ESI
00522BB4  0F 94 C1                  SETZ CL
00522BB7  89 88 F8 00 00 00         MOV dword ptr [EAX + 0xf8],ECX
00522BBD  A1 98 75 80 00            MOV EAX,[0x00807598]
00522BC2  3B CE                     CMP ECX,ESI
00522BC4  74 2D                     JZ 0x00522bf3
00522BC6  B9 01 00 00 00            MOV ECX,0x1
00522BCB  89 88 66 04 00 00         MOV dword ptr [EAX + 0x466],ECX
00522BD1  89 88 D8 02 00 00         MOV dword ptr [EAX + 0x2d8],ECX
00522BD7  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00522BDA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00522BDF  5F                        POP EDI
00522BE0  5E                        POP ESI
00522BE1  5B                        POP EBX
00522BE2  8B E5                     MOV ESP,EBP
00522BE4  5D                        POP EBP
00522BE5  C2 04 00                  RET 0x4
LAB_00522be8:
00522BE8  89 B0 F8 00 00 00         MOV dword ptr [EAX + 0xf8],ESI
00522BEE  A1 98 75 80 00            MOV EAX,[0x00807598]
LAB_00522bf3:
00522BF3  89 B0 66 04 00 00         MOV dword ptr [EAX + 0x466],ESI
00522BF9  C7 80 D8 02 00 00 01 00 00 00  MOV dword ptr [EAX + 0x2d8],0x1
LAB_00522c03:
00522C03  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00522C06  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00522C0B  5F                        POP EDI
00522C0C  5E                        POP ESI
00522C0D  5B                        POP EBX
00522C0E  8B E5                     MOV ESP,EBP
00522C10  5D                        POP EBP
00522C11  C2 04 00                  RET 0x4
LAB_00522c14:
00522C14  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00522C17  5F                        POP EDI
00522C18  5E                        POP ESI
00522C19  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00522C1F  5B                        POP EBX
00522C20  8B E5                     MOV ESP,EBP
00522C22  5D                        POP EBP
00522C23  C2 04 00                  RET 0x4
