FUN_00717970:
00717970  55                        PUSH EBP
00717971  8B EC                     MOV EBP,ESP
00717973  83 EC 58                  SUB ESP,0x58
00717976  56                        PUSH ESI
00717977  8B F1                     MOV ESI,ECX
00717979  8B 86 BA 04 00 00         MOV EAX,dword ptr [ESI + 0x4ba]
0071797F  85 C0                     TEST EAX,EAX
00717981  0F 84 1B 06 00 00         JZ 0x00717fa2
00717987  8B 86 A2 04 00 00         MOV EAX,dword ptr [ESI + 0x4a2]
0071798D  85 C0                     TEST EAX,EAX
0071798F  0F 84 0D 06 00 00         JZ 0x00717fa2
00717995  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
0071799B  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
0071799E  8D 45 F8                  LEA EAX,[EBP + -0x8]
007179A1  8D 4D FC                  LEA ECX,[EBP + -0x4]
007179A4  50                        PUSH EAX
007179A5  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
007179A8  51                        PUSH ECX
007179A9  DC C0                     FADD ST0,ST0
007179AB  51                        PUSH ECX
007179AC  8B CE                     MOV ECX,ESI
007179AE  D9 1C 24                  FSTP float ptr [ESP]
007179B1  52                        PUSH EDX
007179B2  50                        PUSH EAX
007179B3  E8 68 A2 FC FF            CALL 0x006e1c20
007179B8  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
007179BE  83 F8 03                  CMP EAX,0x3
007179C1  0F 87 DB 05 00 00         JA 0x00717fa2
switchD_007179c7::switchD:
007179C7  FF 24 85 AC 7F 71 00      JMP dword ptr [EAX*0x4 + 0x717fac]
switchD_007179c7::caseD_0:
007179CE  8B 86 B2 04 00 00         MOV EAX,dword ptr [ESI + 0x4b2]
007179D4  D9 45 FC                  FLD float ptr [EBP + -0x4]
007179D7  D8 65 F8                  FSUB float ptr [EBP + -0x8]
007179DA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
007179DD  D1 E0                     SHL EAX,0x1
007179DF  99                        CDQ
007179E0  2B C2                     SUB EAX,EDX
007179E2  D1 F8                     SAR EAX,0x1
007179E4  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
007179EA  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
007179ED  DB 45 D4                  FILD dword ptr [EBP + -0x2c]
007179F0  DE C1                     FADDP
007179F2  DD 55 C0                  FST double ptr [EBP + -0x40]
007179F5  D9 45 FC                  FLD float ptr [EBP + -0x4]
007179F8  D8 45 F8                  FADD float ptr [EBP + -0x8]
007179FB  DD 86 C8 00 00 00         FLD double ptr [ESI + 0xc8]
00717A01  DC 0D 48 E2 79 00         FMUL double ptr [0x0079e248]
00717A07  DE C1                     FADDP
00717A09  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
00717A0F  DC 25 40 E2 79 00         FSUB double ptr [0x0079e240]
00717A15  E9 08 01 00 00            JMP 0x00717b22
switchD_007179c7::caseD_1:
00717A1A  D9 45 FC                  FLD float ptr [EBP + -0x4]
00717A1D  D8 45 F8                  FADD float ptr [EBP + -0x8]
00717A20  DD 86 C8 00 00 00         FLD double ptr [ESI + 0xc8]
00717A26  DC 0D 48 E2 79 00         FMUL double ptr [0x0079e248]
00717A2C  8B 86 B6 04 00 00         MOV EAX,dword ptr [ESI + 0x4b6]
00717A32  DE C1                     FADDP
00717A34  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00717A37  D1 E0                     SHL EAX,0x1
00717A39  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
00717A3F  99                        CDQ
00717A40  DC 25 40 E2 79 00         FSUB double ptr [0x0079e240]
00717A46  2B C2                     SUB EAX,EDX
00717A48  D1 F8                     SAR EAX,0x1
00717A4A  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00717A4D  DD 55 C0                  FST double ptr [EBP + -0x40]
00717A50  D9 45 F8                  FLD float ptr [EBP + -0x8]
00717A53  D8 65 FC                  FSUB float ptr [EBP + -0x4]
00717A56  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
00717A5C  DB 45 D4                  FILD dword ptr [EBP + -0x2c]
00717A5F  E9 BC 00 00 00            JMP 0x00717b20
switchD_007179c7::caseD_2:
00717A64  8B 86 B2 04 00 00         MOV EAX,dword ptr [ESI + 0x4b2]
00717A6A  D9 45 F8                  FLD float ptr [EBP + -0x8]
00717A6D  D8 65 FC                  FSUB float ptr [EBP + -0x4]
00717A70  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00717A73  D1 E0                     SHL EAX,0x1
00717A75  99                        CDQ
00717A76  2B C2                     SUB EAX,EDX
00717A78  D1 F8                     SAR EAX,0x1
00717A7A  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
00717A80  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00717A83  8B 86 B6 04 00 00         MOV EAX,dword ptr [ESI + 0x4b6]
00717A89  DB 45 D4                  FILD dword ptr [EBP + -0x2c]
00717A8C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00717A8F  DE C1                     FADDP
00717A91  8D 54 09 F6               LEA EDX,[ECX + ECX*0x1 + -0xa]
00717A95  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00717A98  DD 55 C0                  FST double ptr [EBP + -0x40]
00717A9B  D9 45 FC                  FLD float ptr [EBP + -0x4]
00717A9E  D9 E0                     FCHS
00717AA0  D8 65 F8                  FSUB float ptr [EBP + -0x8]
00717AA3  DD 86 C8 00 00 00         FLD double ptr [ESI + 0xc8]
00717AA9  DC 0D 48 E2 79 00         FMUL double ptr [0x0079e248]
00717AAF  DE E9                     FSUBP
00717AB1  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
00717AB7  DB 45 D4                  FILD dword ptr [EBP + -0x2c]
00717ABA  DE C1                     FADDP
00717ABC  DC 05 40 E2 79 00         FADD double ptr [0x0079e240]
00717AC2  EB 5E                     JMP 0x00717b22
switchD_007179c7::caseD_3:
00717AC4  D9 45 FC                  FLD float ptr [EBP + -0x4]
00717AC7  8B 86 B2 04 00 00         MOV EAX,dword ptr [ESI + 0x4b2]
00717ACD  D9 E0                     FCHS
00717ACF  D8 65 F8                  FSUB float ptr [EBP + -0x8]
00717AD2  DD 86 C8 00 00 00         FLD double ptr [ESI + 0xc8]
00717AD8  DC 0D 48 E2 79 00         FMUL double ptr [0x0079e248]
00717ADE  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00717AE1  DE E9                     FSUBP
00717AE3  8D 4C 00 F6               LEA ECX,[EAX + EAX*0x1 + -0xa]
00717AE7  8B 86 B6 04 00 00         MOV EAX,dword ptr [ESI + 0x4b6]
00717AED  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
00717AF0  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
00717AF6  DB 45 D4                  FILD dword ptr [EBP + -0x2c]
00717AF9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00717AFC  D1 E0                     SHL EAX,0x1
00717AFE  DE C1                     FADDP
00717B00  99                        CDQ
00717B01  DC 05 40 E2 79 00         FADD double ptr [0x0079e240]
00717B07  2B C2                     SUB EAX,EDX
00717B09  D1 F8                     SAR EAX,0x1
00717B0B  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00717B0E  DD 55 C0                  FST double ptr [EBP + -0x40]
00717B11  D9 45 FC                  FLD float ptr [EBP + -0x4]
00717B14  D8 65 F8                  FSUB float ptr [EBP + -0x8]
00717B17  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
00717B1D  DB 45 D4                  FILD dword ptr [EBP + -0x2c]
LAB_00717b20:
00717B20  DE C1                     FADDP
LAB_00717b22:
00717B22  DD 5D B8                  FSTP double ptr [EBP + -0x48]
00717B25  53                        PUSH EBX
00717B26  57                        PUSH EDI
00717B27  DC 15 70 D6 79 00         FCOM double ptr [0x0079d670]
00717B2D  DC 0D 38 E2 79 00         FMUL double ptr [0x0079e238]
00717B33  DF E0                     FNSTSW AX
00717B35  F6 C4 01                  TEST AH,0x1
00717B38  75 1B                     JNZ 0x00717b55
00717B3A  E8 49 67 01 00            CALL 0x0072e288
00717B3F  DD 45 C0                  FLD double ptr [EBP + -0x40]
00717B42  DD 05 80 05 79 00         FLD double ptr [0x00790580]
00717B48  89 86 7E 04 00 00         MOV dword ptr [ESI + 0x47e],EAX
00717B4E  E8 47 CA 01 00            CALL 0x0073459a
00717B53  EB 25                     JMP 0x00717b7a
LAB_00717b55:
00717B55  DC 25 88 CD 79 00         FSUB double ptr [0x0079cd88]
00717B5B  E8 28 67 01 00            CALL 0x0072e288
00717B60  DD 45 C0                  FLD double ptr [EBP + -0x40]
00717B63  DD 05 80 05 79 00         FLD double ptr [0x00790580]
00717B69  89 86 7E 04 00 00         MOV dword ptr [ESI + 0x47e],EAX
00717B6F  E8 26 CA 01 00            CALL 0x0073459a
00717B74  DC 05 80 05 79 00         FADD double ptr [0x00790580]
LAB_00717b7a:
00717B7A  DC 8E D8 00 00 00         FMUL double ptr [ESI + 0xd8]
00717B80  D9 E0                     FCHS
00717B82  E8 01 67 01 00            CALL 0x0072e288
00717B87  DD 45 B8                  FLD double ptr [EBP + -0x48]
00717B8A  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
00717B90  8B D8                     MOV EBX,EAX
00717B92  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00717B95  89 9E 76 04 00 00         MOV dword ptr [ESI + 0x476],EBX
00717B9B  DC 15 70 D6 79 00         FCOM double ptr [0x0079d670]
00717BA1  DD 55 B8                  FST double ptr [EBP + -0x48]
00717BA4  DC 0D 30 E2 79 00         FMUL double ptr [0x0079e230]
00717BAA  DF E0                     FNSTSW AX
00717BAC  F6 C4 01                  TEST AH,0x1
00717BAF  75 1B                     JNZ 0x00717bcc
00717BB1  E8 D2 66 01 00            CALL 0x0072e288
00717BB6  DD 45 B8                  FLD double ptr [EBP + -0x48]
00717BB9  DD 05 28 E2 79 00         FLD double ptr [0x0079e228]
00717BBF  89 86 82 04 00 00         MOV dword ptr [ESI + 0x482],EAX
00717BC5  E8 D0 C9 01 00            CALL 0x0073459a
00717BCA  EB 25                     JMP 0x00717bf1
LAB_00717bcc:
00717BCC  DC 25 88 CD 79 00         FSUB double ptr [0x0079cd88]
00717BD2  E8 B1 66 01 00            CALL 0x0072e288
00717BD7  DD 45 B8                  FLD double ptr [EBP + -0x48]
00717BDA  DD 05 28 E2 79 00         FLD double ptr [0x0079e228]
00717BE0  89 86 82 04 00 00         MOV dword ptr [ESI + 0x482],EAX
00717BE6  E8 AF C9 01 00            CALL 0x0073459a
00717BEB  DC 05 28 E2 79 00         FADD double ptr [0x0079e228]
LAB_00717bf1:
00717BF1  DC 8E E0 00 00 00         FMUL double ptr [ESI + 0xe0]
00717BF7  D9 E0                     FCHS
00717BF9  E8 8A 66 01 00            CALL 0x0072e288
00717BFE  8B BE E2 04 00 00         MOV EDI,dword ptr [ESI + 0x4e2]
00717C04  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
00717C07  8B D7                     MOV EDX,EDI
00717C09  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00717C0C  2B D1                     SUB EDX,ECX
00717C0E  89 86 7A 04 00 00         MOV dword ptr [ESI + 0x47a],EAX
00717C14  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
00717C17  2B D3                     SUB EDX,EBX
00717C19  8B 9E E6 04 00 00         MOV EBX,dword ptr [ESI + 0x4e6]
00717C1F  89 8E 8E 04 00 00         MOV dword ptr [ESI + 0x48e],ECX
00717C25  8D 44 02 FF               LEA EAX,[EDX + EAX*0x1 + -0x1]
00717C29  99                        CDQ
00717C2A  F7 FF                     IDIV EDI
00717C2C  8B 7E 34                  MOV EDI,dword ptr [ESI + 0x34]
00717C2F  8B D3                     MOV EDX,EBX
00717C31  2B D7                     SUB EDX,EDI
00717C33  89 BE 92 04 00 00         MOV dword ptr [ESI + 0x492],EDI
00717C39  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00717C3C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00717C3F  2B D0                     SUB EDX,EAX
00717C41  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
00717C44  8D 44 02 FF               LEA EAX,[EDX + EAX*0x1 + -0x1]
00717C48  99                        CDQ
00717C49  F7 FB                     IDIV EBX
00717C4B  8B 96 7E 04 00 00         MOV EDX,dword ptr [ESI + 0x47e]
00717C51  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00717C54  33 C0                     XOR EAX,EAX
00717C56  3B D0                     CMP EDX,EAX
00717C58  7D 20                     JGE 0x00717c7a
00717C5A  0F AF 96 E2 04 00 00      IMUL EDX,dword ptr [ESI + 0x4e2]
00717C61  2B CA                     SUB ECX,EDX
00717C63  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00717C66  03 CA                     ADD ECX,EDX
00717C68  89 86 76 04 00 00         MOV dword ptr [ESI + 0x476],EAX
00717C6E  89 8E 8E 04 00 00         MOV dword ptr [ESI + 0x48e],ECX
00717C74  89 86 7E 04 00 00         MOV dword ptr [ESI + 0x47e],EAX
LAB_00717c7a:
00717C7A  8B 8E 7E 04 00 00         MOV ECX,dword ptr [ESI + 0x47e]
00717C80  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00717C83  8B 86 B2 04 00 00         MOV EAX,dword ptr [ESI + 0x4b2]
00717C89  03 CA                     ADD ECX,EDX
00717C8B  3B C8                     CMP ECX,EAX
00717C8D  89 8E 86 04 00 00         MOV dword ptr [ESI + 0x486],ECX
00717C93  7E 06                     JLE 0x00717c9b
00717C95  89 86 86 04 00 00         MOV dword ptr [ESI + 0x486],EAX
LAB_00717c9b:
00717C9B  8B 8E 82 04 00 00         MOV ECX,dword ptr [ESI + 0x482]
00717CA1  33 D2                     XOR EDX,EDX
00717CA3  3B CA                     CMP ECX,EDX
00717CA5  7D 1C                     JGE 0x00717cc3
00717CA7  0F AF CB                  IMUL ECX,EBX
00717CAA  2B F9                     SUB EDI,ECX
00717CAC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00717CAF  03 F9                     ADD EDI,ECX
00717CB1  89 96 7A 04 00 00         MOV dword ptr [ESI + 0x47a],EDX
00717CB7  89 BE 92 04 00 00         MOV dword ptr [ESI + 0x492],EDI
00717CBD  89 96 82 04 00 00         MOV dword ptr [ESI + 0x482],EDX
LAB_00717cc3:
00717CC3  8B 9E 82 04 00 00         MOV EBX,dword ptr [ESI + 0x482]
00717CC9  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00717CCC  8B 96 B6 04 00 00         MOV EDX,dword ptr [ESI + 0x4b6]
00717CD2  03 CB                     ADD ECX,EBX
00717CD4  3B CA                     CMP ECX,EDX
00717CD6  89 8E 8A 04 00 00         MOV dword ptr [ESI + 0x48a],ECX
00717CDC  7E 06                     JLE 0x00717ce4
00717CDE  89 96 8A 04 00 00         MOV dword ptr [ESI + 0x48a],EDX
LAB_00717ce4:
00717CE4  8B D3                     MOV EDX,EBX
00717CE6  8B 8E BA 04 00 00         MOV ECX,dword ptr [ESI + 0x4ba]
00717CEC  0F AF D0                  IMUL EDX,EAX
00717CEF  8B C3                     MOV EAX,EBX
00717CF1  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
00717CF4  0F AF 86 BE 04 00 00      IMUL EAX,dword ptr [ESI + 0x4be]
00717CFB  03 C1                     ADD EAX,ECX
00717CFD  8B 8E A8 00 00 00         MOV ECX,dword ptr [ESI + 0xa8]
00717D03  03 FA                     ADD EDI,EDX
00717D05  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00717D08  8B 8C 8E A2 04 00 00      MOV ECX,dword ptr [ESI + ECX*0x4 + 0x4a2]
00717D0F  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
00717D12  03 CA                     ADD ECX,EDX
00717D14  8B 96 92 04 00 00         MOV EDX,dword ptr [ESI + 0x492]
00717D1A  03 96 7A 04 00 00         ADD EDX,dword ptr [ESI + 0x47a]
00717D20  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00717D23  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
00717D26  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
00717D29  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00717D2C  8B 96 8A 04 00 00         MOV EDX,dword ptr [ESI + 0x48a]
00717D32  3B DA                     CMP EBX,EDX
00717D34  0F 8D 92 01 00 00         JGE 0x00717ecc
LAB_00717d3a:
00717D3A  8B 96 76 04 00 00         MOV EDX,dword ptr [ESI + 0x476]
00717D40  8B 9E 8E 04 00 00         MOV EBX,dword ptr [ESI + 0x48e]
00717D46  03 D3                     ADD EDX,EBX
00717D48  8B 9E 7E 04 00 00         MOV EBX,dword ptr [ESI + 0x47e]
00717D4E  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00717D51  8B 96 86 04 00 00         MOV EDX,dword ptr [ESI + 0x486]
00717D57  3B DA                     CMP EBX,EDX
00717D59  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
00717D5C  0F 8D 24 01 00 00         JGE 0x00717e86
00717D62  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00717D65  03 DF                     ADD EBX,EDI
00717D67  2B D1                     SUB EDX,ECX
00717D69  2B C1                     SUB EAX,ECX
00717D6B  2B CF                     SUB ECX,EDI
00717D6D  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00717D70  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00717D73  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00717D76  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
00717D79  EB 06                     JMP 0x00717d81
LAB_00717d7b:
00717D7B  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00717D7E  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
LAB_00717d81:
00717D81  8B 86 6E 04 00 00         MOV EAX,dword ptr [ESI + 0x46e]
00717D87  8D 3C 0B                  LEA EDI,[EBX + ECX*0x1]
00717D8A  03 D7                     ADD EDX,EDI
00717D8C  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00717D8F  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
00717D92  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00717D95  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00717D98  80 F2 07                  XOR DL,0x7
00717D9B  33 C0                     XOR EAX,EAX
00717D9D  0F A3 11                  BT [ECX],EDX
00717DA0  D0 D0                     RCL AL,0x1
00717DA2  85 C0                     TEST EAX,EAX
00717DA4  0F 84 AC 00 00 00         JZ 0x00717e56
00717DAA  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00717DAD  33 C0                     XOR EAX,EAX
00717DAF  8A 07                     MOV AL,byte ptr [EDI]
00717DB1  33 C9                     XOR ECX,ECX
00717DB3  8A 0C 17                  MOV CL,byte ptr [EDI + EDX*0x1]
00717DB6  8B D0                     MOV EDX,EAX
00717DB8  C1 E2 04                  SHL EDX,0x4
00717DBB  33 C0                     XOR EAX,EAX
00717DBD  8A 84 11 94 05 7F 00      MOV AL,byte ptr [ECX + EDX*0x1 + 0x7f0594]
00717DC4  8B 8E D8 02 00 00         MOV ECX,dword ptr [ESI + 0x2d8]
00717DCA  85 C9                     TEST ECX,ECX
00717DCC  0F 85 C9 01 00 00         JNZ 0x00717f9b
00717DD2  33 C9                     XOR ECX,ECX
00717DD4  8A 0B                     MOV CL,byte ptr [EBX]
00717DD6  3B C1                     CMP EAX,ECX
00717DD8  0F 84 BD 01 00 00         JZ 0x00717f9b
00717DDE  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00717DE1  88 03                     MOV byte ptr [EBX],AL
00717DE3  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00717DE6  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
00717DE9  8B 96 E2 04 00 00         MOV EDX,dword ptr [ESI + 0x4e2]
00717DEF  8B 8E E6 04 00 00         MOV ECX,dword ptr [ESI + 0x4e6]
00717DF5  3B D8                     CMP EBX,EAX
00717DF7  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
00717DFA  7D 07                     JGE 0x00717e03
00717DFC  2B D0                     SUB EDX,EAX
00717DFE  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00717E01  03 D3                     ADD EDX,EBX
LAB_00717e03:
00717E03  8B 5D A8                  MOV EBX,dword ptr [EBP + -0x58]
00717E06  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
00717E09  03 DA                     ADD EBX,EDX
00717E0B  3B D8                     CMP EBX,EAX
00717E0D  7E 05                     JLE 0x00717e14
00717E0F  2B 45 A8                  SUB EAX,dword ptr [EBP + -0x58]
00717E12  8B D0                     MOV EDX,EAX
LAB_00717e14:
00717E14  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
00717E17  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00717E1A  3B D8                     CMP EBX,EAX
00717E1C  7D 06                     JGE 0x00717e24
00717E1E  2B C8                     SUB ECX,EAX
00717E20  8B F8                     MOV EDI,EAX
00717E22  03 CB                     ADD ECX,EBX
LAB_00717e24:
00717E24  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
00717E27  8D 1C 39                  LEA EBX,[ECX + EDI*0x1]
00717E2A  3B D8                     CMP EBX,EAX
00717E2C  7E 04                     JLE 0x00717e32
00717E2E  2B C7                     SUB EAX,EDI
00717E30  8B C8                     MOV ECX,EAX
LAB_00717e32:
00717E32  85 D2                     TEST EDX,EDX
00717E34  7E 1D                     JLE 0x00717e53
00717E36  85 C9                     TEST ECX,ECX
00717E38  7E 19                     JLE 0x00717e53
00717E3A  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00717E3D  51                        PUSH ECX
00717E3E  52                        PUSH EDX
00717E3F  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00717E42  8B 0E                     MOV ECX,dword ptr [ESI]
00717E44  03 D7                     ADD EDX,EDI
00717E46  52                        PUSH EDX
00717E47  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
00717E4A  03 C2                     ADD EAX,EDX
00717E4C  50                        PUSH EAX
00717E4D  51                        PUSH ECX
00717E4E  E8 2D E1 F9 FF            CALL 0x006b5f80
LAB_00717e53:
00717E53  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
LAB_00717e56:
00717E56  8B 96 E2 04 00 00         MOV EDX,dword ptr [ESI + 0x4e2]
00717E5C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00717E5F  8B 8E 86 04 00 00         MOV ECX,dword ptr [ESI + 0x486]
00717E65  03 C2                     ADD EAX,EDX
00717E67  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00717E6A  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00717E6D  40                        INC EAX
00717E6E  43                        INC EBX
00717E6F  3B C1                     CMP EAX,ECX
00717E71  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00717E74  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00717E77  0F 8C FE FE FF FF         JL 0x00717d7b
00717E7D  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00717E80  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00717E83  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
LAB_00717e86:
00717E86  8B 9E BE 04 00 00         MOV EBX,dword ptr [ESI + 0x4be]
00717E8C  8B 96 B2 04 00 00         MOV EDX,dword ptr [ESI + 0x4b2]
00717E92  03 C3                     ADD EAX,EBX
00717E94  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
00717E97  03 DA                     ADD EBX,EDX
00717E99  03 FA                     ADD EDI,EDX
00717E9B  03 CA                     ADD ECX,EDX
00717E9D  8B 96 E6 04 00 00         MOV EDX,dword ptr [ESI + 0x4e6]
00717EA3  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00717EA6  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00717EA9  03 DA                     ADD EBX,EDX
00717EAB  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00717EAE  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00717EB1  8B 9E 8A 04 00 00         MOV EBX,dword ptr [ESI + 0x48a]
00717EB7  42                        INC EDX
00717EB8  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
00717EBB  3B D3                     CMP EDX,EBX
00717EBD  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00717EC0  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
00717EC3  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00717EC6  0F 8C 6E FE FF FF         JL 0x00717d3a
LAB_00717ecc:
00717ECC  8B 86 86 04 00 00         MOV EAX,dword ptr [ESI + 0x486]
00717ED2  8B 9E 7E 04 00 00         MOV EBX,dword ptr [ESI + 0x47e]
00717ED8  2B C3                     SUB EAX,EBX
00717EDA  8B 8E 76 04 00 00         MOV ECX,dword ptr [ESI + 0x476]
00717EE0  0F AF 86 E2 04 00 00      IMUL EAX,dword ptr [ESI + 0x4e2]
00717EE7  8B 96 8E 04 00 00         MOV EDX,dword ptr [ESI + 0x48e]
00717EED  03 C8                     ADD ECX,EAX
00717EEF  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
00717EF2  89 8E 96 04 00 00         MOV dword ptr [ESI + 0x496],ECX
00717EF8  03 CA                     ADD ECX,EDX
00717EFA  3B C8                     CMP ECX,EAX
00717EFC  7E 08                     JLE 0x00717f06
00717EFE  2B C2                     SUB EAX,EDX
00717F00  89 86 96 04 00 00         MOV dword ptr [ESI + 0x496],EAX
LAB_00717f06:
00717F06  8B 86 8A 04 00 00         MOV EAX,dword ptr [ESI + 0x48a]
00717F0C  8B 8E 82 04 00 00         MOV ECX,dword ptr [ESI + 0x482]
00717F12  2B C1                     SUB EAX,ECX
00717F14  8B 8E 7A 04 00 00         MOV ECX,dword ptr [ESI + 0x47a]
00717F1A  0F AF 86 E6 04 00 00      IMUL EAX,dword ptr [ESI + 0x4e6]
00717F21  8D 3C 08                  LEA EDI,[EAX + ECX*0x1]
00717F24  8B 86 92 04 00 00         MOV EAX,dword ptr [ESI + 0x492]
00717F2A  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
00717F2D  89 BE 9A 04 00 00         MOV dword ptr [ESI + 0x49a],EDI
00717F33  03 F8                     ADD EDI,EAX
00717F35  3B F9                     CMP EDI,ECX
00717F37  7E 08                     JLE 0x00717f41
00717F39  2B C8                     SUB ECX,EAX
00717F3B  89 8E 9A 04 00 00         MOV dword ptr [ESI + 0x49a],ECX
LAB_00717f41:
00717F41  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
00717F44  8B BE 6E 04 00 00         MOV EDI,dword ptr [ESI + 0x46e]
00717F4A  03 CA                     ADD ECX,EDX
00717F4C  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00717F4F  03 D0                     ADD EDX,EAX
00717F51  8B 86 C2 04 00 00         MOV EAX,dword ptr [ESI + 0x4c2]
00717F57  0F AF 86 BE 04 00 00      IMUL EAX,dword ptr [ESI + 0x4be]
00717F5E  83 C0 07                  ADD EAX,0x7
00717F61  89 96 92 04 00 00         MOV dword ptr [ESI + 0x492],EDX
00717F67  99                        CDQ
00717F68  83 E2 07                  AND EDX,0x7
00717F6B  89 8E 8E 04 00 00         MOV dword ptr [ESI + 0x48e],ECX
00717F71  03 C2                     ADD EAX,EDX
00717F73  8B C8                     MOV ECX,EAX
00717F75  33 C0                     XOR EAX,EAX
00717F77  C1 F9 03                  SAR ECX,0x3
00717F7A  8B D1                     MOV EDX,ECX
00717F7C  C1 E9 02                  SHR ECX,0x2
00717F7F  F3 AB                     STOSD.REP ES:EDI
00717F81  8B CA                     MOV ECX,EDX
00717F83  83 E1 03                  AND ECX,0x3
00717F86  F3 AA                     STOSB.REP ES:EDI
00717F88  5F                        POP EDI
00717F89  C7 86 6A 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x46a],0x0
00717F93  5B                        POP EBX
00717F94  33 C0                     XOR EAX,EAX
00717F96  5E                        POP ESI
00717F97  8B E5                     MOV ESP,EBP
00717F99  5D                        POP EBP
00717F9A  C3                        RET
LAB_00717f9b:
00717F9B  88 03                     MOV byte ptr [EBX],AL
00717F9D  E9 B4 FE FF FF            JMP 0x00717e56
switchD_007179c7::default:
00717FA2  33 C0                     XOR EAX,EAX
00717FA4  5E                        POP ESI
00717FA5  8B E5                     MOV ESP,EBP
00717FA7  5D                        POP EBP
00717FA8  C3                        RET
