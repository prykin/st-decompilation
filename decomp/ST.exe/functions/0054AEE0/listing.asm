CursorClassTy::GCGameState:
0054AEE0  55                        PUSH EBP
0054AEE1  8B EC                     MOV EBP,ESP
0054AEE3  81 EC F4 00 00 00         SUB ESP,0xf4
0054AEE9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054AEEE  53                        PUSH EBX
0054AEEF  56                        PUSH ESI
0054AEF0  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0054AEF3  57                        PUSH EDI
0054AEF4  8D 55 94                  LEA EDX,[EBP + -0x6c]
0054AEF7  8D 4D 90                  LEA ECX,[EBP + -0x70]
0054AEFA  6A 00                     PUSH 0x0
0054AEFC  52                        PUSH EDX
0054AEFD  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0054AF04  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0054AF07  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054AF0D  E8 DE 28 1E 00            CALL 0x0072d7f0
0054AF12  8B F0                     MOV ESI,EAX
0054AF14  83 C4 08                  ADD ESP,0x8
0054AF17  85 F6                     TEST ESI,ESI
0054AF19  0F 85 88 04 00 00         JNZ 0x0054b3a7
0054AF1F  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0054AF22  8B CB                     MOV ECX,EBX
0054AF24  E8 0B 87 EB FF            CALL 0x00403634
0054AF29  85 C0                     TEST EAX,EAX
0054AF2B  74 4C                     JZ 0x0054af79
0054AF2D  8A 83 DE 00 00 00         MOV AL,byte ptr [EBX + 0xde]
0054AF33  3C 02                     CMP AL,0x2
0054AF35  74 04                     JZ 0x0054af3b
0054AF37  3C 04                     CMP AL,0x4
0054AF39  75 0B                     JNZ 0x0054af46
LAB_0054af3b:
0054AF3B  8B CB                     MOV ECX,EBX
0054AF3D  E8 45 A7 EB FF            CALL 0x00405687
0054AF42  85 C0                     TEST EAX,EAX
0054AF44  74 0A                     JZ 0x0054af50
LAB_0054af46:
0054AF46  8B 83 96 04 00 00         MOV EAX,dword ptr [EBX + 0x496]
0054AF4C  85 C0                     TEST EAX,EAX
0054AF4E  75 29                     JNZ 0x0054af79
LAB_0054af50:
0054AF50  6A FF                     PUSH -0x1
0054AF52  8B CB                     MOV ECX,EBX
0054AF54  E8 1C 82 EB FF            CALL 0x00403175
0054AF59  A1 90 16 80 00            MOV EAX,[0x00801690]
0054AF5E  85 C0                     TEST EAX,EAX
0054AF60  0F 84 0C 04 00 00         JZ 0x0054b372
0054AF66  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
0054AF6E  0F 84 FE 03 00 00         JZ 0x0054b372
0054AF74  E9 A0 00 00 00            JMP 0x0054b019
LAB_0054af79:
0054AF79  B9 08 00 00 00            MOV ECX,0x8
0054AF7E  33 C0                     XOR EAX,EAX
0054AF80  8D BD 0C FF FF FF         LEA EDI,[EBP + 0xffffff0c]
0054AF86  F3 AB                     STOSD.REP ES:EDI
0054AF88  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0054AF8E  85 C9                     TEST ECX,ECX
0054AF90  0F 84 9F 03 00 00         JZ 0x0054b335
0054AF96  A1 84 87 80 00            MOV EAX,[0x00808784]
0054AF9B  85 C0                     TEST EAX,EAX
0054AF9D  0F 85 92 03 00 00         JNZ 0x0054b335
0054AFA3  A1 88 87 80 00            MOV EAX,[0x00808788]
0054AFA8  85 C0                     TEST EAX,EAX
0054AFAA  75 16                     JNZ 0x0054afc2
0054AFAC  A1 8C 87 80 00            MOV EAX,[0x0080878c]
0054AFB1  85 C0                     TEST EAX,EAX
0054AFB3  75 0D                     JNZ 0x0054afc2
0054AFB5  A1 90 87 80 00            MOV EAX,[0x00808790]
0054AFBA  85 C0                     TEST EAX,EAX
0054AFBC  75 04                     JNZ 0x0054afc2
0054AFBE  33 C0                     XOR EAX,EAX
0054AFC0  EB 05                     JMP 0x0054afc7
LAB_0054afc2:
0054AFC2  B8 01 00 00 00            MOV EAX,0x1
LAB_0054afc7:
0054AFC7  85 C0                     TEST EAX,EAX
0054AFC9  0F 85 66 03 00 00         JNZ 0x0054b335
0054AFCF  8B 15 E4 16 80 00         MOV EDX,dword ptr [0x008016e4]
0054AFD5  A1 90 16 80 00            MOV EAX,[0x00801690]
0054AFDA  85 D2                     TEST EDX,EDX
0054AFDC  BE 02 00 00 00            MOV ESI,0x2
0054AFE1  74 09                     JZ 0x0054afec
0054AFE3  66 39 B2 72 01 00 00      CMP word ptr [EDX + 0x172],SI
0054AFEA  75 20                     JNZ 0x0054b00c
LAB_0054afec:
0054AFEC  85 C0                     TEST EAX,EAX
0054AFEE  74 09                     JZ 0x0054aff9
0054AFF0  66 39 B0 72 01 00 00      CMP word ptr [EAX + 0x172],SI
0054AFF7  75 13                     JNZ 0x0054b00c
LAB_0054aff9:
0054AFF9  8B 15 DC 16 80 00         MOV EDX,dword ptr [0x008016dc]
0054AFFF  85 D2                     TEST EDX,EDX
0054B001  74 3B                     JZ 0x0054b03e
0054B003  66 39 B2 72 01 00 00      CMP word ptr [EDX + 0x172],SI
0054B00A  74 32                     JZ 0x0054b03e
LAB_0054b00c:
0054B00C  85 C0                     TEST EAX,EAX
0054B00E  74 21                     JZ 0x0054b031
0054B010  66 39 B0 72 01 00 00      CMP word ptr [EAX + 0x172],SI
0054B017  74 18                     JZ 0x0054b031
LAB_0054b019:
0054B019  8A 80 DB 01 00 00         MOV AL,byte ptr [EAX + 0x1db]
0054B01F  8B 4B 38                  MOV ECX,dword ptr [EBX + 0x38]
0054B022  8B 53 34                  MOV EDX,dword ptr [EBX + 0x34]
0054B025  51                        PUSH ECX
0054B026  66 0F B6 C0               MOVZX AX,AL
0054B02A  52                        PUSH EDX
0054B02B  50                        PUSH EAX
0054B02C  E9 37 03 00 00            JMP 0x0054b368
LAB_0054b031:
0054B031  8B 4B 38                  MOV ECX,dword ptr [EBX + 0x38]
0054B034  8B 53 34                  MOV EDX,dword ptr [EBX + 0x34]
0054B037  51                        PUSH ECX
0054B038  52                        PUSH EDX
0054B039  E9 28 03 00 00            JMP 0x0054b366
LAB_0054b03e:
0054B03E  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
0054B044  8B B3 B6 04 00 00         MOV ESI,dword ptr [EBX + 0x4b6]
0054B04A  8B 93 C5 00 00 00         MOV EDX,dword ptr [EBX + 0xc5]
0054B050  8B BB B2 04 00 00         MOV EDI,dword ptr [EBX + 0x4b2]
0054B056  2B C6                     SUB EAX,ESI
0054B058  2B D7                     SUB EDX,EDI
0054B05A  50                        PUSH EAX
0054B05B  52                        PUSH EDX
0054B05C  E8 E8 AC EB FF            CALL 0x00405d49
0054B061  85 C0                     TEST EAX,EAX
0054B063  89 83 9A 04 00 00         MOV dword ptr [EBX + 0x49a],EAX
0054B069  74 18                     JZ 0x0054b083
0054B06B  8D 4D F8                  LEA ECX,[EBP + -0x8]
0054B06E  8D 55 F2                  LEA EDX,[EBP + -0xe]
0054B071  51                        PUSH ECX
0054B072  8D 4D F0                  LEA ECX,[EBP + -0x10]
0054B075  52                        PUSH EDX
0054B076  51                        PUSH ECX
0054B077  8B C8                     MOV ECX,EAX
0054B079  E8 47 68 EB FF            CALL 0x004018c5
0054B07E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0054B081  EB 5D                     JMP 0x0054b0e0
LAB_0054b083:
0054B083  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
0054B089  8B BB B6 04 00 00         MOV EDI,dword ptr [EBX + 0x4b6]
0054B08F  8B 8B C5 00 00 00         MOV ECX,dword ptr [EBX + 0xc5]
0054B095  8D 55 F4                  LEA EDX,[EBP + -0xc]
0054B098  52                        PUSH EDX
0054B099  8B 93 B2 04 00 00         MOV EDX,dword ptr [EBX + 0x4b2]
0054B09F  6A 00                     PUSH 0x0
0054B0A1  2B C7                     SUB EAX,EDI
0054B0A3  6A 00                     PUSH 0x0
0054B0A5  2B CA                     SUB ECX,EDX
0054B0A7  50                        PUSH EAX
0054B0A8  51                        PUSH ECX
0054B0A9  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0054B0AF  E8 1C 6D 19 00            CALL 0x006e1dd0
0054B0B4  D9 45 F4                  FLD float ptr [EBP + -0xc]
0054B0B7  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0054B0BD  DF E0                     FNSTSW AX
0054B0BF  F6 C4 01                  TEST AH,0x1
0054B0C2  74 08                     JZ 0x0054b0cc
0054B0C4  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
0054B0CA  EB 0F                     JMP 0x0054b0db
LAB_0054b0cc:
0054B0CC  D9 45 F4                  FLD float ptr [EBP + -0xc]
0054B0CF  D8 05 28 AE 79 00         FADD float ptr [0x0079ae28]
0054B0D5  D8 0D 38 05 79 00         FMUL float ptr [0x00790538]
LAB_0054b0db:
0054B0DB  E8 A8 31 1E 00            CALL 0x0072e288
LAB_0054b0e0:
0054B0E0  66 3D 04 00               CMP AX,0x4
0054B0E4  7E 05                     JLE 0x0054b0eb
0054B0E6  B8 04 00 00 00            MOV EAX,0x4
LAB_0054b0eb:
0054B0EB  0F BF D0                  MOVSX EDX,AX
0054B0EE  52                        PUSH EDX
0054B0EF  8B CB                     MOV ECX,EBX
0054B0F1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0054B0F4  E8 7C 80 EB FF            CALL 0x00403175
0054B0F9  8B 8B 9A 04 00 00         MOV ECX,dword ptr [EBX + 0x49a]
0054B0FF  85 C9                     TEST ECX,ECX
0054B101  0F 84 5B 01 00 00         JZ 0x0054b262
0054B107  8B 01                     MOV EAX,dword ptr [ECX]
0054B109  8D 55 D4                  LEA EDX,[EBP + -0x2c]
0054B10C  52                        PUSH EDX
0054B10D  FF 50 68                  CALL dword ptr [EAX + 0x68]
0054B110  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0054B113  8B 8B 9E 04 00 00         MOV ECX,dword ptr [EBX + 0x49e]
0054B119  3B C8                     CMP ECX,EAX
0054B11B  0F 84 D4 00 00 00         JZ 0x0054b1f5
0054B121  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0054B124  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0054B127  89 83 9E 04 00 00         MOV dword ptr [EBX + 0x49e],EAX
0054B12D  A1 18 76 80 00            MOV EAX,[0x00807618]
0054B132  50                        PUSH EAX
0054B133  6A 00                     PUSH 0x0
0054B135  51                        PUSH ECX
0054B136  52                        PUSH EDX
0054B137  E8 48 85 EB FF            CALL 0x00403684
0054B13C  83 C4 0C                  ADD ESP,0xc
0054B13F  50                        PUSH EAX
0054B140  E8 FB 4F 16 00            CALL 0x006b0140
0054B145  8B F8                     MOV EDI,EAX
0054B147  83 C9 FF                  OR ECX,0xffffffff
0054B14A  33 C0                     XOR EAX,EAX
0054B14C  8D 95 2C FF FF FF         LEA EDX,[EBP + 0xffffff2c]
0054B152  F2 AE                     SCASB.REPNE ES:EDI
0054B154  F7 D1                     NOT ECX
0054B156  2B F9                     SUB EDI,ECX
0054B158  6A 0A                     PUSH 0xa
0054B15A  8B C1                     MOV EAX,ECX
0054B15C  8B F7                     MOV ESI,EDI
0054B15E  8B FA                     MOV EDI,EDX
0054B160  C1 E9 02                  SHR ECX,0x2
0054B163  F3 A5                     MOVSD.REP ES:EDI,ESI
0054B165  8B C8                     MOV ECX,EAX
0054B167  83 E1 03                  AND ECX,0x3
0054B16A  F3 A4                     MOVSB.REP ES:EDI,ESI
0054B16C  8D 8D 2C FF FF FF         LEA ECX,[EBP + 0xffffff2c]
0054B172  51                        PUSH ECX
0054B173  E8 E8 33 1E 00            CALL 0x0072e560
0054B178  83 C4 08                  ADD ESP,0x8
0054B17B  85 C0                     TEST EAX,EAX
0054B17D  74 12                     JZ 0x0054b191
LAB_0054b17f:
0054B17F  6A 0A                     PUSH 0xa
0054B181  50                        PUSH EAX
0054B182  C6 00 20                  MOV byte ptr [EAX],0x20
0054B185  E8 D6 33 1E 00            CALL 0x0072e560
0054B18A  83 C4 08                  ADD ESP,0x8
0054B18D  85 C0                     TEST EAX,EAX
0054B18F  75 EE                     JNZ 0x0054b17f
LAB_0054b191:
0054B191  8A 45 DD                  MOV AL,byte ptr [EBP + -0x23]
0054B194  84 C0                     TEST AL,AL
0054B196  74 22                     JZ 0x0054b1ba
0054B198  8D 55 DD                  LEA EDX,[EBP + -0x23]
0054B19B  8D 85 2C FF FF FF         LEA EAX,[EBP + 0xffffff2c]
0054B1A1  52                        PUSH EDX
0054B1A2  50                        PUSH EAX
0054B1A3  8D 8D 2C FF FF FF         LEA ECX,[EBP + 0xffffff2c]
0054B1A9  68 E4 7F 7C 00            PUSH 0x7c7fe4
0054B1AE  51                        PUSH ECX
0054B1AF  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0054B1B5  83 C4 10                  ADD ESP,0x10
0054B1B8  EB 1C                     JMP 0x0054b1d6
LAB_0054b1ba:
0054B1BA  8D 95 2C FF FF FF         LEA EDX,[EBP + 0xffffff2c]
0054B1C0  8D 85 2C FF FF FF         LEA EAX,[EBP + 0xffffff2c]
0054B1C6  52                        PUSH EDX
0054B1C7  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054B1CC  50                        PUSH EAX
0054B1CD  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0054B1D3  83 C4 0C                  ADD ESP,0xc
LAB_0054b1d6:
0054B1D6  8B 0D 94 16 80 00         MOV ECX,dword ptr [0x00801694]
0054B1DC  85 C9                     TEST ECX,ECX
0054B1DE  74 15                     JZ 0x0054b1f5
0054B1E0  68 18 FC FF FF            PUSH 0xfffffc18
0054B1E5  6A 01                     PUSH 0x1
0054B1E7  8D 95 2C FF FF FF         LEA EDX,[EBP + 0xffffff2c]
0054B1ED  6A 00                     PUSH 0x0
0054B1EF  52                        PUSH EDX
0054B1F0  E8 50 6E EB FF            CALL 0x00402045
LAB_0054b1f5:
0054B1F5  8A 83 DE 04 00 00         MOV AL,byte ptr [EBX + 0x4de]
0054B1FB  84 C0                     TEST AL,AL
0054B1FD  0F 84 A6 00 00 00         JZ 0x0054b2a9
0054B203  8B B3 9A 04 00 00         MOV ESI,dword ptr [EBX + 0x49a]
0054B209  8B CE                     MOV ECX,ESI
0054B20B  8B 06                     MOV EAX,dword ptr [ESI]
0054B20D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0054B210  8B F8                     MOV EDI,EAX
0054B212  83 FF 78                  CMP EDI,0x78
0054B215  75 0C                     JNZ 0x0054b223
0054B217  8B 8B 9A 04 00 00         MOV ECX,dword ptr [EBX + 0x49a]
0054B21D  8B B9 59 02 00 00         MOV EDI,dword ptr [ECX + 0x259]
LAB_0054b223:
0054B223  A1 90 16 80 00            MOV EAX,[0x00801690]
0054B228  85 C0                     TEST EAX,EAX
0054B22A  74 27                     JZ 0x0054b253
0054B22C  8B 16                     MOV EDX,dword ptr [ESI]
0054B22E  8B CE                     MOV ECX,ESI
0054B230  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0054B233  8B 0D 90 16 80 00         MOV ECX,dword ptr [0x00801690]
0054B239  50                        PUSH EAX
0054B23A  57                        PUSH EDI
0054B23B  E8 21 9D EB FF            CALL 0x00404f61
0054B240  85 C0                     TEST EAX,EAX
0054B242  74 0F                     JZ 0x0054b253
0054B244  8B 43 38                  MOV EAX,dword ptr [EBX + 0x38]
0054B247  8B 4B 34                  MOV ECX,dword ptr [EBX + 0x34]
0054B24A  50                        PUSH EAX
0054B24B  51                        PUSH ECX
0054B24C  6A 48                     PUSH 0x48
0054B24E  E9 15 01 00 00            JMP 0x0054b368
LAB_0054b253:
0054B253  8B 53 38                  MOV EDX,dword ptr [EBX + 0x38]
0054B256  8B 43 34                  MOV EAX,dword ptr [EBX + 0x34]
0054B259  52                        PUSH EDX
0054B25A  50                        PUSH EAX
0054B25B  6A 47                     PUSH 0x47
0054B25D  E9 06 01 00 00            JMP 0x0054b368
LAB_0054b262:
0054B262  8B 83 9E 04 00 00         MOV EAX,dword ptr [EBX + 0x49e]
0054B268  85 C0                     TEST EAX,EAX
0054B26A  74 24                     JZ 0x0054b290
0054B26C  C7 83 9E 04 00 00 00 00 00 00  MOV dword ptr [EBX + 0x49e],0x0
0054B276  8B 0D 94 16 80 00         MOV ECX,dword ptr [0x00801694]
0054B27C  85 C9                     TEST ECX,ECX
0054B27E  74 10                     JZ 0x0054b290
0054B280  68 18 FC FF FF            PUSH 0xfffffc18
0054B285  6A 01                     PUSH 0x1
0054B287  6A 00                     PUSH 0x0
0054B289  6A 00                     PUSH 0x0
0054B28B  E8 B5 6D EB FF            CALL 0x00402045
LAB_0054b290:
0054B290  8A 83 DE 04 00 00         MOV AL,byte ptr [EBX + 0x4de]
0054B296  84 C0                     TEST AL,AL
0054B298  74 0F                     JZ 0x0054b2a9
0054B29A  8B 4B 38                  MOV ECX,dword ptr [EBX + 0x38]
0054B29D  8B 53 34                  MOV EDX,dword ptr [EBX + 0x34]
0054B2A0  51                        PUSH ECX
0054B2A1  52                        PUSH EDX
0054B2A2  6A 47                     PUSH 0x47
0054B2A4  E9 BF 00 00 00            JMP 0x0054b368
LAB_0054b2a9:
0054B2A9  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
0054B2AF  8B 93 B6 04 00 00         MOV EDX,dword ptr [EBX + 0x4b6]
0054B2B5  8B 8B C5 00 00 00         MOV ECX,dword ptr [EBX + 0xc5]
0054B2BB  2B C2                     SUB EAX,EDX
0054B2BD  8B 93 9A 04 00 00         MOV EDX,dword ptr [EBX + 0x49a]
0054B2C3  50                        PUSH EAX
0054B2C4  8B 83 B2 04 00 00         MOV EAX,dword ptr [EBX + 0x4b2]
0054B2CA  2B C8                     SUB ECX,EAX
0054B2CC  8B 83 A2 04 00 00         MOV EAX,dword ptr [EBX + 0x4a2]
0054B2D2  51                        PUSH ECX
0054B2D3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0054B2D9  52                        PUSH EDX
0054B2DA  50                        PUSH EAX
0054B2DB  E8 20 99 EB FF            CALL 0x00404c00
0054B2E0  66 3D 58 00               CMP AX,0x58
0054B2E4  75 44                     JNZ 0x0054b32a
LAB_0054b2e6:
0054B2E6  8B CB                     MOV ECX,EBX
0054B2E8  E8 0F 8E EB FF            CALL 0x004040fc
0054B2ED  8B 8B C9 00 00 00         MOV ECX,dword ptr [EBX + 0xc9]
0054B2F3  8B B3 B6 04 00 00         MOV ESI,dword ptr [EBX + 0x4b6]
0054B2F9  8B 93 C5 00 00 00         MOV EDX,dword ptr [EBX + 0xc5]
0054B2FF  8B 83 B2 04 00 00         MOV EAX,dword ptr [EBX + 0x4b2]
0054B305  2B CE                     SUB ECX,ESI
0054B307  2B D0                     SUB EDX,EAX
0054B309  8B 83 9A 04 00 00         MOV EAX,dword ptr [EBX + 0x49a]
0054B30F  51                        PUSH ECX
0054B310  8B 8B A2 04 00 00         MOV ECX,dword ptr [EBX + 0x4a2]
0054B316  52                        PUSH EDX
0054B317  50                        PUSH EAX
0054B318  51                        PUSH ECX
0054B319  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0054B31F  E8 DC 98 EB FF            CALL 0x00404c00
0054B324  66 3D 58 00               CMP AX,0x58
0054B328  74 BC                     JZ 0x0054b2e6
LAB_0054b32a:
0054B32A  8B 53 38                  MOV EDX,dword ptr [EBX + 0x38]
0054B32D  8B 4B 34                  MOV ECX,dword ptr [EBX + 0x34]
0054B330  52                        PUSH EDX
0054B331  51                        PUSH ECX
0054B332  50                        PUSH EAX
0054B333  EB 33                     JMP 0x0054b368
LAB_0054b335:
0054B335  A1 90 16 80 00            MOV EAX,[0x00801690]
0054B33A  85 C0                     TEST EAX,EAX
0054B33C  74 20                     JZ 0x0054b35e
0054B33E  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
0054B346  74 16                     JZ 0x0054b35e
0054B348  8B 53 38                  MOV EDX,dword ptr [EBX + 0x38]
0054B34B  8A 80 DB 01 00 00         MOV AL,byte ptr [EAX + 0x1db]
0054B351  8B 4B 34                  MOV ECX,dword ptr [EBX + 0x34]
0054B354  52                        PUSH EDX
0054B355  66 33 D2                  XOR DX,DX
0054B358  51                        PUSH ECX
0054B359  8A D0                     MOV DL,AL
0054B35B  52                        PUSH EDX
0054B35C  EB 0A                     JMP 0x0054b368
LAB_0054b35e:
0054B35E  8B 43 38                  MOV EAX,dword ptr [EBX + 0x38]
0054B361  8B 4B 34                  MOV ECX,dword ptr [EBX + 0x34]
0054B364  50                        PUSH EAX
0054B365  51                        PUSH ECX
LAB_0054b366:
0054B366  6A 00                     PUSH 0x0
CursorClassTy::GCGameState::cf_common_exit_0054B368:
0054B368  8B CB                     MOV ECX,EBX
0054B36A  E8 0F 9D EB FF            CALL 0x0040507e
0054B36F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0054b372:
0054B372  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054B375  85 C0                     TEST EAX,EAX
0054B377  74 1C                     JZ 0x0054b395
0054B379  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0054B37C  85 C0                     TEST EAX,EAX
0054B37E  74 15                     JZ 0x0054b395
0054B380  8B 93 C9 00 00 00         MOV EDX,dword ptr [EBX + 0xc9]
0054B386  8B 83 C5 00 00 00         MOV EAX,dword ptr [EBX + 0xc5]
0054B38C  52                        PUSH EDX
0054B38D  50                        PUSH EAX
0054B38E  8B CB                     MOV ECX,EBX
0054B390  E8 89 70 EB FF            CALL 0x0040241e
LAB_0054b395:
0054B395  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0054B398  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054B39E  5F                        POP EDI
0054B39F  5E                        POP ESI
0054B3A0  5B                        POP EBX
0054B3A1  8B E5                     MOV ESP,EBP
0054B3A3  5D                        POP EBP
0054B3A4  C2 04 00                  RET 0x4
LAB_0054b3a7:
0054B3A7  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0054B3AA  68 C4 7F 7C 00            PUSH 0x7c7fc4
0054B3AF  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054B3B4  56                        PUSH ESI
0054B3B5  6A 00                     PUSH 0x0
0054B3B7  68 FC 06 00 00            PUSH 0x6fc
0054B3BC  68 60 7D 7C 00            PUSH 0x7c7d60
0054B3C1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054B3C7  E8 04 21 16 00            CALL 0x006ad4d0
0054B3CC  83 C4 18                  ADD ESP,0x18
0054B3CF  85 C0                     TEST EAX,EAX
0054B3D1  74 01                     JZ 0x0054b3d4
0054B3D3  CC                        INT3
LAB_0054b3d4:
0054B3D4  68 FE 06 00 00            PUSH 0x6fe
0054B3D9  68 60 7D 7C 00            PUSH 0x7c7d60
0054B3DE  6A 00                     PUSH 0x0
0054B3E0  56                        PUSH ESI
0054B3E1  E8 5A AA 15 00            CALL 0x006a5e40
0054B3E6  5F                        POP EDI
0054B3E7  5E                        POP ESI
0054B3E8  5B                        POP EBX
0054B3E9  8B E5                     MOV ESP,EBP
0054B3EB  5D                        POP EBP
0054B3EC  C2 04 00                  RET 0x4
