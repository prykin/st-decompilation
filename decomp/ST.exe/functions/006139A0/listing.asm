FUN_006139a0:
006139A0  55                        PUSH EBP
006139A1  8B EC                     MOV EBP,ESP
006139A3  83 EC 24                  SUB ESP,0x24
006139A6  53                        PUSH EBX
006139A7  56                        PUSH ESI
006139A8  8B F1                     MOV ESI,ECX
006139AA  57                        PUSH EDI
006139AB  33 FF                     XOR EDI,EDI
006139AD  8B 86 56 02 00 00         MOV EAX,dword ptr [ESI + 0x256]
006139B3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006139B6  48                        DEC EAX
006139B7  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006139BA  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006139BD  0F 84 DA 00 00 00         JZ 0x00613a9d
006139C3  48                        DEC EAX
006139C4  0F 85 36 06 00 00         JNZ 0x00614000
006139CA  A1 38 2A 80 00            MOV EAX,[0x00802a38]
006139CF  8B 96 98 02 00 00         MOV EDX,dword ptr [ESI + 0x298]
006139D5  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
006139DB  8B C8                     MOV ECX,EAX
006139DD  89 86 98 02 00 00         MOV dword ptr [ESI + 0x298],EAX
006139E3  2B CA                     SUB ECX,EDX
006139E5  0F AF 8E 88 02 00 00      IMUL ECX,dword ptr [ESI + 0x288]
006139EC  3B CF                     CMP ECX,EDI
006139EE  75 05                     JNZ 0x006139f5
006139F0  B9 01 00 00 00            MOV ECX,0x1
LAB_006139f5:
006139F5  8B 96 7C 02 00 00         MOV EDX,dword ptr [ESI + 0x27c]
006139FB  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00613A00  0F AF D1                  IMUL EDX,ECX
00613A03  F7 EA                     IMUL EDX
00613A05  C1 FA 0C                  SAR EDX,0xc
00613A08  8B C2                     MOV EAX,EDX
00613A0A  C1 E8 1F                  SHR EAX,0x1f
00613A0D  03 D0                     ADD EDX,EAX
00613A0F  0F BF 86 5A 02 00 00      MOVSX EAX,word ptr [ESI + 0x25a]
00613A16  03 D0                     ADD EDX,EAX
00613A18  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00613A1D  8B DA                     MOV EBX,EDX
00613A1F  8B 96 80 02 00 00         MOV EDX,dword ptr [ESI + 0x280]
00613A25  0F AF D1                  IMUL EDX,ECX
00613A28  F7 EA                     IMUL EDX
00613A2A  C1 FA 0C                  SAR EDX,0xc
00613A2D  8B C2                     MOV EAX,EDX
00613A2F  C1 E8 1F                  SHR EAX,0x1f
00613A32  03 D0                     ADD EDX,EAX
00613A34  0F BF 86 5C 02 00 00      MOVSX EAX,word ptr [ESI + 0x25c]
00613A3B  03 D0                     ADD EDX,EAX
00613A3D  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00613A42  8B FA                     MOV EDI,EDX
00613A44  8B 96 84 02 00 00         MOV EDX,dword ptr [ESI + 0x284]
00613A4A  0F AF D1                  IMUL EDX,ECX
00613A4D  F7 EA                     IMUL EDX
00613A4F  0F BF 86 5E 02 00 00      MOVSX EAX,word ptr [ESI + 0x25e]
00613A56  C1 FA 0C                  SAR EDX,0xc
00613A59  8B CA                     MOV ECX,EDX
00613A5B  C1 E9 1F                  SHR ECX,0x1f
00613A5E  03 D1                     ADD EDX,ECX
00613A60  03 D0                     ADD EDX,EAX
00613A62  8B 86 0C 02 00 00         MOV EAX,dword ptr [ESI + 0x20c]
00613A68  83 F8 04                  CMP EAX,0x4
00613A6B  75 11                     JNZ 0x00613a7e
00613A6D  66 8B B6 70 02 00 00      MOV SI,word ptr [ESI + 0x270]
00613A74  66 85 F6                  TEST SI,SI
00613A77  74 05                     JZ 0x00613a7e
00613A79  0F BF CE                  MOVSX ECX,SI
00613A7C  03 D1                     ADD EDX,ECX
LAB_00613a7e:
00613A7E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00613A81  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00613A84  89 18                     MOV dword ptr [EAX],EBX
00613A86  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00613A89  89 39                     MOV dword ptr [ECX],EDI
00613A8B  BF 01 00 00 00            MOV EDI,0x1
00613A90  89 10                     MOV dword ptr [EAX],EDX
00613A92  8B C7                     MOV EAX,EDI
00613A94  5F                        POP EDI
00613A95  5E                        POP ESI
00613A96  5B                        POP EBX
00613A97  8B E5                     MOV ESP,EBP
00613A99  5D                        POP EBP
00613A9A  C2 0C 00                  RET 0xc
LAB_00613a9d:
00613A9D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00613AA3  8B BE 98 02 00 00         MOV EDI,dword ptr [ESI + 0x298]
00613AA9  8B 96 8C 02 00 00         MOV EDX,dword ptr [ESI + 0x28c]
00613AAF  8B 9E DD 02 00 00         MOV EBX,dword ptr [ESI + 0x2dd]
00613AB5  8B 89 E4 00 00 00         MOV ECX,dword ptr [ECX + 0xe4]
00613ABB  8B C1                     MOV EAX,ECX
00613ABD  89 8E 98 02 00 00         MOV dword ptr [ESI + 0x298],ECX
00613AC3  2B C7                     SUB EAX,EDI
00613AC5  8B 8E 90 02 00 00         MOV ECX,dword ptr [ESI + 0x290]
00613ACB  0F AF 86 88 02 00 00      IMUL EAX,dword ptr [ESI + 0x288]
00613AD2  03 D0                     ADD EDX,EAX
00613AD4  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00613AD7  8B C2                     MOV EAX,EDX
00613AD9  89 96 8C 02 00 00         MOV dword ptr [ESI + 0x28c],EDX
00613ADF  8B 96 D9 02 00 00         MOV EDX,dword ptr [ESI + 0x2d9]
00613AE5  8B F8                     MOV EDI,EAX
00613AE7  2B F9                     SUB EDI,ECX
00613AE9  8D 0C D5 00 00 00 00      LEA ECX,[EDX*0x8 + 0x0]
00613AF0  2B CA                     SUB ECX,EDX
00613AF2  8D 0C 8B                  LEA ECX,[EBX + ECX*0x4]
00613AF5  8B 59 08                  MOV EBX,dword ptr [ECX + 0x8]
00613AF8  3B FB                     CMP EDI,EBX
00613AFA  0F 8E EC 02 00 00         JLE 0x00613dec
00613B00  2B FB                     SUB EDI,EBX
00613B02  2B C7                     SUB EAX,EDI
00613B04  42                        INC EDX
00613B05  89 86 90 02 00 00         MOV dword ptr [ESI + 0x290],EAX
00613B0B  8B 86 D5 02 00 00         MOV EAX,dword ptr [ESI + 0x2d5]
00613B11  83 F8 02                  CMP EAX,0x2
00613B14  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00613B17  89 96 D9 02 00 00         MOV dword ptr [ESI + 0x2d9],EDX
00613B1D  0F 8E E2 00 00 00         JLE 0x00613c05
00613B23  83 C0 FD                  ADD EAX,-0x3
00613B26  3B D0                     CMP EDX,EAX
00613B28  0F 8C D7 00 00 00         JL 0x00613c05
00613B2E  8A 86 EA 02 00 00         MOV AL,byte ptr [ESI + 0x2ea]
00613B34  84 C0                     TEST AL,AL
00613B36  0F 85 7C 01 00 00         JNZ 0x00613cb8
00613B3C  8B 86 D1 02 00 00         MOV EAX,dword ptr [ESI + 0x2d1]
00613B42  85 C0                     TEST EAX,EAX
00613B44  0F 84 BB 00 00 00         JZ 0x00613c05
00613B4A  66 8B 86 5E 02 00 00      MOV AX,word ptr [ESI + 0x25e]
00613B51  66 85 C0                  TEST AX,AX
00613B54  0F BF C8                  MOVSX ECX,AX
00613B57  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00613B5C  7C 11                     JL 0x00613b6f
00613B5E  F7 E9                     IMUL ECX
00613B60  C1 FA 06                  SAR EDX,0x6
00613B63  8B C2                     MOV EAX,EDX
00613B65  C1 E8 1F                  SHR EAX,0x1f
00613B68  03 D0                     ADD EDX,EAX
00613B6A  0F BF DA                  MOVSX EBX,DX
00613B6D  EB 10                     JMP 0x00613b7f
LAB_00613b6f:
00613B6F  F7 E9                     IMUL ECX
00613B71  C1 FA 06                  SAR EDX,0x6
00613B74  8B CA                     MOV ECX,EDX
00613B76  C1 E9 1F                  SHR ECX,0x1f
00613B79  03 D1                     ADD EDX,ECX
00613B7B  0F BF DA                  MOVSX EBX,DX
00613B7E  4B                        DEC EBX
LAB_00613b7f:
00613B7F  66 8B 86 5C 02 00 00      MOV AX,word ptr [ESI + 0x25c]
00613B86  66 85 C0                  TEST AX,AX
00613B89  0F BF C8                  MOVSX ECX,AX
00613B8C  B8 79 19 8C 02            MOV EAX,0x28c1979
00613B91  7C 10                     JL 0x00613ba3
00613B93  F7 E9                     IMUL ECX
00613B95  D1 FA                     SAR EDX,0x1
00613B97  8B C2                     MOV EAX,EDX
00613B99  C1 E8 1F                  SHR EAX,0x1f
00613B9C  03 D0                     ADD EDX,EAX
00613B9E  0F BF CA                  MOVSX ECX,DX
00613BA1  EB 0F                     JMP 0x00613bb2
LAB_00613ba3:
00613BA3  F7 E9                     IMUL ECX
00613BA5  D1 FA                     SAR EDX,0x1
00613BA7  8B CA                     MOV ECX,EDX
00613BA9  C1 E9 1F                  SHR ECX,0x1f
00613BAC  03 D1                     ADD EDX,ECX
00613BAE  0F BF CA                  MOVSX ECX,DX
00613BB1  49                        DEC ECX
LAB_00613bb2:
00613BB2  66 8B 86 5A 02 00 00      MOV AX,word ptr [ESI + 0x25a]
00613BB9  66 85 C0                  TEST AX,AX
00613BBC  0F BF D0                  MOVSX EDX,AX
00613BBF  B8 79 19 8C 02            MOV EAX,0x28c1979
00613BC4  7C 10                     JL 0x00613bd6
00613BC6  F7 EA                     IMUL EDX
00613BC8  D1 FA                     SAR EDX,0x1
00613BCA  8B C2                     MOV EAX,EDX
00613BCC  C1 E8 1F                  SHR EAX,0x1f
00613BCF  03 D0                     ADD EDX,EAX
00613BD1  0F BF C2                  MOVSX EAX,DX
00613BD4  EB 0F                     JMP 0x00613be5
LAB_00613bd6:
00613BD6  F7 EA                     IMUL EDX
00613BD8  D1 FA                     SAR EDX,0x1
00613BDA  8B C2                     MOV EAX,EDX
00613BDC  C1 E8 1F                  SHR EAX,0x1f
00613BDF  03 D0                     ADD EDX,EAX
00613BE1  0F BF C2                  MOVSX EAX,DX
00613BE4  48                        DEC EAX
LAB_00613be5:
00613BE5  53                        PUSH EBX
00613BE6  51                        PUSH ECX
00613BE7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00613BEA  50                        PUSH EAX
00613BEB  51                        PUSH ECX
00613BEC  8B CE                     MOV ECX,ESI
00613BEE  E8 BA FE DE FF            CALL 0x00403aad
00613BF3  85 C0                     TEST EAX,EAX
00613BF5  74 0E                     JZ 0x00613c05
00613BF7  8A 86 EA 02 00 00         MOV AL,byte ptr [ESI + 0x2ea]
00613BFD  84 C0                     TEST AL,AL
00613BFF  0F 84 F8 03 00 00         JZ 0x00613ffd
LAB_00613c05:
00613C05  8B 8E D5 02 00 00         MOV ECX,dword ptr [ESI + 0x2d5]
00613C0B  8B 86 D9 02 00 00         MOV EAX,dword ptr [ESI + 0x2d9]
00613C11  49                        DEC ECX
00613C12  3B C1                     CMP EAX,ECX
00613C14  0F 8C 57 01 00 00         JL 0x00613d71
00613C1A  C7 86 0C 02 00 00 04 00 00 00  MOV dword ptr [ESI + 0x20c],0x4
00613C24  66 C7 86 70 02 00 00 FF FF  MOV word ptr [ESI + 0x270],0xffff
00613C2D  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00613C30  B9 0B 00 00 00            MOV ECX,0xb
00613C35  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00613C3B  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00613C41  33 D2                     XOR EDX,EDX
00613C43  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00613C46  C1 E8 10                  SHR EAX,0x10
00613C49  F7 F1                     DIV ECX
00613C4B  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00613C50  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00613C56  8D 54 0A 0A               LEA EDX,[EDX + ECX*0x1 + 0xa]
00613C5A  89 96 94 02 00 00         MOV dword ptr [ESI + 0x294],EDX
00613C60  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00613C65  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00613C68  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00613C6E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00613C71  89 8E 98 02 00 00         MOV dword ptr [ESI + 0x298],ECX
00613C77  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00613C7A  52                        PUSH EDX
00613C7B  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00613C7E  50                        PUSH EAX
00613C7F  51                        PUSH ECX
00613C80  C7 86 56 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x256],0x2
00613C8A  52                        PUSH EDX
LAB_00613c8b:
00613C8B  8B CE                     MOV ECX,ESI
00613C8D  E8 42 EB DE FF            CALL 0x004027d4
00613C92  8B F8                     MOV EDI,EAX
00613C94  85 FF                     TEST EDI,EDI
00613C96  0F 8F 64 03 00 00         JG 0x00614000
00613C9C  8B CE                     MOV ECX,ESI
00613C9E  E8 9A 09 DF FF            CALL 0x0040463d
00613CA3  8B C7                     MOV EAX,EDI
00613CA5  C7 86 0C 02 00 00 09 00 00 00  MOV dword ptr [ESI + 0x20c],0x9
00613CAF  5F                        POP EDI
00613CB0  5E                        POP ESI
00613CB1  5B                        POP EBX
00613CB2  8B E5                     MOV ESP,EBP
00613CB4  5D                        POP EBP
00613CB5  C2 0C 00                  RET 0xc
LAB_00613cb8:
00613CB8  8D 55 E8                  LEA EDX,[EBP + -0x18]
00613CBB  8D 45 E4                  LEA EAX,[EBP + -0x1c]
00613CBE  52                        PUSH EDX
00613CBF  8D 4D E0                  LEA ECX,[EBP + -0x20]
00613CC2  50                        PUSH EAX
00613CC3  51                        PUSH ECX
00613CC4  8B CE                     MOV ECX,ESI
00613CC6  E8 23 E0 DE FF            CALL 0x00401cee
00613CCB  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00613CCE  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00613CD1  85 C0                     TEST EAX,EAX
00613CD3  7C 2D                     JL 0x00613d02
00613CD5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00613CD8  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00613CDB  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00613CDE  57                        PUSH EDI
00613CDF  53                        PUSH EBX
00613CE0  52                        PUSH EDX
00613CE1  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00613CE4  50                        PUSH EAX
00613CE5  51                        PUSH ECX
00613CE6  52                        PUSH EDX
00613CE7  8B CE                     MOV ECX,ESI
00613CE9  E8 12 0A DF FF            CALL 0x00404700
00613CEE  85 C0                     TEST EAX,EAX
00613CF0  74 10                     JZ 0x00613d02
00613CF2  BF 01 00 00 00            MOV EDI,0x1
00613CF7  8B C7                     MOV EAX,EDI
00613CF9  5F                        POP EDI
00613CFA  5E                        POP ESI
00613CFB  5B                        POP EBX
00613CFC  8B E5                     MOV ESP,EBP
00613CFE  5D                        POP EBP
00613CFF  C2 0C 00                  RET 0xc
LAB_00613d02:
00613D02  C7 86 56 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x256],0x2
00613D0C  C7 86 0C 02 00 00 04 00 00 00  MOV dword ptr [ESI + 0x20c],0x4
00613D16  66 C7 86 70 02 00 00 FF FF  MOV word ptr [ESI + 0x270],0xffff
00613D1F  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00613D22  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00613D28  05 39 30 00 00            ADD EAX,0x3039
00613D2D  33 D2                     XOR EDX,EDX
00613D2F  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00613D32  B9 0B 00 00 00            MOV ECX,0xb
00613D37  C1 E8 10                  SHR EAX,0x10
00613D3A  F7 F1                     DIV ECX
00613D3C  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00613D41  57                        PUSH EDI
00613D42  53                        PUSH EBX
00613D43  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00613D49  8D 54 0A 0A               LEA EDX,[EDX + ECX*0x1 + 0xa]
00613D4D  89 96 94 02 00 00         MOV dword ptr [ESI + 0x294],EDX
00613D53  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00613D58  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00613D5B  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00613D61  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00613D64  52                        PUSH EDX
00613D65  89 8E 98 02 00 00         MOV dword ptr [ESI + 0x298],ECX
00613D6B  50                        PUSH EAX
00613D6C  E9 1A FF FF FF            JMP 0x00613c8b
LAB_00613d71:
00613D71  8B 96 DD 02 00 00         MOV EDX,dword ptr [ESI + 0x2dd]
00613D77  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00613D7E  2B C8                     SUB ECX,EAX
00613D80  8B 44 8A 18               MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
00613D84  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
00613D87  83 F8 08                  CMP EAX,0x8
00613D8A  74 60                     JZ 0x00613dec
00613D8C  0F BF 59 06               MOVSX EBX,word ptr [ECX + 0x6]
00613D90  0F BF 04 DD 70 D5 7E 00   MOVSX EAX,word ptr [EBX*0x8 + 0x7ed570]
00613D98  69 C0 80 96 98 00         IMUL EAX,EAX,0x989680
00613D9E  99                        CDQ
00613D9F  F7 3C 9D 74 FE 7C 00      IDIV dword ptr [EBX*0x4 + 0x7cfe74]
00613DA6  89 86 7C 02 00 00         MOV dword ptr [ESI + 0x27c],EAX
00613DAC  0F BF 59 06               MOVSX EBX,word ptr [ECX + 0x6]
00613DB0  0F BF 04 DD 72 D5 7E 00   MOVSX EAX,word ptr [EBX*0x8 + 0x7ed572]
00613DB8  69 C0 80 96 98 00         IMUL EAX,EAX,0x989680
00613DBE  99                        CDQ
00613DBF  F7 3C 9D 74 FE 7C 00      IDIV dword ptr [EBX*0x4 + 0x7cfe74]
00613DC6  89 86 80 02 00 00         MOV dword ptr [ESI + 0x280],EAX
00613DCC  0F BF 59 06               MOVSX EBX,word ptr [ECX + 0x6]
00613DD0  0F BF 04 DD 74 D5 7E 00   MOVSX EAX,word ptr [EBX*0x8 + 0x7ed574]
00613DD8  69 C0 80 96 98 00         IMUL EAX,EAX,0x989680
00613DDE  99                        CDQ
00613DDF  F7 3C 9D 74 FE 7C 00      IDIV dword ptr [EBX*0x4 + 0x7cfe74]
00613DE6  89 86 84 02 00 00         MOV dword ptr [ESI + 0x284],EAX
LAB_00613dec:
00613DEC  8B 59 18                  MOV EBX,dword ptr [ECX + 0x18]
00613DEF  85 DB                     TEST EBX,EBX
00613DF1  74 5A                     JZ 0x00613e4d
00613DF3  83 FB 08                  CMP EBX,0x8
00613DF6  75 0F                     JNZ 0x00613e07
00613DF8  8B 86 E1 02 00 00         MOV EAX,dword ptr [ESI + 0x2e1]
00613DFE  0F AF C7                  IMUL EAX,EDI
00613E01  99                        CDQ
00613E02  F7 79 08                  IDIV dword ptr [ECX + 0x8]
00613E05  EB 2A                     JMP 0x00613e31
LAB_00613e07:
00613E07  0F BF 41 06               MOVSX EAX,word ptr [ECX + 0x6]
00613E0B  8B 04 85 74 FE 7C 00      MOV EAX,dword ptr [EAX*0x4 + 0x7cfe74]
00613E12  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00613E15  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00613E18  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
00613E1B  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
00613E1E  C1 E0 06                  SHL EAX,0x6
00613E21  2B C7                     SUB EAX,EDI
00613E23  C1 E0 02                  SHL EAX,0x2
00613E26  2B C7                     SUB EAX,EDI
00613E28  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00613E2B  C1 E0 03                  SHL EAX,0x3
00613E2E  99                        CDQ
00613E2F  F7 F9                     IDIV ECX
LAB_00613e31:
00613E31  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00613E34  8D 55 F4                  LEA EDX,[EBP + -0xc]
00613E37  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00613E3A  8D 45 DC                  LEA EAX,[EBP + -0x24]
00613E3D  52                        PUSH EDX
00613E3E  50                        PUSH EAX
00613E3F  53                        PUSH EBX
00613E40  51                        PUSH ECX
00613E41  8B CE                     MOV ECX,ESI
00613E43  E8 47 DE DE FF            CALL 0x00401c8f
00613E48  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00613E4B  EB 2D                     JMP 0x00613e7a
LAB_00613e4d:
00613E4D  0F BF 51 06               MOVSX EDX,word ptr [ECX + 0x6]
00613E51  8B 04 95 74 FE 7C 00      MOV EAX,dword ptr [EDX*0x4 + 0x7cfe74]
00613E58  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00613E5B  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00613E5E  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
00613E61  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
00613E64  C1 E0 06                  SHL EAX,0x6
00613E67  2B C7                     SUB EAX,EDI
00613E69  C1 E0 02                  SHL EAX,0x2
00613E6C  2B C7                     SUB EAX,EDI
00613E6E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00613E71  C1 E0 03                  SHL EAX,0x3
00613E74  99                        CDQ
00613E75  F7 F9                     IDIV ECX
00613E77  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_00613e7a:
00613E7A  8B 9E D9 02 00 00         MOV EBX,dword ptr [ESI + 0x2d9]
00613E80  8B 86 DD 02 00 00         MOV EAX,dword ptr [ESI + 0x2dd]
00613E86  8D 14 DD 00 00 00 00      LEA EDX,[EBX*0x8 + 0x0]
00613E8D  2B D3                     SUB EDX,EBX
00613E8F  8D 0C 90                  LEA ECX,[EAX + EDX*0x4]
00613E92  8B 96 7C 02 00 00         MOV EDX,dword ptr [ESI + 0x27c]
00613E98  0F AF D7                  IMUL EDX,EDI
00613E9B  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00613EA0  F7 EA                     IMUL EDX
00613EA2  C1 FA 0C                  SAR EDX,0xc
00613EA5  8B C2                     MOV EAX,EDX
00613EA7  C1 E8 1F                  SHR EAX,0x1f
00613EAA  03 D0                     ADD EDX,EAX
00613EAC  0F BF 01                  MOVSX EAX,word ptr [ECX]
00613EAF  03 D0                     ADD EDX,EAX
00613EB1  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00613EB6  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00613EB9  8B 96 80 02 00 00         MOV EDX,dword ptr [ESI + 0x280]
00613EBF  0F AF D7                  IMUL EDX,EDI
00613EC2  F7 EA                     IMUL EDX
00613EC4  C1 FA 0C                  SAR EDX,0xc
00613EC7  8B C2                     MOV EAX,EDX
00613EC9  C1 E8 1F                  SHR EAX,0x1f
00613ECC  03 D0                     ADD EDX,EAX
00613ECE  0F BF 41 02               MOVSX EAX,word ptr [ECX + 0x2]
00613ED2  03 D0                     ADD EDX,EAX
00613ED4  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00613ED9  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00613EDC  8B 96 84 02 00 00         MOV EDX,dword ptr [ESI + 0x284]
00613EE2  0F AF D7                  IMUL EDX,EDI
00613EE5  F7 EA                     IMUL EDX
00613EE7  C1 FA 0C                  SAR EDX,0xc
00613EEA  8B C2                     MOV EAX,EDX
00613EEC  C1 E8 1F                  SHR EAX,0x1f
00613EEF  03 D0                     ADD EDX,EAX
00613EF1  0F BF 41 04               MOVSX EAX,word ptr [ECX + 0x4]
00613EF5  03 D0                     ADD EDX,EAX
00613EF7  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00613EFA  85 C0                     TEST EAX,EAX
00613EFC  8B FA                     MOV EDI,EDX
00613EFE  74 5A                     JZ 0x00613f5a
00613F00  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00613F03  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00613F08  0F AF 55 F4               IMUL EDX,dword ptr [EBP + -0xc]
00613F0C  F7 EA                     IMUL EDX
00613F0E  C1 FA 0C                  SAR EDX,0xc
00613F11  8B C2                     MOV EAX,EDX
00613F13  C1 E8 1F                  SHR EAX,0x1f
00613F16  03 D0                     ADD EDX,EAX
00613F18  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00613F1B  03 C2                     ADD EAX,EDX
00613F1D  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
00613F20  0F AF 55 F4               IMUL EDX,dword ptr [EBP + -0xc]
00613F24  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00613F27  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00613F2C  F7 EA                     IMUL EDX
00613F2E  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
00613F31  0F AF 4D F4               IMUL ECX,dword ptr [EBP + -0xc]
00613F35  C1 FA 0C                  SAR EDX,0xc
00613F38  8B C2                     MOV EAX,EDX
00613F3A  C1 E8 1F                  SHR EAX,0x1f
00613F3D  03 D0                     ADD EDX,EAX
00613F3F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00613F42  03 C2                     ADD EAX,EDX
00613F44  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00613F47  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00613F4C  F7 E9                     IMUL ECX
00613F4E  C1 FA 0C                  SAR EDX,0xc
00613F51  8B CA                     MOV ECX,EDX
00613F53  C1 E9 1F                  SHR ECX,0x1f
00613F56  03 D1                     ADD EDX,ECX
00613F58  03 FA                     ADD EDI,EDX
LAB_00613f5a:
00613F5A  85 DB                     TEST EBX,EBX
00613F5C  75 7A                     JNZ 0x00613fd8
00613F5E  8B 86 78 02 00 00         MOV EAX,dword ptr [ESI + 0x278]
00613F64  85 C0                     TEST EAX,EAX
00613F66  74 70                     JZ 0x00613fd8
00613F68  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00613F6B  85 DB                     TEST EBX,EBX
00613F6D  74 69                     JZ 0x00613fd8
00613F6F  0F BF 8E 6C 02 00 00      MOVSX ECX,word ptr [ESI + 0x26c]
00613F76  0F AF CB                  IMUL ECX,EBX
00613F79  B8 A1 A0 A0 A0            MOV EAX,0xa0a0a0a1
00613F7E  F7 E9                     IMUL ECX
00613F80  03 D1                     ADD EDX,ECX
00613F82  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00613F85  C1 FA 05                  SAR EDX,0x5
00613F88  8B C2                     MOV EAX,EDX
00613F8A  C1 E8 1F                  SHR EAX,0x1f
00613F8D  03 D0                     ADD EDX,EAX
00613F8F  B8 A1 A0 A0 A0            MOV EAX,0xa0a0a0a1
00613F94  03 CA                     ADD ECX,EDX
00613F96  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00613F99  0F BF 8E 6E 02 00 00      MOVSX ECX,word ptr [ESI + 0x26e]
00613FA0  0F AF CB                  IMUL ECX,EBX
00613FA3  F7 E9                     IMUL ECX
00613FA5  03 D1                     ADD EDX,ECX
00613FA7  B8 A1 A0 A0 A0            MOV EAX,0xa0a0a0a1
00613FAC  C1 FA 05                  SAR EDX,0x5
00613FAF  8B CA                     MOV ECX,EDX
00613FB1  C1 E9 1F                  SHR ECX,0x1f
00613FB4  03 D1                     ADD EDX,ECX
00613FB6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00613FB9  03 CA                     ADD ECX,EDX
00613FBB  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00613FBE  0F BF 8E 70 02 00 00      MOVSX ECX,word ptr [ESI + 0x270]
00613FC5  0F AF CB                  IMUL ECX,EBX
00613FC8  F7 E9                     IMUL ECX
00613FCA  03 D1                     ADD EDX,ECX
00613FCC  C1 FA 05                  SAR EDX,0x5
00613FCF  8B C2                     MOV EAX,EDX
00613FD1  C1 E8 1F                  SHR EAX,0x1f
00613FD4  03 D0                     ADD EDX,EAX
00613FD6  03 FA                     ADD EDI,EDX
LAB_00613fd8:
00613FD8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00613FDB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00613FDE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00613FE1  89 11                     MOV dword ptr [ECX],EDX
00613FE3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00613FE6  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00613FE9  89 08                     MOV dword ptr [EAX],ECX
00613FEB  89 3A                     MOV dword ptr [EDX],EDI
00613FED  BF 01 00 00 00            MOV EDI,0x1
00613FF2  8B C7                     MOV EAX,EDI
00613FF4  5F                        POP EDI
00613FF5  5E                        POP ESI
00613FF6  5B                        POP EBX
00613FF7  8B E5                     MOV ESP,EBP
00613FF9  5D                        POP EBP
00613FFA  C2 0C 00                  RET 0xc
LAB_00613ffd:
00613FFD  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_00614000:
00614000  8B C7                     MOV EAX,EDI
00614002  5F                        POP EDI
00614003  5E                        POP ESI
00614004  5B                        POP EBX
00614005  8B E5                     MOV ESP,EBP
00614007  5D                        POP EBP
00614008  C2 0C 00                  RET 0xc
