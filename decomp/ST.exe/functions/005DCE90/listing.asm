FUN_005dce90:
005DCE90  55                        PUSH EBP
005DCE91  8B EC                     MOV EBP,ESP
005DCE93  81 EC 88 00 00 00         SUB ESP,0x88
005DCE99  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DCE9E  53                        PUSH EBX
005DCE9F  56                        PUSH ESI
005DCEA0  57                        PUSH EDI
005DCEA1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005DCEA4  33 FF                     XOR EDI,EDI
005DCEA6  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
005DCEAC  8D 8D 78 FF FF FF         LEA ECX,[EBP + 0xffffff78]
005DCEB2  57                        PUSH EDI
005DCEB3  52                        PUSH EDX
005DCEB4  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
005DCEBA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DCEC0  E8 2B 09 15 00            CALL 0x0072d7f0
005DCEC5  8B F0                     MOV ESI,EAX
005DCEC7  83 C4 08                  ADD ESP,0x8
005DCECA  3B F7                     CMP ESI,EDI
005DCECC  0F 85 05 04 00 00         JNZ 0x005dd2d7
005DCED2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005DCED5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005DCED8  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005DCEDB  3D 20 61 00 00            CMP EAX,0x6120
005DCEE0  0F 87 B6 02 00 00         JA 0x005dd19c
005DCEE6  3D 20 61 00 00            CMP EAX,0x6120
005DCEEB  0F 84 82 02 00 00         JZ 0x005dd173
005DCEF1  3D 05 61 00 00            CMP EAX,0x6105
005DCEF6  0F 87 F7 01 00 00         JA 0x005dd0f3
005DCEFC  0F 84 C8 01 00 00         JZ 0x005dd0ca
005DCF02  3D 03 61 00 00            CMP EAX,0x6103
005DCF07  0F 87 89 01 00 00         JA 0x005dd096
005DCF0D  0F 84 5A 01 00 00         JZ 0x005dd06d
005DCF13  83 F8 08                  CMP EAX,0x8
005DCF16  0F 84 FA 00 00 00         JZ 0x005dd016
005DCF1C  3D 02 61 00 00            CMP EAX,0x6102
005DCF21  0F 85 93 03 00 00         JNZ 0x005dd2ba
005DCF27  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
005DCF2A  8D 7B 20                  LEA EDI,[EBX + 0x20]
005DCF2D  85 C0                     TEST EAX,EAX
005DCF2F  74 08                     JZ 0x005dcf39
005DCF31  50                        PUSH EAX
005DCF32  8B CB                     MOV ECX,EBX
005DCF34  E8 77 87 10 00            CALL 0x006e56b0
LAB_005dcf39:
005DCF39  A1 72 FB 80 00            MOV EAX,[0x0080fb72]
005DCF3E  85 C0                     TEST EAX,EAX
005DCF40  0F 85 A3 00 00 00         JNZ 0x005dcfe9
005DCF46  A0 68 17 81 00            MOV AL,[0x00811768]
005DCF4B  3C 02                     CMP AL,0x2
005DCF4D  0F 84 96 00 00 00         JZ 0x005dcfe9
005DCF53  3C 01                     CMP AL,0x1
005DCF55  75 78                     JNZ 0x005dcfcf
005DCF57  A1 64 17 81 00            MOV EAX,[0x00811764]
005DCF5C  85 C0                     TEST EAX,EAX
005DCF5E  74 50                     JZ 0x005dcfb0
005DCF60  F6 40 04 01               TEST byte ptr [EAX + 0x4],0x1
005DCF64  74 25                     JZ 0x005dcf8b
005DCF66  C6 05 7E 87 80 00 01      MOV byte ptr [0x0080877e],0x1
005DCF6D  C7 46 14 04 00 00 00      MOV dword ptr [ESI + 0x14],0x4
LAB_005dcf74:
005DCF74  8B 03                     MOV EAX,dword ptr [EBX]
005DCF76  6A 00                     PUSH 0x0
005DCF78  56                        PUSH ESI
005DCF79  6A 00                     PUSH 0x0
005DCF7B  57                        PUSH EDI
005DCF7C  68 05 03 00 00            PUSH 0x305
005DCF81  8B CB                     MOV ECX,EBX
005DCF83  FF 50 08                  CALL dword ptr [EAX + 0x8]
005DCF86  E9 2F 03 00 00            JMP 0x005dd2ba
LAB_005dcf8b:
005DCF8B  6A 00                     PUSH 0x0
005DCF8D  C6 05 7E 87 80 00 00      MOV byte ptr [0x0080877e],0x0
005DCF94  56                        PUSH ESI
005DCF95  C7 46 14 00 00 00 00      MOV dword ptr [ESI + 0x14],0x0
005DCF9C  8B 13                     MOV EDX,dword ptr [EBX]
005DCF9E  6A 00                     PUSH 0x0
005DCFA0  57                        PUSH EDI
005DCFA1  68 0D 03 00 00            PUSH 0x30d
005DCFA6  8B CB                     MOV ECX,EBX
005DCFA8  FF 52 08                  CALL dword ptr [EDX + 0x8]
005DCFAB  E9 0A 03 00 00            JMP 0x005dd2ba
LAB_005dcfb0:
005DCFB0  6A 00                     PUSH 0x0
005DCFB2  6A 00                     PUSH 0x0
005DCFB4  C6 05 68 17 81 00 00      MOV byte ptr [0x00811768],0x0
005DCFBB  8B 03                     MOV EAX,dword ptr [EBX]
005DCFBD  6A 00                     PUSH 0x0
005DCFBF  57                        PUSH EDI
005DCFC0  68 01 03 00 00            PUSH 0x301
005DCFC5  8B CB                     MOV ECX,EBX
005DCFC7  FF 50 08                  CALL dword ptr [EAX + 0x8]
005DCFCA  E9 EB 02 00 00            JMP 0x005dd2ba
LAB_005dcfcf:
005DCFCF  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005DCFD2  8B 13                     MOV EDX,dword ptr [EBX]
005DCFD4  6A 00                     PUSH 0x0
005DCFD6  50                        PUSH EAX
005DCFD7  6A 00                     PUSH 0x0
005DCFD9  57                        PUSH EDI
005DCFDA  68 01 03 00 00            PUSH 0x301
005DCFDF  8B CB                     MOV ECX,EBX
005DCFE1  FF 52 08                  CALL dword ptr [EDX + 0x8]
005DCFE4  E9 D1 02 00 00            JMP 0x005dd2ba
LAB_005dcfe9:
005DCFE9  B9 08 00 00 00            MOV ECX,0x8
005DCFEE  33 C0                     XOR EAX,EAX
005DCFF0  8D 7D DC                  LEA EDI,[EBP + -0x24]
005DCFF3  F3 AB                     STOSD.REP ES:EDI
005DCFF5  8D 4D DC                  LEA ECX,[EBP + -0x24]
005DCFF8  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
005DCFFF  51                        PUSH ECX
005DD000  B9 20 76 80 00            MOV ECX,0x807620
005DD005  C7 45 EC 02 71 00 00      MOV dword ptr [EBP + -0x14],0x7102
005DD00C  E8 3F 6B 10 00            CALL 0x006e3b50
005DD011  E9 A4 02 00 00            JMP 0x005dd2ba
LAB_005dd016:
005DD016  A1 58 67 80 00            MOV EAX,[0x00806758]
005DD01B  C7 05 54 76 80 00 21 00 00 00  MOV dword ptr [0x00807654],0x21
005DD025  3B C7                     CMP EAX,EDI
005DD027  89 3D 9C 87 80 00         MOV dword ptr [0x0080879c],EDI
005DD02D  74 09                     JZ 0x005dd038
005DD02F  50                        PUSH EAX
005DD030  E8 3B 41 11 00            CALL 0x006f1170
005DD035  83 C4 04                  ADD ESP,0x4
LAB_005dd038:
005DD038  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
005DD03E  89 3D 58 67 80 00         MOV dword ptr [0x00806758],EDI
005DD044  3B CF                     CMP ECX,EDI
005DD046  74 05                     JZ 0x005dd04d
005DD048  E8 08 40 E2 FF            CALL 0x00401055
LAB_005dd04d:
005DD04D  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005DD053  6A 01                     PUSH 0x1
005DD055  52                        PUSH EDX
005DD056  E8 C5 EA 0D 00            CALL 0x006bbb20
005DD05B  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005DD060  6A 01                     PUSH 0x1
005DD062  50                        PUSH EAX
005DD063  E8 18 D7 0D 00            CALL 0x006ba780
005DD068  E9 4D 02 00 00            JMP 0x005dd2ba
LAB_005dd06d:
005DD06D  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
005DD070  8D 7B 20                  LEA EDI,[EBX + 0x20]
005DD073  85 C0                     TEST EAX,EAX
005DD075  74 08                     JZ 0x005dd07f
005DD077  50                        PUSH EAX
005DD078  8B CB                     MOV ECX,EBX
005DD07A  E8 31 86 10 00            CALL 0x006e56b0
LAB_005dd07f:
005DD07F  8B 13                     MOV EDX,dword ptr [EBX]
005DD081  6A 00                     PUSH 0x0
005DD083  56                        PUSH ESI
005DD084  6A 00                     PUSH 0x0
005DD086  57                        PUSH EDI
005DD087  68 04 03 00 00            PUSH 0x304
005DD08C  8B CB                     MOV ECX,EBX
005DD08E  FF 52 08                  CALL dword ptr [EDX + 0x8]
005DD091  E9 24 02 00 00            JMP 0x005dd2ba
LAB_005dd096:
005DD096  3D 04 61 00 00            CMP EAX,0x6104
005DD09B  0F 85 19 02 00 00         JNZ 0x005dd2ba
005DD0A1  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
005DD0A4  8D 7B 20                  LEA EDI,[EBX + 0x20]
005DD0A7  85 C0                     TEST EAX,EAX
005DD0A9  74 08                     JZ 0x005dd0b3
005DD0AB  50                        PUSH EAX
005DD0AC  8B CB                     MOV ECX,EBX
005DD0AE  E8 FD 85 10 00            CALL 0x006e56b0
LAB_005dd0b3:
005DD0B3  8B 03                     MOV EAX,dword ptr [EBX]
005DD0B5  6A 00                     PUSH 0x0
005DD0B7  56                        PUSH ESI
005DD0B8  6A 00                     PUSH 0x0
005DD0BA  57                        PUSH EDI
005DD0BB  68 02 03 00 00            PUSH 0x302
005DD0C0  8B CB                     MOV ECX,EBX
005DD0C2  FF 50 08                  CALL dword ptr [EAX + 0x8]
005DD0C5  E9 F0 01 00 00            JMP 0x005dd2ba
LAB_005dd0ca:
005DD0CA  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
005DD0CD  8D 7B 20                  LEA EDI,[EBX + 0x20]
005DD0D0  85 C0                     TEST EAX,EAX
005DD0D2  74 08                     JZ 0x005dd0dc
005DD0D4  50                        PUSH EAX
005DD0D5  8B CB                     MOV ECX,EBX
005DD0D7  E8 D4 85 10 00            CALL 0x006e56b0
LAB_005dd0dc:
005DD0DC  8B 13                     MOV EDX,dword ptr [EBX]
005DD0DE  6A 00                     PUSH 0x0
005DD0E0  56                        PUSH ESI
005DD0E1  6A 00                     PUSH 0x0
005DD0E3  57                        PUSH EDI
005DD0E4  68 0A 03 00 00            PUSH 0x30a
005DD0E9  8B CB                     MOV ECX,EBX
005DD0EB  FF 52 08                  CALL dword ptr [EDX + 0x8]
005DD0EE  E9 C7 01 00 00            JMP 0x005dd2ba
LAB_005dd0f3:
005DD0F3  2D 09 61 00 00            SUB EAX,0x6109
005DD0F8  74 50                     JZ 0x005dd14a
005DD0FA  48                        DEC EAX
005DD0FB  74 24                     JZ 0x005dd121
005DD0FD  83 E8 15                  SUB EAX,0x15
005DD100  0F 85 B4 01 00 00         JNZ 0x005dd2ba
005DD106  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
005DD109  8D 7B 20                  LEA EDI,[EBX + 0x20]
005DD10C  85 C0                     TEST EAX,EAX
005DD10E  0F 84 60 FE FF FF         JZ 0x005dcf74
005DD114  50                        PUSH EAX
005DD115  8B CB                     MOV ECX,EBX
005DD117  E8 94 85 10 00            CALL 0x006e56b0
005DD11C  E9 53 FE FF FF            JMP 0x005dcf74
LAB_005dd121:
005DD121  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
005DD124  8D 7B 20                  LEA EDI,[EBX + 0x20]
005DD127  85 C0                     TEST EAX,EAX
005DD129  74 08                     JZ 0x005dd133
005DD12B  50                        PUSH EAX
005DD12C  8B CB                     MOV ECX,EBX
005DD12E  E8 7D 85 10 00            CALL 0x006e56b0
LAB_005dd133:
005DD133  8B 13                     MOV EDX,dword ptr [EBX]
005DD135  6A 00                     PUSH 0x0
005DD137  56                        PUSH ESI
005DD138  6A 00                     PUSH 0x0
005DD13A  57                        PUSH EDI
005DD13B  68 0E 03 00 00            PUSH 0x30e
005DD140  8B CB                     MOV ECX,EBX
005DD142  FF 52 08                  CALL dword ptr [EDX + 0x8]
005DD145  E9 70 01 00 00            JMP 0x005dd2ba
LAB_005dd14a:
005DD14A  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
005DD14D  8D 7B 20                  LEA EDI,[EBX + 0x20]
005DD150  85 C0                     TEST EAX,EAX
005DD152  74 08                     JZ 0x005dd15c
005DD154  50                        PUSH EAX
005DD155  8B CB                     MOV ECX,EBX
005DD157  E8 54 85 10 00            CALL 0x006e56b0
LAB_005dd15c:
005DD15C  8B 03                     MOV EAX,dword ptr [EBX]
005DD15E  6A 00                     PUSH 0x0
005DD160  56                        PUSH ESI
005DD161  6A 00                     PUSH 0x0
005DD163  57                        PUSH EDI
005DD164  68 0D 03 00 00            PUSH 0x30d
005DD169  8B CB                     MOV ECX,EBX
005DD16B  FF 50 08                  CALL dword ptr [EAX + 0x8]
005DD16E  E9 47 01 00 00            JMP 0x005dd2ba
LAB_005dd173:
005DD173  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
005DD176  8D 7B 20                  LEA EDI,[EBX + 0x20]
005DD179  85 C0                     TEST EAX,EAX
005DD17B  74 08                     JZ 0x005dd185
005DD17D  50                        PUSH EAX
005DD17E  8B CB                     MOV ECX,EBX
005DD180  E8 2B 85 10 00            CALL 0x006e56b0
LAB_005dd185:
005DD185  8B 13                     MOV EDX,dword ptr [EBX]
005DD187  6A 00                     PUSH 0x0
005DD189  56                        PUSH ESI
005DD18A  6A 00                     PUSH 0x0
005DD18C  57                        PUSH EDI
005DD18D  68 06 03 00 00            PUSH 0x306
005DD192  8B CB                     MOV ECX,EBX
005DD194  FF 52 08                  CALL dword ptr [EDX + 0x8]
005DD197  E9 1E 01 00 00            JMP 0x005dd2ba
LAB_005dd19c:
005DD19C  3D 35 63 00 00            CMP EAX,0x6335
005DD1A1  0F 87 BE 00 00 00         JA 0x005dd265
005DD1A7  3D 32 63 00 00            CMP EAX,0x6332
005DD1AC  0F 83 DF 00 00 00         JNC 0x005dd291
005DD1B2  05 DF 9E FF FF            ADD EAX,0xffff9edf
005DD1B7  83 F8 03                  CMP EAX,0x3
005DD1BA  0F 87 FA 00 00 00         JA 0x005dd2ba
switchD_005dd1c0::switchD:
005DD1C0  FF 24 85 24 D3 5D 00      JMP dword ptr [EAX*0x4 + 0x5dd324]
switchD_005dd1c0::caseD_6121:
005DD1C7  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
005DD1CA  8D 7B 20                  LEA EDI,[EBX + 0x20]
005DD1CD  85 C0                     TEST EAX,EAX
005DD1CF  74 08                     JZ 0x005dd1d9
005DD1D1  50                        PUSH EAX
005DD1D2  8B CB                     MOV ECX,EBX
005DD1D4  E8 D7 84 10 00            CALL 0x006e56b0
LAB_005dd1d9:
005DD1D9  8B 03                     MOV EAX,dword ptr [EBX]
005DD1DB  6A 00                     PUSH 0x0
005DD1DD  56                        PUSH ESI
005DD1DE  6A 00                     PUSH 0x0
005DD1E0  57                        PUSH EDI
005DD1E1  68 0B 03 00 00            PUSH 0x30b
005DD1E6  8B CB                     MOV ECX,EBX
005DD1E8  FF 50 08                  CALL dword ptr [EAX + 0x8]
005DD1EB  E9 CA 00 00 00            JMP 0x005dd2ba
switchD_005dd1c0::caseD_6122:
005DD1F0  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
005DD1F3  8D 7B 20                  LEA EDI,[EBX + 0x20]
005DD1F6  85 C0                     TEST EAX,EAX
005DD1F8  74 08                     JZ 0x005dd202
005DD1FA  50                        PUSH EAX
005DD1FB  8B CB                     MOV ECX,EBX
005DD1FD  E8 AE 84 10 00            CALL 0x006e56b0
LAB_005dd202:
005DD202  8B 13                     MOV EDX,dword ptr [EBX]
005DD204  6A 00                     PUSH 0x0
005DD206  56                        PUSH ESI
005DD207  6A 00                     PUSH 0x0
005DD209  57                        PUSH EDI
005DD20A  68 07 03 00 00            PUSH 0x307
005DD20F  8B CB                     MOV ECX,EBX
005DD211  FF 52 08                  CALL dword ptr [EDX + 0x8]
005DD214  E9 A1 00 00 00            JMP 0x005dd2ba
switchD_005dd1c0::caseD_6123:
005DD219  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
005DD21C  8D 7B 20                  LEA EDI,[EBX + 0x20]
005DD21F  85 C0                     TEST EAX,EAX
005DD221  74 08                     JZ 0x005dd22b
005DD223  50                        PUSH EAX
005DD224  8B CB                     MOV ECX,EBX
005DD226  E8 85 84 10 00            CALL 0x006e56b0
LAB_005dd22b:
005DD22B  8B 03                     MOV EAX,dword ptr [EBX]
005DD22D  6A 00                     PUSH 0x0
005DD22F  56                        PUSH ESI
005DD230  6A 00                     PUSH 0x0
005DD232  57                        PUSH EDI
005DD233  68 08 03 00 00            PUSH 0x308
005DD238  8B CB                     MOV ECX,EBX
005DD23A  FF 50 08                  CALL dword ptr [EAX + 0x8]
005DD23D  EB 7B                     JMP 0x005dd2ba
switchD_005dd1c0::caseD_6124:
005DD23F  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
005DD242  8D 7B 20                  LEA EDI,[EBX + 0x20]
005DD245  85 C0                     TEST EAX,EAX
005DD247  74 08                     JZ 0x005dd251
005DD249  50                        PUSH EAX
005DD24A  8B CB                     MOV ECX,EBX
005DD24C  E8 5F 84 10 00            CALL 0x006e56b0
LAB_005dd251:
005DD251  8B 13                     MOV EDX,dword ptr [EBX]
005DD253  6A 00                     PUSH 0x0
005DD255  56                        PUSH ESI
005DD256  6A 00                     PUSH 0x0
005DD258  57                        PUSH EDI
005DD259  68 0C 03 00 00            PUSH 0x30c
005DD25E  8B CB                     MOV ECX,EBX
005DD260  FF 52 08                  CALL dword ptr [EDX + 0x8]
005DD263  EB 55                     JMP 0x005dd2ba
LAB_005dd265:
005DD265  3D 40 69 00 00            CMP EAX,0x6940
005DD26A  77 17                     JA 0x005dd283
005DD26C  3D 3F 69 00 00            CMP EAX,0x693f
005DD271  73 1E                     JNC 0x005dd291
005DD273  3D 3F 63 00 00            CMP EAX,0x633f
005DD278  72 40                     JC 0x005dd2ba
005DD27A  3D 41 63 00 00            CMP EAX,0x6341
005DD27F  76 10                     JBE 0x005dd291
005DD281  EB 37                     JMP 0x005dd2ba
LAB_005dd283:
005DD283  3D A0 C0 00 00            CMP EAX,0xc0a0
005DD288  72 30                     JC 0x005dd2ba
005DD28A  3D A2 C0 00 00            CMP EAX,0xc0a2
005DD28F  77 29                     JA 0x005dd2ba
LAB_005dd291:
005DD291  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
005DD294  3B C7                     CMP EAX,EDI
005DD296  74 22                     JZ 0x005dd2ba
005DD298  B9 08 00 00 00            MOV ECX,0x8
005DD29D  8D 7D BC                  LEA EDI,[EBP + -0x44]
005DD2A0  F3 A5                     MOVSD.REP ES:EDI,ESI
005DD2A2  8D 4D BC                  LEA ECX,[EBP + -0x44]
005DD2A5  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
005DD2A8  8B 03                     MOV EAX,dword ptr [EBX]
005DD2AA  51                        PUSH ECX
005DD2AB  8B CB                     MOV ECX,EBX
005DD2AD  C7 45 C8 02 00 00 00      MOV dword ptr [EBP + -0x38],0x2
005DD2B4  FF 50 18                  CALL dword ptr [EAX + 0x18]
005DD2B7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
switchD_005dd1c0::default:
005DD2BA  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
005DD2C0  56                        PUSH ESI
005DD2C1  8B CB                     MOV ECX,EBX
005DD2C3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DD2C9  E8 32 8C 10 00            CALL 0x006e5f00
005DD2CE  5F                        POP EDI
005DD2CF  5E                        POP ESI
005DD2D0  5B                        POP EBX
005DD2D1  8B E5                     MOV ESP,EBP
005DD2D3  5D                        POP EBP
005DD2D4  C2 04 00                  RET 0x4
LAB_005dd2d7:
005DD2D7  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
005DD2DD  68 4C D8 7C 00            PUSH 0x7cd84c
005DD2E2  68 CC 4C 7A 00            PUSH 0x7a4ccc
005DD2E7  56                        PUSH ESI
005DD2E8  57                        PUSH EDI
005DD2E9  68 1A 03 00 00            PUSH 0x31a
005DD2EE  68 18 D7 7C 00            PUSH 0x7cd718
005DD2F3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005DD2F8  E8 D3 01 0D 00            CALL 0x006ad4d0
005DD2FD  83 C4 18                  ADD ESP,0x18
005DD300  85 C0                     TEST EAX,EAX
005DD302  74 01                     JZ 0x005dd305
005DD304  CC                        INT3
LAB_005dd305:
005DD305  68 1B 03 00 00            PUSH 0x31b
005DD30A  68 18 D7 7C 00            PUSH 0x7cd718
005DD30F  57                        PUSH EDI
005DD310  56                        PUSH ESI
005DD311  E8 2A 8B 0C 00            CALL 0x006a5e40
005DD316  5F                        POP EDI
005DD317  5E                        POP ESI
005DD318  B8 FF FF 00 00            MOV EAX,0xffff
005DD31D  5B                        POP EBX
005DD31E  8B E5                     MOV ESP,EBP
005DD320  5D                        POP EBP
005DD321  C2 04 00                  RET 0x4
