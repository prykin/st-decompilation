FUN_00616a80:
00616A80  55                        PUSH EBP
00616A81  8B EC                     MOV EBP,ESP
00616A83  83 EC 48                  SUB ESP,0x48
00616A86  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00616A89  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00616A8C  53                        PUSH EBX
00616A8D  56                        PUSH ESI
00616A8E  8B F1                     MOV ESI,ECX
00616A90  57                        PUSH EDI
00616A91  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00616A94  50                        PUSH EAX
00616A95  51                        PUSH ECX
00616A96  52                        PUSH EDX
00616A97  8B CE                     MOV ECX,ESI
00616A99  E8 E0 E0 DE FF            CALL 0x00404b7e
00616A9E  D9 55 FC                  FST float ptr [EBP + -0x4]
00616AA1  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00616AA7  DF E0                     FNSTSW AX
00616AA9  F6 C4 40                  TEST AH,0x40
00616AAC  0F 85 EF 02 00 00         JNZ 0x00616da1
00616AB2  8B 86 7C 02 00 00         MOV EAX,dword ptr [ESI + 0x27c]
00616AB8  66 8B BE 5A 02 00 00      MOV DI,word ptr [ESI + 0x25a]
00616ABF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00616AC2  C7 86 C1 02 00 00 72 01 00 00  MOV dword ptr [ESI + 0x2c1],0x172
00616ACC  DB 45 F8                  FILD dword ptr [EBP + -0x8]
00616ACF  0F BF CF                  MOVSX ECX,DI
00616AD2  D9 C0                     FLD ST0
00616AD4  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00616AD7  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00616ADA  D8 0D A8 CE 79 00         FMUL float ptr [0x0079cea8]
00616AE0  DA 45 E8                  FIADD dword ptr [EBP + -0x18]
00616AE3  E8 A0 77 11 00            CALL 0x0072e288
00616AE8  8B 96 80 02 00 00         MOV EDX,dword ptr [ESI + 0x280]
00616AEE  66 8B 9E 5C 02 00 00      MOV BX,word ptr [ESI + 0x25c]
00616AF5  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00616AF8  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00616AFB  DB 45 F4                  FILD dword ptr [EBP + -0xc]
00616AFE  0F BF C3                  MOVSX EAX,BX
00616B01  D9 5D EC                  FSTP float ptr [EBP + -0x14]
00616B04  D9 45 EC                  FLD float ptr [EBP + -0x14]
00616B07  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00616B0A  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00616B0D  D8 0D A8 CE 79 00         FMUL float ptr [0x0079cea8]
00616B13  DA 45 E8                  FIADD dword ptr [EBP + -0x18]
00616B16  E8 6D 77 11 00            CALL 0x0072e288
00616B1B  8B 8E 84 02 00 00         MOV ECX,dword ptr [ESI + 0x284]
00616B21  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00616B24  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00616B27  66 8B 86 5E 02 00 00      MOV AX,word ptr [ESI + 0x25e]
00616B2E  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00616B31  0F BF D0                  MOVSX EDX,AX
00616B34  D9 5D E8                  FSTP float ptr [EBP + -0x18]
00616B37  D9 45 E8                  FLD float ptr [EBP + -0x18]
00616B3A  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00616B3D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00616B40  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00616B43  D8 0D A8 CE 79 00         FMUL float ptr [0x0079cea8]
00616B49  DA 45 FC                  FIADD dword ptr [EBP + -0x4]
00616B4C  E8 37 77 11 00            CALL 0x0072e288
00616B51  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00616B54  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00616B57  2B C8                     SUB ECX,EAX
00616B59  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00616B5C  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00616B5F  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00616B62  2B C1                     SUB EAX,ECX
00616B64  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00616B67  2B CA                     SUB ECX,EDX
00616B69  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00616B6C  8B D1                     MOV EDX,ECX
00616B6E  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00616B71  0F AF D1                  IMUL EDX,ECX
00616B74  8B C8                     MOV ECX,EAX
00616B76  0F AF C8                  IMUL ECX,EAX
00616B79  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00616B7C  03 D1                     ADD EDX,ECX
00616B7E  8B C8                     MOV ECX,EAX
00616B80  0F AF C8                  IMUL ECX,EAX
00616B83  03 D1                     ADD EDX,ECX
00616B85  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00616B88  DB 45 0C                  FILD dword ptr [EBP + 0xc]
00616B8B  D9 FA                     FSQRT
00616B8D  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
00616B93  DF E0                     FNSTSW AX
00616B95  F6 C4 40                  TEST AH,0x40
00616B98  0F 85 AB 02 00 00         JNZ 0x00616e49
00616B9E  DB 45 08                  FILD dword ptr [EBP + 0x8]
00616BA1  8B 8E 88 02 00 00         MOV ECX,dword ptr [ESI + 0x288]
00616BA7  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00616BAC  8B D1                     MOV EDX,ECX
00616BAE  D8 F1                     FDIV ST0,ST1
00616BB0  0F AF 55 F8               IMUL EDX,dword ptr [EBP + -0x8]
00616BB4  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
00616BB7  F7 EA                     IMUL EDX
00616BB9  D8 F2                     FDIV ST0,ST2
00616BBB  C1 FA 0C                  SAR EDX,0xc
00616BBE  8B C2                     MOV EAX,EDX
00616BC0  C1 E8 1F                  SHR EAX,0x1f
00616BC3  03 D0                     ADD EDX,EAX
00616BC5  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00616BCA  D9 5D BC                  FSTP float ptr [EBP + -0x44]
00616BCD  DB 45 10                  FILD dword ptr [EBP + 0x10]
00616BD0  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
00616BD3  8B D1                     MOV EDX,ECX
00616BD5  0F AF 55 F4               IMUL EDX,dword ptr [EBP + -0xc]
00616BD9  0F AF 4D F0               IMUL ECX,dword ptr [EBP + -0x10]
00616BDD  D8 F2                     FDIV ST0,ST2
00616BDF  F7 EA                     IMUL EDX
00616BE1  D9 5D C0                  FSTP float ptr [EBP + -0x40]
00616BE4  D9 C0                     FLD ST0
00616BE6  D8 0D AC CE 79 00         FMUL float ptr [0x0079ceac]
00616BEC  C1 FA 0C                  SAR EDX,0xc
00616BEF  8B C2                     MOV EAX,EDX
00616BF1  C1 E8 1F                  SHR EAX,0x1f
00616BF4  03 D0                     ADD EDX,EAX
00616BF6  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00616BFB  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00616BFE  F7 E9                     IMUL ECX
00616C00  C1 FA 0C                  SAR EDX,0xc
00616C03  8B CA                     MOV ECX,EDX
00616C05  C1 E9 1F                  SHR ECX,0x1f
00616C08  03 D1                     ADD EDX,ECX
00616C0A  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00616C0D  E8 76 76 11 00            CALL 0x0072e288
00616C12  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00616C15  D9 45 BC                  FLD float ptr [EBP + -0x44]
00616C18  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
00616C1B  D8 0D AC CE 79 00         FMUL float ptr [0x0079ceac]
00616C21  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00616C24  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00616C29  D1 E1                     SHL ECX,0x1
00616C2B  F7 E9                     IMUL ECX
00616C2D  C1 FA 0C                  SAR EDX,0xc
00616C30  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00616C33  8B C2                     MOV EAX,EDX
00616C35  C1 E8 1F                  SHR EAX,0x1f
00616C38  03 D0                     ADD EDX,EAX
00616C3A  2B FA                     SUB EDI,EDX
00616C3C  03 F9                     ADD EDI,ECX
00616C3E  66 89 BE 72 02 00 00      MOV word ptr [ESI + 0x272],DI
00616C45  E8 3E 76 11 00            CALL 0x0072e288
00616C4A  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00616C4D  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00616C50  D9 45 C0                  FLD float ptr [EBP + -0x40]
00616C53  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
00616C56  D8 0D AC CE 79 00         FMUL float ptr [0x0079ceac]
00616C5C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00616C5F  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00616C64  D1 E1                     SHL ECX,0x1
00616C66  F7 E9                     IMUL ECX
00616C68  C1 FA 0C                  SAR EDX,0xc
00616C6B  8B C2                     MOV EAX,EDX
00616C6D  C1 E8 1F                  SHR EAX,0x1f
00616C70  03 D0                     ADD EDX,EAX
00616C72  2B DA                     SUB EBX,EDX
00616C74  03 DF                     ADD EBX,EDI
00616C76  66 89 9E 74 02 00 00      MOV word ptr [ESI + 0x274],BX
00616C7D  E8 06 76 11 00            CALL 0x0072e288
00616C82  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00616C85  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
00616C88  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00616C8B  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00616C90  D1 E1                     SHL ECX,0x1
00616C92  F7 E9                     IMUL ECX
00616C94  C1 FA 0C                  SAR EDX,0xc
00616C97  8B C2                     MOV EAX,EDX
00616C99  C1 E8 1F                  SHR EAX,0x1f
00616C9C  D9 E0                     FCHS
00616C9E  D9 5D B8                  FSTP float ptr [EBP + -0x48]
00616CA1  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00616CA4  03 D0                     ADD EDX,EAX
00616CA6  DD D8                     FSTP ST0
00616CA8  D9 45 BC                  FLD float ptr [EBP + -0x44]
00616CAB  D9 E0                     FCHS
00616CAD  D9 5D BC                  FSTP float ptr [EBP + -0x44]
00616CB0  D9 45 C0                  FLD float ptr [EBP + -0x40]
00616CB3  D9 E0                     FCHS
00616CB5  D9 5D C0                  FSTP float ptr [EBP + -0x40]
00616CB8  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00616CBB  8D 8E 9D 02 00 00         LEA ECX,[ESI + 0x29d]
00616CC1  D8 0D A8 CE 79 00         FMUL float ptr [0x0079cea8]
00616CC7  2B C2                     SUB EAX,EDX
00616CC9  8D 55 B8                  LEA EDX,[EBP + -0x48]
00616CCC  03 C3                     ADD EAX,EBX
00616CCE  51                        PUSH ECX
00616CCF  52                        PUSH EDX
00616CD0  66 89 86 76 02 00 00      MOV word ptr [ESI + 0x276],AX
00616CD7  D9 5D C4                  FSTP float ptr [EBP + -0x3c]
00616CDA  D9 45 EC                  FLD float ptr [EBP + -0x14]
00616CDD  D8 0D A8 CE 79 00         FMUL float ptr [0x0079cea8]
00616CE3  D9 5D C8                  FSTP float ptr [EBP + -0x38]
00616CE6  D9 45 E8                  FLD float ptr [EBP + -0x18]
00616CE9  D8 0D A8 CE 79 00         FMUL float ptr [0x0079cea8]
00616CEF  D9 55 CC                  FST float ptr [EBP + -0x34]
00616CF2  D8 4D BC                  FMUL float ptr [EBP + -0x44]
00616CF5  D9 45 C8                  FLD float ptr [EBP + -0x38]
00616CF8  D8 4D C0                  FMUL float ptr [EBP + -0x40]
00616CFB  DE E9                     FSUBP
00616CFD  D9 5D D0                  FSTP float ptr [EBP + -0x30]
00616D00  D9 45 C4                  FLD float ptr [EBP + -0x3c]
00616D03  D8 4D C0                  FMUL float ptr [EBP + -0x40]
00616D06  D9 45 CC                  FLD float ptr [EBP + -0x34]
00616D09  D8 4D B8                  FMUL float ptr [EBP + -0x48]
00616D0C  DE E9                     FSUBP
00616D0E  D9 5D D4                  FSTP float ptr [EBP + -0x2c]
00616D11  D9 45 C8                  FLD float ptr [EBP + -0x38]
00616D14  D8 4D B8                  FMUL float ptr [EBP + -0x48]
00616D17  D9 45 C4                  FLD float ptr [EBP + -0x3c]
00616D1A  D8 4D BC                  FMUL float ptr [EBP + -0x44]
00616D1D  DE E9                     FSUBP
00616D1F  D9 5D D8                  FSTP float ptr [EBP + -0x28]
00616D22  E8 A0 CC DE FF            CALL 0x004039c7
00616D27  83 C4 08                  ADD ESP,0x8
00616D2A  85 C0                     TEST EAX,EAX
00616D2C  0F 84 1B 01 00 00         JZ 0x00616e4d
00616D32  C7 86 0C 02 00 00 05 00 00 00  MOV dword ptr [ESI + 0x20c],0x5
00616D3C  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00616D41  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00616D47  89 8E 94 02 00 00         MOV dword ptr [ESI + 0x294],ECX
00616D4D  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00616D53  0F BF 8E 5A 02 00 00      MOVSX ECX,word ptr [ESI + 0x25a]
00616D5A  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00616D60  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00616D63  03 CA                     ADD ECX,EDX
00616D65  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00616D68  89 86 98 02 00 00         MOV dword ptr [ESI + 0x298],EAX
00616D6E  C6 86 9C 02 00 00 00      MOV byte ptr [ESI + 0x29c],0x0
00616D75  89 0A                     MOV dword ptr [EDX],ECX
00616D77  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00616D7A  0F BF 8E 5C 02 00 00      MOVSX ECX,word ptr [ESI + 0x25c]
00616D81  03 CF                     ADD ECX,EDI
00616D83  5F                        POP EDI
00616D84  89 0A                     MOV dword ptr [EDX],ECX
00616D86  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00616D89  0F BF 8E 5E 02 00 00      MOVSX ECX,word ptr [ESI + 0x25e]
00616D90  03 CB                     ADD ECX,EBX
00616D92  5E                        POP ESI
00616D93  B8 01 00 00 00            MOV EAX,0x1
00616D98  89 0A                     MOV dword ptr [EDX],ECX
00616D9A  5B                        POP EBX
00616D9B  8B E5                     MOV ESP,EBP
00616D9D  5D                        POP EBP
00616D9E  C2 18 00                  RET 0x18
LAB_00616da1:
00616DA1  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00616DA4  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00616DA7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00616DAA  50                        PUSH EAX
00616DAB  8B 86 88 02 00 00         MOV EAX,dword ptr [ESI + 0x288]
00616DB1  51                        PUSH ECX
00616DB2  52                        PUSH EDX
00616DB3  50                        PUSH EAX
00616DB4  8B CE                     MOV ECX,ESI
00616DB6  E8 19 BA DE FF            CALL 0x004027d4
00616DBB  8B F8                     MOV EDI,EAX
00616DBD  85 FF                     TEST EDI,EDI
00616DBF  7E 6C                     JLE 0x00616e2d
00616DC1  C7 86 56 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x256],0x2
00616DCB  C7 86 0C 02 00 00 04 00 00 00  MOV dword ptr [ESI + 0x20c],0x4
00616DD5  66 C7 86 70 02 00 00 FF FF  MOV word ptr [ESI + 0x270],0xffff
00616DDE  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00616DE1  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00616DE7  33 D2                     XOR EDX,EDX
00616DE9  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00616DEF  B9 0B 00 00 00            MOV ECX,0xb
00616DF4  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00616DF7  C1 E8 10                  SHR EAX,0x10
00616DFA  F7 F1                     DIV ECX
00616DFC  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00616E01  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00616E07  8D 54 0A 0A               LEA EDX,[EDX + ECX*0x1 + 0xa]
00616E0B  89 96 94 02 00 00         MOV dword ptr [ESI + 0x294],EDX
00616E11  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00616E16  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00616E1C  8B C7                     MOV EAX,EDI
00616E1E  89 8E 98 02 00 00         MOV dword ptr [ESI + 0x298],ECX
00616E24  5F                        POP EDI
00616E25  5E                        POP ESI
00616E26  5B                        POP EBX
00616E27  8B E5                     MOV ESP,EBP
00616E29  5D                        POP EBP
00616E2A  C2 18 00                  RET 0x18
LAB_00616e2d:
00616E2D  8B CE                     MOV ECX,ESI
00616E2F  E8 09 D8 DE FF            CALL 0x0040463d
00616E34  8B C7                     MOV EAX,EDI
00616E36  C7 86 0C 02 00 00 09 00 00 00  MOV dword ptr [ESI + 0x20c],0x9
00616E40  5F                        POP EDI
00616E41  5E                        POP ESI
00616E42  5B                        POP EBX
00616E43  8B E5                     MOV ESP,EBP
00616E45  5D                        POP EBP
00616E46  C2 18 00                  RET 0x18
LAB_00616e49:
00616E49  DD D8                     FSTP ST0
00616E4B  DD D8                     FSTP ST0
LAB_00616e4d:
00616E4D  5F                        POP EDI
00616E4E  5E                        POP ESI
00616E4F  33 C0                     XOR EAX,EAX
00616E51  5B                        POP EBX
00616E52  8B E5                     MOV ESP,EBP
00616E54  5D                        POP EBP
00616E55  C2 18 00                  RET 0x18
