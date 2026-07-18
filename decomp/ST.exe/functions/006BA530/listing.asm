FUN_006ba530:
006BA530  55                        PUSH EBP
006BA531  8B EC                     MOV EBP,ESP
006BA533  83 EC 44                  SUB ESP,0x44
006BA536  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006BA539  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006BA53C  56                        PUSH ESI
006BA53D  57                        PUSH EDI
006BA53E  6A 00                     PUSH 0x0
006BA540  50                        PUSH EAX
006BA541  51                        PUSH ECX
006BA542  E8 D9 F5 FF FF            CALL 0x006b9b20
006BA547  85 C0                     TEST EAX,EAX
006BA549  74 0A                     JZ 0x006ba555
006BA54B  33 C0                     XOR EAX,EAX
006BA54D  5F                        POP EDI
006BA54E  5E                        POP ESI
006BA54F  8B E5                     MOV ESP,EBP
006BA551  5D                        POP EBP
006BA552  C2 2C 00                  RET 0x2c
LAB_006ba555:
006BA555  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
006BA55B  8D 4D C0                  LEA ECX,[EBP + -0x40]
006BA55E  8D 45 BC                  LEA EAX,[EBP + -0x44]
006BA561  6A 00                     PUSH 0x0
006BA563  51                        PUSH ECX
006BA564  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
006BA567  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006BA56C  E8 7F 32 07 00            CALL 0x0072d7f0
006BA571  8B F0                     MOV ESI,EAX
006BA573  83 C4 08                  ADD ESP,0x8
006BA576  85 F6                     TEST ESI,ESI
006BA578  75 42                     JNZ 0x006ba5bc
006BA57A  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006BA57D  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006BA580  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006BA583  52                        PUSH EDX
006BA584  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006BA587  50                        PUSH EAX
006BA588  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006BA58B  51                        PUSH ECX
006BA58C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006BA58F  52                        PUSH EDX
006BA590  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006BA593  50                        PUSH EAX
006BA594  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006BA597  51                        PUSH ECX
006BA598  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006BA59B  52                        PUSH EDX
006BA59C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006BA59F  50                        PUSH EAX
006BA5A0  51                        PUSH ECX
006BA5A1  8B 02                     MOV EAX,dword ptr [EDX]
006BA5A3  50                        PUSH EAX
006BA5A4  E8 97 F5 FF FF            CALL 0x006b9b40
006BA5A9  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006BA5AC  33 C0                     XOR EAX,EAX
006BA5AE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006BA5B4  5F                        POP EDI
006BA5B5  5E                        POP ESI
006BA5B6  8B E5                     MOV ESP,EBP
006BA5B8  5D                        POP EBP
006BA5B9  C2 2C 00                  RET 0x2c
LAB_006ba5bc:
006BA5BC  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006BA5BF  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006BA5C2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006BA5C8  8B 07                     MOV EAX,dword ptr [EDI]
006BA5CA  50                        PUSH EAX
006BA5CB  E8 30 00 00 00            CALL 0x006ba600
006BA5D0  68 31 02 00 00            PUSH 0x231
006BA5D5  68 48 DC 7E 00            PUSH 0x7edc48
006BA5DA  6A 00                     PUSH 0x0
006BA5DC  56                        PUSH ESI
006BA5DD  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
006BA5E3  E8 58 B8 FE FF            CALL 0x006a5e40
006BA5E8  8B C6                     MOV EAX,ESI
006BA5EA  5F                        POP EDI
006BA5EB  5E                        POP ESI
006BA5EC  8B E5                     MOV ESP,EBP
006BA5EE  5D                        POP EBP
006BA5EF  C2 2C 00                  RET 0x2c
