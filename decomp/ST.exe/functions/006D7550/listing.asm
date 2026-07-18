FUN_006d7550:
006D7550  55                        PUSH EBP
006D7551  8B EC                     MOV EBP,ESP
006D7553  83 EC 78                  SUB ESP,0x78
006D7556  53                        PUSH EBX
006D7557  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006D755A  56                        PUSH ESI
006D755B  57                        PUSH EDI
006D755C  33 FF                     XOR EDI,EDI
006D755E  53                        PUSH EBX
006D755F  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006D7562  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
006D7565  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006D7568  C7 45 FC 03 FF FF FF      MOV dword ptr [EBP + -0x4],0xffffff03
006D756F  FF 15 9C BA 85 00         CALL dword ptr [0x0085ba9c]
006D7575  8B F0                     MOV ESI,EAX
006D7577  3B F7                     CMP ESI,EDI
006D7579  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006D757C  75 0B                     JNZ 0x006d7589
006D757E  33 C0                     XOR EAX,EAX
006D7580  5F                        POP EDI
006D7581  5E                        POP ESI
006D7582  5B                        POP EBX
006D7583  8B E5                     MOV ESP,EBP
006D7585  5D                        POP EBP
006D7586  C2 1C 00                  RET 0x1c
LAB_006d7589:
006D7589  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D758C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D758F  50                        PUSH EAX
006D7590  51                        PUSH ECX
006D7591  53                        PUSH EBX
006D7592  FF 15 D0 BA 85 00         CALL dword ptr [0x0085bad0]
006D7598  8B F8                     MOV EDI,EAX
006D759A  85 FF                     TEST EDI,EDI
006D759C  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006D759F  0F 84 54 01 00 00         JZ 0x006d76f9
006D75A5  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D75A8  85 C0                     TEST EAX,EAX
006D75AA  74 15                     JZ 0x006d75c1
006D75AC  6A 00                     PUSH 0x0
006D75AE  50                        PUSH EAX
006D75AF  56                        PUSH ESI
006D75B0  FF 15 94 BA 85 00         CALL dword ptr [0x0085ba94]
006D75B6  85 C0                     TEST EAX,EAX
006D75B8  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006D75BB  0F 84 38 01 00 00         JZ 0x006d76f9
LAB_006d75c1:
006D75C1  57                        PUSH EDI
006D75C2  56                        PUSH ESI
006D75C3  FF 15 90 BA 85 00         CALL dword ptr [0x0085ba90]
006D75C9  85 C0                     TEST EAX,EAX
006D75CB  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006D75CE  0F 84 25 01 00 00         JZ 0x006d76f9
006D75D4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D75D7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D75DA  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D75DD  68 20 00 CC 00            PUSH 0xcc0020
006D75E2  52                        PUSH EDX
006D75E3  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D75E6  50                        PUSH EAX
006D75E7  53                        PUSH EBX
006D75E8  51                        PUSH ECX
006D75E9  52                        PUSH EDX
006D75EA  6A 00                     PUSH 0x0
006D75EC  6A 00                     PUSH 0x0
006D75EE  56                        PUSH ESI
006D75EF  FF 15 CC BA 85 00         CALL dword ptr [0x0085bacc]
006D75F5  85 C0                     TEST EAX,EAX
006D75F7  0F 84 FC 00 00 00         JZ 0x006d76f9
006D75FD  8D 45 CC                  LEA EAX,[EBP + -0x34]
006D7600  50                        PUSH EAX
006D7601  6A 18                     PUSH 0x18
006D7603  57                        PUSH EDI
006D7604  FF 15 C8 BA 85 00         CALL dword ptr [0x0085bac8]
006D760A  85 C0                     TEST EAX,EAX
006D760C  0F 84 E7 00 00 00         JZ 0x006d76f9
006D7612  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D7615  85 C0                     TEST EAX,EAX
006D7617  75 17                     JNZ 0x006d7630
006D7619  8B 45 DE                  MOV EAX,dword ptr [EBP + -0x22]
006D761C  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006D761F  25 FF FF 00 00            AND EAX,0xffff
006D7624  81 E1 FF FF 00 00         AND ECX,0xffff
006D762A  0F AF C1                  IMUL EAX,ECX
006D762D  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_006d7630:
006D7630  83 F8 08                  CMP EAX,0x8
006D7633  77 10                     JA 0x006d7645
006D7635  C7 45 1C 08 00 00 00      MOV dword ptr [EBP + 0x1c],0x8
006D763C  C7 45 F4 00 01 00 00      MOV dword ptr [EBP + -0xc],0x100
006D7643  EB 0F                     JMP 0x006d7654
LAB_006d7645:
006D7645  33 D2                     XOR EDX,EDX
006D7647  83 F8 10                  CMP EAX,0x10
006D764A  0F 95 C2                  SETNZ DL
006D764D  4A                        DEC EDX
006D764E  83 E2 03                  AND EDX,0x3
006D7651  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_006d7654:
006D7654  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006D7659  8D 55 8C                  LEA EDX,[EBP + -0x74]
006D765C  8D 4D 88                  LEA ECX,[EBP + -0x78]
006D765F  6A 00                     PUSH 0x0
006D7661  52                        PUSH EDX
006D7662  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
006D7665  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006D766B  E8 80 61 05 00            CALL 0x0072d7f0
006D7670  8B F0                     MOV ESI,EAX
006D7672  83 C4 08                  ADD ESP,0x8
006D7675  85 F6                     TEST ESI,ESI
006D7677  75 65                     JNZ 0x006d76de
006D7679  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006D767C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D767F  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006D7682  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D7685  6A 01                     PUSH 0x1
006D7687  50                        PUSH EAX
006D7688  51                        PUSH ECX
006D7689  56                        PUSH ESI
006D768A  52                        PUSH EDX
006D768B  E8 60 9A FF FF            CALL 0x006d10f0
006D7690  50                        PUSH EAX
006D7691  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006D7694  E8 07 D9 FD FF            CALL 0x006b4fa0
006D7699  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006D769C  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
006D769F  6A 00                     PUSH 0x0
006D76A1  51                        PUSH ECX
006D76A2  50                        PUSH EAX
006D76A3  56                        PUSH ESI
006D76A4  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006D76A7  6A 00                     PUSH 0x0
006D76A9  57                        PUSH EDI
006D76AA  56                        PUSH ESI
006D76AB  FF 15 C4 BA 85 00         CALL dword ptr [0x0085bac4]
006D76B1  85 C0                     TEST EAX,EAX
006D76B3  75 18                     JNZ 0x006d76cd
006D76B5  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006D76BB  6A 3D                     PUSH 0x3d
006D76BD  68 A0 E2 7E 00            PUSH 0x7ee2a0
006D76C2  52                        PUSH EDX
006D76C3  68 03 FF FF FF            PUSH 0xffffff03
006D76C8  E8 73 E7 FC FF            CALL 0x006a5e40
LAB_006d76cd:
006D76CD  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
006D76D0  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006D76D7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006D76DC  EB 1B                     JMP 0x006d76f9
LAB_006d76de:
006D76DE  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
006D76E1  8D 55 F8                  LEA EDX,[EBP + -0x8]
006D76E4  52                        PUSH EDX
006D76E5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006D76EB  E8 70 39 FD FF            CALL 0x006ab060
006D76F0  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
006D76F3  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006D76F6  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_006d76f9:
006D76F9  81 7D FC 03 FF FF FF      CMP dword ptr [EBP + -0x4],0xffffff03
006D7700  75 09                     JNZ 0x006d770b
006D7702  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006D7708  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006d770b:
006D770B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006D770E  85 C0                     TEST EAX,EAX
006D7710  74 08                     JZ 0x006d771a
006D7712  50                        PUSH EAX
006D7713  56                        PUSH ESI
006D7714  FF 15 90 BA 85 00         CALL dword ptr [0x0085ba90]
LAB_006d771a:
006D771A  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006D771D  85 C0                     TEST EAX,EAX
006D771F  74 0A                     JZ 0x006d772b
006D7721  6A 00                     PUSH 0x0
006D7723  50                        PUSH EAX
006D7724  56                        PUSH ESI
006D7725  FF 15 94 BA 85 00         CALL dword ptr [0x0085ba94]
LAB_006d772b:
006D772B  8B 1D 78 BA 85 00         MOV EBX,dword ptr [0x0085ba78]
006D7731  85 FF                     TEST EDI,EDI
006D7733  74 03                     JZ 0x006d7738
006D7735  57                        PUSH EDI
006D7736  FF D3                     CALL EBX
LAB_006d7738:
006D7738  56                        PUSH ESI
006D7739  FF D3                     CALL EBX
006D773B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D773E  85 C0                     TEST EAX,EAX
006D7740  74 14                     JZ 0x006d7756
006D7742  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006D7748  6A 50                     PUSH 0x50
006D774A  68 A0 E2 7E 00            PUSH 0x7ee2a0
006D774F  51                        PUSH ECX
006D7750  50                        PUSH EAX
006D7751  E8 EA E6 FC FF            CALL 0x006a5e40
LAB_006d7756:
006D7756  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006D7759  5F                        POP EDI
006D775A  5E                        POP ESI
006D775B  5B                        POP EBX
006D775C  8B E5                     MOV ESP,EBP
006D775E  5D                        POP EBP
006D775F  C2 1C 00                  RET 0x1c
