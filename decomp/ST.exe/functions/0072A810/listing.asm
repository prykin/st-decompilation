FUN_0072a810:
0072A810  55                        PUSH EBP
0072A811  8B EC                     MOV EBP,ESP
0072A813  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0072A816  8B 08                     MOV ECX,dword ptr [EAX]
0072A818  49                        DEC ECX
0072A819  89 08                     MOV dword ptr [EAX],ECX
0072A81B  78 7E                     JS 0x0072a89b
0072A81D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0072A820  53                        PUSH EBX
0072A821  56                        PUSH ESI
0072A822  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0072A825  57                        PUSH EDI
0072A826  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
LAB_0072a829:
0072A829  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0072A82C  8B 58 24                  MOV EBX,dword ptr [EAX + 0x24]
0072A82F  85 CB                     TEST EBX,ECX
0072A831  74 1B                     JZ 0x0072a84e
0072A833  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0072A836  33 DB                     XOR EBX,EBX
0072A838  66 8B 1A                  MOV BX,word ptr [EDX]
0072A83B  C1 F9 10                  SAR ECX,0x10
0072A83E  3B CB                     CMP ECX,EBX
0072A840  7D 0C                     JGE 0x0072a84e
0072A842  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
0072A845  33 C9                     XOR ECX,ECX
0072A847  8A 0E                     MOV CL,byte ptr [ESI]
0072A849  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
0072A84C  88 0E                     MOV byte ptr [ESI],CL
LAB_0072a84e:
0072A84E  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0072A851  D1 E9                     SHR ECX,0x1
0072A853  89 48 20                  MOV dword ptr [EAX + 0x20],ECX
0072A856  75 07                     JNZ 0x0072a85f
0072A858  C7 40 20 00 00 00 80      MOV dword ptr [EAX + 0x20],0x80000000
LAB_0072a85f:
0072A85F  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0072A862  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
0072A865  03 D9                     ADD EBX,ECX
0072A867  46                        INC ESI
0072A868  83 C2 02                  ADD EDX,0x2
0072A86B  89 58 10                  MOV dword ptr [EAX + 0x10],EBX
0072A86E  8B CB                     MOV ECX,EBX
0072A870  C1 EB 10                  SHR EBX,0x10
0072A873  74 11                     JZ 0x0072a886
0072A875  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0072A878  8D 14 7A                  LEA EDX,[EDX + EDI*0x2]
0072A87B  03 F3                     ADD ESI,EBX
0072A87D  81 E1 FF FF 00 00         AND ECX,0xffff
0072A883  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
LAB_0072a886:
0072A886  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0072A889  8B 58 18                  MOV EBX,dword ptr [EAX + 0x18]
0072A88C  03 D9                     ADD EBX,ECX
0072A88E  8B 08                     MOV ECX,dword ptr [EAX]
0072A890  49                        DEC ECX
0072A891  89 58 18                  MOV dword ptr [EAX + 0x18],EBX
0072A894  89 08                     MOV dword ptr [EAX],ECX
0072A896  79 91                     JNS 0x0072a829
0072A898  5F                        POP EDI
0072A899  5E                        POP ESI
0072A89A  5B                        POP EBX
LAB_0072a89b:
0072A89B  5D                        POP EBP
0072A89C  C3                        RET
