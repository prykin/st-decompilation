FUN_006e98e0:
006E98E0  55                        PUSH EBP
006E98E1  8B EC                     MOV EBP,ESP
006E98E3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E98E6  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E98EC  56                        PUSH ESI
006E98ED  3B D0                     CMP EDX,EAX
006E98EF  57                        PUSH EDI
006E98F0  0F 83 FF 00 00 00         JNC 0x006e99f5
006E98F6  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E98FC  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E98FF  C1 E0 03                  SHL EAX,0x3
006E9902  2B C2                     SUB EAX,EDX
006E9904  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E9907  8D 34 81                  LEA ESI,[ECX + EAX*0x4]
006E990A  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006E990D  F6 C4 80                  TEST AH,0x80
006E9910  0F 84 DF 00 00 00         JZ 0x006e99f5
006E9916  8B 86 94 00 00 00         MOV EAX,dword ptr [ESI + 0x94]
006E991C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006E991F  3B F8                     CMP EDI,EAX
006E9921  0F 83 BC 00 00 00         JNC 0x006e99e3
006E9927  8B 8E A0 00 00 00         MOV ECX,dword ptr [ESI + 0xa0]
006E992D  85 C9                     TEST ECX,ECX
006E992F  75 2A                     JNZ 0x006e995b
006E9931  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
006E9938  52                        PUSH EDX
006E9939  E8 D2 12 FC FF            CALL 0x006aac10
006E993E  85 C0                     TEST EAX,EAX
006E9940  89 86 A0 00 00 00         MOV dword ptr [ESI + 0xa0],EAX
006E9946  75 0B                     JNZ 0x006e9953
006E9948  5F                        POP EDI
006E9949  B8 FE FF FF FF            MOV EAX,0xfffffffe
006E994E  5E                        POP ESI
006E994F  5D                        POP EBP
006E9950  C2 14 00                  RET 0x14
LAB_006e9953:
006E9953  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006E9956  0C 01                     OR AL,0x1
006E9958  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
LAB_006e995b:
006E995B  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
006E9961  53                        PUSH EBX
006E9962  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006E9965  3B 5C F8 04               CMP EBX,dword ptr [EAX + EDI*0x8 + 0x4]
006E9969  74 1A                     JZ 0x006e9985
006E996B  8B 0E                     MOV ECX,dword ptr [ESI]
006E996D  8B 96 A4 00 00 00         MOV EDX,dword ptr [ESI + 0xa4]
006E9973  81 E1 FF FF 87 FF         AND ECX,0xff87ffff
006E9979  83 C9 4C                  OR ECX,0x4c
006E997C  89 0E                     MOV dword ptr [ESI],ECX
006E997E  66 C7 44 BA 02 00 00      MOV word ptr [EDX + EDI*0x4 + 0x2],0x0
LAB_006e9985:
006E9985  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
006E998B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006E998E  89 0C F8                  MOV dword ptr [EAX + EDI*0x8],ECX
006E9991  8B 96 A0 00 00 00         MOV EDX,dword ptr [ESI + 0xa0]
006E9997  89 5C FA 04               MOV dword ptr [EDX + EDI*0x8 + 0x4],EBX
006E999B  8B 06                     MOV EAX,dword ptr [ESI]
006E999D  F6 C4 10                  TEST AH,0x10
006E99A0  75 06                     JNZ 0x006e99a8
006E99A2  56                        PUSH ESI
006E99A3  E8 98 EE FF FF            CALL 0x006e8840
LAB_006e99a8:
006E99A8  85 DB                     TEST EBX,EBX
006E99AA  5B                        POP EBX
006E99AB  74 57                     JZ 0x006e9a04
006E99AD  8B 86 A4 00 00 00         MOV EAX,dword ptr [ESI + 0xa4]
006E99B3  80 4C B8 03 80            OR byte ptr [EAX + EDI*0x4 + 0x3],0x80
006E99B8  8D 44 B8 02               LEA EAX,[EAX + EDI*0x4 + 0x2]
006E99BC  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006E99BF  85 C0                     TEST EAX,EAX
006E99C1  74 0F                     JZ 0x006e99d2
006E99C3  8B 8E A4 00 00 00         MOV ECX,dword ptr [ESI + 0xa4]
006E99C9  80 4C B9 03 40            OR byte ptr [ECX + EDI*0x4 + 0x3],0x40
006E99CE  8D 44 B9 02               LEA EAX,[ECX + EDI*0x4 + 0x2]
LAB_006e99d2:
006E99D2  6A FE                     PUSH -0x2
006E99D4  57                        PUSH EDI
006E99D5  56                        PUSH ESI
006E99D6  E8 35 00 00 00            CALL 0x006e9a10
006E99DB  5F                        POP EDI
006E99DC  33 C0                     XOR EAX,EAX
006E99DE  5E                        POP ESI
006E99DF  5D                        POP EBP
006E99E0  C2 14 00                  RET 0x14
LAB_006e99e3:
006E99E3  68 A0 ED 7E 00            PUSH 0x7eeda0
006E99E8  E8 B3 F7 FF FF            CALL 0x006e91a0
006E99ED  5F                        POP EDI
006E99EE  33 C0                     XOR EAX,EAX
006E99F0  5E                        POP ESI
006E99F1  5D                        POP EBP
006E99F2  C2 14 00                  RET 0x14
LAB_006e99f5:
006E99F5  83 FA FF                  CMP EDX,-0x1
006E99F8  74 0A                     JZ 0x006e9a04
006E99FA  68 A0 ED 7E 00            PUSH 0x7eeda0
006E99FF  E8 4C F2 FF FF            CALL 0x006e8c50
LAB_006e9a04:
006E9A04  5F                        POP EDI
006E9A05  33 C0                     XOR EAX,EAX
006E9A07  5E                        POP ESI
006E9A08  5D                        POP EBP
006E9A09  C2 14 00                  RET 0x14
