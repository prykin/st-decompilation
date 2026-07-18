FUN_00621580:
00621580  55                        PUSH EBP
00621581  8B EC                     MOV EBP,ESP
00621583  51                        PUSH ECX
00621584  56                        PUSH ESI
00621585  8B F1                     MOV ESI,ECX
00621587  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062158A  33 C0                     XOR EAX,EAX
0062158C  A0 4D 87 80 00            MOV AL,[0x0080874d]
00621591  57                        PUSH EDI
00621592  3B C1                     CMP EAX,ECX
00621594  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0062159B  75 60                     JNZ 0x006215fd
0062159D  8B 86 0A 01 00 00         MOV EAX,dword ptr [ESI + 0x10a]
006215A3  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006215A6  85 C0                     TEST EAX,EAX
006215A8  74 10                     JZ 0x006215ba
006215AA  8D 4D FC                  LEA ECX,[EBP + -0x4]
006215AD  51                        PUSH ECX
006215AE  57                        PUSH EDI
006215AF  8B CE                     MOV ECX,ESI
006215B1  E8 65 48 DE FF            CALL 0x00405e1b
006215B6  85 C0                     TEST EAX,EAX
006215B8  7D 08                     JGE 0x006215c2
LAB_006215ba:
006215BA  57                        PUSH EDI
006215BB  8B CE                     MOV ECX,ESI
006215BD  E8 75 45 DE FF            CALL 0x00405b37
LAB_006215c2:
006215C2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006215C5  85 C9                     TEST ECX,ECX
006215C7  74 34                     JZ 0x006215fd
006215C9  85 C0                     TEST EAX,EAX
006215CB  7C 30                     JL 0x006215fd
006215CD  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
006215D3  8B BE 06 01 00 00         MOV EDI,dword ptr [ESI + 0x106]
006215D9  8B 8A E4 00 00 00         MOV ECX,dword ptr [EDX + 0xe4]
006215DF  2B CF                     SUB ECX,EDI
006215E1  83 F9 0A                  CMP ECX,0xa
006215E4  76 10                     JBE 0x006215f6
006215E6  50                        PUSH EAX
006215E7  8B CE                     MOV ECX,ESI
006215E9  E8 85 FA DD FF            CALL 0x00401073
006215EE  5F                        POP EDI
006215EF  5E                        POP ESI
006215F0  8B E5                     MOV ESP,EBP
006215F2  5D                        POP EBP
006215F3  C2 08 00                  RET 0x8
LAB_006215f6:
006215F6  C6 86 05 01 00 00 01      MOV byte ptr [ESI + 0x105],0x1
LAB_006215fd:
006215FD  5F                        POP EDI
006215FE  5E                        POP ESI
006215FF  8B E5                     MOV ESP,EBP
00621601  5D                        POP EBP
00621602  C2 08 00                  RET 0x8
