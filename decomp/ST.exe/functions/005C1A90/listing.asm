FUN_005c1a90:
005C1A90  55                        PUSH EBP
005C1A91  8B EC                     MOV EBP,ESP
005C1A93  83 EC 58                  SUB ESP,0x58
005C1A96  53                        PUSH EBX
005C1A97  56                        PUSH ESI
005C1A98  8B F1                     MOV ESI,ECX
005C1A9A  57                        PUSH EDI
005C1A9B  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005C1A9E  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005C1AA1  E8 0A 37 12 00            CALL 0x006e51b0
005C1AA6  33 FF                     XOR EDI,EDI
005C1AA8  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
005C1AAB  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005C1AB0  8D 55 AC                  LEA EDX,[EBP + -0x54]
005C1AB3  8D 4D A8                  LEA ECX,[EBP + -0x58]
005C1AB6  57                        PUSH EDI
005C1AB7  52                        PUSH EDX
005C1AB8  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
005C1ABB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C1AC1  E8 2A BD 16 00            CALL 0x0072d7f0
005C1AC6  8B F0                     MOV ESI,EAX
005C1AC8  83 C4 08                  ADD ESP,0x8
005C1ACB  3B F7                     CMP ESI,EDI
005C1ACD  0F 85 FB 07 00 00         JNZ 0x005c22ce
005C1AD3  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005C1AD6  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
005C1AD9  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005C1ADC  3D 14 62 00 00            CMP EAX,0x6214
005C1AE1  0F 87 4E 04 00 00         JA 0x005c1f35
005C1AE7  3D 14 62 00 00            CMP EAX,0x6214
005C1AEC  0F 84 AB 03 00 00         JZ 0x005c1e9d
005C1AF2  3D 00 62 00 00            CMP EAX,0x6200
005C1AF7  0F 87 00 02 00 00         JA 0x005c1cfd
005C1AFD  0F 84 3A 01 00 00         JZ 0x005c1c3d
005C1B03  83 F8 60                  CMP EAX,0x60
005C1B06  0F 87 A5 07 00 00         JA 0x005c22b1
005C1B0C  33 C9                     XOR ECX,ECX
005C1B0E  8A 88 34 23 5C 00         MOV CL,byte ptr [EAX + 0x5c2334]
switchD_005c1b14::switchD:
005C1B14  FF 24 8D 1C 23 5C 00      JMP dword ptr [ECX*0x4 + 0x5c231c]
switchD_005c1b14::caseD_2:
005C1B1B  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005C1B1E  8B CB                     MOV ECX,EBX
005C1B20  8A 42 14                  MOV AL,byte ptr [EDX + 0x14]
005C1B23  50                        PUSH EAX
005C1B24  E8 CE 34 E4 FF            CALL 0x00404ff7
005C1B29  E9 83 07 00 00            JMP 0x005c22b1
switchD_005c1b14::caseD_3:
005C1B2E  8B CB                     MOV ECX,EBX
005C1B30  E8 8A 08 E4 FF            CALL 0x004023bf
005C1B35  E9 77 07 00 00            JMP 0x005c22b1
switchD_005c1b14::caseD_0:
005C1B3A  8B CB                     MOV ECX,EBX
005C1B3C  E8 C5 1B E4 FF            CALL 0x00403706
005C1B41  E9 6B 07 00 00            JMP 0x005c22b1
switchD_005c1b14::caseD_60:
005C1B46  8A 43 67                  MOV AL,byte ptr [EBX + 0x67]
005C1B49  66 8B 4E 18               MOV CX,word ptr [ESI + 0x18]
005C1B4D  66 8B 56 1A               MOV DX,word ptr [ESI + 0x1a]
005C1B51  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005C1B54  84 C0                     TEST AL,AL
005C1B56  66 89 4D EC               MOV word ptr [EBP + -0x14],CX
005C1B5A  66 89 55 F0               MOV word ptr [EBP + -0x10],DX
005C1B5E  74 6F                     JZ 0x005c1bcf
005C1B60  8A 43 69                  MOV AL,byte ptr [EBX + 0x69]
005C1B63  84 C0                     TEST AL,AL
005C1B65  74 68                     JZ 0x005c1bcf
005C1B67  8D 93 57 03 00 00         LEA EDX,[EBX + 0x357]
005C1B6D  C7 45 F8 09 00 00 00      MOV dword ptr [EBP + -0x8],0x9
LAB_005c1b74:
005C1B74  8B 42 14                  MOV EAX,dword ptr [EDX + 0x14]
005C1B77  85 C0                     TEST EAX,EAX
005C1B79  74 48                     JZ 0x005c1bc3
005C1B7B  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005C1B7E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005C1B81  8B 72 FC                  MOV ESI,dword ptr [EDX + -0x4]
005C1B84  25 FF FF 00 00            AND EAX,0xffff
005C1B89  81 E1 FF FF 00 00         AND ECX,0xffff
005C1B8F  3B C6                     CMP EAX,ESI
005C1B91  7C 1F                     JL 0x005c1bb2
005C1B93  8B 7A 04                  MOV EDI,dword ptr [EDX + 0x4]
005C1B96  03 FE                     ADD EDI,ESI
005C1B98  3B C7                     CMP EAX,EDI
005C1B9A  7D 16                     JGE 0x005c1bb2
005C1B9C  8B 02                     MOV EAX,dword ptr [EDX]
005C1B9E  3B C8                     CMP ECX,EAX
005C1BA0  7C 10                     JL 0x005c1bb2
005C1BA2  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
005C1BA5  03 F0                     ADD ESI,EAX
005C1BA7  3B CE                     CMP ECX,ESI
005C1BA9  7D 07                     JGE 0x005c1bb2
005C1BAB  B8 01 00 00 00            MOV EAX,0x1
005C1BB0  EB 02                     JMP 0x005c1bb4
LAB_005c1bb2:
005C1BB2  33 C0                     XOR EAX,EAX
LAB_005c1bb4:
005C1BB4  85 C0                     TEST EAX,EAX
005C1BB6  74 08                     JZ 0x005c1bc0
005C1BB8  8B 7A 14                  MOV EDI,dword ptr [EDX + 0x14]
005C1BBB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005C1BBE  EB 03                     JMP 0x005c1bc3
LAB_005c1bc0:
005C1BC0  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_005c1bc3:
005C1BC3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005C1BC6  83 C2 1C                  ADD EDX,0x1c
005C1BC9  48                        DEC EAX
005C1BCA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005C1BCD  75 A5                     JNZ 0x005c1b74
LAB_005c1bcf:
005C1BCF  8B 83 4F 04 00 00         MOV EAX,dword ptr [EBX + 0x44f]
005C1BD5  3B C7                     CMP EAX,EDI
005C1BD7  0F 84 D4 06 00 00         JZ 0x005c22b1
005C1BDD  85 C0                     TEST EAX,EAX
005C1BDF  BE 03 00 00 00            MOV ESI,0x3
005C1BE4  74 22                     JZ 0x005c1c08
005C1BE6  C7 43 2D 02 42 00 00      MOV dword ptr [EBX + 0x2d],0x4202
005C1BED  66 C7 43 31 00 00         MOV word ptr [EBX + 0x31],0x0
005C1BF3  66 89 73 33               MOV word ptr [EBX + 0x33],SI
005C1BF7  89 43 35                  MOV dword ptr [EBX + 0x35],EAX
005C1BFA  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
005C1C00  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005C1C03  52                        PUSH EDX
005C1C04  8B 01                     MOV EAX,dword ptr [ECX]
005C1C06  FF 10                     CALL dword ptr [EAX]
LAB_005c1c08:
005C1C08  85 FF                     TEST EDI,EDI
005C1C0A  89 BB 4F 04 00 00         MOV dword ptr [EBX + 0x44f],EDI
005C1C10  0F 84 9B 06 00 00         JZ 0x005c22b1
005C1C16  C7 43 2D 01 42 00 00      MOV dword ptr [EBX + 0x2d],0x4201
005C1C1D  66 C7 43 31 00 00         MOV word ptr [EBX + 0x31],0x0
005C1C23  66 89 73 33               MOV word ptr [EBX + 0x33],SI
005C1C27  89 7B 35                  MOV dword ptr [EBX + 0x35],EDI
005C1C2A  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
005C1C30  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005C1C33  52                        PUSH EDX
005C1C34  8B 01                     MOV EAX,dword ptr [ECX]
005C1C36  FF 10                     CALL dword ptr [EAX]
005C1C38  E9 74 06 00 00            JMP 0x005c22b1
LAB_005c1c3d:
005C1C3D  8A 43 66                  MOV AL,byte ptr [EBX + 0x66]
005C1C40  C7 43 49 01 00 00 00      MOV dword ptr [EBX + 0x49],0x1
005C1C47  84 C0                     TEST AL,AL
005C1C49  75 13                     JNZ 0x005c1c5e
005C1C4B  8B CB                     MOV ECX,EBX
005C1C4D  C7 43 4D 08 61 00 00      MOV dword ptr [EBX + 0x4d],0x6108
005C1C54  E8 DF 1F E4 FF            CALL 0x00403c38
005C1C59  E9 53 06 00 00            JMP 0x005c22b1
LAB_005c1c5e:
005C1C5E  68 2E C5 80 00            PUSH 0x80c52e
005C1C63  68 80 76 80 00            PUSH 0x807680
005C1C68  68 E4 6E 7C 00            PUSH 0x7c6ee4
005C1C6D  68 16 ED 80 00            PUSH 0x80ed16
005C1C72  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C1C78  BF 2E C5 80 00            MOV EDI,0x80c52e
005C1C7D  83 C9 FF                  OR ECX,0xffffffff
005C1C80  33 C0                     XOR EAX,EAX
005C1C82  83 C4 10                  ADD ESP,0x10
005C1C85  F2 AE                     SCASB.REPNE ES:EDI
005C1C87  F7 D1                     NOT ECX
005C1C89  2B F9                     SUB EDI,ECX
005C1C8B  6A 01                     PUSH 0x1
005C1C8D  8B C1                     MOV EAX,ECX
005C1C8F  8B F7                     MOV ESI,EDI
005C1C91  BF 1E EF 80 00            MOV EDI,0x80ef1e
005C1C96  C1 E9 02                  SHR ECX,0x2
005C1C99  F3 A5                     MOVSD.REP ES:EDI,ESI
005C1C9B  8B C8                     MOV ECX,EAX
005C1C9D  33 C0                     XOR EAX,EAX
005C1C9F  83 E1 03                  AND ECX,0x3
005C1CA2  F3 A4                     MOVSB.REP ES:EDI,ESI
005C1CA4  BF 16 ED 80 00            MOV EDI,0x80ed16
005C1CA9  83 C9 FF                  OR ECX,0xffffffff
005C1CAC  F2 AE                     SCASB.REPNE ES:EDI
005C1CAE  F7 D1                     NOT ECX
005C1CB0  2B F9                     SUB EDI,ECX
005C1CB2  8B D1                     MOV EDX,ECX
005C1CB4  8B F7                     MOV ESI,EDI
005C1CB6  BF 1A EE 80 00            MOV EDI,0x80ee1a
005C1CBB  C1 E9 02                  SHR ECX,0x2
005C1CBE  F3 A5                     MOVSD.REP ES:EDI,ESI
005C1CC0  8B CA                     MOV ECX,EDX
005C1CC2  83 E1 03                  AND ECX,0x3
005C1CC5  F3 A4                     MOVSB.REP ES:EDI,ESI
005C1CC7  B9 20 76 80 00            MOV ECX,0x807620
005C1CCC  C6 05 A0 87 80 00 08      MOV byte ptr [0x008087a0],0x8
005C1CD3  E8 74 2E E4 FF            CALL 0x00404b4c
005C1CD8  85 C0                     TEST EAX,EAX
005C1CDA  74 48                     JZ 0x005c1d24
005C1CDC  8B CB                     MOV ECX,EBX
005C1CDE  C7 43 4D 04 61 00 00      MOV dword ptr [EBX + 0x4d],0x6104
005C1CE5  C7 43 51 00 00 00 00      MOV dword ptr [EBX + 0x51],0x0
005C1CEC  C7 43 55 02 00 00 00      MOV dword ptr [EBX + 0x55],0x2
005C1CF3  E8 40 1F E4 FF            CALL 0x00403c38
005C1CF8  E9 B4 05 00 00            JMP 0x005c22b1
LAB_005c1cfd:
005C1CFD  05 FF 9D FF FF            ADD EAX,0xffff9dff
005C1D02  83 F8 12                  CMP EAX,0x12
005C1D05  0F 87 A6 05 00 00         JA 0x005c22b1
005C1D0B  33 C9                     XOR ECX,ECX
005C1D0D  8A 88 B0 23 5C 00         MOV CL,byte ptr [EAX + 0x5c23b0]
switchD_005c1d13::switchD:
005C1D13  FF 24 8D 98 23 5C 00      JMP dword ptr [ECX*0x4 + 0x5c2398]
switchD_005c1d13::caseD_6201:
005C1D1A  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
005C1D21  89 7B 49                  MOV dword ptr [EBX + 0x49],EDI
LAB_005c1d24:
005C1D24  8B CB                     MOV ECX,EBX
005C1D26  C7 43 4D 02 61 00 00      MOV dword ptr [EBX + 0x4d],0x6102
005C1D2D  E8 06 1F E4 FF            CALL 0x00403c38
005C1D32  E9 7A 05 00 00            JMP 0x005c22b1
switchD_005c1d13::caseD_6202:
005C1D37  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005C1D3A  33 D2                     XOR EDX,EDX
005C1D3C  8A 53 6A                  MOV DL,byte ptr [EBX + 0x6a]
005C1D3F  57                        PUSH EDI
005C1D40  89 93 07 03 00 00         MOV dword ptr [EBX + 0x307],EDX
005C1D46  8D 93 C7 02 00 00         LEA EDX,[EBX + 0x2c7]
005C1D4C  52                        PUSH EDX
005C1D4D  C7 83 D7 02 00 00 FF 68 00 00  MOV dword ptr [EBX + 0x2d7],0x68ff
005C1D57  C7 83 F7 02 00 00 7F 69 00 00  MOV dword ptr [EBX + 0x2f7],0x697f
005C1D61  C7 83 0F 03 00 00 03 00 00 00  MOV dword ptr [EBX + 0x30f],0x3
005C1D6B  C7 83 2B 03 00 00 50 00 00 00  MOV dword ptr [EBX + 0x32b],0x50
005C1D75  C7 83 33 03 00 00 C8 00 00 00  MOV dword ptr [EBX + 0x333],0xc8
005C1D7F  C7 83 2F 03 00 00 B3 01 00 00  MOV dword ptr [EBX + 0x32f],0x1b3
005C1D89  8B 01                     MOV EAX,dword ptr [ECX]
005C1D8B  57                        PUSH EDI
005C1D8C  57                        PUSH EDI
005C1D8D  68 EF 00 01 00            PUSH 0x100ef
005C1D92  FF 50 08                  CALL dword ptr [EAX + 0x8]
005C1D95  E9 17 05 00 00            JMP 0x005c22b1
switchD_005c1d13::caseD_6203:
005C1D9A  33 C0                     XOR EAX,EAX
005C1D9C  8A 43 6A                  MOV AL,byte ptr [EBX + 0x6a]
005C1D9F  39 BC 83 47 03 00 00      CMP dword ptr [EBX + EAX*0x4 + 0x347],EDI
005C1DA6  0F 84 05 05 00 00         JZ 0x005c22b1
005C1DAC  33 C9                     XOR ECX,ECX
005C1DAE  C7 83 D7 02 00 00 00 69 00 00  MOV dword ptr [EBX + 0x2d7],0x6900
005C1DB8  8A C8                     MOV CL,AL
005C1DBA  C7 83 F7 02 00 00 80 69 00 00  MOV dword ptr [EBX + 0x2f7],0x6980
005C1DC4  8B 94 8B 47 03 00 00      MOV EDX,dword ptr [EBX + ECX*0x4 + 0x347]
005C1DCB  8B 4B 6B                  MOV ECX,dword ptr [EBX + 0x6b]
005C1DCE  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
005C1DD1  89 8B 07 03 00 00         MOV dword ptr [EBX + 0x307],ECX
005C1DD7  8B 8B 0B 03 00 00         MOV ECX,dword ptr [EBX + 0x30b]
005C1DDD  89 83 0F 03 00 00         MOV dword ptr [EBX + 0x30f],EAX
005C1DE3  0F AF C8                  IMUL ECX,EAX
005C1DE6  83 C1 0A                  ADD ECX,0xa
005C1DE9  C7 83 2B 03 00 00 50 00 00 00  MOV dword ptr [EBX + 0x32b],0x50
005C1DF3  C7 83 33 03 00 00 C8 00 00 00  MOV dword ptr [EBX + 0x333],0xc8
005C1DFD  8D 41 E2                  LEA EAX,[ECX + -0x1e]
005C1E00  99                        CDQ
005C1E01  2B C2                     SUB EAX,EDX
005C1E03  8B D0                     MOV EDX,EAX
005C1E05  B8 EA 01 00 00            MOV EAX,0x1ea
005C1E0A  D1 FA                     SAR EDX,0x1
005C1E0C  2B C2                     SUB EAX,EDX
005C1E0E  89 83 2F 03 00 00         MOV dword ptr [EBX + 0x32f],EAX
005C1E14  03 C1                     ADD EAX,ECX
005C1E16  3D 58 02 00 00            CMP EAX,0x258
005C1E1B  7E 0D                     JLE 0x005c1e2a
005C1E1D  B8 58 02 00 00            MOV EAX,0x258
005C1E22  2B C1                     SUB EAX,ECX
005C1E24  89 83 2F 03 00 00         MOV dword ptr [EBX + 0x32f],EAX
LAB_005c1e2a:
005C1E2A  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005C1E2D  8D 83 C7 02 00 00         LEA EAX,[EBX + 0x2c7]
005C1E33  57                        PUSH EDI
005C1E34  50                        PUSH EAX
005C1E35  8B 11                     MOV EDX,dword ptr [ECX]
005C1E37  57                        PUSH EDI
005C1E38  57                        PUSH EDI
005C1E39  68 EF 00 01 00            PUSH 0x100ef
005C1E3E  FF 52 08                  CALL dword ptr [EDX + 0x8]
005C1E41  E9 6B 04 00 00            JMP 0x005c22b1
switchD_005c1d13::caseD_6212:
005C1E46  8A 43 66                  MOV AL,byte ptr [EBX + 0x66]
005C1E49  84 C0                     TEST AL,AL
005C1E4B  75 23                     JNZ 0x005c1e70
005C1E4D  A0 32 C6 80 00            MOV AL,[0x0080c632]
005C1E52  57                        PUSH EDI
005C1E53  F6 D8                     NEG AL
005C1E55  1B C0                     SBB EAX,EAX
005C1E57  57                        PUSH EDI
005C1E58  83 E0 2B                  AND EAX,0x2b
005C1E5B  6A 04                     PUSH 0x4
005C1E5D  05 2C 23 00 00            ADD EAX,0x232c
005C1E62  8B CB                     MOV ECX,EBX
005C1E64  50                        PUSH EAX
005C1E65  56                        PUSH ESI
005C1E66  E8 16 2A E4 FF            CALL 0x00404881
005C1E6B  E9 41 04 00 00            JMP 0x005c22b1
LAB_005c1e70:
005C1E70  57                        PUSH EDI
005C1E71  B8 58 23 00 00            MOV EAX,0x2358
005C1E76  57                        PUSH EDI
005C1E77  6A 04                     PUSH 0x4
005C1E79  50                        PUSH EAX
005C1E7A  56                        PUSH ESI
005C1E7B  8B CB                     MOV ECX,EBX
005C1E7D  E8 FF 29 E4 FF            CALL 0x00404881
005C1E82  E9 2A 04 00 00            JMP 0x005c22b1
switchD_005c1d13::caseD_6213:
005C1E87  57                        PUSH EDI
005C1E88  57                        PUSH EDI
005C1E89  6A 04                     PUSH 0x4
005C1E8B  68 BC 24 00 00            PUSH 0x24bc
005C1E90  56                        PUSH ESI
005C1E91  8B CB                     MOV ECX,EBX
005C1E93  E8 E9 29 E4 FF            CALL 0x00404881
005C1E98  E9 14 04 00 00            JMP 0x005c22b1
LAB_005c1e9d:
005C1E9D  33 C0                     XOR EAX,EAX
005C1E9F  8A 43 6A                  MOV AL,byte ptr [EBX + 0x6a]
005C1EA2  48                        DEC EAX
005C1EA3  74 1E                     JZ 0x005c1ec3
005C1EA5  48                        DEC EAX
005C1EA6  74 0E                     JZ 0x005c1eb6
005C1EA8  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005C1EAE  51                        PUSH ECX
005C1EAF  68 F1 23 00 00            PUSH 0x23f1
005C1EB4  EB 18                     JMP 0x005c1ece
LAB_005c1eb6:
005C1EB6  A1 18 76 80 00            MOV EAX,[0x00807618]
005C1EBB  50                        PUSH EAX
005C1EBC  68 F2 23 00 00            PUSH 0x23f2
005C1EC1  EB 0B                     JMP 0x005c1ece
LAB_005c1ec3:
005C1EC3  A1 18 76 80 00            MOV EAX,[0x00807618]
005C1EC8  50                        PUSH EAX
005C1EC9  68 F0 23 00 00            PUSH 0x23f0
LAB_005c1ece:
005C1ECE  E8 6D E2 0E 00            CALL 0x006b0140
005C1ED3  8B F8                     MOV EDI,EAX
005C1ED5  83 C9 FF                  OR ECX,0xffffffff
005C1ED8  33 C0                     XOR EAX,EAX
005C1EDA  6A 0A                     PUSH 0xa
005C1EDC  F2 AE                     SCASB.REPNE ES:EDI
005C1EDE  F7 D1                     NOT ECX
005C1EE0  2B F9                     SUB EDI,ECX
005C1EE2  68 3A F3 80 00            PUSH 0x80f33a
005C1EE7  8B D1                     MOV EDX,ECX
005C1EE9  8B F7                     MOV ESI,EDI
005C1EEB  BF 3A F3 80 00            MOV EDI,0x80f33a
005C1EF0  C1 E9 02                  SHR ECX,0x2
005C1EF3  F3 A5                     MOVSD.REP ES:EDI,ESI
005C1EF5  8B CA                     MOV ECX,EDX
005C1EF7  83 E1 03                  AND ECX,0x3
005C1EFA  F3 A4                     MOVSB.REP ES:EDI,ESI
005C1EFC  E8 5F C6 16 00            CALL 0x0072e560
005C1F01  83 C4 08                  ADD ESP,0x8
005C1F04  85 C0                     TEST EAX,EAX
005C1F06  74 12                     JZ 0x005c1f1a
LAB_005c1f08:
005C1F08  6A 0A                     PUSH 0xa
005C1F0A  50                        PUSH EAX
005C1F0B  C6 00 20                  MOV byte ptr [EAX],0x20
005C1F0E  E8 4D C6 16 00            CALL 0x0072e560
005C1F13  83 C4 08                  ADD ESP,0x8
005C1F16  85 C0                     TEST EAX,EAX
005C1F18  75 EE                     JNZ 0x005c1f08
LAB_005c1f1a:
005C1F1A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005C1F1D  68 3A F3 80 00            PUSH 0x80f33a
005C1F22  6A 01                     PUSH 0x1
005C1F24  6A 02                     PUSH 0x2
005C1F26  6A 00                     PUSH 0x0
005C1F28  50                        PUSH EAX
005C1F29  8B CB                     MOV ECX,EBX
005C1F2B  E8 51 29 E4 FF            CALL 0x00404881
005C1F30  E9 7C 03 00 00            JMP 0x005c22b1
LAB_005c1f35:
005C1F35  3D 7F 69 00 00            CMP EAX,0x697f
005C1F3A  0F 87 48 02 00 00         JA 0x005c2188
005C1F40  0F 84 53 01 00 00         JZ 0x005c2099
005C1F46  3D 00 69 00 00            CMP EAX,0x6900
005C1F4B  0F 87 22 01 00 00         JA 0x005c2073
005C1F51  0F 84 E6 00 00 00         JZ 0x005c203d
005C1F57  3D 15 62 00 00            CMP EAX,0x6215
005C1F5C  74 5B                     JZ 0x005c1fb9
005C1F5E  3D FF 68 00 00            CMP EAX,0x68ff
005C1F63  0F 85 48 03 00 00         JNZ 0x005c22b1
005C1F69  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005C1F6C  83 F8 03                  CMP EAX,0x3
005C1F6F  0F 83 3C 03 00 00         JNC 0x005c22b1
005C1F75  88 43 6A                  MOV byte ptr [EBX + 0x6a],AL
005C1F78  25 FF 00 00 00            AND EAX,0xff
005C1F7D  8B 8C 83 47 03 00 00      MOV ECX,dword ptr [EBX + EAX*0x4 + 0x347]
005C1F84  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005C1F87  8B 4B 6B                  MOV ECX,dword ptr [EBX + 0x6b]
005C1F8A  3B C8                     CMP ECX,EAX
005C1F8C  72 04                     JC 0x005c1f92
005C1F8E  48                        DEC EAX
005C1F8F  89 43 6B                  MOV dword ptr [EBX + 0x6b],EAX
LAB_005c1f92:
005C1F92  8B CB                     MOV ECX,EBX
005C1F94  E8 6E 1B E4 FF            CALL 0x00403b07
005C1F99  8B 83 97 00 00 00         MOV EAX,dword ptr [EBX + 0x97]
005C1F9F  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005C1FA2  52                        PUSH EDX
005C1FA3  50                        PUSH EAX
005C1FA4  6A 02                     PUSH 0x2
005C1FA6  8B CB                     MOV ECX,EBX
005C1FA8  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005C1FAF  E8 CC 40 12 00            CALL 0x006e6080
005C1FB4  E9 F8 02 00 00            JMP 0x005c22b1
LAB_005c1fb9:
005C1FB9  33 C9                     XOR ECX,ECX
005C1FBB  8A 4B 6A                  MOV CL,byte ptr [EBX + 0x6a]
005C1FBE  8B 8C 8B 47 03 00 00      MOV ECX,dword ptr [EBX + ECX*0x4 + 0x347]
005C1FC5  3B CF                     CMP ECX,EDI
005C1FC7  0F 84 E4 02 00 00         JZ 0x005c22b1
005C1FCD  8B 53 6B                  MOV EDX,dword ptr [EBX + 0x6b]
005C1FD0  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
005C1FD3  3B D7                     CMP EDX,EDI
005C1FD5  73 0B                     JNC 0x005c1fe2
005C1FD7  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005C1FDA  0F AF C2                  IMUL EAX,EDX
005C1FDD  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005C1FE0  EB 02                     JMP 0x005c1fe4
LAB_005c1fe2:
005C1FE2  33 C0                     XOR EAX,EAX
LAB_005c1fe4:
005C1FE4  85 C0                     TEST EAX,EAX
005C1FE6  0F 84 C5 02 00 00         JZ 0x005c22b1
005C1FEC  3B D7                     CMP EDX,EDI
005C1FEE  73 0B                     JNC 0x005c1ffb
005C1FF0  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005C1FF3  0F AF C2                  IMUL EAX,EDX
005C1FF6  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005C1FF9  EB 02                     JMP 0x005c1ffd
LAB_005c1ffb:
005C1FFB  33 C0                     XOR EAX,EAX
LAB_005c1ffd:
005C1FFD  8B 10                     MOV EDX,dword ptr [EAX]
005C1FFF  A1 18 76 80 00            MOV EAX,[0x00807618]
005C2004  42                        INC EDX
005C2005  52                        PUSH EDX
005C2006  50                        PUSH EAX
005C2007  68 45 24 00 00            PUSH 0x2445
005C200C  E8 2F E1 0E 00            CALL 0x006b0140
005C2011  50                        PUSH EAX
005C2012  68 B8 D0 7C 00            PUSH 0x7cd0b8
005C2017  68 3A F3 80 00            PUSH 0x80f33a
005C201C  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C2022  83 C4 10                  ADD ESP,0x10
005C2025  8B CB                     MOV ECX,EBX
005C2027  68 3A F3 80 00            PUSH 0x80f33a
005C202C  6A 01                     PUSH 0x1
005C202E  6A 02                     PUSH 0x2
005C2030  6A 00                     PUSH 0x0
005C2032  56                        PUSH ESI
005C2033  E8 49 28 E4 FF            CALL 0x00404881
005C2038  E9 74 02 00 00            JMP 0x005c22b1
LAB_005c203d:
005C203D  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
005C2040  83 FE FF                  CMP ESI,-0x1
005C2043  0F 84 68 02 00 00         JZ 0x005c22b1
005C2049  8B CB                     MOV ECX,EBX
005C204B  89 73 6B                  MOV dword ptr [EBX + 0x6b],ESI
005C204E  E8 B4 1A E4 FF            CALL 0x00403b07
005C2053  8B 93 9B 00 00 00         MOV EDX,dword ptr [EBX + 0x9b]
005C2059  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005C205C  51                        PUSH ECX
005C205D  52                        PUSH EDX
005C205E  6A 02                     PUSH 0x2
005C2060  8B CB                     MOV ECX,EBX
005C2062  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005C2069  E8 12 40 12 00            CALL 0x006e6080
005C206E  E9 3E 02 00 00            JMP 0x005c22b1
LAB_005c2073:
005C2073  2D 3F 69 00 00            SUB EAX,0x693f
005C2078  74 13                     JZ 0x005c208d
005C207A  48                        DEC EAX
005C207B  0F 85 30 02 00 00         JNZ 0x005c22b1
005C2081  8B CB                     MOV ECX,EBX
005C2083  E8 8C 35 E4 FF            CALL 0x00405614
005C2088  E9 24 02 00 00            JMP 0x005c22b1
LAB_005c208d:
005C208D  8B CB                     MOV ECX,EBX
005C208F  E8 5B 0F E4 FF            CALL 0x00402fef
005C2094  E9 18 02 00 00            JMP 0x005c22b1
LAB_005c2099:
005C2099  66 83 7E 14 03            CMP word ptr [ESI + 0x14],0x3
005C209E  0F 83 0D 02 00 00         JNC 0x005c22b1
005C20A4  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005C20A7  8B 8B 87 00 00 00         MOV ECX,dword ptr [EBX + 0x87]
005C20AD  57                        PUSH EDI
005C20AE  57                        PUSH EDI
005C20AF  57                        PUSH EDI
005C20B0  57                        PUSH EDI
005C20B1  57                        PUSH EDI
005C20B2  50                        PUSH EAX
005C20B3  E8 D8 E9 14 00            CALL 0x00710a90
005C20B8  33 C0                     XOR EAX,EAX
005C20BA  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
005C20BE  48                        DEC EAX
005C20BF  74 1E                     JZ 0x005c20df
005C20C1  48                        DEC EAX
005C20C2  74 0E                     JZ 0x005c20d2
005C20C4  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005C20CA  51                        PUSH ECX
005C20CB  68 F1 23 00 00            PUSH 0x23f1
005C20D0  EB 18                     JMP 0x005c20ea
LAB_005c20d2:
005C20D2  A1 18 76 80 00            MOV EAX,[0x00807618]
005C20D7  50                        PUSH EAX
005C20D8  68 F2 23 00 00            PUSH 0x23f2
005C20DD  EB 0B                     JMP 0x005c20ea
LAB_005c20df:
005C20DF  A1 18 76 80 00            MOV EAX,[0x00807618]
005C20E4  50                        PUSH EAX
005C20E5  68 F0 23 00 00            PUSH 0x23f0
LAB_005c20ea:
005C20EA  E8 51 E0 0E 00            CALL 0x006b0140
005C20EF  8B F8                     MOV EDI,EAX
005C20F1  83 C9 FF                  OR ECX,0xffffffff
005C20F4  33 C0                     XOR EAX,EAX
005C20F6  6A 0A                     PUSH 0xa
005C20F8  F2 AE                     SCASB.REPNE ES:EDI
005C20FA  F7 D1                     NOT ECX
005C20FC  2B F9                     SUB EDI,ECX
005C20FE  68 3A F3 80 00            PUSH 0x80f33a
005C2103  8B D1                     MOV EDX,ECX
005C2105  8B F7                     MOV ESI,EDI
005C2107  BF 3A F3 80 00            MOV EDI,0x80f33a
005C210C  C1 E9 02                  SHR ECX,0x2
005C210F  F3 A5                     MOVSD.REP ES:EDI,ESI
005C2111  8B CA                     MOV ECX,EDX
005C2113  83 E1 03                  AND ECX,0x3
005C2116  F3 A4                     MOVSB.REP ES:EDI,ESI
005C2118  E8 43 C4 16 00            CALL 0x0072e560
005C211D  83 C4 08                  ADD ESP,0x8
005C2120  85 C0                     TEST EAX,EAX
005C2122  74 12                     JZ 0x005c2136
LAB_005c2124:
005C2124  6A 0A                     PUSH 0xa
005C2126  50                        PUSH EAX
005C2127  C6 00 20                  MOV byte ptr [EAX],0x20
005C212A  E8 31 C4 16 00            CALL 0x0072e560
005C212F  83 C4 08                  ADD ESP,0x8
005C2132  85 C0                     TEST EAX,EAX
005C2134  75 EE                     JNZ 0x005c2124
LAB_005c2136:
005C2136  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005C2139  BF 01 00 00 00            MOV EDI,0x1
005C213E  33 C0                     XOR EAX,EAX
005C2140  8B 8B 87 00 00 00         MOV ECX,dword ptr [EBX + 0x87]
005C2146  66 39 7E 16               CMP word ptr [ESI + 0x16],DI
005C214A  0F 94 C0                  SETZ AL
005C214D  50                        PUSH EAX
005C214E  6A FF                     PUSH -0x1
005C2150  6A FF                     PUSH -0x1
005C2152  68 3A F3 80 00            PUSH 0x80f33a
005C2157  E8 64 F8 14 00            CALL 0x007119c0
005C215C  66 39 7E 16               CMP word ptr [ESI + 0x16],DI
005C2160  0F 85 4B 01 00 00         JNZ 0x005c22b1
005C2166  8B CE                     MOV ECX,ESI
005C2168  6A 0D                     PUSH 0xd
005C216A  6A 18                     PUSH 0x18
005C216C  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
005C216F  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005C2172  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005C2175  52                        PUSH EDX
005C2176  51                        PUSH ECX
005C2177  6A 00                     PUSH 0x0
005C2179  6A 00                     PUSH 0x0
005C217B  6A 00                     PUSH 0x0
005C217D  50                        PUSH EAX
005C217E  E8 5D 3D 0F 00            CALL 0x006b5ee0
005C2183  E9 29 01 00 00            JMP 0x005c22b1
LAB_005c2188:
005C2188  3D 08 B2 00 00            CMP EAX,0xb208
005C218D  0F 87 0F 01 00 00         JA 0x005c22a2
005C2193  0F 84 F1 00 00 00         JZ 0x005c228a
005C2199  3D 80 69 00 00            CMP EAX,0x6980
005C219E  74 34                     JZ 0x005c21d4
005C21A0  3D FF 70 00 00            CMP EAX,0x70ff
005C21A5  0F 85 06 01 00 00         JNZ 0x005c22b1
005C21AB  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005C21AE  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C21B3  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005C21B9  57                        PUSH EDI
005C21BA  57                        PUSH EDI
005C21BB  57                        PUSH EDI
005C21BC  52                        PUSH EDX
005C21BD  50                        PUSH EAX
005C21BE  51                        PUSH ECX
005C21BF  E8 C6 22 E4 FF            CALL 0x0040448a
005C21C4  83 C4 18                  ADD ESP,0x18
switchD_005c1b14::caseD_5:
005C21C7  57                        PUSH EDI
005C21C8  8B CB                     MOV ECX,EBX
005C21CA  E8 FA FC E3 FF            CALL 0x00401ec9
005C21CF  E9 DD 00 00 00            JMP 0x005c22b1
LAB_005c21d4:
005C21D4  33 D2                     XOR EDX,EDX
005C21D6  8A 53 6A                  MOV DL,byte ptr [EBX + 0x6a]
005C21D9  8B 8C 93 47 03 00 00      MOV ECX,dword ptr [EBX + EDX*0x4 + 0x347]
005C21E0  3B CF                     CMP ECX,EDI
005C21E2  74 16                     JZ 0x005c21fa
005C21E4  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005C21E7  33 C0                     XOR EAX,EAX
005C21E9  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
005C21ED  3B C2                     CMP EAX,EDX
005C21EF  73 09                     JNC 0x005c21fa
005C21F1  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
005C21F4  0F AF F8                  IMUL EDI,EAX
005C21F7  03 79 1C                  ADD EDI,dword ptr [ECX + 0x1c]
LAB_005c21fa:
005C21FA  85 FF                     TEST EDI,EDI
005C21FC  0F 84 AF 00 00 00         JZ 0x005c22b1
005C2202  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005C2205  8B 8B 87 00 00 00         MOV ECX,dword ptr [EBX + 0x87]
005C220B  6A 00                     PUSH 0x0
005C220D  6A 00                     PUSH 0x0
005C220F  6A 00                     PUSH 0x0
005C2211  6A 00                     PUSH 0x0
005C2213  6A 00                     PUSH 0x0
005C2215  50                        PUSH EAX
005C2216  E8 75 E8 14 00            CALL 0x00710a90
005C221B  8B 0F                     MOV ECX,dword ptr [EDI]
005C221D  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C2223  41                        INC ECX
005C2224  51                        PUSH ECX
005C2225  52                        PUSH EDX
005C2226  68 45 24 00 00            PUSH 0x2445
005C222B  E8 10 DF 0E 00            CALL 0x006b0140
005C2230  50                        PUSH EAX
005C2231  68 B8 D0 7C 00            PUSH 0x7cd0b8
005C2236  68 3A F3 80 00            PUSH 0x80f33a
005C223B  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C2241  BF 01 00 00 00            MOV EDI,0x1
005C2246  83 C4 10                  ADD ESP,0x10
005C2249  33 C0                     XOR EAX,EAX
005C224B  66 39 7E 16               CMP word ptr [ESI + 0x16],DI
005C224F  8B 8B 87 00 00 00         MOV ECX,dword ptr [EBX + 0x87]
005C2255  0F 94 C0                  SETZ AL
005C2258  50                        PUSH EAX
005C2259  6A FF                     PUSH -0x1
005C225B  6A FF                     PUSH -0x1
005C225D  68 3A F3 80 00            PUSH 0x80f33a
005C2262  E8 59 F7 14 00            CALL 0x007119c0
005C2267  66 39 7E 16               CMP word ptr [ESI + 0x16],DI
005C226B  75 44                     JNZ 0x005c22b1
005C226D  8B 76 18                  MOV ESI,dword ptr [ESI + 0x18]
005C2270  6A 0D                     PUSH 0xd
005C2272  6A 18                     PUSH 0x18
005C2274  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005C2277  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
005C227A  51                        PUSH ECX
005C227B  52                        PUSH EDX
005C227C  6A 00                     PUSH 0x0
005C227E  6A 00                     PUSH 0x0
005C2280  6A 00                     PUSH 0x0
005C2282  56                        PUSH ESI
005C2283  E8 58 3C 0F 00            CALL 0x006b5ee0
005C2288  EB 27                     JMP 0x005c22b1
LAB_005c228a:
005C228A  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005C228D  57                        PUSH EDI
005C228E  8A 08                     MOV CL,byte ptr [EAX]
005C2290  C6 43 68 00               MOV byte ptr [EBX + 0x68],0x0
005C2294  FE C9                     DEC CL
005C2296  88 4B 69                  MOV byte ptr [EBX + 0x69],CL
005C2299  8B CB                     MOV ECX,EBX
005C229B  E8 29 FC E3 FF            CALL 0x00401ec9
005C22A0  EB 0F                     JMP 0x005c22b1
LAB_005c22a2:
005C22A2  3D 09 B2 00 00            CMP EAX,0xb209
005C22A7  75 08                     JNZ 0x005c22b1
005C22A9  56                        PUSH ESI
005C22AA  8B CB                     MOV ECX,EBX
005C22AC  E8 BA 36 E4 FF            CALL 0x0040596b
switchD_005c1b14::caseD_1:
005C22B1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005C22B4  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
005C22B7  50                        PUSH EAX
005C22B8  8B CB                     MOV ECX,EBX
005C22BA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005C22C0  E8 0B 3D 12 00            CALL 0x006e5fd0
005C22C5  5F                        POP EDI
005C22C6  5E                        POP ESI
005C22C7  5B                        POP EBX
005C22C8  8B E5                     MOV ESP,EBP
005C22CA  5D                        POP EBP
005C22CB  C2 04 00                  RET 0x4
LAB_005c22ce:
005C22CE  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
005C22D1  68 9C D0 7C 00            PUSH 0x7cd09c
005C22D6  68 CC 4C 7A 00            PUSH 0x7a4ccc
005C22DB  56                        PUSH ESI
005C22DC  57                        PUSH EDI
005C22DD  68 2B 04 00 00            PUSH 0x42b
005C22E2  68 C8 CE 7C 00            PUSH 0x7ccec8
005C22E7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C22ED  E8 DE B1 0E 00            CALL 0x006ad4d0
005C22F2  83 C4 18                  ADD ESP,0x18
005C22F5  85 C0                     TEST EAX,EAX
005C22F7  74 01                     JZ 0x005c22fa
005C22F9  CC                        INT3
LAB_005c22fa:
005C22FA  68 2B 04 00 00            PUSH 0x42b
005C22FF  68 C8 CE 7C 00            PUSH 0x7ccec8
005C2304  57                        PUSH EDI
005C2305  56                        PUSH ESI
005C2306  E8 35 3B 0E 00            CALL 0x006a5e40
005C230B  5F                        POP EDI
005C230C  5E                        POP ESI
005C230D  B8 FF FF 00 00            MOV EAX,0xffff
005C2312  5B                        POP EBX
005C2313  8B E5                     MOV ESP,EBP
005C2315  5D                        POP EBP
005C2316  C2 04 00                  RET 0x4
