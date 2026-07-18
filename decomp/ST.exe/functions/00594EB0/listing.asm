FSGSTy::OutTRGlProc:
00594EB0  55                        PUSH EBP
00594EB1  8B EC                     MOV EBP,ESP
00594EB3  83 EC 48                  SUB ESP,0x48
00594EB6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00594EB9  53                        PUSH EBX
00594EBA  56                        PUSH ESI
00594EBB  57                        PUSH EDI
00594EBC  85 C0                     TEST EAX,EAX
00594EBE  0F 84 0A 03 00 00         JZ 0x005951ce
00594EC4  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00594EC9  8D 55 BC                  LEA EDX,[EBP + -0x44]
00594ECC  8D 4D B8                  LEA ECX,[EBP + -0x48]
00594ECF  6A 00                     PUSH 0x0
00594ED1  52                        PUSH EDX
00594ED2  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00594ED5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00594EDB  E8 10 89 19 00            CALL 0x0072d7f0
00594EE0  8B F0                     MOV ESI,EAX
00594EE2  83 C4 08                  ADD ESP,0x8
00594EE5  85 F6                     TEST ESI,ESI
00594EE7  0F 85 A2 02 00 00         JNZ 0x0059518f
00594EED  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00594EF2  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00594EF5  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00594EF8  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00594EFB  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00594EFE  05 40 01 00 00            ADD EAX,0x140
00594F03  8D 4B A1                  LEA ECX,[EBX + -0x5f]
00594F06  50                        PUSH EAX
00594F07  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00594F0A  51                        PUSH ECX
00594F0B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00594F0E  52                        PUSH EDX
00594F0F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00594F12  56                        PUSH ESI
00594F13  50                        PUSH EAX
00594F14  51                        PUSH ECX
00594F15  52                        PUSH EDX
00594F16  57                        PUSH EDI
00594F17  E8 7D E1 E6 FF            CALL 0x00403099
00594F1C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00594F1F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00594F22  8D 83 55 FF FF FF         LEA EAX,[EBX + 0xffffff55]
00594F28  6A 00                     PUSH 0x0
00594F2A  6A 03                     PUSH 0x3
00594F2C  50                        PUSH EAX
00594F2D  8D 46 26                  LEA EAX,[ESI + 0x26]
00594F30  8D 4C 11 EB               LEA ECX,[ECX + EDX*0x1 + -0x15]
00594F34  6A 07                     PUSH 0x7
00594F36  50                        PUSH EAX
00594F37  51                        PUSH ECX
00594F38  57                        PUSH EDI
00594F39  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00594F3C  E8 1F 17 13 00            CALL 0x006c6660
00594F41  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00594F46  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00594F49  8B 88 40 01 00 00         MOV ECX,dword ptr [EAX + 0x140]
00594F4F  8D 83 55 FF FF FF         LEA EAX,[EBX + 0xffffff55]
00594F55  51                        PUSH ECX
00594F56  6A 03                     PUSH 0x3
00594F58  50                        PUSH EAX
00594F59  8D 46 26                  LEA EAX,[ESI + 0x26]
00594F5C  6A 07                     PUSH 0x7
00594F5E  50                        PUSH EAX
00594F5F  52                        PUSH EDX
00594F60  57                        PUSH EDI
00594F61  E8 0A 15 13 00            CALL 0x006c6470
00594F66  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00594F6B  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00594F71  6A 02                     PUSH 0x2
00594F73  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
00594F76  51                        PUSH ECX
00594F77  6A FF                     PUSH -0x1
00594F79  6A FF                     PUSH -0x1
00594F7B  52                        PUSH EDX
00594F7C  68 16 26 00 00            PUSH 0x2616
00594F81  E8 BA B1 11 00            CALL 0x006b0140
00594F86  50                        PUSH EAX
00594F87  6A 19                     PUSH 0x19
00594F89  8D 86 F8 00 00 00         LEA EAX,[ESI + 0xf8]
00594F8F  68 E6 00 00 00            PUSH 0xe6
00594F94  50                        PUSH EAX
00594F95  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00594F98  83 C0 0A                  ADD EAX,0xa
00594F9B  50                        PUSH EAX
00594F9C  6A 00                     PUSH 0x0
00594F9E  E8 8A FC E6 FF            CALL 0x00404c2d
00594FA3  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00594FA9  83 C4 28                  ADD ESP,0x28
00594FAC  8D 86 F8 00 00 00         LEA EAX,[ESI + 0xf8]
00594FB2  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
00594FB8  52                        PUSH EDX
00594FB9  6A 04                     PUSH 0x4
00594FBB  6A 19                     PUSH 0x19
00594FBD  68 E6 00 00 00            PUSH 0xe6
00594FC2  50                        PUSH EAX
00594FC3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00594FC6  83 C0 0A                  ADD EAX,0xa
00594FC9  50                        PUSH EAX
00594FCA  57                        PUSH EDI
00594FCB  E8 A0 14 13 00            CALL 0x006c6470
00594FD0  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00594FD6  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
00594FDC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00594FDF  52                        PUSH EDX
00594FE0  6A 04                     PUSH 0x4
00594FE2  6A 15                     PUSH 0x15
00594FE4  8D 86 FA 00 00 00         LEA EAX,[ESI + 0xfa]
00594FEA  68 E2 00 00 00            PUSH 0xe2
00594FEF  83 C1 0C                  ADD ECX,0xc
00594FF2  50                        PUSH EAX
00594FF3  51                        PUSH ECX
00594FF4  57                        PUSH EDI
00594FF5  E8 76 14 13 00            CALL 0x006c6470
00594FFA  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
00595000  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00595003  81 C2 40 01 00 00         ADD EDX,0x140
00595009  8D 4C 1E A4               LEA ECX,[ESI + EBX*0x1 + -0x5c]
0059500D  52                        PUSH EDX
0059500E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00595011  6A 5C                     PUSH 0x5c
00595013  50                        PUSH EAX
00595014  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00595017  51                        PUSH ECX
00595018  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0059501B  52                        PUSH EDX
0059501C  50                        PUSH EAX
0059501D  51                        PUSH ECX
0059501E  57                        PUSH EDI
0059501F  E8 75 E0 E6 FF            CALL 0x00403099
00595024  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00595029  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0059502C  83 C2 EC                  ADD EDX,-0x14
0059502F  6A 02                     PUSH 0x2
00595031  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
00595034  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00595037  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0059503D  51                        PUSH ECX
0059503E  6A FF                     PUSH -0x1
00595040  6A 00                     PUSH 0x0
00595042  52                        PUSH EDX
00595043  68 69 25 00 00            PUSH 0x2569
00595048  E8 F3 B0 11 00            CALL 0x006b0140
0059504D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00595050  50                        PUSH EAX
00595051  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00595054  6A 0F                     PUSH 0xf
00595056  50                        PUSH EAX
00595057  8D 4C 1E A9               LEA ECX,[ESI + EBX*0x1 + -0x57]
0059505B  8D 42 0A                  LEA EAX,[EDX + 0xa]
0059505E  51                        PUSH ECX
0059505F  50                        PUSH EAX
00595060  6A 00                     PUSH 0x0
00595062  E8 C6 FB E6 FF            CALL 0x00404c2d
00595067  A1 6C 17 81 00            MOV EAX,[0x0081176c]
0059506C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0059506F  83 C4 28                  ADD ESP,0x28
00595072  8B 88 40 01 00 00         MOV ECX,dword ptr [EAX + 0x140]
00595078  8D 44 1E BA               LEA EAX,[ESI + EBX*0x1 + -0x46]
0059507C  51                        PUSH ECX
0059507D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00595080  6A 16                     PUSH 0x16
00595082  52                        PUSH EDX
00595083  50                        PUSH EAX
00595084  8D 41 0A                  LEA EAX,[ECX + 0xa]
00595087  50                        PUSH EAX
00595088  57                        PUSH EDI
00595089  E8 C2 17 13 00            CALL 0x006c6850
0059508E  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
00595094  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0059509A  6A 02                     PUSH 0x2
0059509C  8B 42 34                  MOV EAX,dword ptr [EDX + 0x34]
0059509F  50                        PUSH EAX
005950A0  6A FF                     PUSH -0x1
005950A2  6A 00                     PUSH 0x0
005950A4  51                        PUSH ECX
005950A5  68 50 25 00 00            PUSH 0x2550
005950AA  E8 91 B0 11 00            CALL 0x006b0140
005950AF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005950B2  50                        PUSH EAX
005950B3  6A 0F                     PUSH 0xf
005950B5  52                        PUSH EDX
005950B6  8D 44 1E D1               LEA EAX,[ESI + EBX*0x1 + -0x2f]
005950BA  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005950BD  50                        PUSH EAX
005950BE  8D 41 0A                  LEA EAX,[ECX + 0xa]
005950C1  50                        PUSH EAX
005950C2  6A 00                     PUSH 0x0
005950C4  E8 64 FB E6 FF            CALL 0x00404c2d
005950C9  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005950CF  83 C4 28                  ADD ESP,0x28
005950D2  8D 4C 1E E2               LEA ECX,[ESI + EBX*0x1 + -0x1e]
005950D6  8B 82 40 01 00 00         MOV EAX,dword ptr [EDX + 0x140]
005950DC  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005950DF  50                        PUSH EAX
005950E0  6A 16                     PUSH 0x16
005950E2  6A 64                     PUSH 0x64
005950E4  8D 42 0A                  LEA EAX,[EDX + 0xa]
005950E7  51                        PUSH ECX
005950E8  50                        PUSH EAX
005950E9  57                        PUSH EDI
005950EA  E8 61 17 13 00            CALL 0x006c6850
005950EF  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005950F4  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005950FA  6A 02                     PUSH 0x2
005950FC  8D 9E 55 01 00 00         LEA EBX,[ESI + 0x155]
00595102  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
00595105  51                        PUSH ECX
00595106  6A FF                     PUSH -0x1
00595108  6A FF                     PUSH -0x1
0059510A  52                        PUSH EDX
0059510B  68 66 25 00 00            PUSH 0x2566
00595110  E8 2B B0 11 00            CALL 0x006b0140
00595115  50                        PUSH EAX
00595116  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00595119  6A 19                     PUSH 0x19
0059511B  68 A0 00 00 00            PUSH 0xa0
00595120  83 C0 78                  ADD EAX,0x78
00595123  53                        PUSH EBX
00595124  50                        PUSH EAX
00595125  6A 00                     PUSH 0x0
00595127  E8 01 FB E6 FF            CALL 0x00404c2d
0059512C  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00595132  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00595135  83 C4 28                  ADD ESP,0x28
00595138  83 C0 78                  ADD EAX,0x78
0059513B  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
00595141  52                        PUSH EDX
00595142  6A 04                     PUSH 0x4
00595144  6A 19                     PUSH 0x19
00595146  68 A0 00 00 00            PUSH 0xa0
0059514B  53                        PUSH EBX
0059514C  50                        PUSH EAX
0059514D  57                        PUSH EDI
0059514E  E8 1D 13 13 00            CALL 0x006c6470
00595153  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00595159  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0059515C  81 C6 57 01 00 00         ADD ESI,0x157
00595162  83 C0 7A                  ADD EAX,0x7a
00595165  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
0059516B  52                        PUSH EDX
0059516C  6A 04                     PUSH 0x4
0059516E  6A 15                     PUSH 0x15
00595170  68 9C 00 00 00            PUSH 0x9c
00595175  56                        PUSH ESI
00595176  50                        PUSH EAX
00595177  57                        PUSH EDI
00595178  E8 F3 12 13 00            CALL 0x006c6470
0059517D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00595180  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00595186  5F                        POP EDI
00595187  5E                        POP ESI
00595188  5B                        POP EBX
00595189  8B E5                     MOV ESP,EBP
0059518B  5D                        POP EBP
0059518C  C2 20 00                  RET 0x20
LAB_0059518f:
0059518F  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00595192  68 B0 BF 7C 00            PUSH 0x7cbfb0
00595197  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059519C  56                        PUSH ESI
0059519D  6A 00                     PUSH 0x0
0059519F  68 8C 00 00 00            PUSH 0x8c
005951A4  68 70 BF 7C 00            PUSH 0x7cbf70
005951A9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005951AF  E8 1C 83 11 00            CALL 0x006ad4d0
005951B4  83 C4 18                  ADD ESP,0x18
005951B7  85 C0                     TEST EAX,EAX
005951B9  74 01                     JZ 0x005951bc
005951BB  CC                        INT3
LAB_005951bc:
005951BC  68 8C 00 00 00            PUSH 0x8c
005951C1  68 70 BF 7C 00            PUSH 0x7cbf70
005951C6  6A 00                     PUSH 0x0
005951C8  56                        PUSH ESI
005951C9  E8 72 0C 11 00            CALL 0x006a5e40
LAB_005951ce:
005951CE  5F                        POP EDI
005951CF  5E                        POP ESI
005951D0  5B                        POP EBX
005951D1  8B E5                     MOV ESP,EBP
005951D3  5D                        POP EBP
005951D4  C2 20 00                  RET 0x20
