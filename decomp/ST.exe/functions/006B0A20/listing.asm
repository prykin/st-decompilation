FUN_006b0a20:
006B0A20  55                        PUSH EBP
006B0A21  8B EC                     MOV EBP,ESP
006B0A23  81 EC 00 04 00 00         SUB ESP,0x400
006B0A29  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B0A2C  53                        PUSH EBX
006B0A2D  85 C9                     TEST ECX,ECX
006B0A2F  56                        PUSH ESI
006B0A30  0F 84 59 01 00 00         JZ 0x006b0b8f
006B0A36  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006B0A39  33 C0                     XOR EAX,EAX
006B0A3B  F7 C2 01 00 00 20         TEST EDX,0x20000001
006B0A41  75 3D                     JNZ 0x006b0a80
006B0A43  83 79 24 08               CMP dword ptr [ECX + 0x24],0x8
006B0A47  7F 37                     JG 0x006b0a80
006B0A49  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B0A4C  83 FA 0A                  CMP EDX,0xa
006B0A4F  7D 18                     JGE 0x006b0a69
006B0A51  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006B0A54  B8 0A 00 00 00            MOV EAX,0xa
006B0A59  2B C2                     SUB EAX,EDX
006B0A5B  C7 45 10 0A 00 00 00      MOV dword ptr [EBP + 0x10],0xa
006B0A62  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B0A65  2B D8                     SUB EBX,EAX
006B0A67  EB 03                     JMP 0x006b0a6c
LAB_006b0a69:
006B0A69  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
LAB_006b0a6c:
006B0A6C  8D 0C 1A                  LEA ECX,[EDX + EBX*0x1]
006B0A6F  81 F9 F6 00 00 00         CMP ECX,0xf6
006B0A75  7E 0F                     JLE 0x006b0a86
006B0A77  BB F6 00 00 00            MOV EBX,0xf6
006B0A7C  2B DA                     SUB EBX,EDX
006B0A7E  EB 06                     JMP 0x006b0a86
LAB_006b0a80:
006B0A80  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006B0A83  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
LAB_006b0a86:
006B0A86  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B0A89  85 F6                     TEST ESI,ESI
006B0A8B  0F 84 FE 00 00 00         JZ 0x006b0b8f
006B0A91  85 DB                     TEST EBX,EBX
006B0A93  0F 8E F6 00 00 00         JLE 0x006b0b8f
006B0A99  57                        PUSH EDI
006B0A9A  8B CB                     MOV ECX,EBX
006B0A9C  8D 34 86                  LEA ESI,[ESI + EAX*0x4]
006B0A9F  8D BD 00 FC FF FF         LEA EDI,[EBP + 0xfffffc00]
006B0AA5  F3 A5                     MOVSD.REP ES:EDI,ESI
006B0AA7  8D 85 03 FC FF FF         LEA EAX,[EBP + 0xfffffc03]
006B0AAD  8B CB                     MOV ECX,EBX
LAB_006b0aaf:
006B0AAF  80 08 04                  OR byte ptr [EAX],0x4
006B0AB2  83 C0 04                  ADD EAX,0x4
006B0AB5  49                        DEC ECX
006B0AB6  75 F7                     JNZ 0x006b0aaf
006B0AB8  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B0ABB  85 C0                     TEST EAX,EAX
006B0ABD  74 13                     JZ 0x006b0ad2
006B0ABF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B0AC2  6A 00                     PUSH 0x0
006B0AC4  6A 01                     PUSH 0x1
006B0AC6  8B 42 30                  MOV EAX,dword ptr [EDX + 0x30]
006B0AC9  50                        PUSH EAX
006B0ACA  8B 08                     MOV ECX,dword ptr [EAX]
006B0ACC  FF 51 58                  CALL dword ptr [ECX + 0x58]
006B0ACF  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
LAB_006b0ad2:
006B0AD2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B0AD5  8B 40 3C                  MOV EAX,dword ptr [EAX + 0x3c]
006B0AD8  85 C0                     TEST EAX,EAX
006B0ADA  74 14                     JZ 0x006b0af0
006B0ADC  8B 08                     MOV ECX,dword ptr [EAX]
006B0ADE  8D B5 00 FC FF FF         LEA ESI,[EBP + 0xfffffc00]
006B0AE4  56                        PUSH ESI
006B0AE5  53                        PUSH EBX
006B0AE6  52                        PUSH EDX
006B0AE7  6A 00                     PUSH 0x0
006B0AE9  50                        PUSH EAX
006B0AEA  FF 51 18                  CALL dword ptr [ECX + 0x18]
006B0AED  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
LAB_006b0af0:
006B0AF0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B0AF3  8B 3D 84 BA 85 00         MOV EDI,dword ptr [0x0085ba84]
006B0AF9  8D 85 00 FC FF FF         LEA EAX,[EBP + 0xfffffc00]
006B0AFF  50                        PUSH EAX
006B0B00  53                        PUSH EBX
006B0B01  52                        PUSH EDX
006B0B02  8B 11                     MOV EDX,dword ptr [ECX]
006B0B04  52                        PUSH EDX
006B0B05  FF D7                     CALL EDI
006B0B07  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B0B0A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B0B0D  8D 85 00 FC FF FF         LEA EAX,[EBP + 0xfffffc00]
006B0B13  8B 96 B4 04 00 00         MOV EDX,dword ptr [ESI + 0x4b4]
006B0B19  50                        PUSH EAX
006B0B1A  53                        PUSH EBX
006B0B1B  51                        PUSH ECX
006B0B1C  52                        PUSH EDX
006B0B1D  FF D7                     CALL EDI
006B0B1F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B0B22  53                        PUSH EBX
006B0B23  8D 8D 00 FC FF FF         LEA ECX,[EBP + 0xfffffc00]
006B0B29  50                        PUSH EAX
006B0B2A  51                        PUSH ECX
006B0B2B  56                        PUSH ESI
006B0B2C  E8 EF F9 FF FF            CALL 0x006b0520
006B0B31  8B BE DC 04 00 00         MOV EDI,dword ptr [ESI + 0x4dc]
006B0B37  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B0B3A  85 FF                     TEST EDI,EDI
006B0B3C  74 3B                     JZ 0x006b0b79
006B0B3E  B9 00 20 00 00            MOV ECX,0x2000
006B0B43  83 C8 FF                  OR EAX,0xffffffff
006B0B46  F3 AB                     STOSD.REP ES:EDI
006B0B48  8B BE DC 04 00 00         MOV EDI,dword ptr [ESI + 0x4dc]
006B0B4E  B9 00 20 00 00            MOV ECX,0x2000
006B0B53  33 C0                     XOR EAX,EAX
006B0B55  81 C7 00 80 00 00         ADD EDI,0x8000
006B0B5B  8D 95 00 FC FF FF         LEA EDX,[EBP + 0xfffffc00]
006B0B61  F3 AB                     STOSD.REP ES:EDI
006B0B63  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B0B66  8B 8E E0 04 00 00         MOV ECX,dword ptr [ESI + 0x4e0]
006B0B6C  52                        PUSH EDX
006B0B6D  53                        PUSH EBX
006B0B6E  50                        PUSH EAX
006B0B6F  51                        PUSH ECX
006B0B70  FF 15 84 BA 85 00         CALL dword ptr [0x0085ba84]
006B0B76  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_006b0b79:
006B0B79  3D 3C 02 76 88            CMP EAX,0x8876023c
006B0B7E  5F                        POP EDI
006B0B7F  74 0E                     JZ 0x006b0b8f
006B0B81  3D 4D 02 76 88            CMP EAX,0x8876024d
006B0B86  74 07                     JZ 0x006b0b8f
006B0B88  3D 01 40 00 80            CMP EAX,0x80004001
006B0B8D  75 02                     JNZ 0x006b0b91
LAB_006b0b8f:
006B0B8F  33 C0                     XOR EAX,EAX
LAB_006b0b91:
006B0B91  5E                        POP ESI
006B0B92  5B                        POP EBX
006B0B93  8B E5                     MOV ESP,EBP
006B0B95  5D                        POP EBP
006B0B96  C2 14 00                  RET 0x14
