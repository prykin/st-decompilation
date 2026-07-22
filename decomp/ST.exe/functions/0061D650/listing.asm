STLightC::sub_0061D650:
0061D650  56                        PUSH ESI
0061D651  8B F1                     MOV ESI,ECX
0061D653  8B 4E 57                  MOV ECX,dword ptr [ESI + 0x57]
0061D656  57                        PUSH EDI
0061D657  8D 46 57                  LEA EAX,[ESI + 0x57]
0061D65A  33 FF                     XOR EDI,EDI
0061D65C  3B CF                     CMP ECX,EDI
0061D65E  74 06                     JZ 0x0061d666
0061D660  50                        PUSH EAX
0061D661  E8 FA D9 08 00            CALL 0x006ab060
LAB_0061d666:
0061D666  8B 8E 9B 00 00 00         MOV ECX,dword ptr [ESI + 0x9b]
0061D66C  8D 86 9B 00 00 00         LEA EAX,[ESI + 0x9b]
0061D672  3B CF                     CMP ECX,EDI
0061D674  74 06                     JZ 0x0061d67c
0061D676  50                        PUSH EAX
0061D677  E8 E4 D9 08 00            CALL 0x006ab060
LAB_0061d67c:
0061D67C  8B 8E 9F 00 00 00         MOV ECX,dword ptr [ESI + 0x9f]
0061D682  8D 86 9F 00 00 00         LEA EAX,[ESI + 0x9f]
0061D688  3B CF                     CMP ECX,EDI
0061D68A  74 06                     JZ 0x0061d692
0061D68C  50                        PUSH EAX
0061D68D  E8 CE D9 08 00            CALL 0x006ab060
LAB_0061d692:
0061D692  89 BE 93 00 00 00         MOV dword ptr [ESI + 0x93],EDI
0061D698  89 BE 97 00 00 00         MOV dword ptr [ESI + 0x97],EDI
0061D69E  5F                        POP EDI
0061D69F  5E                        POP ESI
0061D6A0  C3                        RET
