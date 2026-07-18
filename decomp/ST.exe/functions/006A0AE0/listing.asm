FUN_006a0ae0:
006A0AE0  55                        PUSH EBP
006A0AE1  8B EC                     MOV EBP,ESP
006A0AE3  81 EC 98 00 00 00         SUB ESP,0x98
006A0AE9  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A0AEC  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006A0AEF  53                        PUSH EBX
006A0AF0  56                        PUSH ESI
006A0AF1  8B D9                     MOV EBX,ECX
006A0AF3  57                        PUSH EDI
006A0AF4  50                        PUSH EAX
006A0AF5  8D 4D FC                  LEA ECX,[EBP + -0x4]
006A0AF8  6A 00                     PUSH 0x0
006A0AFA  51                        PUSH ECX
006A0AFB  52                        PUSH EDX
006A0AFC  6A 0A                     PUSH 0xa
006A0AFE  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006A0B05  E8 4C 4F D6 FF            CALL 0x00405a56
006A0B0A  8D 70 14                  LEA ESI,[EAX + 0x14]
006A0B0D  B9 24 00 00 00            MOV ECX,0x24
006A0B12  8D BD 68 FF FF FF         LEA EDI,[EBP + 0xffffff68]
006A0B18  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A0B1B  F3 A5                     MOVSD.REP ES:EDI,ESI
006A0B1D  66 A5                     MOVSW ES:EDI,ESI
006A0B1F  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
006A0B22  66 89 85 6A FF FF FF      MOV word ptr [EBP + 0xffffff6a],AX
006A0B29  C1 E1 02                  SHL ECX,0x2
006A0B2C  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006A0B31  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006A0B34  F7 E9                     IMUL ECX
006A0B36  C1 FA 05                  SAR EDX,0x5
006A0B39  8B C2                     MOV EAX,EDX
006A0B3B  83 C4 14                  ADD ESP,0x14
006A0B3E  C1 E8 1F                  SHR EAX,0x1f
006A0B41  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
006A0B44  03 D0                     ADD EDX,EAX
006A0B46  C1 E1 02                  SHL ECX,0x2
006A0B49  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006A0B4E  52                        PUSH EDX
006A0B4F  F7 E9                     IMUL ECX
006A0B51  C1 FA 05                  SAR EDX,0x5
006A0B54  8B CA                     MOV ECX,EDX
006A0B56  66 89 B5 68 FF FF FF      MOV word ptr [EBP + 0xffffff68],SI
006A0B5D  C1 E9 1F                  SHR ECX,0x1f
006A0B60  03 D1                     ADD EDX,ECX
006A0B62  8B CB                     MOV ECX,EBX
006A0B64  52                        PUSH EDX
006A0B65  E8 4F 46 D6 FF            CALL 0x004051b9
006A0B6A  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
006A0B6D  66 89 85 6C FF FF FF      MOV word ptr [EBP + 0xffffff6c],AX
006A0B74  46                        INC ESI
006A0B75  8B C6                     MOV EAX,ESI
006A0B77  89 73 04                  MOV dword ptr [EBX + 0x4],ESI
006A0B7A  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006A0B7D  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
006A0B80  8B 13                     MOV EDX,dword ptr [EBX]
006A0B82  8D 8C 00 AA 00 00 00      LEA ECX,[EAX + EAX*0x1 + 0xaa]
006A0B89  51                        PUSH ECX
006A0B8A  52                        PUSH EDX
006A0B8B  E8 C0 C3 00 00            CALL 0x006acf50
006A0B90  89 03                     MOV dword ptr [EBX],EAX
006A0B92  8B 5B 04                  MOV EBX,dword ptr [EBX + 0x4]
006A0B95  8D B5 68 FF FF FF         LEA ESI,[EBP + 0xffffff68]
006A0B9B  8D 0C DB                  LEA ECX,[EBX + EBX*0x8]
006A0B9E  8D 14 CB                  LEA EDX,[EBX + ECX*0x8]
006A0BA1  B9 24 00 00 00            MOV ECX,0x24
006A0BA6  8D 7C 50 86               LEA EDI,[EAX + EDX*0x2 + -0x7a]
006A0BAA  F3 A5                     MOVSD.REP ES:EDI,ESI
006A0BAC  66 A5                     MOVSW ES:EDI,ESI
006A0BAE  5F                        POP EDI
006A0BAF  5E                        POP ESI
006A0BB0  5B                        POP EBX
006A0BB1  8B E5                     MOV ESP,EBP
006A0BB3  5D                        POP EBP
006A0BB4  C2 14 00                  RET 0x14
