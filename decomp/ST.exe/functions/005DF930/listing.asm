FUN_005df930:
005DF930  55                        PUSH EBP
005DF931  8B EC                     MOV EBP,ESP
005DF933  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005DF936  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005DF939  53                        PUSH EBX
005DF93A  56                        PUSH ESI
005DF93B  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
005DF93E  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
005DF941  C1 E0 04                  SHL EAX,0x4
005DF944  2B C2                     SUB EAX,EDX
005DF946  57                        PUSH EDI
005DF947  8D 3C 41                  LEA EDI,[ECX + EAX*0x2]
005DF94A  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
005DF94D  C1 E1 04                  SHL ECX,0x4
005DF950  2B CE                     SUB ECX,ESI
005DF952  33 C0                     XOR EAX,EAX
005DF954  D1 E1                     SHL ECX,0x1
005DF956  8B D9                     MOV EBX,ECX
005DF958  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
005DF95B  C1 E9 02                  SHR ECX,0x2
005DF95E  F3 AB                     STOSD.REP ES:EDI
005DF960  8B CB                     MOV ECX,EBX
005DF962  83 E1 03                  AND ECX,0x3
005DF965  F3 AA                     STOSB.REP ES:EDI
005DF967  8D 04 32                  LEA EAX,[EDX + ESI*0x1]
005DF96A  5F                        POP EDI
005DF96B  5E                        POP ESI
005DF96C  3B D0                     CMP EDX,EAX
005DF96E  5B                        POP EBX
005DF96F  73 17                     JNC 0x005df988
005DF971  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005DF974  83 C1 04                  ADD ECX,0x4
005DF977  2B C2                     SUB EAX,EDX
LAB_005df979:
005DF979  C7 01 FF FF FF FF         MOV dword ptr [ECX],0xffffffff
005DF97F  81 C1 9E 00 00 00         ADD ECX,0x9e
005DF985  48                        DEC EAX
005DF986  75 F1                     JNZ 0x005df979
LAB_005df988:
005DF988  5D                        POP EBP
005DF989  C2 0C 00                  RET 0xc
