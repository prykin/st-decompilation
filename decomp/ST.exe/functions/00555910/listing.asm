TraksClassTy::DrawTrakSprite:
00555910  55                        PUSH EBP
00555911  8B EC                     MOV EBP,ESP
00555913  83 EC 60                  SUB ESP,0x60
00555916  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0055591B  53                        PUSH EBX
0055591C  56                        PUSH ESI
0055591D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00555920  57                        PUSH EDI
00555921  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00555924  8D 4D A0                  LEA ECX,[EBP + -0x60]
00555927  6A 00                     PUSH 0x0
00555929  52                        PUSH EDX
0055592A  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0055592D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00555933  E8 B8 7E 1D 00            CALL 0x0072d7f0
00555938  8B F0                     MOV ESI,EAX
0055593A  83 C4 08                  ADD ESP,0x8
0055593D  85 F6                     TEST ESI,ESI
0055593F  0F 85 13 03 00 00         JNZ 0x00555c58
00555945  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00555948  0F BF 7E 14               MOVSX EDI,word ptr [ESI + 0x14]
0055594C  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0055594F  66 8B 46 22               MOV AX,word ptr [ESI + 0x22]
00555953  03 F9                     ADD EDI,ECX
00555955  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00555958  0F BF D0                  MOVSX EDX,AX
0055595B  8B 59 20                  MOV EBX,dword ptr [ECX + 0x20]
0055595E  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00555961  3B DF                     CMP EBX,EDI
00555963  73 07                     JNC 0x0055596c
00555965  66 83 7E 3A 00            CMP word ptr [ESI + 0x3a],0x0
0055596A  74 1B                     JZ 0x00555987
LAB_0055596c:
0055596C  40                        INC EAX
0055596D  66 3B 46 36               CMP AX,word ptr [ESI + 0x36]
00555971  66 89 46 22               MOV word ptr [ESI + 0x22],AX
00555975  7C 0A                     JL 0x00555981
00555977  66 89 56 22               MOV word ptr [ESI + 0x22],DX
0055597B  66 C7 46 38 01 00         MOV word ptr [ESI + 0x38],0x1
LAB_00555981:
00555981  8B 41 20                  MOV EAX,dword ptr [ECX + 0x20]
00555984  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
LAB_00555987:
00555987  0F BF 56 02               MOVSX EDX,word ptr [ESI + 0x2]
0055598B  0F BF 46 04               MOVSX EAX,word ptr [ESI + 0x4]
0055598F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00555992  66 83 7E 3A 00            CMP word ptr [ESI + 0x3a],0x0
00555997  0F BF 56 1E               MOVSX EDX,word ptr [ESI + 0x1e]
0055599B  0F BF 5E 1C               MOVSX EBX,word ptr [ESI + 0x1c]
0055599F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005559A2  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005559A5  0F BF 46 06               MOVSX EAX,word ptr [ESI + 0x6]
005559A9  0F BF 56 20               MOVSX EDX,word ptr [ESI + 0x20]
005559AD  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005559B0  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
005559B3  0F 85 E5 01 00 00         JNZ 0x00555b9e
005559B9  8B 79 20                  MOV EDI,dword ptr [ECX + 0x20]
005559BC  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
005559BF  2B F8                     SUB EDI,EAX
005559C1  75 05                     JNZ 0x005559c8
005559C3  BF 01 00 00 00            MOV EDI,0x1
LAB_005559c8:
005559C8  0F BF 4E 08               MOVSX ECX,word ptr [ESI + 0x8]
005559CC  0F AF CF                  IMUL ECX,EDI
005559CF  B8 67 66 66 66            MOV EAX,0x66666667
005559D4  F7 E9                     IMUL ECX
005559D6  C1 FA 02                  SAR EDX,0x2
005559D9  8B C2                     MOV EAX,EDX
005559DB  C1 E8 1F                  SHR EAX,0x1f
005559DE  03 D0                     ADD EDX,EAX
005559E0  66 8B 46 0E               MOV AX,word ptr [ESI + 0xe]
005559E4  66 8B CA                  MOV CX,DX
005559E7  66 03 4E 2C               ADD CX,word ptr [ESI + 0x2c]
005559EB  66 85 C0                  TEST AX,AX
005559EE  66 89 4E 02               MOV word ptr [ESI + 0x2],CX
005559F2  74 20                     JZ 0x00555a14
005559F4  0F BF D0                  MOVSX EDX,AX
005559F7  0F AF D7                  IMUL EDX,EDI
005559FA  0F AF D7                  IMUL EDX,EDI
005559FD  B8 67 66 66 66            MOV EAX,0x66666667
00555A02  F7 EA                     IMUL EDX
00555A04  C1 FA 03                  SAR EDX,0x3
00555A07  8B C2                     MOV EAX,EDX
00555A09  C1 E8 1F                  SHR EAX,0x1f
00555A0C  03 D0                     ADD EDX,EAX
00555A0E  03 D1                     ADD EDX,ECX
00555A10  66 89 56 02               MOV word ptr [ESI + 0x2],DX
LAB_00555a14:
00555A14  0F BF 4E 0A               MOVSX ECX,word ptr [ESI + 0xa]
00555A18  0F AF CF                  IMUL ECX,EDI
00555A1B  B8 67 66 66 66            MOV EAX,0x66666667
00555A20  F7 E9                     IMUL ECX
00555A22  C1 FA 02                  SAR EDX,0x2
00555A25  8B CA                     MOV ECX,EDX
00555A27  66 8B 46 10               MOV AX,word ptr [ESI + 0x10]
00555A2B  C1 E9 1F                  SHR ECX,0x1f
00555A2E  03 D1                     ADD EDX,ECX
00555A30  66 8B CA                  MOV CX,DX
00555A33  66 03 4E 2E               ADD CX,word ptr [ESI + 0x2e]
00555A37  66 85 C0                  TEST AX,AX
00555A3A  66 89 4E 04               MOV word ptr [ESI + 0x4],CX
00555A3E  74 20                     JZ 0x00555a60
00555A40  0F BF D0                  MOVSX EDX,AX
00555A43  0F AF D7                  IMUL EDX,EDI
00555A46  0F AF D7                  IMUL EDX,EDI
00555A49  B8 67 66 66 66            MOV EAX,0x66666667
00555A4E  F7 EA                     IMUL EDX
00555A50  C1 FA 03                  SAR EDX,0x3
00555A53  8B C2                     MOV EAX,EDX
00555A55  C1 E8 1F                  SHR EAX,0x1f
00555A58  03 D0                     ADD EDX,EAX
00555A5A  03 D1                     ADD EDX,ECX
00555A5C  66 89 56 04               MOV word ptr [ESI + 0x4],DX
LAB_00555a60:
00555A60  0F BF 4E 0C               MOVSX ECX,word ptr [ESI + 0xc]
00555A64  0F AF CF                  IMUL ECX,EDI
00555A67  B8 67 66 66 66            MOV EAX,0x66666667
00555A6C  F7 E9                     IMUL ECX
00555A6E  C1 FA 02                  SAR EDX,0x2
00555A71  8B CA                     MOV ECX,EDX
00555A73  66 8B 46 12               MOV AX,word ptr [ESI + 0x12]
00555A77  C1 E9 1F                  SHR ECX,0x1f
00555A7A  03 D1                     ADD EDX,ECX
00555A7C  66 8B CA                  MOV CX,DX
00555A7F  66 03 4E 30               ADD CX,word ptr [ESI + 0x30]
00555A83  66 85 C0                  TEST AX,AX
00555A86  66 89 4E 06               MOV word ptr [ESI + 0x6],CX
00555A8A  74 20                     JZ 0x00555aac
00555A8C  0F BF D0                  MOVSX EDX,AX
00555A8F  0F AF D7                  IMUL EDX,EDI
00555A92  0F AF D7                  IMUL EDX,EDI
00555A95  B8 67 66 66 66            MOV EAX,0x66666667
00555A9A  F7 EA                     IMUL EDX
00555A9C  C1 FA 03                  SAR EDX,0x3
00555A9F  8B C2                     MOV EAX,EDX
00555AA1  C1 E8 1F                  SHR EAX,0x1f
00555AA4  03 D0                     ADD EDX,EAX
00555AA6  03 D1                     ADD EDX,ECX
00555AA8  66 89 56 06               MOV word ptr [ESI + 0x6],DX
LAB_00555aac:
00555AAC  66 8B 46 02               MOV AX,word ptr [ESI + 0x2]
00555AB0  66 85 C0                  TEST AX,AX
00555AB3  0F BF C8                  MOVSX ECX,AX
00555AB6  B8 79 19 8C 02            MOV EAX,0x28c1979
00555ABB  7C 10                     JL 0x00555acd
00555ABD  F7 E9                     IMUL ECX
00555ABF  D1 FA                     SAR EDX,0x1
00555AC1  8B CA                     MOV ECX,EDX
00555AC3  C1 E9 1F                  SHR ECX,0x1f
00555AC6  03 D1                     ADD EDX,ECX
00555AC8  0F BF C2                  MOVSX EAX,DX
00555ACB  EB 0F                     JMP 0x00555adc
LAB_00555acd:
00555ACD  F7 E9                     IMUL ECX
00555ACF  D1 FA                     SAR EDX,0x1
00555AD1  8B C2                     MOV EAX,EDX
00555AD3  C1 E8 1F                  SHR EAX,0x1f
00555AD6  03 D0                     ADD EDX,EAX
00555AD8  0F BF C2                  MOVSX EAX,DX
00555ADB  48                        DEC EAX
LAB_00555adc:
00555ADC  66 89 46 1C               MOV word ptr [ESI + 0x1c],AX
00555AE0  66 8B 46 04               MOV AX,word ptr [ESI + 0x4]
00555AE4  66 85 C0                  TEST AX,AX
00555AE7  0F BF C8                  MOVSX ECX,AX
00555AEA  B8 79 19 8C 02            MOV EAX,0x28c1979
00555AEF  7C 10                     JL 0x00555b01
00555AF1  F7 E9                     IMUL ECX
00555AF3  D1 FA                     SAR EDX,0x1
00555AF5  8B CA                     MOV ECX,EDX
00555AF7  C1 E9 1F                  SHR ECX,0x1f
00555AFA  03 D1                     ADD EDX,ECX
00555AFC  0F BF C2                  MOVSX EAX,DX
00555AFF  EB 0F                     JMP 0x00555b10
LAB_00555b01:
00555B01  F7 E9                     IMUL ECX
00555B03  D1 FA                     SAR EDX,0x1
00555B05  8B C2                     MOV EAX,EDX
00555B07  C1 E8 1F                  SHR EAX,0x1f
00555B0A  03 D0                     ADD EDX,EAX
00555B0C  0F BF C2                  MOVSX EAX,DX
00555B0F  48                        DEC EAX
LAB_00555b10:
00555B10  66 89 46 1E               MOV word ptr [ESI + 0x1e],AX
00555B14  66 8B 46 06               MOV AX,word ptr [ESI + 0x6]
00555B18  66 85 C0                  TEST AX,AX
00555B1B  0F BF C8                  MOVSX ECX,AX
00555B1E  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00555B23  7C 11                     JL 0x00555b36
00555B25  F7 E9                     IMUL ECX
00555B27  C1 FA 06                  SAR EDX,0x6
00555B2A  8B CA                     MOV ECX,EDX
00555B2C  C1 E9 1F                  SHR ECX,0x1f
00555B2F  03 D1                     ADD EDX,ECX
00555B31  0F BF C2                  MOVSX EAX,DX
00555B34  EB 10                     JMP 0x00555b46
LAB_00555b36:
00555B36  F7 E9                     IMUL ECX
00555B38  C1 FA 06                  SAR EDX,0x6
00555B3B  8B C2                     MOV EAX,EDX
00555B3D  C1 E8 1F                  SHR EAX,0x1f
00555B40  03 D0                     ADD EDX,EAX
00555B42  0F BF C2                  MOVSX EAX,DX
00555B45  48                        DEC EAX
LAB_00555b46:
00555B46  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00555B49  56                        PUSH ESI
00555B4A  66 89 46 20               MOV word ptr [ESI + 0x20],AX
00555B4E  E8 3A EB EA FF            CALL 0x0040468d
00555B53  85 C0                     TEST EAX,EAX
00555B55  75 47                     JNZ 0x00555b9e
00555B57  66 8B 4D F8               MOV CX,word ptr [EBP + -0x8]
00555B5B  66 8B 55 F4               MOV DX,word ptr [EBP + -0xc]
00555B5F  66 8B 45 EC               MOV AX,word ptr [EBP + -0x14]
00555B63  66 83 7E 08 00            CMP word ptr [ESI + 0x8],0x0
00555B68  66 89 4E 02               MOV word ptr [ESI + 0x2],CX
00555B6C  66 8B 4D F0               MOV CX,word ptr [EBP + -0x10]
00555B70  66 89 56 04               MOV word ptr [ESI + 0x4],DX
00555B74  66 8B 55 E8               MOV DX,word ptr [EBP + -0x18]
00555B78  66 89 5E 1C               MOV word ptr [ESI + 0x1c],BX
00555B7C  66 89 46 1E               MOV word ptr [ESI + 0x1e],AX
00555B80  66 89 4E 06               MOV word ptr [ESI + 0x6],CX
00555B84  66 89 56 20               MOV word ptr [ESI + 0x20],DX
00555B88  75 0E                     JNZ 0x00555b98
00555B8A  66 83 7E 0A 00            CMP word ptr [ESI + 0xa],0x0
00555B8F  75 07                     JNZ 0x00555b98
00555B91  66 83 7E 0C 00            CMP word ptr [ESI + 0xc],0x0
00555B96  74 06                     JZ 0x00555b9e
LAB_00555b98:
00555B98  66 C7 46 3A 01 00         MOV word ptr [ESI + 0x3a],0x1
LAB_00555b9e:
00555B9E  0F BF 46 02               MOVSX EAX,word ptr [ESI + 0x2]
00555BA2  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
00555BA5  75 1F                     JNZ 0x00555bc6
00555BA7  0F BF 4E 04               MOVSX ECX,word ptr [ESI + 0x4]
00555BAB  3B 4D F4                  CMP ECX,dword ptr [EBP + -0xc]
00555BAE  75 16                     JNZ 0x00555bc6
00555BB0  0F BF 56 06               MOVSX EDX,word ptr [ESI + 0x6]
00555BB4  3B 55 F0                  CMP EDX,dword ptr [EBP + -0x10]
00555BB7  75 0D                     JNZ 0x00555bc6
00555BB9  0F BF 46 22               MOVSX EAX,word ptr [ESI + 0x22]
00555BBD  3B 45 E4                  CMP EAX,dword ptr [EBP + -0x1c]
00555BC0  0F 84 80 00 00 00         JZ 0x00555c46
LAB_00555bc6:
00555BC6  66 83 7E 38 00            CMP word ptr [ESI + 0x38],0x0
00555BCB  75 79                     JNZ 0x00555c46
00555BCD  0F BF 4E 22               MOVSX ECX,word ptr [ESI + 0x22]
00555BD1  8B 56 32                  MOV EDX,dword ptr [ESI + 0x32]
00555BD4  51                        PUSH ECX
00555BD5  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00555BDB  6A 00                     PUSH 0x0
00555BDD  52                        PUSH EDX
00555BDE  E8 8D 46 19 00            CALL 0x006ea270
00555BE3  0F BF 46 06               MOVSX EAX,word ptr [ESI + 0x6]
00555BE7  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00555BEA  51                        PUSH ECX
00555BEB  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
00555BEE  0F BF 4E 04               MOVSX ECX,word ptr [ESI + 0x4]
00555BF2  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00555BF8  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00555BFB  8B 46 32                  MOV EAX,dword ptr [ESI + 0x32]
00555BFE  0F BF 56 02               MOVSX EDX,word ptr [ESI + 0x2]
00555C02  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00555C08  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00555C0E  D9 1C 24                  FSTP float ptr [ESP]
00555C11  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
00555C14  51                        PUSH ECX
00555C15  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00555C18  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00555C1E  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00555C24  D9 1C 24                  FSTP float ptr [ESP]
00555C27  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
00555C2A  51                        PUSH ECX
00555C2B  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00555C31  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00555C37  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00555C3D  D9 1C 24                  FSTP float ptr [ESP]
00555C40  50                        PUSH EAX
00555C41  E8 1A 4D 19 00            CALL 0x006ea960
LAB_00555c46:
00555C46  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
00555C49  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00555C4F  5F                        POP EDI
00555C50  5E                        POP ESI
00555C51  5B                        POP EBX
00555C52  8B E5                     MOV ESP,EBP
00555C54  5D                        POP EBP
00555C55  C2 04 00                  RET 0x4
LAB_00555c58:
00555C58  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00555C5B  68 58 91 7C 00            PUSH 0x7c9158
00555C60  68 CC 4C 7A 00            PUSH 0x7a4ccc
00555C65  56                        PUSH ESI
00555C66  6A 00                     PUSH 0x0
00555C68  68 96 00 00 00            PUSH 0x96
00555C6D  68 04 91 7C 00            PUSH 0x7c9104
00555C72  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00555C78  E8 53 78 15 00            CALL 0x006ad4d0
00555C7D  83 C4 18                  ADD ESP,0x18
00555C80  85 C0                     TEST EAX,EAX
00555C82  74 01                     JZ 0x00555c85
00555C84  CC                        INT3
LAB_00555c85:
00555C85  68 97 00 00 00            PUSH 0x97
00555C8A  68 04 91 7C 00            PUSH 0x7c9104
00555C8F  6A 00                     PUSH 0x0
00555C91  56                        PUSH ESI
00555C92  E8 A9 01 15 00            CALL 0x006a5e40
00555C97  5F                        POP EDI
00555C98  5E                        POP ESI
00555C99  5B                        POP EBX
00555C9A  8B E5                     MOV ESP,EBP
00555C9C  5D                        POP EBP
00555C9D  C2 04 00                  RET 0x4
