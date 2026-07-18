FUN_006736f0:
006736F0  55                        PUSH EBP
006736F1  8B EC                     MOV EBP,ESP
006736F3  83 EC 50                  SUB ESP,0x50
006736F6  A1 24 2D 7D 00            MOV EAX,[0x007d2d24]
006736FB  53                        PUSH EBX
006736FC  56                        PUSH ESI
006736FD  57                        PUSH EDI
006736FE  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00673705  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00673708  E8 13 06 00 00            CALL 0x00673d20
0067370D  8B D8                     MOV EBX,EAX
0067370F  85 DB                     TEST EBX,EBX
00673711  0F 8C 9C 04 00 00         JL 0x00673bb3
LAB_00673717:
00673717  8B 3D 18 2D 7D 00         MOV EDI,dword ptr [0x007d2d18]
0067371D  83 FF 2A                  CMP EDI,0x2a
00673720  0F 85 33 02 00 00         JNZ 0x00673959
00673726  8B 0D 24 2D 7D 00         MOV ECX,dword ptr [0x007d2d24]
0067372C  A1 58 75 85 00            MOV EAX,[0x00857558]
00673731  83 C9 01                  OR ECX,0x1
00673734  89 0D 24 2D 7D 00         MOV dword ptr [0x007d2d24],ECX
0067373A  8B 0D 14 19 81 00         MOV ECX,dword ptr [0x00811914]
00673740  3B C8                     CMP ECX,EAX
00673742  7D 37                     JGE 0x0067377b
LAB_00673744:
00673744  83 FF 3C                  CMP EDI,0x3c
00673747  74 32                     JZ 0x0067377b
00673749  83 FF 22                  CMP EDI,0x22
0067374C  74 2D                     JZ 0x0067377b
0067374E  83 FF 1D                  CMP EDI,0x1d
00673751  0F 84 50 04 00 00         JZ 0x00673ba7
00673757  E8 C4 05 00 00            CALL 0x00673d20
0067375C  8B D8                     MOV EBX,EAX
0067375E  85 DB                     TEST EBX,EBX
00673760  0F 8C 4D 04 00 00         JL 0x00673bb3
00673766  8B 15 14 19 81 00         MOV EDX,dword ptr [0x00811914]
0067376C  A1 58 75 85 00            MOV EAX,[0x00857558]
00673771  8B 3D 18 2D 7D 00         MOV EDI,dword ptr [0x007d2d18]
00673777  3B D0                     CMP EDX,EAX
00673779  7C C9                     JL 0x00673744
LAB_0067377b:
0067377B  83 FF 1D                  CMP EDI,0x1d
0067377E  0F 84 23 04 00 00         JZ 0x00673ba7
00673784  A1 24 2D 7D 00            MOV EAX,[0x007d2d24]
00673789  F6 C4 08                  TEST AH,0x8
0067378C  0F 85 A9 00 00 00         JNZ 0x0067383b
00673792  83 FF 3C                  CMP EDI,0x3c
00673795  75 0A                     JNZ 0x006737a1
00673797  A1 48 19 81 00            MOV EAX,[0x00811948]
0067379C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0067379F  EB 09                     JMP 0x006737aa
LAB_006737a1:
006737A1  8B 0D 28 75 85 00         MOV ECX,dword ptr [0x00857528]
006737A7  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006737aa:
006737AA  A1 08 19 81 00            MOV EAX,[0x00811908]
006737AF  85 C0                     TEST EAX,EAX
006737B1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006737B4  74 3E                     JZ 0x006737f4
006737B6  8B D0                     MOV EDX,EAX
LAB_006737b8:
006737B8  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
006737BB  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_006737be:
006737BE  8A 18                     MOV BL,byte ptr [EAX]
006737C0  8A CB                     MOV CL,BL
006737C2  3A 1E                     CMP BL,byte ptr [ESI]
006737C4  75 1C                     JNZ 0x006737e2
006737C6  84 C9                     TEST CL,CL
006737C8  74 14                     JZ 0x006737de
006737CA  8A 58 01                  MOV BL,byte ptr [EAX + 0x1]
006737CD  8A CB                     MOV CL,BL
006737CF  3A 5E 01                  CMP BL,byte ptr [ESI + 0x1]
006737D2  75 0E                     JNZ 0x006737e2
006737D4  83 C0 02                  ADD EAX,0x2
006737D7  83 C6 02                  ADD ESI,0x2
006737DA  84 C9                     TEST CL,CL
006737DC  75 E0                     JNZ 0x006737be
LAB_006737de:
006737DE  33 C0                     XOR EAX,EAX
006737E0  EB 05                     JMP 0x006737e7
LAB_006737e2:
006737E2  1B C0                     SBB EAX,EAX
006737E4  83 D8 FF                  SBB EAX,-0x1
LAB_006737e7:
006737E7  85 C0                     TEST EAX,EAX
006737E9  74 06                     JZ 0x006737f1
006737EB  8B 12                     MOV EDX,dword ptr [EDX]
006737ED  85 D2                     TEST EDX,EDX
006737EF  75 C7                     JNZ 0x006737b8
LAB_006737f1:
006737F1  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_006737f4:
006737F4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006737F7  85 C0                     TEST EAX,EAX
006737F9  75 40                     JNZ 0x0067383b
006737FB  6A 0C                     PUSH 0xc
006737FD  E8 6E 74 03 00            CALL 0x006aac70
00673802  8B F0                     MOV ESI,EAX
00673804  85 F6                     TEST ESI,ESI
00673806  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00673809  0F 84 9F 03 00 00         JZ 0x00673bae
0067380F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00673812  52                        PUSH EDX
00673813  E8 98 11 05 00            CALL 0x006c49b0
00673818  85 C0                     TEST EAX,EAX
0067381A  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
0067381D  0F 84 8B 03 00 00         JZ 0x00673bae
00673823  56                        PUSH ESI
00673824  68 08 19 81 00            PUSH 0x811908
00673829  C7 46 08 00 00 00 00      MOV dword ptr [ESI + 0x8],0x0
00673830  E8 DB 60 04 00            CALL 0x006b9910
00673835  8B 3D 18 2D 7D 00         MOV EDI,dword ptr [0x007d2d18]
LAB_0067383b:
0067383B  83 FF 1D                  CMP EDI,0x1d
0067383E  74 15                     JZ 0x00673855
00673840  E8 DB 04 00 00            CALL 0x00673d20
00673845  8B D8                     MOV EBX,EAX
00673847  85 DB                     TEST EBX,EBX
00673849  0F 8C 64 03 00 00         JL 0x00673bb3
0067384F  8B 3D 18 2D 7D 00         MOV EDI,dword ptr [0x007d2d18]
LAB_00673855:
00673855  83 FF 3C                  CMP EDI,0x3c
00673858  74 28                     JZ 0x00673882
LAB_0067385a:
0067385A  83 FF 22                  CMP EDI,0x22
0067385D  74 23                     JZ 0x00673882
0067385F  83 FF 1D                  CMP EDI,0x1d
00673862  0F 84 3F 03 00 00         JZ 0x00673ba7
00673868  E8 B3 04 00 00            CALL 0x00673d20
0067386D  8B D8                     MOV EBX,EAX
0067386F  85 DB                     TEST EBX,EBX
00673871  0F 8C 3C 03 00 00         JL 0x00673bb3
00673877  8B 3D 18 2D 7D 00         MOV EDI,dword ptr [0x007d2d18]
0067387D  83 FF 3C                  CMP EDI,0x3c
00673880  75 D8                     JNZ 0x0067385a
LAB_00673882:
00673882  83 FF 1D                  CMP EDI,0x1d
00673885  0F 84 1C 03 00 00         JZ 0x00673ba7
0067388B  A1 24 2D 7D 00            MOV EAX,[0x007d2d24]
00673890  F6 C4 08                  TEST AH,0x8
00673893  0F 85 82 00 00 00         JNZ 0x0067391b
00673899  A1 48 19 81 00            MOV EAX,[0x00811948]
0067389E  83 FF 3C                  CMP EDI,0x3c
006738A1  74 05                     JZ 0x006738a8
006738A3  A1 28 75 85 00            MOV EAX,[0x00857528]
LAB_006738a8:
006738A8  50                        PUSH EAX
006738A9  E8 02 11 05 00            CALL 0x006c49b0
006738AE  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006738B1  8B F0                     MOV ESI,EAX
006738B3  85 F6                     TEST ESI,ESI
006738B5  89 77 08                  MOV dword ptr [EDI + 0x8],ESI
006738B8  0F 84 F0 02 00 00         JZ 0x00673bae
006738BE  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
LAB_006738c1:
006738C1  8A 10                     MOV DL,byte ptr [EAX]
006738C3  8A 1E                     MOV BL,byte ptr [ESI]
006738C5  8A CA                     MOV CL,DL
006738C7  3A D3                     CMP DL,BL
006738C9  75 1E                     JNZ 0x006738e9
006738CB  84 C9                     TEST CL,CL
006738CD  74 16                     JZ 0x006738e5
006738CF  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
006738D2  8A 5E 01                  MOV BL,byte ptr [ESI + 0x1]
006738D5  8A CA                     MOV CL,DL
006738D7  3A D3                     CMP DL,BL
006738D9  75 0E                     JNZ 0x006738e9
006738DB  83 C0 02                  ADD EAX,0x2
006738DE  83 C6 02                  ADD ESI,0x2
006738E1  84 C9                     TEST CL,CL
006738E3  75 DC                     JNZ 0x006738c1
LAB_006738e5:
006738E5  33 C0                     XOR EAX,EAX
006738E7  EB 05                     JMP 0x006738ee
LAB_006738e9:
006738E9  1B C0                     SBB EAX,EAX
006738EB  83 D8 FF                  SBB EAX,-0x1
LAB_006738ee:
006738EE  85 C0                     TEST EAX,EAX
006738F0  75 23                     JNZ 0x00673915
006738F2  57                        PUSH EDI
006738F3  68 08 19 81 00            PUSH 0x811908
006738F8  E8 C3 5F 04 00            CALL 0x006b98c0
006738FD  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00673900  50                        PUSH EAX
00673901  E8 8A 25 03 00            CALL 0x006a5e90
00673906  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
00673909  51                        PUSH ECX
0067390A  E8 81 25 03 00            CALL 0x006a5e90
0067390F  57                        PUSH EDI
00673910  E8 7B 25 03 00            CALL 0x006a5e90
LAB_00673915:
00673915  8B 3D 18 2D 7D 00         MOV EDI,dword ptr [0x007d2d18]
LAB_0067391b:
0067391B  83 FF 1D                  CMP EDI,0x1d
0067391E  74 18                     JZ 0x00673938
LAB_00673920:
00673920  E8 FB 03 00 00            CALL 0x00673d20
00673925  8B D8                     MOV EBX,EAX
00673927  85 DB                     TEST EBX,EBX
00673929  0F 8C 84 02 00 00         JL 0x00673bb3
0067392F  83 3D 18 2D 7D 00 1D      CMP dword ptr [0x007d2d18],0x1d
00673936  75 E8                     JNZ 0x00673920
LAB_00673938:
00673938  F6 45 F4 01               TEST byte ptr [EBP + -0xc],0x1
0067393C  74 07                     JZ 0x00673945
0067393E  6A 1D                     PUSH 0x1d
00673940  E8 50 23 D9 FF            CALL 0x00405c95
LAB_00673945:
00673945  E8 D6 03 00 00            CALL 0x00673d20
0067394A  8B D8                     MOV EBX,EAX
0067394C  85 DB                     TEST EBX,EBX
0067394E  0F 8D C3 FD FF FF         JGE 0x00673717
00673954  E9 5A 02 00 00            JMP 0x00673bb3
LAB_00673959:
00673959  A1 24 2D 7D 00            MOV EAX,[0x007d2d24]
0067395E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00673961  8B D0                     MOV EDX,EAX
00673963  33 D1                     XOR EDX,ECX
00673965  83 E2 01                  AND EDX,0x1
00673968  33 C2                     XOR EAX,EDX
0067396A  83 FF 24                  CMP EDI,0x24
0067396D  A3 24 2D 7D 00            MOV [0x007d2d24],EAX
00673972  0F 85 3B 02 00 00         JNZ 0x00673bb3
00673978  F6 C4 02                  TEST AH,0x2
0067397B  0F 84 32 02 00 00         JZ 0x00673bb3
00673981  8B 0D 14 19 81 00         MOV ECX,dword ptr [0x00811914]
00673987  A1 58 75 85 00            MOV EAX,[0x00857558]
0067398C  3B C8                     CMP ECX,EAX
0067398E  7D 2E                     JGE 0x006739be
LAB_00673990:
00673990  83 FF 3C                  CMP EDI,0x3c
00673993  74 29                     JZ 0x006739be
00673995  83 FF 22                  CMP EDI,0x22
00673998  74 2D                     JZ 0x006739c7
0067399A  E8 81 03 00 00            CALL 0x00673d20
0067399F  8B D8                     MOV EBX,EAX
006739A1  85 DB                     TEST EBX,EBX
006739A3  0F 8C 20 02 00 00         JL 0x00673bc9
006739A9  8B 0D 14 19 81 00         MOV ECX,dword ptr [0x00811914]
006739AF  A1 58 75 85 00            MOV EAX,[0x00857558]
006739B4  8B 3D 18 2D 7D 00         MOV EDI,dword ptr [0x007d2d18]
006739BA  3B C8                     CMP ECX,EAX
006739BC  7C D2                     JL 0x00673990
LAB_006739be:
006739BE  83 FF 22                  CMP EDI,0x22
006739C1  0F 85 27 01 00 00         JNZ 0x00673aee
LAB_006739c7:
006739C7  8B 3D 5C 75 85 00         MOV EDI,dword ptr [0x0085755c]
LAB_006739cd:
006739CD  8A 04 0F                  MOV AL,byte ptr [EDI + ECX*0x1]
006739D0  3C 20                     CMP AL,0x20
006739D2  74 04                     JZ 0x006739d8
006739D4  3C 09                     CMP AL,0x9
006739D6  75 09                     JNZ 0x006739e1
LAB_006739d8:
006739D8  41                        INC ECX
006739D9  89 0D 14 19 81 00         MOV dword ptr [0x00811914],ECX
006739DF  EB EC                     JMP 0x006739cd
LAB_006739e1:
006739E1  3C 5D                     CMP AL,0x5d
006739E3  0F 85 A9 00 00 00         JNZ 0x00673a92
006739E9  A1 28 75 85 00            MOV EAX,[0x00857528]
006739EE  41                        INC ECX
006739EF  89 0D 14 19 81 00         MOV dword ptr [0x00811914],ECX
006739F5  8B 0D 4C 19 81 00         MOV ECX,dword ptr [0x0081194c]
006739FB  50                        PUSH EAX
006739FC  FF 51 10                  CALL dword ptr [ECX + 0x10]
006739FF  85 C0                     TEST EAX,EAX
00673A01  75 0A                     JNZ 0x00673a0d
00673A03  8B 15 48 19 81 00         MOV EDX,dword ptr [0x00811948]
00673A09  88 02                     MOV byte ptr [EDX],AL
00673A0B  EB 23                     JMP 0x00673a30
LAB_00673a0d:
00673A0D  8B F8                     MOV EDI,EAX
00673A0F  83 C9 FF                  OR ECX,0xffffffff
00673A12  33 C0                     XOR EAX,EAX
00673A14  F2 AE                     SCASB.REPNE ES:EDI
00673A16  F7 D1                     NOT ECX
00673A18  2B F9                     SUB EDI,ECX
00673A1A  8B C1                     MOV EAX,ECX
00673A1C  8B F7                     MOV ESI,EDI
00673A1E  8B 3D 48 19 81 00         MOV EDI,dword ptr [0x00811948]
00673A24  C1 E9 02                  SHR ECX,0x2
00673A27  F3 A5                     MOVSD.REP ES:EDI,ESI
00673A29  8B C8                     MOV ECX,EAX
00673A2B  83 E1 03                  AND ECX,0x3
00673A2E  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00673a30:
00673A30  8B 35 48 19 81 00         MOV ESI,dword ptr [0x00811948]
00673A36  83 C9 FF                  OR ECX,0xffffffff
00673A39  8B FE                     MOV EDI,ESI
00673A3B  33 C0                     XOR EAX,EAX
00673A3D  F2 AE                     SCASB.REPNE ES:EDI
00673A3F  8B 3D 5C 75 85 00         MOV EDI,dword ptr [0x0085755c]
00673A45  F7 D1                     NOT ECX
00673A47  49                        DEC ECX
00673A48  74 5A                     JZ 0x00673aa4
LAB_00673a4a:
00673A4A  8B 15 14 19 81 00         MOV EDX,dword ptr [0x00811914]
00673A50  8A 04 17                  MOV AL,byte ptr [EDI + EDX*0x1]
00673A53  3C 20                     CMP AL,0x20
00673A55  74 04                     JZ 0x00673a5b
00673A57  3C 09                     CMP AL,0x9
00673A59  75 08                     JNZ 0x00673a63
LAB_00673a5b:
00673A5B  FF 05 14 19 81 00         INC dword ptr [0x00811914]
00673A61  EB E7                     JMP 0x00673a4a
LAB_00673a63:
00673A63  B2 5C                     MOV DL,0x5c
00673A65  3A C2                     CMP AL,DL
00673A67  75 09                     JNZ 0x00673a72
00673A69  38 54 0E FF               CMP byte ptr [ESI + ECX*0x1 + -0x1],DL
00673A6D  75 35                     JNZ 0x00673aa4
00673A6F  49                        DEC ECX
00673A70  EB 32                     JMP 0x00673aa4
LAB_00673a72:
00673A72  3C 3E                     CMP AL,0x3e
00673A74  74 2E                     JZ 0x00673aa4
00673A76  84 C0                     TEST AL,AL
00673A78  74 2A                     JZ 0x00673aa4
00673A7A  38 54 0E FF               CMP byte ptr [ESI + ECX*0x1 + -0x1],DL
00673A7E  74 24                     JZ 0x00673aa4
00673A80  88 14 0E                  MOV byte ptr [ESI + ECX*0x1],DL
00673A83  8B 35 48 19 81 00         MOV ESI,dword ptr [0x00811948]
00673A89  8B 3D 5C 75 85 00         MOV EDI,dword ptr [0x0085755c]
00673A8F  41                        INC ECX
00673A90  EB 12                     JMP 0x00673aa4
LAB_00673a92:
00673A92  A1 44 75 85 00            MOV EAX,[0x00857544]
00673A97  8B 35 48 19 81 00         MOV ESI,dword ptr [0x00811948]
00673A9D  A3 14 19 81 00            MOV [0x00811914],EAX
00673AA2  33 C9                     XOR ECX,ECX
LAB_00673aa4:
00673AA4  8B 15 14 19 81 00         MOV EDX,dword ptr [0x00811914]
00673AAA  8A 04 17                  MOV AL,byte ptr [EDI + EDX*0x1]
00673AAD  84 C0                     TEST AL,AL
00673AAF  74 2E                     JZ 0x00673adf
LAB_00673ab1:
00673AB1  3C 3E                     CMP AL,0x3e
00673AB3  74 2A                     JZ 0x00673adf
00673AB5  3C 20                     CMP AL,0x20
00673AB7  74 26                     JZ 0x00673adf
00673AB9  3C 09                     CMP AL,0x9
00673ABB  74 22                     JZ 0x00673adf
00673ABD  88 04 0E                  MOV byte ptr [ESI + ECX*0x1],AL
00673AC0  A1 14 19 81 00            MOV EAX,[0x00811914]
00673AC5  8B 15 5C 75 85 00         MOV EDX,dword ptr [0x0085755c]
00673ACB  8B 35 48 19 81 00         MOV ESI,dword ptr [0x00811948]
00673AD1  40                        INC EAX
00673AD2  41                        INC ECX
00673AD3  A3 14 19 81 00            MOV [0x00811914],EAX
00673AD8  8A 04 02                  MOV AL,byte ptr [EDX + EAX*0x1]
00673ADB  84 C0                     TEST AL,AL
00673ADD  75 D2                     JNZ 0x00673ab1
LAB_00673adf:
00673ADF  BF 3C 00 00 00            MOV EDI,0x3c
00673AE4  C6 04 0E 00               MOV byte ptr [ESI + ECX*0x1],0x0
00673AE8  89 3D 18 2D 7D 00         MOV dword ptr [0x007d2d18],EDI
LAB_00673aee:
00673AEE  A1 24 2D 7D 00            MOV EAX,[0x007d2d24]
00673AF3  F6 C4 08                  TEST AH,0x8
00673AF6  0F 85 90 00 00 00         JNZ 0x00673b8c
00673AFC  83 FF 3C                  CMP EDI,0x3c
00673AFF  0F 85 AE 00 00 00         JNZ 0x00673bb3
00673B05  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00673B0A  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00673B0D  8D 4D B0                  LEA ECX,[EBP + -0x50]
00673B10  6A 00                     PUSH 0x0
00673B12  52                        PUSH EDX
00673B13  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00673B16  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00673B1C  E8 CF 9C 0B 00            CALL 0x0072d7f0
00673B21  83 C4 08                  ADD ESP,0x8
00673B24  85 C0                     TEST EAX,EAX
00673B26  75 54                     JNZ 0x00673b7c
00673B28  A1 4C 19 81 00            MOV EAX,[0x0081194c]
00673B2D  8B 0D 48 19 81 00         MOV ECX,dword ptr [0x00811948]
00673B33  50                        PUSH EAX
00673B34  51                        PUSH ECX
00673B35  E8 EC 08 D9 FF            CALL 0x00404426
00673B3A  8B 15 4C 19 81 00         MOV EDX,dword ptr [0x0081194c]
00673B40  8B 42 14                  MOV EAX,dword ptr [EDX + 0x14]
00673B43  85 C0                     TEST EAX,EAX
00673B45  74 0B                     JZ 0x00673b52
00673B47  8B 0D 48 19 81 00         MOV ECX,dword ptr [0x00811948]
00673B4D  6A 01                     PUSH 0x1
00673B4F  51                        PUSH ECX
00673B50  FF D0                     CALL EAX
LAB_00673b52:
00673B52  8B 0D 24 2D 7D 00         MOV ECX,dword ptr [0x007d2d24]
00673B58  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00673B5B  80 C9 80                  OR CL,0x80
00673B5E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00673B64  89 0D 24 2D 7D 00         MOV dword ptr [0x007d2d24],ECX
00673B6A  E8 10 E2 D8 FF            CALL 0x00401d7f
00673B6F  8B D8                     MOV EBX,EAX
00673B71  85 DB                     TEST EBX,EBX
00673B73  7D 3E                     JGE 0x00673bb3
00673B75  5F                        POP EDI
00673B76  5E                        POP ESI
00673B77  5B                        POP EBX
00673B78  8B E5                     MOV ESP,EBP
00673B7A  5D                        POP EBP
00673B7B  C3                        RET
LAB_00673b7c:
00673B7C  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00673B7F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00673B85  5F                        POP EDI
00673B86  5E                        POP ESI
00673B87  5B                        POP EBX
00673B88  8B E5                     MOV ESP,EBP
00673B8A  5D                        POP EBP
00673B8B  C3                        RET
LAB_00673b8c:
00673B8C  83 FF 1D                  CMP EDI,0x1d
00673B8F  74 22                     JZ 0x00673bb3
LAB_00673b91:
00673B91  E8 8A 01 00 00            CALL 0x00673d20
00673B96  8B D8                     MOV EBX,EAX
00673B98  85 DB                     TEST EBX,EBX
00673B9A  7C 17                     JL 0x00673bb3
00673B9C  83 3D 18 2D 7D 00 1D      CMP dword ptr [0x007d2d18],0x1d
00673BA3  75 EC                     JNZ 0x00673b91
00673BA5  EB 0C                     JMP 0x00673bb3
LAB_00673ba7:
00673BA7  BB FA FF FF FF            MOV EBX,0xfffffffa
00673BAC  EB 05                     JMP 0x00673bb3
LAB_00673bae:
00673BAE  BB FE FF FF FF            MOV EBX,0xfffffffe
LAB_00673bb3:
00673BB3  A1 24 2D 7D 00            MOV EAX,[0x007d2d24]
00673BB8  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00673BBB  8B D0                     MOV EDX,EAX
00673BBD  33 D7                     XOR EDX,EDI
00673BBF  83 E2 01                  AND EDX,0x1
00673BC2  33 C2                     XOR EAX,EDX
00673BC4  A3 24 2D 7D 00            MOV [0x007d2d24],EAX
LAB_00673bc9:
00673BC9  5F                        POP EDI
00673BCA  8B C3                     MOV EAX,EBX
00673BCC  5E                        POP ESI
00673BCD  5B                        POP EBX
00673BCE  8B E5                     MOV ESP,EBP
00673BD0  5D                        POP EBP
00673BD1  C3                        RET
