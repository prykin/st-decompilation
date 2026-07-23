CGenerate::sub_0069BDC0:
0069BDC0  55                        PUSH EBP
0069BDC1  8B EC                     MOV EBP,ESP
0069BDC3  6A FF                     PUSH -0x1
0069BDC5  68 08 D8 79 00            PUSH 0x79d808
0069BDCA  68 64 D9 72 00            PUSH 0x72d964
0069BDCF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0069BDD5  50                        PUSH EAX
0069BDD6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0069BDDD  83 EC 74                  SUB ESP,0x74
0069BDE0  53                        PUSH EBX
0069BDE1  56                        PUSH ESI
0069BDE2  57                        PUSH EDI
0069BDE3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069BDE6  8B D9                     MOV EBX,ECX
0069BDE8  33 C0                     XOR EAX,EAX
0069BDEA  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0069BDED  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0069BDF0  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
0069BDF3  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0069BDF6  83 FE 04                  CMP ESI,0x4
0069BDF9  0F 8E 1D 04 00 00         JLE 0x0069c21c
0069BDFF  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0069BE02  83 FF 04                  CMP EDI,0x4
0069BE05  0F 8E 11 04 00 00         JLE 0x0069c21c
0069BE0B  8B C6                     MOV EAX,ESI
0069BE0D  99                        CDQ
0069BE0E  2B C2                     SUB EAX,EDX
0069BE10  8B C8                     MOV ECX,EAX
0069BE12  D1 F9                     SAR ECX,0x1
0069BE14  8B C7                     MOV EAX,EDI
0069BE16  99                        CDQ
0069BE17  2B C2                     SUB EAX,EDX
0069BE19  D1 F8                     SAR EAX,0x1
0069BE1B  03 C8                     ADD ECX,EAX
0069BE1D  8B C1                     MOV EAX,ECX
0069BE1F  99                        CDQ
0069BE20  2B C2                     SUB EAX,EDX
0069BE22  D1 F8                     SAR EAX,0x1
0069BE24  03 C8                     ADD ECX,EAX
0069BE26  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
0069BE29  8B 83 33 58 00 00         MOV EAX,dword ptr [EBX + 0x5833]
0069BE2F  2B C6                     SUB EAX,ESI
0069BE31  99                        CDQ
0069BE32  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0069BE35  F7 F9                     IDIV ECX
0069BE37  8B F0                     MOV ESI,EAX
0069BE39  83 C6 02                  ADD ESI,0x2
0069BE3C  8B 83 37 58 00 00         MOV EAX,dword ptr [EBX + 0x5837]
0069BE42  2B C7                     SUB EAX,EDI
0069BE44  99                        CDQ
0069BE45  F7 F9                     IDIV ECX
0069BE47  83 C0 02                  ADD EAX,0x2
0069BE4A  0F AF F0                  IMUL ESI,EAX
0069BE4D  89 75 84                  MOV dword ptr [EBP + -0x7c],ESI
0069BE50  8B FE                     MOV EDI,ESI
0069BE52  C1 E7 06                  SHL EDI,0x6
0069BE55  57                        PUSH EDI
0069BE56  E8 15 EE 00 00            CALL 0x006aac70
0069BE5B  8B D0                     MOV EDX,EAX
0069BE5D  89 55 8C                  MOV dword ptr [EBP + -0x74],EDX
0069BE60  8B CF                     MOV ECX,EDI
0069BE62  33 C0                     XOR EAX,EAX
0069BE64  8B FA                     MOV EDI,EDX
0069BE66  8B D1                     MOV EDX,ECX
0069BE68  C1 E9 02                  SHR ECX,0x2
0069BE6B  F3 AB                     STOSD.REP ES:EDI
0069BE6D  8B CA                     MOV ECX,EDX
0069BE6F  83 E1 03                  AND ECX,0x3
0069BE72  F3 AA                     STOSB.REP ES:EDI
0069BE74  33 D2                     XOR EDX,EDX
0069BE76  33 FF                     XOR EDI,EDI
0069BE78  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
0069BE7B  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
0069BE82  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
0069BE85  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
0069BE88  EB 06                     JMP 0x0069be90
LAB_0069be8a:
0069BE8A  8B 75 84                  MOV ESI,dword ptr [EBP + -0x7c]
0069BE8D  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
LAB_0069be90:
0069BE90  3B D6                     CMP EDX,ESI
0069BE92  0F 8D 09 01 00 00         JGE 0x0069bfa1
0069BE98  8B 83 37 58 00 00         MOV EAX,dword ptr [EBX + 0x5837]
0069BE9E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0069BEA1  8B 75 A0                  MOV ESI,dword ptr [EBP + -0x60]
0069BEA4  03 F1                     ADD ESI,ECX
0069BEA6  3B F0                     CMP ESI,EAX
0069BEA8  7E 0C                     JLE 0x0069beb6
0069BEAA  2B C1                     SUB EAX,ECX
0069BEAC  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0069BEAF  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
LAB_0069beb6:
0069BEB6  C7 45 E0 01 00 00 00      MOV dword ptr [EBP + -0x20],0x1
0069BEBD  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0069BEC0  8D 4C 08 FF               LEA ECX,[EAX + ECX*0x1 + -0x1]
0069BEC4  89 8D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ECX
0069BECA  8B F2                     MOV ESI,EDX
0069BECC  C1 E6 06                  SHL ESI,0x6
LAB_0069becf:
0069BECF  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0069BED2  89 7C 16 30               MOV dword ptr [ESI + EDX*0x1 + 0x30],EDI
0069BED6  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
0069BED9  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0069BEDC  89 4C 06 34               MOV dword ptr [ESI + EAX*0x1 + 0x34],ECX
0069BEE0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0069BEE3  8D 44 3A FF               LEA EAX,[EDX + EDI*0x1 + -0x1]
0069BEE7  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0069BEEA  89 44 0E 38               MOV dword ptr [ESI + ECX*0x1 + 0x38],EAX
0069BEEE  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0069BEF1  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0069BEF7  89 44 16 3C               MOV dword ptr [ESI + EDX*0x1 + 0x3c],EAX
0069BEFB  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0069BEFE  8D 04 0E                  LEA EAX,[ESI + ECX*0x1]
0069BF01  8B 48 38                  MOV ECX,dword ptr [EAX + 0x38]
0069BF04  8B 93 33 58 00 00         MOV EDX,dword ptr [EBX + 0x5833]
0069BF0A  4A                        DEC EDX
0069BF0B  3B CA                     CMP ECX,EDX
0069BF0D  7C 07                     JL 0x0069bf16
0069BF0F  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
LAB_0069bf16:
0069BF16  50                        PUSH EAX
0069BF17  8B 40 3C                  MOV EAX,dword ptr [EAX + 0x3c]
0069BF1A  50                        PUSH EAX
0069BF1B  51                        PUSH ECX
0069BF1C  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0069BF1F  51                        PUSH ECX
0069BF20  57                        PUSH EDI
0069BF21  8B CB                     MOV ECX,EBX
0069BF23  E8 3B 52 D6 FF            CALL 0x00401163
0069BF28  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0069BF2B  89 44 16 2C               MOV dword ptr [ESI + EDX*0x1 + 0x2c],EAX
0069BF2F  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
0069BF32  8B 44 06 2C               MOV EAX,dword ptr [ESI + EAX*0x1 + 0x2c]
0069BF36  3B 45 B4                  CMP EAX,dword ptr [EBP + -0x4c]
0069BF39  7E 03                     JLE 0x0069bf3e
0069BF3B  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
LAB_0069bf3e:
0069BF3E  FF 45 C8                  INC dword ptr [EBP + -0x38]
0069BF41  83 C6 40                  ADD ESI,0x40
0069BF44  03 7D 14                  ADD EDI,dword ptr [EBP + 0x14]
0069BF47  8B 83 33 58 00 00         MOV EAX,dword ptr [EBX + 0x5833]
0069BF4D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0069BF50  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
0069BF53  3B D0                     CMP EDX,EAX
0069BF55  7C 04                     JL 0x0069bf5b
0069BF57  8B F8                     MOV EDI,EAX
0069BF59  2B F9                     SUB EDI,ECX
LAB_0069bf5b:
0069BF5B  3B F8                     CMP EDI,EAX
0069BF5D  7D 0B                     JGE 0x0069bf6a
0069BF5F  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0069BF62  85 C0                     TEST EAX,EAX
0069BF64  0F 85 65 FF FF FF         JNZ 0x0069becf
LAB_0069bf6a:
0069BF6A  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0069BF6D  03 4D 14                  ADD ECX,dword ptr [EBP + 0x14]
0069BF70  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
0069BF73  33 FF                     XOR EDI,EDI
0069BF75  8B 83 37 58 00 00         MOV EAX,dword ptr [EBX + 0x5837]
0069BF7B  3B C8                     CMP ECX,EAX
0069BF7D  7D 1F                     JGE 0x0069bf9e
0069BF7F  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0069BF82  85 C9                     TEST ECX,ECX
0069BF84  7C 0D                     JL 0x0069bf93
0069BF86  C1 E1 06                  SHL ECX,0x6
0069BF89  48                        DEC EAX
0069BF8A  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0069BF8D  39 44 11 FC               CMP dword ptr [ECX + EDX*0x1 + -0x4],EAX
0069BF91  7D 0B                     JGE 0x0069bf9e
LAB_0069bf93:
0069BF93  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0069BF96  85 C0                     TEST EAX,EAX
0069BF98  0F 85 EC FE FF FF         JNZ 0x0069be8a
LAB_0069bf9e:
0069BF9E  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
LAB_0069bfa1:
0069BFA1  85 D2                     TEST EDX,EDX
0069BFA3  0F 8C 36 02 00 00         JL 0x0069c1df
0069BFA9  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0069BFB0  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0069BFB3  8D 04 BD 00 00 00 00      LEA EAX,[EDI*0x4 + 0x0]
0069BFBA  83 C0 03                  ADD EAX,0x3
0069BFBD  24 FC                     AND AL,0xfc
0069BFBF  E8 7C 1A 09 00            CALL 0x0072da40
0069BFC4  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069BFC7  8B F4                     MOV ESI,ESP
0069BFC9  89 75 A8                  MOV dword ptr [EBP + -0x58],ESI
0069BFCC  8D 04 BD 00 00 00 00      LEA EAX,[EDI*0x4 + 0x0]
0069BFD3  83 C0 03                  ADD EAX,0x3
0069BFD6  24 FC                     AND AL,0xfc
0069BFD8  E8 63 1A 09 00            CALL 0x0072da40
0069BFDD  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069BFE0  8B C4                     MOV EAX,ESP
0069BFE2  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0069BFE5  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0069BFEC  68 DB 2A 40 00            PUSH 0x402adb
0069BFF1  6A 40                     PUSH 0x40
0069BFF3  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0069BFF6  50                        PUSH EAX
0069BFF7  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0069BFFA  51                        PUSH ECX
0069BFFB  E8 10 48 09 00            CALL 0x00730810
0069C000  83 C4 10                  ADD ESP,0x10
0069C003  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0069C006  0F AF 45 18               IMUL EAX,dword ptr [EBP + 0x18]
0069C00A  8B C8                     MOV ECX,EAX
0069C00C  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0069C011  F7 E9                     IMUL ECX
0069C013  C1 FA 05                  SAR EDX,0x5
0069C016  8B C2                     MOV EAX,EDX
0069C018  C1 E8 1F                  SHR EAX,0x1f
0069C01B  03 D0                     ADD EDX,EAX
0069C01D  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0069C020  33 C0                     XOR EAX,EAX
0069C022  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
0069C025  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0069C028  85 C9                     TEST ECX,ECX
0069C02A  7E 1D                     JLE 0x0069c049
LAB_0069c02c:
0069C02C  C1 E0 06                  SHL EAX,0x6
0069C02F  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0069C032  39 54 08 2C               CMP dword ptr [EAX + ECX*0x1 + 0x2c],EDX
0069C036  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
0069C039  7C 0B                     JL 0x0069c046
0069C03B  40                        INC EAX
0069C03C  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
0069C03F  3B 45 C8                  CMP EAX,dword ptr [EBP + -0x38]
0069C042  7C E8                     JL 0x0069c02c
0069C044  EB 03                     JMP 0x0069c049
LAB_0069c046:
0069C046  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
LAB_0069c049:
0069C049  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0069C04C  0F AF C7                  IMUL EAX,EDI
0069C04F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0069C052  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0069C055  D1 E0                     SHL EAX,0x1
0069C057  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0069C05A  C7 45 B4 00 00 00 00      MOV dword ptr [EBP + -0x4c],0x0
0069C061  78 6C                     JS 0x0069c0cf
0069C063  EB 03                     JMP 0x0069c068
LAB_0069c065:
0069C065  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
LAB_0069c068:
0069C068  52                        PUSH EDX
0069C069  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0069C06C  51                        PUSH ECX
0069C06D  57                        PUSH EDI
0069C06E  56                        PUSH ESI
0069C06F  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
0069C072  52                        PUSH EDX
0069C073  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
0069C076  50                        PUSH EAX
0069C077  8B CB                     MOV ECX,EBX
0069C079  E8 52 8E D6 FF            CALL 0x00404ed0
0069C07E  3B C7                     CMP EAX,EDI
0069C080  75 42                     JNZ 0x0069c0c4
0069C082  C7 45 C4 01 00 00 00      MOV dword ptr [EBP + -0x3c],0x1
0069C089  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0069C08C  51                        PUSH ECX
0069C08D  8D 55 98                  LEA EDX,[EBP + -0x68]
0069C090  52                        PUSH EDX
0069C091  68 22 01 00 00            PUSH 0x122
0069C096  57                        PUSH EDI
0069C097  56                        PUSH ESI
0069C098  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
0069C09B  50                        PUSH EAX
0069C09C  8B CB                     MOV ECX,EBX
0069C09E  E8 C6 90 D6 FF            CALL 0x00405169
0069C0A3  3B 45 B4                  CMP EAX,dword ptr [EBP + -0x4c]
0069C0A6  7E 1C                     JLE 0x0069c0c4
0069C0A8  8B CF                     MOV ECX,EDI
0069C0AA  8B 7D AC                  MOV EDI,dword ptr [EBP + -0x54]
0069C0AD  F3 A5                     MOVSD.REP ES:EDI,ESI
0069C0AF  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0069C0B2  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
0069C0B5  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
0069C0B8  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0069C0BB  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
0069C0BE  8B 75 A8                  MOV ESI,dword ptr [EBP + -0x58]
0069C0C1  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_0069c0c4:
0069C0C4  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
0069C0C7  48                        DEC EAX
0069C0C8  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0069C0CB  85 C0                     TEST EAX,EAX
0069C0CD  7D 96                     JGE 0x0069c065
LAB_0069c0cf:
0069C0CF  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0069C0D2  85 C0                     TEST EAX,EAX
0069C0D4  0F 84 05 01 00 00         JZ 0x0069c1df
0069C0DA  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
0069C0DD  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0069C0E0  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
0069C0E3  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
0069C0E6  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
0069C0E9  33 F6                     XOR ESI,ESI
0069C0EB  85 FF                     TEST EDI,EDI
0069C0ED  0F 8E E9 00 00 00         JLE 0x0069c1dc
LAB_0069c0f3:
0069C0F3  E8 C8 25 09 00            CALL 0x0072e6c0
0069C0F8  99                        CDQ
0069C0F9  B9 03 00 00 00            MOV ECX,0x3
0069C0FE  F7 F9                     IDIV ECX
0069C100  8B FA                     MOV EDI,EDX
0069C102  47                        INC EDI
0069C103  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
0069C106  E8 B5 25 09 00            CALL 0x0072e6c0
0069C10B  25 07 00 00 80            AND EAX,0x80000007
0069C110  79 05                     JNS 0x0069c117
0069C112  48                        DEC EAX
0069C113  83 C8 F8                  OR EAX,0xfffffff8
0069C116  40                        INC EAX
LAB_0069c117:
0069C117  8B 5D 8C                  MOV EBX,dword ptr [EBP + -0x74]
LAB_0069c11a:
0069C11A  8B CF                     MOV ECX,EDI
0069C11C  C1 E1 10                  SHL ECX,0x10
0069C11F  8B D0                     MOV EDX,EAX
0069C121  81 E2 FF FF 00 00         AND EDX,0xffff
0069C127  0B CA                     OR ECX,EDX
0069C129  33 D2                     XOR EDX,EDX
LAB_0069c12b:
0069C12B  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
0069C12E  3B D6                     CMP EDX,ESI
0069C130  8B 7D AC                  MOV EDI,dword ptr [EBP + -0x54]
0069C133  7D 39                     JGE 0x0069c16e
0069C135  8B 14 97                  MOV EDX,dword ptr [EDI + EDX*0x4]
0069C138  C1 E2 06                  SHL EDX,0x6
0069C13B  33 FF                     XOR EDI,EDI
0069C13D  66 8B 3C 1A               MOV DI,word ptr [EDX + EBX*0x1]
0069C141  3B F8                     CMP EDI,EAX
0069C143  74 06                     JZ 0x0069c14b
0069C145  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0069C148  42                        INC EDX
0069C149  EB E0                     JMP 0x0069c12b
LAB_0069c14b:
0069C14B  83 F8 07                  CMP EAX,0x7
0069C14E  7D 06                     JGE 0x0069c156
0069C150  40                        INC EAX
0069C151  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
0069C154  EB C4                     JMP 0x0069c11a
LAB_0069c156:
0069C156  33 C0                     XOR EAX,EAX
0069C158  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
0069C15B  47                        INC EDI
0069C15C  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
0069C15F  83 FF 03                  CMP EDI,0x3
0069C162  7E B6                     JLE 0x0069c11a
0069C164  BF 01 00 00 00            MOV EDI,0x1
0069C169  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
0069C16C  EB AC                     JMP 0x0069c11a
LAB_0069c16e:
0069C16E  8B 04 B7                  MOV EAX,dword ptr [EDI + ESI*0x4]
0069C171  C1 E0 06                  SHL EAX,0x6
0069C174  89 0C 18                  MOV dword ptr [EAX + EBX*0x1],ECX
0069C177  8B 0C B7                  MOV ECX,dword ptr [EDI + ESI*0x4]
0069C17A  C1 E1 06                  SHL ECX,0x6
0069C17D  03 4D 8C                  ADD ECX,dword ptr [EBP + -0x74]
0069C180  51                        PUSH ECX
0069C181  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0069C184  8B 42 18                  MOV EAX,dword ptr [EDX + 0x18]
0069C187  50                        PUSH EAX
0069C188  E8 33 20 01 00            CALL 0x006ae1c0
0069C18D  8B 0C B7                  MOV ECX,dword ptr [EDI + ESI*0x4]
0069C190  C1 E1 06                  SHL ECX,0x6
0069C193  8B 5D 8C                  MOV EBX,dword ptr [EBP + -0x74]
0069C196  03 CB                     ADD ECX,EBX
0069C198  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
0069C19B  2B 41 30                  SUB EAX,dword ptr [ECX + 0x30]
0069C19E  99                        CDQ
0069C19F  2B C2                     SUB EAX,EDX
0069C1A1  D1 F8                     SAR EAX,0x1
0069C1A3  66 03 41 30               ADD AX,word ptr [ECX + 0x30]
0069C1A7  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0069C1AA  66 89 04 B2               MOV word ptr [EDX + ESI*0x4],AX
0069C1AE  8B 04 B7                  MOV EAX,dword ptr [EDI + ESI*0x4]
0069C1B1  C1 E0 06                  SHL EAX,0x6
0069C1B4  8D 0C 18                  LEA ECX,[EAX + EBX*0x1]
0069C1B7  8B 41 3C                  MOV EAX,dword ptr [ECX + 0x3c]
0069C1BA  2B 41 34                  SUB EAX,dword ptr [ECX + 0x34]
0069C1BD  99                        CDQ
0069C1BE  2B C2                     SUB EAX,EDX
0069C1C0  D1 F8                     SAR EAX,0x1
0069C1C2  66 03 41 34               ADD AX,word ptr [ECX + 0x34]
0069C1C6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0069C1C9  66 89 44 B1 02            MOV word ptr [ECX + ESI*0x4 + 0x2],AX
0069C1CE  46                        INC ESI
0069C1CF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069C1D2  3B F0                     CMP ESI,EAX
0069C1D4  0F 8C 19 FF FF FF         JL 0x0069c0f3
0069C1DA  8B F8                     MOV EDI,EAX
LAB_0069c1dc:
0069C1DC  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
LAB_0069c1df:
0069C1DF  8D 45 8C                  LEA EAX,[EBP + -0x74]
0069C1E2  50                        PUSH EAX
0069C1E3  E8 78 EE 00 00            CALL 0x006ab060
0069C1E8  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0069C1EB  EB 31                     JMP 0x0069c21e
LAB_0069c21c:
0069C21C  33 C0                     XOR EAX,EAX
LAB_0069c21e:
0069C21E  8D A5 70 FF FF FF         LEA ESP,[EBP + 0xffffff70]
0069C224  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0069C227  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0069C22E  5F                        POP EDI
0069C22F  5E                        POP ESI
0069C230  5B                        POP EBX
0069C231  8B E5                     MOV ESP,EBP
0069C233  5D                        POP EBP
0069C234  C2 1C 00                  RET 0x1c
