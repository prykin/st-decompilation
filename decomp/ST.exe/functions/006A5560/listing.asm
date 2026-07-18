FUN_006a5560:
006A5560  55                        PUSH EBP
006A5561  8B EC                     MOV EBP,ESP
006A5563  A0 78 C1 7E 00            MOV AL,[0x007ec178]
006A5568  56                        PUSH ESI
006A5569  A8 01                     TEST AL,0x1
006A556B  74 31                     JZ 0x006a559e
006A556D  8B 35 6C 49 85 00         MOV ESI,dword ptr [0x0085496c]
006A5573  85 F6                     TEST ESI,ESI
006A5575  74 27                     JZ 0x006a559e
006A5577  53                        PUSH EBX
006A5578  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006A557B  57                        PUSH EDI
006A557C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_006a557f:
006A557F  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006A5582  25 FF FF 00 00            AND EAX,0xffff
006A5587  83 F8 04                  CMP EAX,0x4
006A558A  75 0A                     JNZ 0x006a5596
006A558C  8D 4E 20                  LEA ECX,[ESI + 0x20]
006A558F  57                        PUSH EDI
006A5590  51                        PUSH ECX
006A5591  FF D3                     CALL EBX
006A5593  83 C4 08                  ADD ESP,0x8
LAB_006a5596:
006A5596  8B 36                     MOV ESI,dword ptr [ESI]
006A5598  85 F6                     TEST ESI,ESI
006A559A  75 E3                     JNZ 0x006a557f
006A559C  5F                        POP EDI
006A559D  5B                        POP EBX
LAB_006a559e:
006A559E  5E                        POP ESI
006A559F  5D                        POP EBP
006A55A0  C3                        RET
