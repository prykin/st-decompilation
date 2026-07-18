FUN_005f8cc0:
005F8CC0  55                        PUSH EBP
005F8CC1  8B EC                     MOV EBP,ESP
005F8CC3  83 EC 0C                  SUB ESP,0xc
005F8CC6  56                        PUSH ESI
005F8CC7  8B F1                     MOV ESI,ECX
005F8CC9  8D 45 FC                  LEA EAX,[EBP + -0x4]
005F8CCC  8D 4D F8                  LEA ECX,[EBP + -0x8]
005F8CCF  50                        PUSH EAX
005F8CD0  8D 55 F4                  LEA EDX,[EBP + -0xc]
005F8CD3  51                        PUSH ECX
005F8CD4  52                        PUSH EDX
005F8CD5  8B CE                     MOV ECX,ESI
005F8CD7  E8 BD C6 E0 FF            CALL 0x00405399
005F8CDC  85 C0                     TEST EAX,EAX
005F8CDE  74 13                     JZ 0x005f8cf3
005F8CE0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F8CE3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005F8CE6  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005F8CE9  50                        PUSH EAX
005F8CEA  51                        PUSH ECX
005F8CEB  52                        PUSH EDX
005F8CEC  8B CE                     MOV ECX,ESI
005F8CEE  E8 31 AF E0 FF            CALL 0x00403c24
LAB_005f8cf3:
005F8CF3  5E                        POP ESI
005F8CF4  8B E5                     MOV ESP,EBP
005F8CF6  5D                        POP EBP
005F8CF7  C3                        RET
