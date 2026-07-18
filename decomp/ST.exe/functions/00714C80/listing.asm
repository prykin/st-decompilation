FUN_00714c80:
00714C80  55                        PUSH EBP
00714C81  8B EC                     MOV EBP,ESP
00714C83  83 EC 4C                  SUB ESP,0x4c
00714C86  56                        PUSH ESI
00714C87  8B F1                     MOV ESI,ECX
00714C89  57                        PUSH EDI
00714C8A  33 FF                     XOR EDI,EDI
00714C8C  8B 46 58                  MOV EAX,dword ptr [ESI + 0x58]
00714C8F  85 C0                     TEST EAX,EAX
00714C91  74 39                     JZ 0x00714ccc
00714C93  8B 0E                     MOV ECX,dword ptr [ESI]
00714C95  85 C9                     TEST ECX,ECX
00714C97  74 33                     JZ 0x00714ccc
00714C99  8D 45 B4                  LEA EAX,[EBP + -0x4c]
00714C9C  50                        PUSH EAX
00714C9D  E8 0E BC FF FF            CALL 0x007108b0
00714CA2  8D 4E 10                  LEA ECX,[ESI + 0x10]
00714CA5  51                        PUSH ECX
00714CA6  8B 0E                     MOV ECX,dword ptr [ESI]
00714CA8  E8 43 BD FF FF            CALL 0x007109f0
00714CAD  8D 55 FC                  LEA EDX,[EBP + -0x4]
00714CB0  85 D2                     TEST EDX,EDX
00714CB2  74 05                     JZ 0x00714cb9
00714CB4  8B 06                     MOV EAX,dword ptr [ESI]
00714CB6  8B 78 72                  MOV EDI,dword ptr [EAX + 0x72]
LAB_00714cb9:
00714CB9  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00714CBC  51                        PUSH ECX
00714CBD  8B 0E                     MOV ECX,dword ptr [ESI]
00714CBF  E8 2C BD FF FF            CALL 0x007109f0
00714CC4  8B C7                     MOV EAX,EDI
00714CC6  5F                        POP EDI
00714CC7  5E                        POP ESI
00714CC8  8B E5                     MOV ESP,EBP
00714CCA  5D                        POP EBP
00714CCB  C3                        RET
LAB_00714ccc:
00714CCC  5F                        POP EDI
00714CCD  33 C0                     XOR EAX,EAX
00714CCF  5E                        POP ESI
00714CD0  8B E5                     MOV ESP,EBP
00714CD2  5D                        POP EBP
00714CD3  C3                        RET
