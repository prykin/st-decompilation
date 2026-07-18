FUN_0072a9d0:
0072A9D0  55                        PUSH EBP
0072A9D1  8B EC                     MOV EBP,ESP
0072A9D3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0072A9D6  8B 08                     MOV ECX,dword ptr [EAX]
0072A9D8  49                        DEC ECX
0072A9D9  89 08                     MOV dword ptr [EAX],ECX
0072A9DB  78 7F                     JS 0x0072aa5c
0072A9DD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0072A9E0  53                        PUSH EBX
0072A9E1  56                        PUSH ESI
0072A9E2  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0072A9E5  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
0072A9E8  57                        PUSH EDI
0072A9E9  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0072A9EC  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
0072A9EF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_0072a9f2:
0072A9F2  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0072A9F5  8B 58 24                  MOV EBX,dword ptr [EAX + 0x24]
0072A9F8  85 CB                     TEST EBX,ECX
0072A9FA  74 14                     JZ 0x0072aa10
0072A9FC  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0072A9FF  33 DB                     XOR EBX,EBX
0072AA01  66 8B 1E                  MOV BX,word ptr [ESI]
0072AA04  C1 F9 10                  SAR ECX,0x10
0072AA07  3B CB                     CMP ECX,EBX
0072AA09  7D 05                     JGE 0x0072aa10
0072AA0B  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
0072AA0E  88 0A                     MOV byte ptr [EDX],CL
LAB_0072aa10:
0072AA10  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0072AA13  D1 E9                     SHR ECX,0x1
0072AA15  89 48 20                  MOV dword ptr [EAX + 0x20],ECX
0072AA18  75 07                     JNZ 0x0072aa21
0072AA1A  C7 40 20 00 00 00 80      MOV dword ptr [EAX + 0x20],0x80000000
LAB_0072aa21:
0072AA21  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0072AA24  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
0072AA27  03 F1                     ADD ESI,ECX
0072AA29  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0072AA2C  03 D9                     ADD EBX,ECX
0072AA2E  03 D7                     ADD EDX,EDI
0072AA30  89 58 10                  MOV dword ptr [EAX + 0x10],EBX
0072AA33  8B CB                     MOV ECX,EBX
0072AA35  C1 EB 10                  SHR EBX,0x10
0072AA38  74 0D                     JZ 0x0072aa47
0072AA3A  42                        INC EDX
0072AA3B  83 C6 02                  ADD ESI,0x2
0072AA3E  81 E1 FF FF 00 00         AND ECX,0xffff
0072AA44  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
LAB_0072aa47:
0072AA47  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0072AA4A  8B 58 18                  MOV EBX,dword ptr [EAX + 0x18]
0072AA4D  03 D9                     ADD EBX,ECX
0072AA4F  8B 08                     MOV ECX,dword ptr [EAX]
0072AA51  49                        DEC ECX
0072AA52  89 58 18                  MOV dword ptr [EAX + 0x18],EBX
0072AA55  89 08                     MOV dword ptr [EAX],ECX
0072AA57  79 99                     JNS 0x0072a9f2
0072AA59  5F                        POP EDI
0072AA5A  5E                        POP ESI
0072AA5B  5B                        POP EBX
LAB_0072aa5c:
0072AA5C  5D                        POP EBP
0072AA5D  C3                        RET
