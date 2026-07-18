FUN_006d4930:
006D4930  55                        PUSH EBP
006D4931  8B EC                     MOV EBP,ESP
006D4933  53                        PUSH EBX
006D4934  56                        PUSH ESI
006D4935  57                        PUSH EDI
006D4936  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D4939  F7 47 08 00 00 10 00      TEST dword ptr [EDI + 0x8],0x100000
006D4940  74 68                     JZ 0x006d49aa
006D4942  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006D4945  33 F6                     XOR ESI,ESI
006D4947  85 DB                     TEST EBX,EBX
006D4949  74 56                     JZ 0x006d49a1
006D494B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D494E  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
006D4951  56                        PUSH ESI
006D4952  56                        PUSH ESI
006D4953  50                        PUSH EAX
006D4954  51                        PUSH ECX
006D4955  FF 15 74 BC 85 00         CALL dword ptr [0x0085bc74]
006D495B  83 F8 FF                  CMP EAX,-0x1
006D495E  74 18                     JZ 0x006d4978
006D4960  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D4963  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
006D4966  8D 55 0C                  LEA EDX,[EBP + 0xc]
006D4969  56                        PUSH ESI
006D496A  52                        PUSH EDX
006D496B  50                        PUSH EAX
006D496C  53                        PUSH EBX
006D496D  51                        PUSH ECX
006D496E  FF 15 68 BC 85 00         CALL dword ptr [0x0085bc68]
006D4974  85 C0                     TEST EAX,EAX
006D4976  75 1A                     JNZ 0x006d4992
LAB_006d4978:
006D4978  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006D497E  8B F0                     MOV ESI,EAX
006D4980  85 F6                     TEST ESI,ESI
006D4982  75 1D                     JNZ 0x006d49a1
006D4984  BE 03 FF FF FF            MOV ESI,0xffffff03
006D4989  5F                        POP EDI
006D498A  8B C6                     MOV EAX,ESI
006D498C  5E                        POP ESI
006D498D  5B                        POP EBX
006D498E  5D                        POP EBP
006D498F  C2 10 00                  RET 0x10
LAB_006d4992:
006D4992  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D4995  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D4998  3B C2                     CMP EAX,EDX
006D499A  74 05                     JZ 0x006d49a1
LAB_006d499c:
006D499C  BE F2 FF FF FF            MOV ESI,0xfffffff2
LAB_006d49a1:
006D49A1  8B C6                     MOV EAX,ESI
006D49A3  5F                        POP EDI
006D49A4  5E                        POP ESI
006D49A5  5B                        POP EBX
006D49A6  5D                        POP EBP
006D49A7  C2 10 00                  RET 0x10
LAB_006d49aa:
006D49AA  8B 47 34                  MOV EAX,dword ptr [EDI + 0x34]
006D49AD  BE AF FF FF FF            MOV ESI,0xffffffaf
006D49B2  85 C0                     TEST EAX,EAX
006D49B4  74 EB                     JZ 0x006d49a1
006D49B6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D49B9  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D49BC  8B 5F 38                  MOV EBX,dword ptr [EDI + 0x38]
006D49BF  8D 34 0A                  LEA ESI,[EDX + ECX*0x1]
006D49C2  3B F3                     CMP ESI,EBX
006D49C4  77 D6                     JA 0x006d499c
006D49C6  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006D49C9  85 FF                     TEST EDI,EDI
006D49CB  74 11                     JZ 0x006d49de
006D49CD  8D 34 10                  LEA ESI,[EAX + EDX*0x1]
006D49D0  8B C1                     MOV EAX,ECX
006D49D2  C1 E9 02                  SHR ECX,0x2
006D49D5  F3 A5                     MOVSD.REP ES:EDI,ESI
006D49D7  8B C8                     MOV ECX,EAX
006D49D9  83 E1 03                  AND ECX,0x3
006D49DC  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006d49de:
006D49DE  33 F6                     XOR ESI,ESI
006D49E0  5F                        POP EDI
006D49E1  8B C6                     MOV EAX,ESI
006D49E3  5E                        POP ESI
006D49E4  5B                        POP EBX
006D49E5  5D                        POP EBP
006D49E6  C2 10 00                  RET 0x10
