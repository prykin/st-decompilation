FUN_006d0020:
006D0020  55                        PUSH EBP
006D0021  8B EC                     MOV EBP,ESP
006D0023  83 EC 10                  SUB ESP,0x10
006D0026  53                        PUSH EBX
006D0027  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006D002A  8D 45 08                  LEA EAX,[EBP + 0x8]
006D002D  50                        PUSH EAX
006D002E  53                        PUSH EBX
006D002F  E8 3C E7 FF FF            CALL 0x006ce770
006D0034  85 C0                     TEST EAX,EAX
006D0036  0F 85 80 00 00 00         JNZ 0x006d00bc
006D003C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D003F  56                        PUSH ESI
006D0040  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006D0043  57                        PUSH EDI
006D0044  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006D0047  51                        PUSH ECX
006D0048  52                        PUSH EDX
006D0049  FF 15 B8 BA 85 00         CALL dword ptr [0x0085bab8]
006D004F  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006D0052  83 F8 FF                  CMP EAX,-0x1
006D0055  75 0E                     JNZ 0x006d0065
006D0057  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D005A  6A 01                     PUSH 0x1
006D005C  50                        PUSH EAX
006D005D  FF 15 68 BA 85 00         CALL dword ptr [0x0085ba68]
006D0063  EB 0B                     JMP 0x006d0070
LAB_006d0065:
006D0065  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D0068  50                        PUSH EAX
006D0069  51                        PUSH ECX
006D006A  FF 15 B4 BA 85 00         CALL dword ptr [0x0085bab4]
LAB_006d0070:
006D0070  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D0073  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D0076  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D0079  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006D007C  03 C2                     ADD EAX,EDX
006D007E  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006D0081  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006D0084  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D0087  03 C8                     ADD ECX,EAX
006D0089  8D 56 18                  LEA EDX,[ESI + 0x18]
006D008C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006D008F  8D 4D F0                  LEA ECX,[EBP + -0x10]
006D0092  68 00 08 00 00            PUSH 0x800
006D0097  51                        PUSH ECX
006D0098  8B FA                     MOV EDI,EDX
006D009A  83 C9 FF                  OR ECX,0xffffffff
006D009D  33 C0                     XOR EAX,EAX
006D009F  F2 AE                     SCASB.REPNE ES:EDI
006D00A1  F7 D1                     NOT ECX
006D00A3  49                        DEC ECX
006D00A4  51                        PUSH ECX
006D00A5  52                        PUSH EDX
006D00A6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D00A9  52                        PUSH EDX
006D00AA  FF 15 64 BE 85 00         CALL dword ptr [0x0085be64]
006D00B0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D00B3  50                        PUSH EAX
006D00B4  53                        PUSH EBX
006D00B5  E8 06 E8 FF FF            CALL 0x006ce8c0
006D00BA  5F                        POP EDI
006D00BB  5E                        POP ESI
LAB_006d00bc:
006D00BC  5B                        POP EBX
006D00BD  8B E5                     MOV ESP,EBP
006D00BF  5D                        POP EBP
006D00C0  C2 20 00                  RET 0x20
