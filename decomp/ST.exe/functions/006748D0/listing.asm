FUN_006748d0:
006748D0  55                        PUSH EBP
006748D1  8B EC                     MOV EBP,ESP
006748D3  83 EC 4C                  SUB ESP,0x4c
006748D6  A1 0C 19 81 00            MOV EAX,[0x0081190c]
006748DB  8B 0D 5C 75 85 00         MOV ECX,dword ptr [0x0085755c]
006748E1  56                        PUSH ESI
006748E2  BE 25 00 00 00            MOV ESI,0x25
006748E7  89 35 18 2D 7D 00         MOV dword ptr [0x007d2d18],ESI
006748ED  A3 14 19 81 00            MOV [0x00811914],EAX
006748F2  8A 14 01                  MOV DL,byte ptr [ECX + EAX*0x1]
006748F5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006748FC  80 FA 30                  CMP DL,0x30
006748FF  75 2D                     JNZ 0x0067492e
00674901  0F BE 44 01 01            MOVSX EAX,byte ptr [ECX + EAX*0x1 + 0x1]
00674906  25 FF 00 00 00            AND EAX,0xff
0067490B  50                        PUSH EAX
0067490C  E8 CF BD 0B 00            CALL 0x007306e0
00674911  83 C4 04                  ADD ESP,0x4
00674914  83 F8 62                  CMP EAX,0x62
00674917  74 0E                     JZ 0x00674927
00674919  83 F8 78                  CMP EAX,0x78
0067491C  75 10                     JNZ 0x0067492e
0067491E  C7 45 FC 10 00 00 00      MOV dword ptr [EBP + -0x4],0x10
00674925  EB 07                     JMP 0x0067492e
LAB_00674927:
00674927  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
LAB_0067492e:
0067492E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00674933  8D 55 B8                  LEA EDX,[EBP + -0x48]
00674936  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00674939  6A 00                     PUSH 0x0
0067493B  52                        PUSH EDX
0067493C  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0067493F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00674945  E8 A6 8E 0B 00            CALL 0x0072d7f0
0067494A  83 C4 08                  ADD ESP,0x8
0067494D  85 C0                     TEST EAX,EAX
0067494F  0F 85 9B 00 00 00         JNZ 0x006749f0
00674955  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00674958  85 C0                     TEST EAX,EAX
0067495A  74 34                     JZ 0x00674990
0067495C  8B 0D 14 19 81 00         MOV ECX,dword ptr [0x00811914]
00674962  50                        PUSH EAX
00674963  A1 5C 75 85 00            MOV EAX,[0x0085755c]
00674968  83 C1 02                  ADD ECX,0x2
0067496B  68 14 19 81 00            PUSH 0x811914
00674970  50                        PUSH EAX
00674971  89 0D 14 19 81 00         MOV dword ptr [0x00811914],ECX
00674977  E8 F4 4D 04 00            CALL 0x006b9770
0067497C  A3 48 75 85 00            MOV [0x00857548],EAX
00674981  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00674984  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00674989  33 C0                     XOR EAX,EAX
0067498B  5E                        POP ESI
0067498C  8B E5                     MOV ESP,EBP
0067498E  5D                        POP EBP
0067498F  C3                        RET
LAB_00674990:
00674990  8B 15 5C 75 85 00         MOV EDX,dword ptr [0x0085755c]
00674996  8D 4D F8                  LEA ECX,[EBP + -0x8]
00674999  51                        PUSH ECX
0067499A  68 14 19 81 00            PUSH 0x811914
0067499F  52                        PUSH EDX
006749A0  E8 EB 3F 05 00            CALL 0x006c8990
006749A5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006749A8  DD 1D 48 75 85 00         FSTP double ptr [0x00857548]
006749AE  85 C0                     TEST EAX,EAX
006749B0  74 19                     JZ 0x006749cb
006749B2  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006749B5  C7 05 18 2D 7D 00 37 00 00 00  MOV dword ptr [0x007d2d18],0x37
006749BF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006749C4  33 C0                     XOR EAX,EAX
006749C6  5E                        POP ESI
006749C7  8B E5                     MOV ESP,EBP
006749C9  5D                        POP EBP
006749CA  C3                        RET
LAB_006749cb:
006749CB  DD 05 48 75 85 00         FLD double ptr [0x00857548]
006749D1  E8 B2 98 0B 00            CALL 0x0072e288
006749D6  A3 48 75 85 00            MOV [0x00857548],EAX
006749DB  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006749DE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006749E3  89 35 18 2D 7D 00         MOV dword ptr [0x007d2d18],ESI
006749E9  33 C0                     XOR EAX,EAX
006749EB  5E                        POP ESI
006749EC  8B E5                     MOV ESP,EBP
006749EE  5D                        POP EBP
006749EF  C3                        RET
LAB_006749f0:
006749F0  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
006749F3  83 F8 C4                  CMP EAX,-0x3c
006749F6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006749FC  74 16                     JZ 0x00674a14
006749FE  83 F8 FC                  CMP EAX,-0x4
00674A01  75 0A                     JNZ 0x00674a0d
00674A03  C7 05 18 2D 7D 00 4E 08 00 00  MOV dword ptr [0x007d2d18],0x84e
LAB_00674a0d:
00674A0D  33 C0                     XOR EAX,EAX
00674A0F  5E                        POP ESI
00674A10  8B E5                     MOV ESP,EBP
00674A12  5D                        POP EBP
00674A13  C3                        RET
LAB_00674a14:
00674A14  8B 0D 14 19 81 00         MOV ECX,dword ptr [0x00811914]
00674A1A  8B 15 5C 75 85 00         MOV EDX,dword ptr [0x0085755c]
LAB_00674a20:
00674A20  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
00674A27  7E 1D                     JLE 0x00674a46
00674A29  0F BE 14 0A               MOVSX EDX,byte ptr [EDX + ECX*0x1]
00674A2D  6A 04                     PUSH 0x4
00674A2F  52                        PUSH EDX
00674A30  E8 DB BB 0B 00            CALL 0x00730610
00674A35  8B 0D 14 19 81 00         MOV ECX,dword ptr [0x00811914]
00674A3B  8B 15 5C 75 85 00         MOV EDX,dword ptr [0x0085755c]
00674A41  83 C4 08                  ADD ESP,0x8
00674A44  EB 10                     JMP 0x00674a56
LAB_00674a46:
00674A46  0F BE 04 0A               MOVSX EAX,byte ptr [EDX + ECX*0x1]
00674A4A  8B 35 80 12 7F 00         MOV ESI,dword ptr [0x007f1280]
00674A50  8A 04 46                  MOV AL,byte ptr [ESI + EAX*0x2]
00674A53  83 E0 04                  AND EAX,0x4
LAB_00674a56:
00674A56  85 C0                     TEST EAX,EAX
00674A58  74 09                     JZ 0x00674a63
00674A5A  41                        INC ECX
00674A5B  89 0D 14 19 81 00         MOV dword ptr [0x00811914],ECX
00674A61  EB BD                     JMP 0x00674a20
LAB_00674a63:
00674A63  C7 05 18 2D 7D 00 00 00 00 00  MOV dword ptr [0x007d2d18],0x0
00674A6D  B8 C4 FF FF FF            MOV EAX,0xffffffc4
00674A72  5E                        POP ESI
00674A73  8B E5                     MOV ESP,EBP
00674A75  5D                        POP EBP
00674A76  C3                        RET
