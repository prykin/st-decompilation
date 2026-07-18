FUN_004e2200:
004E2200  55                        PUSH EBP
004E2201  8B EC                     MOV EBP,ESP
004E2203  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E2206  53                        PUSH EBX
004E2207  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004E220A  57                        PUSH EDI
004E220B  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
004E220E  33 C0                     XOR EAX,EAX
004E2210  8B BC D1 D0 04 00 00      MOV EDI,dword ptr [ECX + EDX*0x8 + 0x4d0]
004E2217  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004E221A  3B FB                     CMP EDI,EBX
004E221C  75 52                     JNZ 0x004e2270
004E221E  8B BA D4 04 00 00         MOV EDI,dword ptr [EDX + 0x4d4]
004E2224  85 FF                     TEST EDI,EDI
004E2226  74 48                     JZ 0x004e2270
004E2228  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E222B  89 82 E0 04 00 00         MOV dword ptr [EDX + 0x4e0],EAX
004E2231  89 82 DC 04 00 00         MOV dword ptr [EDX + 0x4dc],EAX
004E2237  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004E223C  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004E2242  89 82 E8 04 00 00         MOV dword ptr [EDX + 0x4e8],EAX
004E2248  C7 82 EC 04 00 00 00 00 00 00  MOV dword ptr [EDX + 0x4ec],0x0
004E2252  C7 82 F0 04 00 00 00 00 00 00  MOV dword ptr [EDX + 0x4f0],0x0
004E225C  C7 82 F4 04 00 00 00 00 00 00  MOV dword ptr [EDX + 0x4f4],0x0
004E2266  E8 24 27 F2 FF            CALL 0x0040498f
004E226B  B8 01 00 00 00            MOV EAX,0x1
LAB_004e2270:
004E2270  5F                        POP EDI
004E2271  5B                        POP EBX
004E2272  5D                        POP EBP
004E2273  C2 0C 00                  RET 0xc
