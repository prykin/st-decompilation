FUN_006e5740:
006E5740  55                        PUSH EBP
006E5741  8B EC                     MOV EBP,ESP
006E5743  83 EC 20                  SUB ESP,0x20
006E5746  57                        PUSH EDI
006E5747  8B F9                     MOV EDI,ECX
006E5749  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
006E574C  85 C0                     TEST EAX,EAX
006E574E  74 53                     JZ 0x006e57a3
006E5750  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006E5753  85 C9                     TEST ECX,ECX
006E5755  74 45                     JZ 0x006e579c
006E5757  56                        PUSH ESI
LAB_006e5758:
006E5758  C7 45 F0 03 00 00 00      MOV dword ptr [EBP + -0x10],0x3
006E575F  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006E5762  85 C9                     TEST ECX,ECX
006E5764  76 05                     JBE 0x006e576b
006E5766  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
006E5769  EB 02                     JMP 0x006e576d
LAB_006e576b:
006E576B  33 C0                     XOR EAX,EAX
LAB_006e576d:
006E576D  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
006E5770  8D 4D E0                  LEA ECX,[EBP + -0x20]
006E5773  51                        PUSH ECX
006E5774  8B CE                     MOV ECX,ESI
006E5776  8B 06                     MOV EAX,dword ptr [ESI]
006E5778  FF 10                     CALL dword ptr [EAX]
006E577A  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006E577D  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
006E5780  52                        PUSH EDX
006E5781  E8 EA E1 FF FF            CALL 0x006e3970
006E5786  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
006E5789  6A 00                     PUSH 0x0
006E578B  50                        PUSH EAX
006E578C  E8 DF B4 FC FF            CALL 0x006b0c70
006E5791  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
006E5794  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006E5797  85 C9                     TEST ECX,ECX
006E5799  75 BD                     JNZ 0x006e5758
006E579B  5E                        POP ESI
LAB_006e579c:
006E579C  C7 47 0C 00 00 00 00      MOV dword ptr [EDI + 0xc],0x0
LAB_006e57a3:
006E57A3  5F                        POP EDI
006E57A4  8B E5                     MOV ESP,EBP
006E57A6  5D                        POP EBP
006E57A7  C3                        RET
