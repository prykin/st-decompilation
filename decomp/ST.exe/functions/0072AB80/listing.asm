FUN_0072ab80:
0072AB80  55                        PUSH EBP
0072AB81  8B EC                     MOV EBP,ESP
0072AB83  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0072AB86  8B 08                     MOV ECX,dword ptr [EAX]
0072AB88  49                        DEC ECX
0072AB89  89 08                     MOV dword ptr [EAX],ECX
0072AB8B  0F 88 86 00 00 00         JS 0x0072ac17
0072AB91  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0072AB94  53                        PUSH EBX
0072AB95  56                        PUSH ESI
0072AB96  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0072AB99  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
0072AB9C  57                        PUSH EDI
0072AB9D  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0072ABA0  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
0072ABA3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_0072aba6:
0072ABA6  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0072ABA9  8B 58 24                  MOV EBX,dword ptr [EAX + 0x24]
0072ABAC  85 CB                     TEST EBX,ECX
0072ABAE  74 1B                     JZ 0x0072abcb
0072ABB0  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0072ABB3  33 DB                     XOR EBX,EBX
0072ABB5  66 8B 1E                  MOV BX,word ptr [ESI]
0072ABB8  C1 F9 10                  SAR ECX,0x10
0072ABBB  3B CB                     CMP ECX,EBX
0072ABBD  7D 0C                     JGE 0x0072abcb
0072ABBF  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
0072ABC2  33 C9                     XOR ECX,ECX
0072ABC4  8A 0A                     MOV CL,byte ptr [EDX]
0072ABC6  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
0072ABC9  88 0A                     MOV byte ptr [EDX],CL
LAB_0072abcb:
0072ABCB  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0072ABCE  D1 E9                     SHR ECX,0x1
0072ABD0  89 48 20                  MOV dword ptr [EAX + 0x20],ECX
0072ABD3  75 07                     JNZ 0x0072abdc
0072ABD5  C7 40 20 00 00 00 80      MOV dword ptr [EAX + 0x20],0x80000000
LAB_0072abdc:
0072ABDC  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0072ABDF  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
0072ABE2  03 F1                     ADD ESI,ECX
0072ABE4  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0072ABE7  03 D9                     ADD EBX,ECX
0072ABE9  03 D7                     ADD EDX,EDI
0072ABEB  89 58 10                  MOV dword ptr [EAX + 0x10],EBX
0072ABEE  8B CB                     MOV ECX,EBX
0072ABF0  C1 EB 10                  SHR EBX,0x10
0072ABF3  74 0D                     JZ 0x0072ac02
0072ABF5  42                        INC EDX
0072ABF6  83 C6 02                  ADD ESI,0x2
0072ABF9  81 E1 FF FF 00 00         AND ECX,0xffff
0072ABFF  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
LAB_0072ac02:
0072AC02  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0072AC05  8B 58 18                  MOV EBX,dword ptr [EAX + 0x18]
0072AC08  03 D9                     ADD EBX,ECX
0072AC0A  8B 08                     MOV ECX,dword ptr [EAX]
0072AC0C  49                        DEC ECX
0072AC0D  89 58 18                  MOV dword ptr [EAX + 0x18],EBX
0072AC10  89 08                     MOV dword ptr [EAX],ECX
0072AC12  79 92                     JNS 0x0072aba6
0072AC14  5F                        POP EDI
0072AC15  5E                        POP ESI
0072AC16  5B                        POP EBX
LAB_0072ac17:
0072AC17  5D                        POP EBP
0072AC18  C3                        RET
