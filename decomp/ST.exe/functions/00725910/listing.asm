FUN_00725910:
00725910  55                        PUSH EBP
00725911  8B EC                     MOV EBP,ESP
00725913  81 EC 44 02 00 00         SUB ESP,0x244
00725919  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0072591C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0072591F  53                        PUSH EBX
00725920  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00725923  56                        PUSH ESI
00725924  57                        PUSH EDI
00725925  50                        PUSH EAX
00725926  6A 01                     PUSH 0x1
00725928  51                        PUSH ECX
00725929  53                        PUSH EBX
0072592A  FF 55 14                  CALL dword ptr [EBP + 0x14]
0072592D  83 C4 10                  ADD ESP,0x10
00725930  85 C0                     TEST EAX,EAX
00725932  0F 85 CC 02 00 00         JNZ 0x00725c04
00725938  8B FB                     MOV EDI,EBX
0072593A  83 C9 FF                  OR ECX,0xffffffff
0072593D  F2 AE                     SCASB.REPNE ES:EDI
0072593F  F7 D1                     NOT ECX
00725941  2B F9                     SUB EDI,ECX
00725943  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
00725949  8B C1                     MOV EAX,ECX
0072594B  8B F7                     MOV ESI,EDI
0072594D  8B FA                     MOV EDI,EDX
0072594F  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
00725955  C1 E9 02                  SHR ECX,0x2
00725958  F3 A5                     MOVSD.REP ES:EDI,ESI
0072595A  8B C8                     MOV ECX,EAX
0072595C  83 E1 03                  AND ECX,0x3
0072595F  F3 A4                     MOVSB.REP ES:EDI,ESI
00725961  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
00725967  51                        PUSH ECX
00725968  52                        PUSH EDX
00725969  E8 12 29 F9 FF            CALL 0x006b8280
0072596E  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00725971  83 C9 FF                  OR ECX,0xffffffff
00725974  33 C0                     XOR EAX,EAX
00725976  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
0072597C  F2 AE                     SCASB.REPNE ES:EDI
0072597E  F7 D1                     NOT ECX
00725980  2B F9                     SUB EDI,ECX
00725982  8B F7                     MOV ESI,EDI
00725984  8B FA                     MOV EDI,EDX
00725986  8B D1                     MOV EDX,ECX
00725988  83 C9 FF                  OR ECX,0xffffffff
0072598B  F2 AE                     SCASB.REPNE ES:EDI
0072598D  8B CA                     MOV ECX,EDX
0072598F  4F                        DEC EDI
00725990  C1 E9 02                  SHR ECX,0x2
00725993  F3 A5                     MOVSD.REP ES:EDI,ESI
00725995  8B CA                     MOV ECX,EDX
00725997  8D 85 BC FD FF FF         LEA EAX,[EBP + 0xfffffdbc]
0072599D  83 E1 03                  AND ECX,0x3
007259A0  50                        PUSH EAX
007259A1  F3 A4                     MOVSB.REP ES:EDI,ESI
007259A3  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
007259A9  51                        PUSH ECX
007259AA  FF 15 EC BC 85 00         CALL dword ptr [0x0085bcec]
007259B0  8B F0                     MOV ESI,EAX
007259B2  83 FE FF                  CMP ESI,-0x1
007259B5  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
007259B8  0F 84 B3 00 00 00         JZ 0x00725a71
LAB_007259be:
007259BE  F6 85 BC FD FF FF 10      TEST byte ptr [EBP + 0xfffffdbc],0x10
007259C5  0F 85 90 00 00 00         JNZ 0x00725a5b
007259CB  8B FB                     MOV EDI,EBX
007259CD  83 C9 FF                  OR ECX,0xffffffff
007259D0  33 C0                     XOR EAX,EAX
007259D2  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
007259D8  F2 AE                     SCASB.REPNE ES:EDI
007259DA  F7 D1                     NOT ECX
007259DC  2B F9                     SUB EDI,ECX
007259DE  8B C1                     MOV EAX,ECX
007259E0  8B F7                     MOV ESI,EDI
007259E2  8B FA                     MOV EDI,EDX
007259E4  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
007259EA  C1 E9 02                  SHR ECX,0x2
007259ED  F3 A5                     MOVSD.REP ES:EDI,ESI
007259EF  8B C8                     MOV ECX,EAX
007259F1  83 E1 03                  AND ECX,0x3
007259F4  F3 A4                     MOVSB.REP ES:EDI,ESI
007259F6  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
007259FC  51                        PUSH ECX
007259FD  52                        PUSH EDX
007259FE  E8 7D 28 F9 FF            CALL 0x006b8280
00725A03  8D BD E8 FD FF FF         LEA EDI,[EBP + 0xfffffde8]
00725A09  83 C9 FF                  OR ECX,0xffffffff
00725A0C  33 C0                     XOR EAX,EAX
00725A0E  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
00725A14  F2 AE                     SCASB.REPNE ES:EDI
00725A16  F7 D1                     NOT ECX
00725A18  2B F9                     SUB EDI,ECX
00725A1A  8B F7                     MOV ESI,EDI
00725A1C  8B FA                     MOV EDI,EDX
00725A1E  8B D1                     MOV EDX,ECX
00725A20  83 C9 FF                  OR ECX,0xffffffff
00725A23  F2 AE                     SCASB.REPNE ES:EDI
00725A25  8B CA                     MOV ECX,EDX
00725A27  4F                        DEC EDI
00725A28  C1 E9 02                  SHR ECX,0x2
00725A2B  F3 A5                     MOVSD.REP ES:EDI,ESI
00725A2D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00725A30  8B CA                     MOV ECX,EDX
00725A32  83 E1 03                  AND ECX,0x3
00725A35  50                        PUSH EAX
00725A36  F3 A4                     MOVSB.REP ES:EDI,ESI
00725A38  8D 8D BC FD FF FF         LEA ECX,[EBP + 0xfffffdbc]
00725A3E  6A 00                     PUSH 0x0
00725A40  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
00725A46  51                        PUSH ECX
00725A47  52                        PUSH EDX
00725A48  FF 55 14                  CALL dword ptr [EBP + 0x14]
00725A4B  8B F0                     MOV ESI,EAX
00725A4D  83 C4 10                  ADD ESP,0x10
00725A50  85 F6                     TEST ESI,ESI
00725A52  0F 85 BC 00 00 00         JNZ 0x00725b14
00725A58  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_00725a5b:
00725A5B  8D 85 BC FD FF FF         LEA EAX,[EBP + 0xfffffdbc]
00725A61  50                        PUSH EAX
00725A62  56                        PUSH ESI
00725A63  FF 15 F0 BC 85 00         CALL dword ptr [0x0085bcf0]
00725A69  85 C0                     TEST EAX,EAX
00725A6B  0F 85 4D FF FF FF         JNZ 0x007259be
LAB_00725a71:
00725A71  56                        PUSH ESI
00725A72  FF 15 F4 BC 85 00         CALL dword ptr [0x0085bcf4]
00725A78  F6 45 1C 01               TEST byte ptr [EBP + 0x1c],0x1
00725A7C  0F 85 71 01 00 00         JNZ 0x00725bf3
00725A82  8B FB                     MOV EDI,EBX
00725A84  83 C9 FF                  OR ECX,0xffffffff
00725A87  33 C0                     XOR EAX,EAX
00725A89  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
00725A8F  F2 AE                     SCASB.REPNE ES:EDI
00725A91  F7 D1                     NOT ECX
00725A93  2B F9                     SUB EDI,ECX
00725A95  8B C1                     MOV EAX,ECX
00725A97  8B F7                     MOV ESI,EDI
00725A99  8B FA                     MOV EDI,EDX
00725A9B  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
00725AA1  C1 E9 02                  SHR ECX,0x2
00725AA4  F3 A5                     MOVSD.REP ES:EDI,ESI
00725AA6  8B C8                     MOV ECX,EAX
00725AA8  83 E1 03                  AND ECX,0x3
00725AAB  F3 A4                     MOVSB.REP ES:EDI,ESI
00725AAD  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
00725AB3  51                        PUSH ECX
00725AB4  52                        PUSH EDX
00725AB5  E8 C6 27 F9 FF            CALL 0x006b8280
00725ABA  BF BC C8 7C 00            MOV EDI,0x7cc8bc
00725ABF  83 C9 FF                  OR ECX,0xffffffff
00725AC2  33 C0                     XOR EAX,EAX
00725AC4  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
00725ACA  F2 AE                     SCASB.REPNE ES:EDI
00725ACC  F7 D1                     NOT ECX
00725ACE  2B F9                     SUB EDI,ECX
00725AD0  8B F7                     MOV ESI,EDI
00725AD2  8B FA                     MOV EDI,EDX
00725AD4  8B D1                     MOV EDX,ECX
00725AD6  83 C9 FF                  OR ECX,0xffffffff
00725AD9  F2 AE                     SCASB.REPNE ES:EDI
00725ADB  8B CA                     MOV ECX,EDX
00725ADD  4F                        DEC EDI
00725ADE  C1 E9 02                  SHR ECX,0x2
00725AE1  F3 A5                     MOVSD.REP ES:EDI,ESI
00725AE3  8B CA                     MOV ECX,EDX
00725AE5  8D 85 BC FD FF FF         LEA EAX,[EBP + 0xfffffdbc]
00725AEB  83 E1 03                  AND ECX,0x3
00725AEE  50                        PUSH EAX
00725AEF  F3 A4                     MOVSB.REP ES:EDI,ESI
00725AF1  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
00725AF7  51                        PUSH ECX
00725AF8  FF 15 EC BC 85 00         CALL dword ptr [0x0085bcec]
00725AFE  8B F0                     MOV ESI,EAX
00725B00  83 FE FF                  CMP ESI,-0x1
00725B03  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
00725B06  75 1F                     JNZ 0x00725b27
00725B08  5F                        POP EDI
00725B09  5E                        POP ESI
00725B0A  B8 91 FF FF FF            MOV EAX,0xffffff91
00725B0F  5B                        POP EBX
00725B10  8B E5                     MOV ESP,EBP
00725B12  5D                        POP EBP
00725B13  C3                        RET
LAB_00725b14:
00725B14  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00725B17  51                        PUSH ECX
00725B18  FF 15 F4 BC 85 00         CALL dword ptr [0x0085bcf4]
00725B1E  8B C6                     MOV EAX,ESI
00725B20  5F                        POP EDI
00725B21  5E                        POP ESI
00725B22  5B                        POP EBX
00725B23  8B E5                     MOV ESP,EBP
00725B25  5D                        POP EBP
00725B26  C3                        RET
LAB_00725b27:
00725B27  F6 85 BC FD FF FF 10      TEST byte ptr [EBP + 0xfffffdbc],0x10
00725B2E  0F 84 A2 00 00 00         JZ 0x00725bd6
00725B34  80 BD E8 FD FF FF 2E      CMP byte ptr [EBP + 0xfffffde8],0x2e
00725B3B  0F 84 95 00 00 00         JZ 0x00725bd6
00725B41  8B FB                     MOV EDI,EBX
00725B43  83 C9 FF                  OR ECX,0xffffffff
00725B46  33 C0                     XOR EAX,EAX
00725B48  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
00725B4E  F2 AE                     SCASB.REPNE ES:EDI
00725B50  F7 D1                     NOT ECX
00725B52  2B F9                     SUB EDI,ECX
00725B54  8B C1                     MOV EAX,ECX
00725B56  8B F7                     MOV ESI,EDI
00725B58  8B FA                     MOV EDI,EDX
00725B5A  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
00725B60  C1 E9 02                  SHR ECX,0x2
00725B63  F3 A5                     MOVSD.REP ES:EDI,ESI
00725B65  8B C8                     MOV ECX,EAX
00725B67  83 E1 03                  AND ECX,0x3
00725B6A  F3 A4                     MOVSB.REP ES:EDI,ESI
00725B6C  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
00725B72  51                        PUSH ECX
00725B73  52                        PUSH EDX
00725B74  E8 07 27 F9 FF            CALL 0x006b8280
00725B79  8D BD E8 FD FF FF         LEA EDI,[EBP + 0xfffffde8]
00725B7F  83 C9 FF                  OR ECX,0xffffffff
00725B82  33 C0                     XOR EAX,EAX
00725B84  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
00725B8A  F2 AE                     SCASB.REPNE ES:EDI
00725B8C  F7 D1                     NOT ECX
00725B8E  2B F9                     SUB EDI,ECX
00725B90  50                        PUSH EAX
00725B91  8B F7                     MOV ESI,EDI
00725B93  8B FA                     MOV EDI,EDX
00725B95  8B D1                     MOV EDX,ECX
00725B97  83 C9 FF                  OR ECX,0xffffffff
00725B9A  F2 AE                     SCASB.REPNE ES:EDI
00725B9C  8B CA                     MOV ECX,EDX
00725B9E  4F                        DEC EDI
00725B9F  C1 E9 02                  SHR ECX,0x2
00725BA2  F3 A5                     MOVSD.REP ES:EDI,ESI
00725BA4  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00725BA7  8B CA                     MOV ECX,EDX
00725BA9  83 E1 03                  AND ECX,0x3
00725BAC  50                        PUSH EAX
00725BAD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00725BB0  8D 95 BC FD FF FF         LEA EDX,[EBP + 0xfffffdbc]
00725BB6  F3 A4                     MOVSB.REP ES:EDI,ESI
00725BB8  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00725BBB  51                        PUSH ECX
00725BBC  52                        PUSH EDX
00725BBD  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
00725BC3  50                        PUSH EAX
00725BC4  51                        PUSH ECX
00725BC5  E8 46 FD FF FF            CALL 0x00725910
00725BCA  8B F0                     MOV ESI,EAX
00725BCC  83 C4 18                  ADD ESP,0x18
00725BCF  85 F6                     TEST ESI,ESI
00725BD1  75 38                     JNZ 0x00725c0b
00725BD3  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_00725bd6:
00725BD6  8D 95 BC FD FF FF         LEA EDX,[EBP + 0xfffffdbc]
00725BDC  52                        PUSH EDX
00725BDD  56                        PUSH ESI
00725BDE  FF 15 F0 BC 85 00         CALL dword ptr [0x0085bcf0]
00725BE4  85 C0                     TEST EAX,EAX
00725BE6  0F 85 3B FF FF FF         JNZ 0x00725b27
00725BEC  56                        PUSH ESI
00725BED  FF 15 F4 BC 85 00         CALL dword ptr [0x0085bcf4]
LAB_00725bf3:
00725BF3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00725BF6  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00725BF9  51                        PUSH ECX
00725BFA  6A 02                     PUSH 0x2
00725BFC  52                        PUSH EDX
00725BFD  53                        PUSH EBX
00725BFE  FF 55 14                  CALL dword ptr [EBP + 0x14]
00725C01  83 C4 10                  ADD ESP,0x10
LAB_00725c04:
00725C04  5F                        POP EDI
00725C05  5E                        POP ESI
00725C06  5B                        POP EBX
00725C07  8B E5                     MOV ESP,EBP
00725C09  5D                        POP EBP
00725C0A  C3                        RET
LAB_00725c0b:
00725C0B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00725C0E  50                        PUSH EAX
00725C0F  FF 15 F4 BC 85 00         CALL dword ptr [0x0085bcf4]
00725C15  8B C6                     MOV EAX,ESI
00725C17  5F                        POP EDI
00725C18  5E                        POP ESI
00725C19  5B                        POP EBX
00725C1A  8B E5                     MOV ESP,EBP
00725C1C  5D                        POP EBP
00725C1D  C3                        RET
