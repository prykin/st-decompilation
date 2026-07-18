FUN_004e20d0:
004E20D0  55                        PUSH EBP
004E20D1  8B EC                     MOV EBP,ESP
004E20D3  53                        PUSH EBX
004E20D4  56                        PUSH ESI
004E20D5  8B F1                     MOV ESI,ECX
004E20D7  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004E20DA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E20DD  57                        PUSH EDI
004E20DE  33 C0                     XOR EAX,EAX
004E20E0  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004E20E3  8B BC D6 D0 04 00 00      MOV EDI,dword ptr [ESI + EDX*0x8 + 0x4d0]
004E20EA  8D 14 D6                  LEA EDX,[ESI + EDX*0x8]
004E20ED  3B FB                     CMP EDI,EBX
004E20EF  75 5B                     JNZ 0x004e214c
004E20F1  8B BA D4 04 00 00         MOV EDI,dword ptr [EDX + 0x4d4]
004E20F7  85 FF                     TEST EDI,EDI
004E20F9  75 51                     JNZ 0x004e214c
004E20FB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E20FE  8D BC 89 9B 00 00 00      LEA EDI,[ECX + ECX*0x4 + 0x9b]
004E2105  C7 82 D4 04 00 00 01 00 00 00  MOV dword ptr [EDX + 0x4d4],0x1
004E210F  89 04 FE                  MOV dword ptr [ESI + EDI*0x8],EAX
004E2112  8B 04 85 AC FB 7D 00      MOV EAX,dword ptr [EAX*0x4 + 0x7dfbac]
004E2119  89 82 E4 04 00 00         MOV dword ptr [EDX + 0x4e4],EAX
004E211F  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004E2122  52                        PUSH EDX
004E2123  53                        PUSH EBX
004E2124  51                        PUSH ECX
004E2125  8B CE                     MOV ECX,ESI
004E2127  BF 01 00 00 00            MOV EDI,0x1
004E212C  E8 A6 35 F2 FF            CALL 0x004056d7
004E2131  8B 86 20 05 00 00         MOV EAX,dword ptr [ESI + 0x520]
004E2137  85 C0                     TEST EAX,EAX
004E2139  75 0F                     JNZ 0x004e214a
004E213B  6A 00                     PUSH 0x0
004E213D  8B CE                     MOV ECX,ESI
004E213F  89 BE 20 05 00 00         MOV dword ptr [ESI + 0x520],EDI
004E2145  E8 AD 0B F2 FF            CALL 0x00402cf7
LAB_004e214a:
004E214A  8B C7                     MOV EAX,EDI
LAB_004e214c:
004E214C  5F                        POP EDI
004E214D  5E                        POP ESI
004E214E  5B                        POP EBX
004E214F  5D                        POP EBP
004E2150  C2 10 00                  RET 0x10
