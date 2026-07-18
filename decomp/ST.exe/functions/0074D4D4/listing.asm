FUN_0074d4d4:
0074D4D4  55                        PUSH EBP
0074D4D5  8B EC                     MOV EBP,ESP
0074D4D7  83 EC 10                  SUB ESP,0x10
0074D4DA  53                        PUSH EBX
0074D4DB  56                        PUSH ESI
0074D4DC  57                        PUSH EDI
0074D4DD  33 FF                     XOR EDI,EDI
0074D4DF  57                        PUSH EDI
0074D4E0  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0074D4E3  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0074D4E6  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0074D4E9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0074D4EC  FF 15 D0 C0 85 00         CALL dword ptr [0x0085c0d0]
0074D4F2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074D4F5  8B CE                     MOV ECX,ESI
0074D4F7  8B 06                     MOV EAX,dword ptr [ESI]
0074D4F9  FF 50 04                  CALL dword ptr [EAX + 0x4]
LAB_0074d4fc:
0074D4FC  8B 06                     MOV EAX,dword ptr [ESI]
0074D4FE  8D 4D F0                  LEA ECX,[EBP + -0x10]
0074D501  51                        PUSH ECX
0074D502  8B CE                     MOV ECX,ESI
0074D504  FF 10                     CALL dword ptr [EAX]
0074D506  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
0074D509  8B 06                     MOV EAX,dword ptr [ESI]
0074D50B  8B CE                     MOV ECX,ESI
0074D50D  FF 75 F8                  PUSH dword ptr [EBP + -0x8]
0074D510  FF 75 F4                  PUSH dword ptr [EBP + -0xc]
0074D513  FF 75 F0                  PUSH dword ptr [EBP + -0x10]
0074D516  FF 50 08                  CALL dword ptr [EAX + 0x8]
0074D519  8B D8                     MOV EBX,EAX
0074D51B  3B DF                     CMP EBX,EDI
0074D51D  74 DD                     JZ 0x0074d4fc
0074D51F  FF 15 E0 C0 85 00         CALL dword ptr [0x0085c0e0]
0074D525  5F                        POP EDI
0074D526  8B C3                     MOV EAX,EBX
0074D528  5E                        POP ESI
0074D529  5B                        POP EBX
0074D52A  C9                        LEAVE
0074D52B  C2 04 00                  RET 0x4
