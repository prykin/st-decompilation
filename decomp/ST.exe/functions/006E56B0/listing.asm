StartSystemTy::sub_006E56B0:
006E56B0  55                        PUSH EBP
006E56B1  8B EC                     MOV EBP,ESP
006E56B3  83 EC 24                  SUB ESP,0x24
006E56B6  56                        PUSH ESI
006E56B7  8B F1                     MOV ESI,ECX
006E56B9  8D 45 FC                  LEA EAX,[EBP + -0x4]
006E56BC  57                        PUSH EDI
006E56BD  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E56C0  8D 4D 08                  LEA ECX,[EBP + 0x8]
006E56C3  50                        PUSH EAX
006E56C4  51                        PUSH ECX
006E56C5  57                        PUSH EDI
006E56C6  8B CE                     MOV ECX,ESI
006E56C8  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006E56CF  E8 8C FC FF FF            CALL 0x006e5360
006E56D4  85 C0                     TEST EAX,EAX
006E56D6  75 12                     JNZ 0x006e56ea
006E56D8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006E56DB  C7 45 EC 03 00 00 00      MOV dword ptr [EBP + -0x14],0x3
006E56E2  8D 45 DC                  LEA EAX,[EBP + -0x24]
006E56E5  8B 11                     MOV EDX,dword ptr [ECX]
006E56E7  50                        PUSH EAX
006E56E8  FF 12                     CALL dword ptr [EDX]
LAB_006e56ea:
006E56EA  8D 4D FC                  LEA ECX,[EBP + -0x4]
006E56ED  8D 55 08                  LEA EDX,[EBP + 0x8]
006E56F0  51                        PUSH ECX
006E56F1  52                        PUSH EDX
006E56F2  57                        PUSH EDI
006E56F3  8B CE                     MOV ECX,ESI
006E56F5  E8 66 FC FF FF            CALL 0x006e5360
006E56FA  85 C0                     TEST EAX,EAX
006E56FC  75 35                     JNZ 0x006e5733
006E56FE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E5701  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006E5704  50                        PUSH EAX
006E5705  51                        PUSH ECX
006E5706  E8 65 B5 FC FF            CALL 0x006b0c70
006E570B  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
006E570E  57                        PUSH EDI
006E570F  E8 5C E2 FF FF            CALL 0x006e3970
006E5714  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006E5717  85 C0                     TEST EAX,EAX
006E5719  74 18                     JZ 0x006e5733
LAB_006e571b:
006E571B  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006E571E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E5721  3B D1                     CMP EDX,ECX
006E5723  77 08                     JA 0x006e572d
006E5725  85 C9                     TEST ECX,ECX
006E5727  76 04                     JBE 0x006e572d
006E5729  49                        DEC ECX
006E572A  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
LAB_006e572d:
006E572D  8B 00                     MOV EAX,dword ptr [EAX]
006E572F  85 C0                     TEST EAX,EAX
006E5731  75 E8                     JNZ 0x006e571b
LAB_006e5733:
006E5733  5F                        POP EDI
006E5734  5E                        POP ESI
006E5735  8B E5                     MOV ESP,EBP
006E5737  5D                        POP EBP
006E5738  C2 04 00                  RET 0x4
