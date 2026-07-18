FUN_0072a660:
0072A660  55                        PUSH EBP
0072A661  8B EC                     MOV EBP,ESP
0072A663  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0072A666  8B 08                     MOV ECX,dword ptr [EAX]
0072A668  49                        DEC ECX
0072A669  89 08                     MOV dword ptr [EAX],ECX
0072A66B  78 77                     JS 0x0072a6e4
0072A66D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0072A670  53                        PUSH EBX
0072A671  56                        PUSH ESI
0072A672  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0072A675  57                        PUSH EDI
0072A676  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
LAB_0072a679:
0072A679  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0072A67C  8B 58 24                  MOV EBX,dword ptr [EAX + 0x24]
0072A67F  85 CB                     TEST EBX,ECX
0072A681  74 14                     JZ 0x0072a697
0072A683  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0072A686  33 DB                     XOR EBX,EBX
0072A688  66 8B 1A                  MOV BX,word ptr [EDX]
0072A68B  C1 F9 10                  SAR ECX,0x10
0072A68E  3B CB                     CMP ECX,EBX
0072A690  7D 05                     JGE 0x0072a697
0072A692  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
0072A695  88 0E                     MOV byte ptr [ESI],CL
LAB_0072a697:
0072A697  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0072A69A  D1 E9                     SHR ECX,0x1
0072A69C  89 48 20                  MOV dword ptr [EAX + 0x20],ECX
0072A69F  75 07                     JNZ 0x0072a6a8
0072A6A1  C7 40 20 00 00 00 80      MOV dword ptr [EAX + 0x20],0x80000000
LAB_0072a6a8:
0072A6A8  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0072A6AB  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
0072A6AE  03 D9                     ADD EBX,ECX
0072A6B0  46                        INC ESI
0072A6B1  83 C2 02                  ADD EDX,0x2
0072A6B4  89 58 10                  MOV dword ptr [EAX + 0x10],EBX
0072A6B7  8B CB                     MOV ECX,EBX
0072A6B9  C1 EB 10                  SHR EBX,0x10
0072A6BC  74 11                     JZ 0x0072a6cf
0072A6BE  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0072A6C1  8D 14 7A                  LEA EDX,[EDX + EDI*0x2]
0072A6C4  03 F3                     ADD ESI,EBX
0072A6C6  81 E1 FF FF 00 00         AND ECX,0xffff
0072A6CC  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
LAB_0072a6cf:
0072A6CF  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0072A6D2  8B 58 18                  MOV EBX,dword ptr [EAX + 0x18]
0072A6D5  03 D9                     ADD EBX,ECX
0072A6D7  8B 08                     MOV ECX,dword ptr [EAX]
0072A6D9  49                        DEC ECX
0072A6DA  89 58 18                  MOV dword ptr [EAX + 0x18],EBX
0072A6DD  89 08                     MOV dword ptr [EAX],ECX
0072A6DF  79 98                     JNS 0x0072a679
0072A6E1  5F                        POP EDI
0072A6E2  5E                        POP ESI
0072A6E3  5B                        POP EBX
LAB_0072a6e4:
0072A6E4  5D                        POP EBP
0072A6E5  C3                        RET
