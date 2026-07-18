FUN_00692530:
00692530  55                        PUSH EBP
00692531  8B EC                     MOV EBP,ESP
00692533  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00692536  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00692539  48                        DEC EAX
0069253A  56                        PUSH ESI
0069253B  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0069253E  85 D2                     TEST EDX,EDX
00692540  75 01                     JNZ 0x00692543
00692542  4E                        DEC ESI
LAB_00692543:
00692543  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
00692546  25 FF FF 00 00            AND EAX,0xffff
0069254B  8D 14 56                  LEA EDX,[ESI + EDX*0x2]
0069254E  5E                        POP ESI
0069254F  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
00692552  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
00692555  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
00692558  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
0069255B  5D                        POP EBP
0069255C  C2 10 00                  RET 0x10
