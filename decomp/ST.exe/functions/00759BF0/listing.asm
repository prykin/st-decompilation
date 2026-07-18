FUN_00759bf0:
00759BF0  55                        PUSH EBP
00759BF1  8B EC                     MOV EBP,ESP
00759BF3  51                        PUSH ECX
00759BF4  53                        PUSH EBX
00759BF5  56                        PUSH ESI
00759BF6  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00759BF9  57                        PUSH EDI
00759BFA  33 FF                     XOR EDI,EDI
00759BFC  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00759BFF  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00759C02  C1 E2 08                  SHL EDX,0x8
00759C05  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00759C08  0F AF 56 18               IMUL EDX,dword ptr [ESI + 0x18]
00759C0C  85 C0                     TEST EAX,EAX
00759C0E  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00759C11  7E 79                     JLE 0x00759c8c
00759C13  EB 03                     JMP 0x00759c18
LAB_00759c15:
00759C15  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_00759c18:
00759C18  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00759C1B  2B C7                     SUB EAX,EDI
00759C1D  3B C8                     CMP ECX,EAX
00759C1F  7D 02                     JGE 0x00759c23
00759C21  8B C1                     MOV EAX,ECX
LAB_00759c23:
00759C23  8B 5E 18                  MOV EBX,dword ptr [ESI + 0x18]
00759C26  8B CF                     MOV ECX,EDI
00759C28  03 CB                     ADD ECX,EBX
00759C2A  8B 5E 1C                  MOV EBX,dword ptr [ESI + 0x1c]
00759C2D  2B D9                     SUB EBX,ECX
00759C2F  3B C3                     CMP EAX,EBX
00759C31  7C 02                     JL 0x00759c35
00759C33  8B C3                     MOV EAX,EBX
LAB_00759c35:
00759C35  8B 5E 04                  MOV EBX,dword ptr [ESI + 0x4]
00759C38  2B D9                     SUB EBX,ECX
00759C3A  3B C3                     CMP EAX,EBX
00759C3C  7C 02                     JL 0x00759c40
00759C3E  8B C3                     MOV EAX,EBX
LAB_00759c40:
00759C40  85 C0                     TEST EAX,EAX
00759C42  7E 48                     JLE 0x00759c8c
00759C44  0F AF 45 FC               IMUL EAX,dword ptr [EBP + -0x4]
00759C48  8B D8                     MOV EBX,EAX
00759C4A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00759C4D  85 C0                     TEST EAX,EAX
00759C4F  74 15                     JZ 0x00759c66
00759C51  8B 06                     MOV EAX,dword ptr [ESI]
00759C53  53                        PUSH EBX
00759C54  52                        PUSH EDX
00759C55  8D 56 30                  LEA EDX,[ESI + 0x30]
00759C58  8B 0C B8                  MOV ECX,dword ptr [EAX + EDI*0x4]
00759C5B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00759C5E  51                        PUSH ECX
00759C5F  52                        PUSH EDX
00759C60  50                        PUSH EAX
00759C61  FF 56 34                  CALL dword ptr [ESI + 0x34]
00759C64  EB 12                     JMP 0x00759c78
LAB_00759c66:
00759C66  8B 0E                     MOV ECX,dword ptr [ESI]
00759C68  53                        PUSH EBX
00759C69  52                        PUSH EDX
00759C6A  8D 46 30                  LEA EAX,[ESI + 0x30]
00759C6D  8B 14 B9                  MOV EDX,dword ptr [ECX + EDI*0x4]
00759C70  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00759C73  52                        PUSH EDX
00759C74  50                        PUSH EAX
00759C75  51                        PUSH ECX
00759C76  FF 10                     CALL dword ptr [EAX]
LAB_00759c78:
00759C78  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00759C7B  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
00759C7E  03 C3                     ADD EAX,EBX
00759C80  03 FA                     ADD EDI,EDX
00759C82  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00759C85  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00759C88  3B F8                     CMP EDI,EAX
00759C8A  7C 89                     JL 0x00759c15
LAB_00759c8c:
00759C8C  5F                        POP EDI
00759C8D  5E                        POP ESI
00759C8E  5B                        POP EBX
00759C8F  8B E5                     MOV ESP,EBP
00759C91  5D                        POP EBP
00759C92  C2 0C 00                  RET 0xc
