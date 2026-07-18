FUN_0060bdd0:
0060BDD0  55                        PUSH EBP
0060BDD1  8B EC                     MOV EBP,ESP
0060BDD3  83 EC 54                  SUB ESP,0x54
0060BDD6  56                        PUSH ESI
0060BDD7  8B F1                     MOV ESI,ECX
0060BDD9  57                        PUSH EDI
0060BDDA  B9 08 00 00 00            MOV ECX,0x8
0060BDDF  33 C0                     XOR EAX,EAX
0060BDE1  8D 7D AC                  LEA EDI,[EBP + -0x54]
0060BDE4  F3 AB                     STOSD.REP ES:EDI
0060BDE6  B9 07 00 00 00            MOV ECX,0x7
0060BDEB  8D 7D CC                  LEA EDI,[EBP + -0x34]
0060BDEE  F3 AB                     STOSD.REP ES:EDI
0060BDF0  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0060BDF3  C7 45 B8 04 00 00 00      MOV dword ptr [EBP + -0x48],0x4
0060BDFA  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0060BDFD  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0060BE00  8B 86 F5 01 00 00         MOV EAX,dword ptr [ESI + 0x1f5]
0060BE06  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0060BE09  83 C0 BE                  ADD EAX,-0x42
0060BE0C  83 F8 23                  CMP EAX,0x23
0060BE0F  0F 87 2B 01 00 00         JA 0x0060bf40
0060BE15  33 C9                     XOR ECX,ECX
0060BE17  8A 88 6C BF 60 00         MOV CL,byte ptr [EAX + 0x60bf6c]
switchD_0060be1d::switchD:
0060BE1D  FF 24 8D 58 BF 60 00      JMP dword ptr [ECX*0x4 + 0x60bf58]
switchD_0060be1d::caseD_43:
0060BE24  8B 96 D9 01 00 00         MOV EDX,dword ptr [ESI + 0x1d9]
0060BE2A  C7 45 F8 64 00 00 00      MOV dword ptr [EBP + -0x8],0x64
0060BE31  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0060BE34  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0060BE3B  C7 45 BC 21 01 00 00      MOV dword ptr [EBP + -0x44],0x121
0060BE42  8D 45 F4                  LEA EAX,[EBP + -0xc]
0060BE45  E9 F3 00 00 00            JMP 0x0060bf3d
switchD_0060be1d::caseD_4c:
0060BE4A  8B 8E D9 01 00 00         MOV ECX,dword ptr [ESI + 0x1d9]
0060BE50  8D 55 E8                  LEA EDX,[EBP + -0x18]
0060BE53  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0060BE56  C7 45 F0 19 00 00 00      MOV dword ptr [EBP + -0x10],0x19
0060BE5D  C7 45 EC 41 00 00 00      MOV dword ptr [EBP + -0x14],0x41
0060BE64  C7 45 BC 22 01 00 00      MOV dword ptr [EBP + -0x44],0x122
0060BE6B  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
0060BE6E  E9 CD 00 00 00            JMP 0x0060bf40
switchD_0060be1d::caseD_42:
0060BE73  8B 0D B0 67 7E 00         MOV ECX,dword ptr [0x007e67b0]
0060BE79  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
0060BE7C  8B 86 D9 01 00 00         MOV EAX,dword ptr [ESI + 0x1d9]
0060BE82  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0060BE85  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0060BE8B  52                        PUSH EDX
0060BE8C  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0060BE8F  C7 45 D0 42 00 00 00      MOV dword ptr [EBP + -0x30],0x42
0060BE96  E8 1C 8B DF FF            CALL 0x004049b7
0060BE9B  3C 03                     CMP AL,0x3
0060BE9D  75 17                     JNZ 0x0060beb6
0060BE9F  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
0060BEA2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0060BEA8  6A 6A                     PUSH 0x6a
0060BEAA  50                        PUSH EAX
0060BEAB  E8 BB 59 DF FF            CALL 0x0040186b
0060BEB0  85 C0                     TEST EAX,EAX
0060BEB2  74 2C                     JZ 0x0060bee0
0060BEB4  EB 15                     JMP 0x0060becb
LAB_0060beb6:
0060BEB6  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
0060BEB9  6A 2D                     PUSH 0x2d
0060BEBB  51                        PUSH ECX
0060BEBC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0060BEC2  E8 A4 59 DF FF            CALL 0x0040186b
0060BEC7  85 C0                     TEST EAX,EAX
0060BEC9  74 15                     JZ 0x0060bee0
LAB_0060becb:
0060BECB  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0060BECE  8B C1                     MOV EAX,ECX
0060BED0  99                        CDQ
0060BED1  83 E2 03                  AND EDX,0x3
0060BED4  03 C2                     ADD EAX,EDX
0060BED6  C1 F8 02                  SAR EAX,0x2
0060BED9  F7 D8                     NEG EAX
0060BEDB  03 C8                     ADD ECX,EAX
0060BEDD  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
LAB_0060bee0:
0060BEE0  66 8B 96 05 02 00 00      MOV DX,word ptr [ESI + 0x205]
0060BEE7  66 8B 86 01 02 00 00      MOV AX,word ptr [ESI + 0x201]
0060BEEE  8D 4D CC                  LEA ECX,[EBP + -0x34]
0060BEF1  66 89 55 D8               MOV word ptr [EBP + -0x28],DX
0060BEF5  66 89 45 DA               MOV word ptr [EBP + -0x26],AX
0060BEF9  C7 45 BC 10 01 00 00      MOV dword ptr [EBP + -0x44],0x110
0060BF00  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
0060BF03  EB 3B                     JMP 0x0060bf40
switchD_0060be1d::caseD_65:
0060BF05  8B 96 D9 01 00 00         MOV EDX,dword ptr [ESI + 0x1d9]
0060BF0B  A1 C4 67 7E 00            MOV EAX,[0x007e67c4]
0060BF10  66 8B 8E 05 02 00 00      MOV CX,word ptr [ESI + 0x205]
0060BF17  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0060BF1A  66 8B 96 01 02 00 00      MOV DX,word ptr [ESI + 0x201]
0060BF21  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0060BF24  C7 45 D0 65 00 00 00      MOV dword ptr [EBP + -0x30],0x65
0060BF2B  66 89 4D D8               MOV word ptr [EBP + -0x28],CX
0060BF2F  66 89 55 DA               MOV word ptr [EBP + -0x26],DX
0060BF33  C7 45 BC 10 01 00 00      MOV dword ptr [EBP + -0x44],0x110
0060BF3A  8D 45 CC                  LEA EAX,[EBP + -0x34]
LAB_0060bf3d:
0060BF3D  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
switchD_0060be1d::caseD_44:
0060BF40  8B 17                     MOV EDX,dword ptr [EDI]
0060BF42  8D 45 AC                  LEA EAX,[EBP + -0x54]
0060BF45  50                        PUSH EAX
0060BF46  8B CF                     MOV ECX,EDI
0060BF48  FF 12                     CALL dword ptr [EDX]
0060BF4A  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0060BF4D  5F                        POP EDI
0060BF4E  5E                        POP ESI
0060BF4F  8B E5                     MOV ESP,EBP
0060BF51  5D                        POP EBP
0060BF52  C2 04 00                  RET 0x4
