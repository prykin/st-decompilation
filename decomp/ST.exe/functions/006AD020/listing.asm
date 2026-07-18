FUN_006ad020:
006AD020  55                        PUSH EBP
006AD021  8B EC                     MOV EBP,ESP
006AD023  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006AD026  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006AD029  53                        PUSH EBX
006AD02A  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006AD02D  2B C1                     SUB EAX,ECX
006AD02F  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AD032  2B CB                     SUB ECX,EBX
006AD034  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006AD037  8D 53 FF                  LEA EDX,[EBX + -0x1]
006AD03A  83 FA 05                  CMP EDX,0x5
006AD03D  77 1D                     JA 0x006ad05c
switchD_006ad03f::switchD:
006AD03F  FF 24 95 8C D0 6A 00      JMP dword ptr [EDX*0x4 + 0x6ad08c]
switchD_006ad03f::caseD_1:
006AD046  F7 D9                     NEG ECX
006AD048  8B D0                     MOV EDX,EAX
006AD04A  8B C1                     MOV EAX,ECX
006AD04C  EB 0C                     JMP 0x006ad05a
switchD_006ad03f::caseD_3:
006AD04E  F7 D8                     NEG EAX
006AD050  F7 D9                     NEG ECX
006AD052  EB 08                     JMP 0x006ad05c
switchD_006ad03f::caseD_5:
006AD054  8B D0                     MOV EDX,EAX
006AD056  8B C1                     MOV EAX,ECX
006AD058  F7 DA                     NEG EDX
LAB_006ad05a:
006AD05A  8B CA                     MOV ECX,EDX
switchD_006ad03f::default:
006AD05C  F6 C3 01                  TEST BL,0x1
006AD05F  5B                        POP EBX
006AD060  74 21                     JZ 0x006ad083
006AD062  2B C1                     SUB EAX,ECX
006AD064  8D 0C 85 01 00 00 00      LEA ECX,[EAX*0x4 + 0x1]
006AD06B  B8 55 55 55 55            MOV EAX,0x55555555
006AD070  F7 E9                     IMUL ECX
006AD072  2B D1                     SUB EDX,ECX
006AD074  D1 FA                     SAR EDX,0x1
006AD076  8B C2                     MOV EAX,EDX
006AD078  C1 E8 1F                  SHR EAX,0x1f
006AD07B  03 D0                     ADD EDX,EAX
006AD07D  8B C2                     MOV EAX,EDX
006AD07F  5D                        POP EBP
006AD080  C2 14 00                  RET 0x14
LAB_006ad083:
006AD083  8D 04 09                  LEA EAX,[ECX + ECX*0x1]
006AD086  5D                        POP EBP
006AD087  C2 14 00                  RET 0x14
