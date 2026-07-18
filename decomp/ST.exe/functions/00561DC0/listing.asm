FUN_00561dc0:
00561DC0  55                        PUSH EBP
00561DC1  8B EC                     MOV EBP,ESP
00561DC3  83 EC 1C                  SUB ESP,0x1c
00561DC6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00561DC9  C1 E0 10                  SHL EAX,0x10
00561DCC  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00561DCF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00561DD2  C1 E0 10                  SHL EAX,0x10
00561DD5  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00561DD8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00561DDB  85 C0                     TEST EAX,EAX
00561DDD  7E 06                     JLE 0x00561de5
00561DDF  48                        DEC EAX
00561DE0  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00561DE3  EB 0A                     JMP 0x00561def
LAB_00561de5:
00561DE5  C7 45 F4 0F 00 00 00      MOV dword ptr [EBP + -0xc],0xf
00561DEC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_00561def:
00561DEF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00561DF2  53                        PUSH EBX
00561DF3  56                        PUSH ESI
00561DF4  57                        PUSH EDI
00561DF5  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00561DF8  C1 E0 03                  SHL EAX,0x3
00561DFB  99                        CDQ
00561DFC  83 E2 0F                  AND EDX,0xf
00561DFF  03 C2                     ADD EAX,EDX
00561E01  8B F0                     MOV ESI,EAX
00561E03  C1 FE 04                  SAR ESI,0x4
00561E06  56                        PUSH ESI
00561E07  E8 C4 98 17 00            CALL 0x006db6d0
00561E0C  56                        PUSH ESI
00561E0D  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00561E10  E8 2B 98 17 00            CALL 0x006db640
00561E15  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00561E18  8B F8                     MOV EDI,EAX
00561E1A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00561E1D  33 DB                     XOR EBX,EBX
00561E1F  F7 DF                     NEG EDI
00561E21  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
00561E24  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00561E27  03 C2                     ADD EAX,EDX
00561E29  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00561E2C  8D 14 79                  LEA EDX,[ECX + EDI*0x2]
00561E2F  8B CF                     MOV ECX,EDI
00561E31  03 CA                     ADD ECX,EDX
00561E33  8B 15 68 33 80 00         MOV EDX,dword ptr [0x00803368]
00561E39  85 D2                     TEST EDX,EDX
00561E3B  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00561E3E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00561E41  7E 7F                     JLE 0x00561ec2
LAB_00561e43:
00561E43  C1 F8 10                  SAR EAX,0x10
00561E46  C1 F9 10                  SAR ECX,0x10
00561E49  85 C0                     TEST EAX,EAX
00561E4B  7C 45                     JL 0x00561e92
00561E4D  8B 15 A4 33 80 00         MOV EDX,dword ptr [0x008033a4]
00561E53  3B C2                     CMP EAX,EDX
00561E55  7D 3B                     JGE 0x00561e92
00561E57  85 C9                     TEST ECX,ECX
00561E59  7C 37                     JL 0x00561e92
00561E5B  3B 0D A8 33 80 00         CMP ECX,dword ptr [0x008033a8]
00561E61  7D 2F                     JGE 0x00561e92
00561E63  0F AF D1                  IMUL EDX,ECX
00561E66  8B 35 B4 33 80 00         MOV ESI,dword ptr [0x008033b4]
00561E6C  03 D0                     ADD EDX,EAX
00561E6E  0F BF 34 56               MOVSX ESI,word ptr [ESI + EDX*0x2]
00561E72  85 F6                     TEST ESI,ESI
00561E74  7E 1C                     JLE 0x00561e92
00561E76  51                        PUSH ECX
00561E77  8B 0D 04 33 80 00         MOV ECX,dword ptr [0x00803304]
00561E7D  50                        PUSH EAX
00561E7E  A1 08 33 80 00            MOV EAX,[0x00803308]
00561E83  50                        PUSH EAX
00561E84  51                        PUSH ECX
00561E85  E8 1F 25 EA FF            CALL 0x004043a9
00561E8A  2B F0                     SUB ESI,EAX
00561E8C  8D 5C 33 FF               LEA EBX,[EBX + ESI*0x1 + -0x1]
00561E90  EB 06                     JMP 0x00561e98
LAB_00561e92:
00561E92  03 1D 44 33 80 00         ADD EBX,dword ptr [0x00803344]
LAB_00561e98:
00561E98  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00561E9B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00561E9E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00561EA1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00561EA4  03 C6                     ADD EAX,ESI
00561EA6  8B 35 68 33 80 00         MOV ESI,dword ptr [0x00803368]
00561EAC  03 CF                     ADD ECX,EDI
00561EAE  42                        INC EDX
00561EAF  3B D6                     CMP EDX,ESI
00561EB1  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00561EB4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00561EB7  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00561EBA  7C 87                     JL 0x00561e43
00561EBC  85 DB                     TEST EBX,EBX
00561EBE  7D 02                     JGE 0x00561ec2
00561EC0  33 DB                     XOR EBX,EBX
LAB_00561ec2:
00561EC2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00561EC5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00561EC8  83 F8 0F                  CMP EAX,0xf
00561ECB  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00561ECE  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00561ED1  7D 06                     JGE 0x00561ed9
00561ED3  40                        INC EAX
00561ED4  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00561ED7  EB 0A                     JMP 0x00561ee3
LAB_00561ed9:
00561ED9  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00561EE0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_00561ee3:
00561EE3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00561EE6  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00561EE9  C1 E0 03                  SHL EAX,0x3
00561EEC  99                        CDQ
00561EED  83 E2 0F                  AND EDX,0xf
00561EF0  03 C2                     ADD EAX,EDX
00561EF2  8B F0                     MOV ESI,EAX
00561EF4  C1 FE 04                  SAR ESI,0x4
00561EF7  56                        PUSH ESI
00561EF8  E8 D3 97 17 00            CALL 0x006db6d0
00561EFD  56                        PUSH ESI
00561EFE  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00561F01  E8 3A 97 17 00            CALL 0x006db640
00561F06  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00561F09  8B F8                     MOV EDI,EAX
00561F0B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00561F0E  33 DB                     XOR EBX,EBX
00561F10  F7 DF                     NEG EDI
00561F12  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
00561F15  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00561F18  03 C2                     ADD EAX,EDX
00561F1A  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00561F1D  8D 14 79                  LEA EDX,[ECX + EDI*0x2]
00561F20  8B CF                     MOV ECX,EDI
00561F22  03 CA                     ADD ECX,EDX
00561F24  8B 15 68 33 80 00         MOV EDX,dword ptr [0x00803368]
00561F2A  85 D2                     TEST EDX,EDX
00561F2C  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00561F2F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00561F32  7E 7F                     JLE 0x00561fb3
LAB_00561f34:
00561F34  C1 F8 10                  SAR EAX,0x10
00561F37  C1 F9 10                  SAR ECX,0x10
00561F3A  85 C0                     TEST EAX,EAX
00561F3C  7C 45                     JL 0x00561f83
00561F3E  8B 15 A4 33 80 00         MOV EDX,dword ptr [0x008033a4]
00561F44  3B C2                     CMP EAX,EDX
00561F46  7D 3B                     JGE 0x00561f83
00561F48  85 C9                     TEST ECX,ECX
00561F4A  7C 37                     JL 0x00561f83
00561F4C  3B 0D A8 33 80 00         CMP ECX,dword ptr [0x008033a8]
00561F52  7D 2F                     JGE 0x00561f83
00561F54  0F AF D1                  IMUL EDX,ECX
00561F57  8B 35 B4 33 80 00         MOV ESI,dword ptr [0x008033b4]
00561F5D  03 D0                     ADD EDX,EAX
00561F5F  0F BF 34 56               MOVSX ESI,word ptr [ESI + EDX*0x2]
00561F63  85 F6                     TEST ESI,ESI
00561F65  7E 1C                     JLE 0x00561f83
00561F67  51                        PUSH ECX
00561F68  8B 0D 04 33 80 00         MOV ECX,dword ptr [0x00803304]
00561F6E  50                        PUSH EAX
00561F6F  A1 08 33 80 00            MOV EAX,[0x00803308]
00561F74  50                        PUSH EAX
00561F75  51                        PUSH ECX
00561F76  E8 2E 24 EA FF            CALL 0x004043a9
00561F7B  2B F0                     SUB ESI,EAX
00561F7D  8D 5C 33 FF               LEA EBX,[EBX + ESI*0x1 + -0x1]
00561F81  EB 06                     JMP 0x00561f89
LAB_00561f83:
00561F83  03 1D 44 33 80 00         ADD EBX,dword ptr [0x00803344]
LAB_00561f89:
00561F89  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00561F8C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00561F8F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00561F92  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00561F95  03 C6                     ADD EAX,ESI
00561F97  8B 35 68 33 80 00         MOV ESI,dword ptr [0x00803368]
00561F9D  03 CF                     ADD ECX,EDI
00561F9F  42                        INC EDX
00561FA0  3B D6                     CMP EDX,ESI
00561FA2  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00561FA5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00561FA8  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00561FAB  7C 87                     JL 0x00561f34
00561FAD  85 DB                     TEST EBX,EBX
00561FAF  7D 02                     JGE 0x00561fb3
00561FB1  33 DB                     XOR EBX,EBX
LAB_00561fb3:
00561FB3  39 5D E8                  CMP dword ptr [EBP + -0x18],EBX
00561FB6  7E 09                     JLE 0x00561fc1
00561FB8  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00561FBB  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00561FBE  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
LAB_00561fc1:
00561FC1  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00561FC4  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00561FC7  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00561FCA  C1 E0 03                  SHL EAX,0x3
00561FCD  99                        CDQ
00561FCE  83 E2 0F                  AND EDX,0xf
00561FD1  03 C2                     ADD EAX,EDX
00561FD3  8B F0                     MOV ESI,EAX
00561FD5  C1 FE 04                  SAR ESI,0x4
00561FD8  56                        PUSH ESI
00561FD9  E8 F2 96 17 00            CALL 0x006db6d0
00561FDE  56                        PUSH ESI
00561FDF  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00561FE2  E8 59 96 17 00            CALL 0x006db640
00561FE7  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00561FEA  8B F8                     MOV EDI,EAX
00561FEC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00561FEF  33 DB                     XOR EBX,EBX
00561FF1  F7 DF                     NEG EDI
00561FF3  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
00561FF6  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00561FF9  03 C2                     ADD EAX,EDX
00561FFB  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00561FFE  8D 14 79                  LEA EDX,[ECX + EDI*0x2]
00562001  8B CF                     MOV ECX,EDI
00562003  03 CA                     ADD ECX,EDX
00562005  8B 15 68 33 80 00         MOV EDX,dword ptr [0x00803368]
0056200B  3B D3                     CMP EDX,EBX
0056200D  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00562010  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00562013  7E 79                     JLE 0x0056208e
LAB_00562015:
00562015  C1 F8 10                  SAR EAX,0x10
00562018  C1 F9 10                  SAR ECX,0x10
0056201B  85 C0                     TEST EAX,EAX
0056201D  7C 45                     JL 0x00562064
0056201F  8B 15 A4 33 80 00         MOV EDX,dword ptr [0x008033a4]
00562025  3B C2                     CMP EAX,EDX
00562027  7D 3B                     JGE 0x00562064
00562029  85 C9                     TEST ECX,ECX
0056202B  7C 37                     JL 0x00562064
0056202D  3B 0D A8 33 80 00         CMP ECX,dword ptr [0x008033a8]
00562033  7D 2F                     JGE 0x00562064
00562035  0F AF D1                  IMUL EDX,ECX
00562038  8B 35 B4 33 80 00         MOV ESI,dword ptr [0x008033b4]
0056203E  03 D0                     ADD EDX,EAX
00562040  0F BF 34 56               MOVSX ESI,word ptr [ESI + EDX*0x2]
00562044  85 F6                     TEST ESI,ESI
00562046  7E 1C                     JLE 0x00562064
00562048  51                        PUSH ECX
00562049  8B 0D 04 33 80 00         MOV ECX,dword ptr [0x00803304]
0056204F  50                        PUSH EAX
00562050  A1 08 33 80 00            MOV EAX,[0x00803308]
00562055  50                        PUSH EAX
00562056  51                        PUSH ECX
00562057  E8 4D 23 EA FF            CALL 0x004043a9
0056205C  2B F0                     SUB ESI,EAX
0056205E  8D 5C 33 FF               LEA EBX,[EBX + ESI*0x1 + -0x1]
00562062  EB 06                     JMP 0x0056206a
LAB_00562064:
00562064  03 1D 44 33 80 00         ADD EBX,dword ptr [0x00803344]
LAB_0056206a:
0056206A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0056206D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00562070  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00562073  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00562076  03 C6                     ADD EAX,ESI
00562078  8B 35 68 33 80 00         MOV ESI,dword ptr [0x00803368]
0056207E  03 CF                     ADD ECX,EDI
00562080  42                        INC EDX
00562081  3B D6                     CMP EDX,ESI
00562083  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00562086  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00562089  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0056208C  7C 87                     JL 0x00562015
LAB_0056208e:
0056208E  8B 0D 38 33 80 00         MOV ECX,dword ptr [0x00803338]
00562094  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00562097  2B D9                     SUB EBX,ECX
00562099  5F                        POP EDI
0056209A  5E                        POP ESI
0056209B  3B C3                     CMP EAX,EBX
0056209D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005620A0  5B                        POP EBX
005620A1  7F 03                     JG 0x005620a6
005620A3  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_005620a6:
005620A6  8B E5                     MOV ESP,EBP
005620A8  5D                        POP EBP
005620A9  C2 0C 00                  RET 0xc
