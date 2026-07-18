FUN_006ea680:
006EA680  55                        PUSH EBP
006EA681  8B EC                     MOV EBP,ESP
006EA683  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006EA686  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EA68C  3B D0                     CMP EDX,EAX
006EA68E  73 28                     JNC 0x006ea6b8
006EA690  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006EA696  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EA699  C1 E0 03                  SHL EAX,0x3
006EA69C  2B C2                     SUB EAX,EDX
006EA69E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EA6A1  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006EA6A4  8B 08                     MOV ECX,dword ptr [EAX]
006EA6A6  F6 C5 80                  TEST CH,0x80
006EA6A9  74 0D                     JZ 0x006ea6b8
006EA6AB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006EA6AE  89 90 AC 00 00 00         MOV dword ptr [EAX + 0xac],EDX
006EA6B4  5D                        POP EBP
006EA6B5  C2 08 00                  RET 0x8
LAB_006ea6b8:
006EA6B8  83 FA FF                  CMP EDX,-0x1
006EA6BB  74 0A                     JZ 0x006ea6c7
006EA6BD  68 B8 EE 7E 00            PUSH 0x7eeeb8
006EA6C2  E8 89 E5 FF FF            CALL 0x006e8c50
LAB_006ea6c7:
006EA6C7  5D                        POP EBP
006EA6C8  C2 08 00                  RET 0x8
