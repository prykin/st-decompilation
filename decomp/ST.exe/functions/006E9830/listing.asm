FUN_006e9830:
006E9830  55                        PUSH EBP
006E9831  8B EC                     MOV EBP,ESP
006E9833  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E9839  56                        PUSH ESI
006E983A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006E983D  3B F0                     CMP ESI,EAX
006E983F  0F 83 81 00 00 00         JNC 0x006e98c6
006E9845  8B 91 1C 03 00 00         MOV EDX,dword ptr [ECX + 0x31c]
006E984B  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
006E984E  C1 E0 03                  SHL EAX,0x3
006E9851  2B C6                     SUB EAX,ESI
006E9853  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E9856  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
006E9859  8B 10                     MOV EDX,dword ptr [EAX]
006E985B  F6 C6 80                  TEST DH,0x80
006E985E  74 66                     JZ 0x006e98c6
006E9860  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006E9863  89 B0 84 00 00 00         MOV dword ptr [EAX + 0x84],ESI
006E9869  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006E986C  89 B0 88 00 00 00         MOV dword ptr [EAX + 0x88],ESI
006E9872  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
006E9875  85 F6                     TEST ESI,ESI
006E9877  75 5C                     JNZ 0x006e98d5
006E9879  F7 C2 00 00 01 00         TEST EDX,0x10000
006E987F  74 54                     JZ 0x006e98d5
006E9881  81 E2 FF FF 87 FF         AND EDX,0xff87ffff
006E9887  83 CA 4C                  OR EDX,0x4c
006E988A  89 10                     MOV dword ptr [EAX],EDX
006E988C  8A 50 04                  MOV DL,byte ptr [EAX + 0x4]
006E988F  F6 C2 40                  TEST DL,0x40
006E9892  74 41                     JZ 0x006e98d5
006E9894  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
006E9897  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E989D  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E98A0  C1 E0 03                  SHL EAX,0x3
006E98A3  2B C2                     SUB EAX,EDX
006E98A5  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E98A8  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006E98AB  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006E98AE  85 C9                     TEST ECX,ECX
006E98B0  75 23                     JNZ 0x006e98d5
006E98B2  8B 08                     MOV ECX,dword ptr [EAX]
006E98B4  F7 C1 00 00 01 00         TEST ECX,0x10000
006E98BA  74 19                     JZ 0x006e98d5
006E98BC  83 C9 04                  OR ECX,0x4
006E98BF  5E                        POP ESI
006E98C0  89 08                     MOV dword ptr [EAX],ECX
006E98C2  5D                        POP EBP
006E98C3  C2 0C 00                  RET 0xc
LAB_006e98c6:
006E98C6  83 FE FF                  CMP ESI,-0x1
006E98C9  74 0A                     JZ 0x006e98d5
006E98CB  68 90 ED 7E 00            PUSH 0x7eed90
006E98D0  E8 7B F3 FF FF            CALL 0x006e8c50
LAB_006e98d5:
006E98D5  5E                        POP ESI
006E98D6  5D                        POP EBP
006E98D7  C2 0C 00                  RET 0xc
