FUN_007108b0:
007108B0  55                        PUSH EBP
007108B1  8B EC                     MOV EBP,ESP
007108B3  83 EC 48                  SUB ESP,0x48
007108B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
007108BB  56                        PUSH ESI
007108BC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007108BF  57                        PUSH EDI
007108C0  8D 55 BC                  LEA EDX,[EBP + -0x44]
007108C3  8D 4D B8                  LEA ECX,[EBP + -0x48]
007108C6  6A 00                     PUSH 0x0
007108C8  52                        PUSH EDX
007108C9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
007108CC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007108D2  E8 19 CF 01 00            CALL 0x0072d7f0
007108D7  8B F0                     MOV ESI,EAX
007108D9  83 C4 08                  ADD ESP,0x8
007108DC  85 F6                     TEST ESI,ESI
007108DE  0F 85 B9 00 00 00         JNZ 0x0071099d
007108E4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007108E7  85 D2                     TEST EDX,EDX
007108E9  75 0B                     JNZ 0x007108f6
007108EB  6A 48                     PUSH 0x48
007108ED  E8 1E A3 F9 FF            CALL 0x006aac10
007108F2  8B D0                     MOV EDX,EAX
007108F4  EB 0B                     JMP 0x00710901
LAB_007108f6:
007108F6  B9 12 00 00 00            MOV ECX,0x12
007108FB  33 C0                     XOR EAX,EAX
007108FD  8B FA                     MOV EDI,EDX
007108FF  F3 AB                     STOSD.REP ES:EDI
LAB_00710901:
00710901  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00710904  8D 72 3E                  LEA ESI,[EDX + 0x3e]
00710907  8B 48 44                  MOV ECX,dword ptr [EAX + 0x44]
0071090A  89 0A                     MOV dword ptr [EDX],ECX
0071090C  8B 48 48                  MOV ECX,dword ptr [EAX + 0x48]
0071090F  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
00710912  8B 48 4C                  MOV ECX,dword ptr [EAX + 0x4c]
00710915  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
00710918  8B 48 50                  MOV ECX,dword ptr [EAX + 0x50]
0071091B  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
0071091E  8B 48 54                  MOV ECX,dword ptr [EAX + 0x54]
00710921  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
00710924  8B 48 58                  MOV ECX,dword ptr [EAX + 0x58]
00710927  89 4A 14                  MOV dword ptr [EDX + 0x14],ECX
0071092A  8B 48 5C                  MOV ECX,dword ptr [EAX + 0x5c]
0071092D  89 4A 18                  MOV dword ptr [EDX + 0x18],ECX
00710930  8B 48 60                  MOV ECX,dword ptr [EAX + 0x60]
00710933  89 4A 1C                  MOV dword ptr [EDX + 0x1c],ECX
00710936  8B 48 64                  MOV ECX,dword ptr [EAX + 0x64]
00710939  89 4A 20                  MOV dword ptr [EDX + 0x20],ECX
0071093C  8B 48 68                  MOV ECX,dword ptr [EAX + 0x68]
0071093F  89 4A 24                  MOV dword ptr [EDX + 0x24],ECX
00710942  8B 48 6C                  MOV ECX,dword ptr [EAX + 0x6c]
00710945  89 4A 28                  MOV dword ptr [EDX + 0x28],ECX
00710948  66 8B 48 70               MOV CX,word ptr [EAX + 0x70]
0071094C  66 89 4A 2C               MOV word ptr [EDX + 0x2c],CX
00710950  8B 48 72                  MOV ECX,dword ptr [EAX + 0x72]
00710953  89 4A 2E                  MOV dword ptr [EDX + 0x2e],ECX
00710956  8B 48 76                  MOV ECX,dword ptr [EAX + 0x76]
00710959  89 4A 32                  MOV dword ptr [EDX + 0x32],ECX
0071095C  8B 48 7A                  MOV ECX,dword ptr [EAX + 0x7a]
0071095F  89 4A 36                  MOV dword ptr [EDX + 0x36],ECX
00710962  8B 48 7E                  MOV ECX,dword ptr [EAX + 0x7e]
00710965  89 4A 3A                  MOV dword ptr [EDX + 0x3a],ECX
00710968  8D 88 9E 00 00 00         LEA ECX,[EAX + 0x9e]
0071096E  66 8B 88 9E 00 00 00      MOV CX,word ptr [EAX + 0x9e]
00710975  66 89 0E                  MOV word ptr [ESI],CX
00710978  8B 88 82 00 00 00         MOV ECX,dword ptr [EAX + 0x82]
0071097E  89 4A 40                  MOV dword ptr [EDX + 0x40],ECX
00710981  8B 80 96 00 00 00         MOV EAX,dword ptr [EAX + 0x96]
00710987  89 42 44                  MOV dword ptr [EDX + 0x44],EAX
0071098A  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0071098D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00710993  8B C2                     MOV EAX,EDX
00710995  5F                        POP EDI
00710996  5E                        POP ESI
00710997  8B E5                     MOV ESP,EBP
00710999  5D                        POP EBP
0071099A  C2 04 00                  RET 0x4
LAB_0071099d:
0071099D  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
007109A0  68 14 02 7F 00            PUSH 0x7f0214
007109A5  68 CC 4C 7A 00            PUSH 0x7a4ccc
007109AA  56                        PUSH ESI
007109AB  6A 00                     PUSH 0x0
007109AD  68 36 04 00 00            PUSH 0x436
007109B2  68 90 01 7F 00            PUSH 0x7f0190
007109B7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
007109BD  E8 0E CB F9 FF            CALL 0x006ad4d0
007109C2  83 C4 18                  ADD ESP,0x18
007109C5  85 C0                     TEST EAX,EAX
007109C7  74 01                     JZ 0x007109ca
007109C9  CC                        INT3
LAB_007109ca:
007109CA  68 38 04 00 00            PUSH 0x438
007109CF  68 90 01 7F 00            PUSH 0x7f0190
007109D4  6A 00                     PUSH 0x0
007109D6  56                        PUSH ESI
007109D7  E8 64 54 F9 FF            CALL 0x006a5e40
007109DC  5F                        POP EDI
007109DD  33 C0                     XOR EAX,EAX
007109DF  5E                        POP ESI
007109E0  8B E5                     MOV ESP,EBP
007109E2  5D                        POP EBP
007109E3  C2 04 00                  RET 0x4
