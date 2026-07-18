FUN_0075d5f0:
0075D5F0  55                        PUSH EBP
0075D5F1  8B EC                     MOV EBP,ESP
0075D5F3  51                        PUSH ECX
0075D5F4  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075D5F7  53                        PUSH EBX
0075D5F8  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075D5FB  56                        PUSH ESI
0075D5FC  8B 10                     MOV EDX,dword ptr [EAX]
0075D5FE  33 F6                     XOR ESI,ESI
0075D600  8B 83 26 01 00 00         MOV EAX,dword ptr [EBX + 0x126]
0075D606  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0075D609  85 C0                     TEST EAX,EAX
0075D60B  7E 64                     JLE 0x0075d671
0075D60D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075D610  57                        PUSH EDI
0075D611  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0075D614  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
0075D617  EB 03                     JMP 0x0075d61c
LAB_0075d619:
0075D619  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_0075d61c:
0075D61C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075D61F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075D622  8B 38                     MOV EDI,dword ptr [EAX]
0075D624  8B 01                     MOV EAX,dword ptr [ECX]
0075D626  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
0075D629  03 C8                     ADD ECX,EAX
0075D62B  3B C1                     CMP EAX,ECX
0075D62D  73 10                     JNC 0x0075d63f
LAB_0075d62f:
0075D62F  8A 17                     MOV DL,byte ptr [EDI]
0075D631  47                        INC EDI
0075D632  88 10                     MOV byte ptr [EAX],DL
0075D634  40                        INC EAX
0075D635  88 10                     MOV byte ptr [EAX],DL
0075D637  40                        INC EAX
0075D638  3B C1                     CMP EAX,ECX
0075D63A  72 F3                     JC 0x0075d62f
0075D63C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_0075d63f:
0075D63F  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
0075D642  8D 4E 01                  LEA ECX,[ESI + 0x1]
0075D645  50                        PUSH EAX
0075D646  6A 01                     PUSH 0x1
0075D648  51                        PUSH ECX
0075D649  52                        PUSH EDX
0075D64A  56                        PUSH ESI
0075D64B  52                        PUSH EDX
0075D64C  E8 5F C8 FF FF            CALL 0x00759eb0
0075D651  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0075D654  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075D657  8B 83 26 01 00 00         MOV EAX,dword ptr [EBX + 0x126]
0075D65D  83 C6 02                  ADD ESI,0x2
0075D660  83 C7 04                  ADD EDI,0x4
0075D663  83 C1 08                  ADD ECX,0x8
0075D666  3B F0                     CMP ESI,EAX
0075D668  89 7D 14                  MOV dword ptr [EBP + 0x14],EDI
0075D66B  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0075D66E  7C A9                     JL 0x0075d619
0075D670  5F                        POP EDI
LAB_0075d671:
0075D671  5E                        POP ESI
0075D672  5B                        POP EBX
0075D673  8B E5                     MOV ESP,EBP
0075D675  5D                        POP EBP
0075D676  C2 10 00                  RET 0x10
