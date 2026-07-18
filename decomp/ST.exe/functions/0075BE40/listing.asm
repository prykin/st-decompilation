FUN_0075be40:
0075BE40  55                        PUSH EBP
0075BE41  8B EC                     MOV EBP,ESP
0075BE43  56                        PUSH ESI
0075BE44  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075BE47  57                        PUSH EDI
0075BE48  56                        PUSH ESI
0075BE49  8B BE AA 01 00 00         MOV EDI,dword ptr [ESI + 0x1aa]
0075BE4F  8B 8E A6 01 00 00         MOV ECX,dword ptr [ESI + 0x1a6]
0075BE55  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0075BE58  99                        CDQ
0075BE59  83 E2 07                  AND EDX,0x7
0075BE5C  03 C2                     ADD EAX,EDX
0075BE5E  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
0075BE61  C1 F8 03                  SAR EAX,0x3
0075BE64  03 D0                     ADD EDX,EAX
0075BE66  89 51 5C                  MOV dword ptr [ECX + 0x5c],EDX
0075BE69  C7 47 0C 00 00 00 00      MOV dword ptr [EDI + 0xc],0x0
0075BE70  8B 86 A6 01 00 00         MOV EAX,dword ptr [ESI + 0x1a6]
0075BE76  FF 50 08                  CALL dword ptr [EAX + 0x8]
0075BE79  85 C0                     TEST EAX,EAX
0075BE7B  75 06                     JNZ 0x0075be83
0075BE7D  5F                        POP EDI
0075BE7E  5E                        POP ESI
0075BE7F  5D                        POP EBP
0075BE80  C2 04 00                  RET 0x4
LAB_0075be83:
0075BE83  8B 8E 36 01 00 00         MOV ECX,dword ptr [ESI + 0x136]
0075BE89  33 C0                     XOR EAX,EAX
0075BE8B  85 C9                     TEST ECX,ECX
0075BE8D  7E 17                     JLE 0x0075bea6
0075BE8F  8D 4F 14                  LEA ECX,[EDI + 0x14]
LAB_0075be92:
0075BE92  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
0075BE98  8B 96 36 01 00 00         MOV EDX,dword ptr [ESI + 0x136]
0075BE9E  40                        INC EAX
0075BE9F  83 C1 04                  ADD ECX,0x4
0075BEA2  3B C2                     CMP EAX,EDX
0075BEA4  7C EC                     JL 0x0075be92
LAB_0075bea6:
0075BEA6  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
0075BEAC  C7 47 10 00 00 00 00      MOV dword ptr [EDI + 0x10],0x0
0075BEB3  89 4F 24                  MOV dword ptr [EDI + 0x24],ECX
0075BEB6  5F                        POP EDI
0075BEB7  B8 01 00 00 00            MOV EAX,0x1
0075BEBC  5E                        POP ESI
0075BEBD  5D                        POP EBP
0075BEBE  C2 04 00                  RET 0x4
