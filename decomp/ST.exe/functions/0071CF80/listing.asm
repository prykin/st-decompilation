FUN_0071cf80:
0071CF80  8B 81 88 01 00 00         MOV EAX,dword ptr [ECX + 0x188]
0071CF86  56                        PUSH ESI
0071CF87  33 F6                     XOR ESI,ESI
0071CF89  85 C0                     TEST EAX,EAX
0071CF8B  74 37                     JZ 0x0071cfc4
0071CF8D  66 8B 91 E8 01 00 00      MOV DX,word ptr [ECX + 0x1e8]
0071CF94  66 8B 41 1C               MOV AX,word ptr [ECX + 0x1c]
0071CF98  66 89 91 8E 01 00 00      MOV word ptr [ECX + 0x18e],DX
0071CF9F  66 89 81 8C 01 00 00      MOV word ptr [ECX + 0x18c],AX
0071CFA6  8D 91 78 01 00 00         LEA EDX,[ECX + 0x178]
0071CFAC  8D 41 24                  LEA EAX,[ECX + 0x24]
0071CFAF  52                        PUSH EDX
0071CFB0  89 81 90 01 00 00         MOV dword ptr [ECX + 0x190],EAX
0071CFB6  E8 25 90 FC FF            CALL 0x006e5fe0
0071CFBB  85 C0                     TEST EAX,EAX
0071CFBD  74 05                     JZ 0x0071cfc4
0071CFBF  83 C8 FF                  OR EAX,0xffffffff
0071CFC2  5E                        POP ESI
0071CFC3  C3                        RET
LAB_0071cfc4:
0071CFC4  8B C6                     MOV EAX,ESI
0071CFC6  5E                        POP ESI
0071CFC7  C3                        RET
