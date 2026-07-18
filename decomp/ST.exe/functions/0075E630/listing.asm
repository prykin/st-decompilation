FUN_0075e630:
0075E630  55                        PUSH EBP
0075E631  8B EC                     MOV EBP,ESP
0075E633  53                        PUSH EBX
0075E634  56                        PUSH ESI
0075E635  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075E638  57                        PUSH EDI
0075E639  8B BE BA 01 00 00         MOV EDI,dword ptr [ESI + 0x1ba]
0075E63F  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0075E642  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075E645  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
0075E648  85 C0                     TEST EAX,EAX
0075E64A  74 07                     JZ 0x0075e653
0075E64C  C7 46 50 02 00 00 00      MOV dword ptr [ESI + 0x50],0x2
LAB_0075e653:
0075E653  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075E656  85 C0                     TEST EAX,EAX
0075E658  74 1A                     JZ 0x0075e674
0075E65A  C7 47 04 50 E7 75 00      MOV dword ptr [EDI + 0x4],0x75e750
0075E661  C7 47 08 30 EF 75 00      MOV dword ptr [EDI + 0x8],0x75ef30
0075E668  C7 47 1C 01 00 00 00      MOV dword ptr [EDI + 0x1c],0x1
0075E66F  E9 9F 00 00 00            JMP 0x0075e713
LAB_0075e674:
0075E674  83 7E 50 02               CMP dword ptr [ESI + 0x50],0x2
0075E678  75 09                     JNZ 0x0075e683
0075E67A  C7 47 04 80 EC 75 00      MOV dword ptr [EDI + 0x4],0x75ec80
0075E681  EB 07                     JMP 0x0075e68a
LAB_0075e683:
0075E683  C7 47 04 D0 E7 75 00      MOV dword ptr [EDI + 0x4],0x75e7d0
LAB_0075e68a:
0075E68A  C7 47 08 10 F7 75 00      MOV dword ptr [EDI + 0x8],0x75f710
0075E691  8B 5E 7C                  MOV EBX,dword ptr [ESI + 0x7c]
0075E694  83 FB 01                  CMP EBX,0x1
0075E697  7D 18                     JGE 0x0075e6b1
0075E699  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0075E69F  68 D9 04 00 00            PUSH 0x4d9
0075E6A4  68 88 2E 7F 00            PUSH 0x7f2e88
0075E6A9  51                        PUSH ECX
0075E6AA  6A 37                     PUSH 0x37
0075E6AC  E8 8F 77 F4 FF            CALL 0x006a5e40
LAB_0075e6b1:
0075E6B1  81 FB 00 01 00 00         CMP EBX,0x100
0075E6B7  7E 18                     JLE 0x0075e6d1
0075E6B9  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0075E6BF  68 DB 04 00 00            PUSH 0x4db
0075E6C4  68 88 2E 7F 00            PUSH 0x7f2e88
0075E6C9  52                        PUSH EDX
0075E6CA  6A 38                     PUSH 0x38
0075E6CC  E8 6F 77 F4 FF            CALL 0x006a5e40
LAB_0075e6d1:
0075E6D1  83 7E 50 02               CMP dword ptr [ESI + 0x50],0x2
0075E6D5  75 3C                     JNZ 0x0075e713
0075E6D7  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
0075E6DA  83 C0 02                  ADD EAX,0x2
0075E6DD  8D 1C 40                  LEA EBX,[EAX + EAX*0x2]
0075E6E0  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
0075E6E3  D1 E3                     SHL EBX,0x1
0075E6E5  85 C0                     TEST EAX,EAX
0075E6E7  75 0C                     JNZ 0x0075e6f5
0075E6E9  8B 06                     MOV EAX,dword ptr [ESI]
0075E6EB  53                        PUSH EBX
0075E6EC  6A 01                     PUSH 0x1
0075E6EE  56                        PUSH ESI
0075E6EF  FF 50 04                  CALL dword ptr [EAX + 0x4]
0075E6F2  89 47 20                  MOV dword ptr [EDI + 0x20],EAX
LAB_0075e6f5:
0075E6F5  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
0075E6F8  53                        PUSH EBX
0075E6F9  51                        PUSH ECX
0075E6FA  E8 31 B8 FF FF            CALL 0x00759f30
0075E6FF  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
0075E702  85 C0                     TEST EAX,EAX
0075E704  75 06                     JNZ 0x0075e70c
0075E706  56                        PUSH ESI
0075E707  E8 74 FE FF FF            CALL 0x0075e580
LAB_0075e70c:
0075E70C  C7 47 24 00 00 00 00      MOV dword ptr [EDI + 0x24],0x0
LAB_0075e713:
0075E713  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
0075E716  85 C0                     TEST EAX,EAX
0075E718  74 22                     JZ 0x0075e73c
0075E71A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075E71D  BB 20 00 00 00            MOV EBX,0x20
LAB_0075e722:
0075E722  8B 16                     MOV EDX,dword ptr [ESI]
0075E724  68 00 10 00 00            PUSH 0x1000
0075E729  52                        PUSH EDX
0075E72A  E8 01 B8 FF FF            CALL 0x00759f30
0075E72F  83 C6 04                  ADD ESI,0x4
0075E732  4B                        DEC EBX
0075E733  75 ED                     JNZ 0x0075e722
0075E735  C7 47 1C 00 00 00 00      MOV dword ptr [EDI + 0x1c],0x0
LAB_0075e73c:
0075E73C  5F                        POP EDI
0075E73D  5E                        POP ESI
0075E73E  5B                        POP EBX
0075E73F  5D                        POP EBP
0075E740  C2 08 00                  RET 0x8
