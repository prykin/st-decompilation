FUN_0069ece0:
0069ECE0  55                        PUSH EBP
0069ECE1  8B EC                     MOV EBP,ESP
0069ECE3  81 EC 98 01 00 00         SUB ESP,0x198
0069ECE9  53                        PUSH EBX
0069ECEA  56                        PUSH ESI
0069ECEB  8B F1                     MOV ESI,ECX
0069ECED  57                        PUSH EDI
0069ECEE  B8 ED 03 00 00            MOV EAX,0x3ed
0069ECF3  B9 F2 03 00 00            MOV ECX,0x3f2
0069ECF8  BF F1 03 00 00            MOV EDI,0x3f1
0069ECFD  BB EB 03 00 00            MOV EBX,0x3eb
0069ED02  BA EE 03 00 00            MOV EDX,0x3ee
0069ED07  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0069ED0E  89 8D 68 FE FF FF         MOV dword ptr [EBP + 0xfffffe68],ECX
0069ED14  89 85 6C FE FF FF         MOV dword ptr [EBP + 0xfffffe6c],EAX
0069ED1A  C7 85 70 FE FF FF EC 03 00 00  MOV dword ptr [EBP + 0xfffffe70],0x3ec
0069ED24  89 BD 74 FE FF FF         MOV dword ptr [EBP + 0xfffffe74],EDI
0069ED2A  89 8D 78 FE FF FF         MOV dword ptr [EBP + 0xfffffe78],ECX
0069ED30  89 85 7C FE FF FF         MOV dword ptr [EBP + 0xfffffe7c],EAX
0069ED36  89 9D 80 FE FF FF         MOV dword ptr [EBP + 0xfffffe80],EBX
0069ED3C  89 8D 84 FE FF FF         MOV dword ptr [EBP + 0xfffffe84],ECX
0069ED42  C7 85 88 FE FF FF E9 03 00 00  MOV dword ptr [EBP + 0xfffffe88],0x3e9
0069ED4C  89 85 8C FE FF FF         MOV dword ptr [EBP + 0xfffffe8c],EAX
0069ED52  C7 85 90 FE FF FF EF 03 00 00  MOV dword ptr [EBP + 0xfffffe90],0x3ef
0069ED5C  89 85 94 FE FF FF         MOV dword ptr [EBP + 0xfffffe94],EAX
0069ED62  89 95 98 FE FF FF         MOV dword ptr [EBP + 0xfffffe98],EDX
0069ED68  89 BD 9C FE FF FF         MOV dword ptr [EBP + 0xfffffe9c],EDI
0069ED6E  89 8D A0 FE FF FF         MOV dword ptr [EBP + 0xfffffea0],ECX
0069ED74  89 85 A4 FE FF FF         MOV dword ptr [EBP + 0xfffffea4],EAX
0069ED7A  89 9D A8 FE FF FF         MOV dword ptr [EBP + 0xfffffea8],EBX
0069ED80  89 8D AC FE FF FF         MOV dword ptr [EBP + 0xfffffeac],ECX
0069ED86  89 95 B0 FE FF FF         MOV dword ptr [EBP + 0xfffffeb0],EDX
0069ED8C  89 85 B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],EAX
0069ED92  89 85 B8 FE FF FF         MOV dword ptr [EBP + 0xfffffeb8],EAX
0069ED98  89 85 BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],EAX
0069ED9E  89 85 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EAX
0069EDA4  89 BD C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EDI
0069EDAA  89 85 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EAX
0069EDB0  89 85 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EAX
0069EDB6  89 85 D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],EAX
0069EDBC  89 85 D4 FE FF FF         MOV dword ptr [EBP + 0xfffffed4],EAX
0069EDC2  89 85 D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],EAX
0069EDC8  89 85 DC FE FF FF         MOV dword ptr [EBP + 0xfffffedc],EAX
0069EDCE  89 85 E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],EAX
0069EDD4  89 85 E4 FE FF FF         MOV dword ptr [EBP + 0xfffffee4],EAX
0069EDDA  89 85 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EAX
0069EDE0  89 BD EC FE FF FF         MOV dword ptr [EBP + 0xfffffeec],EDI
0069EDE6  89 85 F0 FE FF FF         MOV dword ptr [EBP + 0xfffffef0],EAX
0069EDEC  89 85 F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],EAX
0069EDF2  89 85 F8 FE FF FF         MOV dword ptr [EBP + 0xfffffef8],EAX
0069EDF8  89 85 FC FE FF FF         MOV dword ptr [EBP + 0xfffffefc],EAX
0069EDFE  89 85 00 FF FF FF         MOV dword ptr [EBP + 0xffffff00],EAX
0069EE04  89 85 04 FF FF FF         MOV dword ptr [EBP + 0xffffff04],EAX
0069EE0A  89 85 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],EAX
0069EE10  89 85 0C FF FF FF         MOV dword ptr [EBP + 0xffffff0c],EAX
0069EE16  89 85 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EAX
0069EE1C  89 BD 14 FF FF FF         MOV dword ptr [EBP + 0xffffff14],EDI
0069EE22  89 85 18 FF FF FF         MOV dword ptr [EBP + 0xffffff18],EAX
0069EE28  89 85 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],EAX
0069EE2E  89 85 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EAX
0069EE34  89 85 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],EAX
0069EE3A  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
0069EE40  89 85 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],EAX
0069EE46  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
0069EE4C  89 85 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EAX
0069EE52  89 95 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EDX
0069EE58  89 BD 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EDI
0069EE5E  89 95 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EDX
0069EE64  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
0069EE6A  89 95 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EDX
0069EE70  89 95 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EDX
0069EE76  89 95 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EDX
0069EE7C  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
0069EE82  89 8D 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],ECX
0069EE88  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
0069EE8E  C7 85 60 FF FF FF EC 03 00 00  MOV dword ptr [EBP + 0xffffff60],0x3ec
0069EE98  89 BD 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDI
0069EE9E  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
0069EEA4  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
0069EEAA  89 9D 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EBX
0069EEB0  89 8D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ECX
0069EEB6  89 95 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDX
0069EEBC  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
0069EEC2  89 4D 80                  MOV dword ptr [EBP + -0x80],ECX
0069EEC5  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
0069EEC8  BA EC 03 00 00            MOV EDX,0x3ec
0069EECD  89 7D 8C                  MOV dword ptr [EBP + -0x74],EDI
0069EED0  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
0069EED3  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
0069EED6  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
0069EED9  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
0069EEDC  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
0069EEDF  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0069EEE2  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
0069EEE5  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
0069EEE8  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0069EEEB  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
0069EEEE  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0069EEF1  B9 0A 00 00 00            MOV ECX,0xa
0069EEF6  33 C0                     XOR EAX,EAX
0069EEF8  8D 7D D0                  LEA EDI,[EBP + -0x30]
0069EEFB  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
0069EEFE  89 5D 98                  MOV dword ptr [EBP + -0x68],EBX
0069EF01  C7 45 A0 E9 03 00 00      MOV dword ptr [EBP + -0x60],0x3e9
0069EF08  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
0069EF0B  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
0069EF0E  C7 45 C8 E9 03 00 00      MOV dword ptr [EBP + -0x38],0x3e9
0069EF15  F3 AB                     STOSD.REP ES:EDI
0069EF17  8B CE                     MOV ECX,ESI
0069EF19  E8 C6 37 D6 FF            CALL 0x004026e4
0069EF1E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069EF21  85 C0                     TEST EAX,EAX
0069EF23  0F 8E 11 01 00 00         JLE 0x0069f03a
0069EF29  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0069ef2c:
0069EF2C  E8 8F F7 08 00            CALL 0x0072e6c0
0069EF31  8B 8E 33 58 00 00         MOV ECX,dword ptr [ESI + 0x5833]
0069EF37  99                        CDQ
0069EF38  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0069EF3B  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0069EF3E  8D 0C 8D 9D FF FF FF      LEA ECX,[ECX*0x4 + 0xffffff9d]
0069EF45  F7 F9                     IDIV ECX
0069EF47  8B DA                     MOV EBX,EDX
0069EF49  E8 72 F7 08 00            CALL 0x0072e6c0
0069EF4E  8B 8E 37 58 00 00         MOV ECX,dword ptr [ESI + 0x5837]
0069EF54  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0069EF57  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
0069EF5A  8D 0C 95 9D FF FF FF      LEA ECX,[EDX*0x4 + 0xffffff9d]
0069EF61  99                        CDQ
0069EF62  F7 F9                     IDIV ECX
0069EF64  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069EF67  50                        PUSH EAX
0069EF68  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0069EF6D  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0069EF70  F7 EA                     IMUL EDX
0069EF72  C1 FA 06                  SAR EDX,0x6
0069EF75  8B CA                     MOV ECX,EDX
0069EF77  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0069EF7C  C1 E9 1F                  SHR ECX,0x1f
0069EF7F  03 D1                     ADD EDX,ECX
0069EF81  8B CE                     MOV ECX,ESI
0069EF83  52                        PUSH EDX
0069EF84  F7 EB                     IMUL EBX
0069EF86  C1 FA 06                  SAR EDX,0x6
0069EF89  8B C2                     MOV EAX,EDX
0069EF8B  C1 E8 1F                  SHR EAX,0x1f
0069EF8E  03 D0                     ADD EDX,EAX
0069EF90  52                        PUSH EDX
0069EF91  E8 57 47 D6 FF            CALL 0x004036ed
0069EF96  8B F8                     MOV EDI,EAX
0069EF98  E8 23 F7 08 00            CALL 0x0072e6c0
0069EF9D  99                        CDQ
0069EF9E  B9 0A 00 00 00            MOV ECX,0xa
0069EFA3  F7 F9                     IDIV ECX
0069EFA5  8D 47 FF                  LEA EAX,[EDI + -0x1]
0069EFA8  83 F8 08                  CMP EAX,0x8
0069EFAB  77 65                     JA 0x0069f012
switchD_0069efad::switchD:
0069EFAD  FF 24 85 4C F0 69 00      JMP dword ptr [EAX*0x4 + 0x69f04c]
switchD_0069efad::caseD_1:
0069EFB4  8B 94 95 68 FE FF FF      MOV EDX,dword ptr [EBP + EDX*0x4 + 0xfffffe68]
0069EFBB  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0069EFBE  EB 52                     JMP 0x0069f012
switchD_0069efad::caseD_2:
0069EFC0  8B 84 95 90 FE FF FF      MOV EAX,dword ptr [EBP + EDX*0x4 + 0xfffffe90]
0069EFC7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0069EFCA  EB 46                     JMP 0x0069f012
switchD_0069efad::caseD_3:
0069EFCC  8B 8C 95 B8 FE FF FF      MOV ECX,dword ptr [EBP + EDX*0x4 + 0xfffffeb8]
0069EFD3  EB 3A                     JMP 0x0069f00f
switchD_0069efad::caseD_4:
0069EFD5  8B 94 95 E0 FE FF FF      MOV EDX,dword ptr [EBP + EDX*0x4 + 0xfffffee0]
0069EFDC  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0069EFDF  EB 31                     JMP 0x0069f012
switchD_0069efad::caseD_5:
0069EFE1  8B 84 95 08 FF FF FF      MOV EAX,dword ptr [EBP + EDX*0x4 + 0xffffff08]
0069EFE8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0069EFEB  EB 25                     JMP 0x0069f012
switchD_0069efad::caseD_6:
0069EFED  8B 8C 95 30 FF FF FF      MOV ECX,dword ptr [EBP + EDX*0x4 + 0xffffff30]
0069EFF4  EB 19                     JMP 0x0069f00f
switchD_0069efad::caseD_7:
0069EFF6  8B 94 95 58 FF FF FF      MOV EDX,dword ptr [EBP + EDX*0x4 + 0xffffff58]
0069EFFD  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0069F000  EB 10                     JMP 0x0069f012
switchD_0069efad::caseD_8:
0069F002  8B 44 95 80               MOV EAX,dword ptr [EBP + EDX*0x4 + -0x80]
0069F006  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0069F009  EB 07                     JMP 0x0069f012
switchD_0069efad::caseD_9:
0069F00B  8B 4C 95 A8               MOV ECX,dword ptr [EBP + EDX*0x4 + -0x58]
LAB_0069f00f:
0069F00F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
switchD_0069efad::default:
0069F012  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0069F015  8B CE                     MOV ECX,ESI
0069F017  57                        PUSH EDI
0069F018  E8 FB 5C D6 FF            CALL 0x00404d18
0069F01D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0069F020  50                        PUSH EAX
0069F021  57                        PUSH EDI
0069F022  6A 00                     PUSH 0x0
0069F024  52                        PUSH EDX
0069F025  53                        PUSH EBX
0069F026  8B CE                     MOV ECX,ESI
0069F028  E8 29 38 D6 FF            CALL 0x00402856
0069F02D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069F030  48                        DEC EAX
0069F031  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0069F034  0F 85 F2 FE FF FF         JNZ 0x0069ef2c
LAB_0069f03a:
0069F03A  8B CE                     MOV ECX,ESI
0069F03C  E8 C4 47 D6 FF            CALL 0x00403805
0069F041  5F                        POP EDI
0069F042  5E                        POP ESI
0069F043  5B                        POP EBX
0069F044  8B E5                     MOV ESP,EBP
0069F046  5D                        POP EBP
0069F047  C2 08 00                  RET 0x8
