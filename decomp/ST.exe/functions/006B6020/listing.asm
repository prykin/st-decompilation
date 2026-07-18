FUN_006b6020:
006B6020  55                        PUSH EBP
006B6021  8B EC                     MOV EBP,ESP
006B6023  53                        PUSH EBX
006B6024  56                        PUSH ESI
006B6025  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B6028  57                        PUSH EDI
006B6029  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006B602C  3B 7E 0C                  CMP EDI,dword ptr [ESI + 0xc]
006B602F  72 11                     JC 0x006b6042
LAB_006b6031:
006B6031  56                        PUSH ESI
006B6032  E8 49 F4 FF FF            CALL 0x006b5480
006B6037  8B D8                     MOV EBX,EAX
006B6039  85 DB                     TEST EBX,EBX
006B603B  75 24                     JNZ 0x006b6061
006B603D  3B 7E 0C                  CMP EDI,dword ptr [ESI + 0xc]
006B6040  73 EF                     JNC 0x006b6031
LAB_006b6042:
006B6042  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006B6045  85 DB                     TEST EBX,EBX
006B6047  74 34                     JZ 0x006b607d
006B6049  53                        PUSH EBX
006B604A  E8 61 E9 00 00            CALL 0x006c49b0
006B604F  8B D8                     MOV EBX,EAX
006B6051  85 DB                     TEST EBX,EBX
006B6053  75 28                     JNZ 0x006b607d
006B6055  5F                        POP EDI
006B6056  5E                        POP ESI
006B6057  B8 FE FF FF FF            MOV EAX,0xfffffffe
006B605C  5B                        POP EBX
006B605D  5D                        POP EBP
006B605E  C2 0C 00                  RET 0xc
LAB_006b6061:
006B6061  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006B6066  6A 0E                     PUSH 0xe
006B6068  68 98 DB 7E 00            PUSH 0x7edb98
006B606D  50                        PUSH EAX
006B606E  53                        PUSH EBX
006B606F  E8 CC FD FE FF            CALL 0x006a5e40
006B6074  5F                        POP EDI
006B6075  8B C3                     MOV EAX,EBX
006B6077  5E                        POP ESI
006B6078  5B                        POP EBX
006B6079  5D                        POP EBP
006B607A  C2 0C 00                  RET 0xc
LAB_006b607d:
006B607D  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006B6080  8B 04 B9                  MOV EAX,dword ptr [ECX + EDI*0x4]
006B6083  85 C0                     TEST EAX,EAX
006B6085  74 06                     JZ 0x006b608d
006B6087  50                        PUSH EAX
006B6088  E8 03 FE FE FF            CALL 0x006a5e90
LAB_006b608d:
006B608D  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
006B6090  89 1C BA                  MOV dword ptr [EDX + EDI*0x4],EBX
006B6093  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006B6096  3B F8                     CMP EDI,EAX
006B6098  72 06                     JC 0x006b60a0
006B609A  8D 47 01                  LEA EAX,[EDI + 0x1]
006B609D  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
LAB_006b60a0:
006B60A0  8B C7                     MOV EAX,EDI
006B60A2  5F                        POP EDI
006B60A3  5E                        POP ESI
006B60A4  5B                        POP EBX
006B60A5  5D                        POP EBP
006B60A6  C2 0C 00                  RET 0xc
