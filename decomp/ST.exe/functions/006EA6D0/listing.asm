FUN_006ea6d0:
006EA6D0  55                        PUSH EBP
006EA6D1  8B EC                     MOV EBP,ESP
006EA6D3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006EA6D6  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EA6DC  3B D0                     CMP EDX,EAX
006EA6DE  0F 83 92 00 00 00         JNC 0x006ea776
006EA6E4  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006EA6EA  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EA6ED  C1 E0 03                  SHL EAX,0x3
006EA6F0  2B C2                     SUB EAX,EDX
006EA6F2  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EA6F5  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006EA6F8  8B 08                     MOV ECX,dword ptr [EAX]
006EA6FA  F6 C5 80                  TEST CH,0x80
006EA6FD  74 77                     JZ 0x006ea776
006EA6FF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006EA702  8B 90 94 00 00 00         MOV EDX,dword ptr [EAX + 0x94]
006EA708  3B CA                     CMP ECX,EDX
006EA70A  7D 5C                     JGE 0x006ea768
006EA70C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006EA70F  85 D2                     TEST EDX,EDX
006EA711  8B 90 A4 00 00 00         MOV EDX,dword ptr [EAX + 0xa4]
006EA717  74 1D                     JZ 0x006ea736
006EA719  8D 4C 8A 02               LEA ECX,[EDX + ECX*0x4 + 0x2]
006EA71D  F6 01 04                  TEST byte ptr [ECX],0x4
006EA720  75 63                     JNZ 0x006ea785
006EA722  8B 90 90 00 00 00         MOV EDX,dword ptr [EAX + 0x90]
006EA728  42                        INC EDX
006EA729  89 90 90 00 00 00         MOV dword ptr [EAX + 0x90],EDX
006EA72F  80 09 04                  OR byte ptr [ECX],0x4
006EA732  5D                        POP EBP
006EA733  C2 0C 00                  RET 0xc
LAB_006ea736:
006EA736  8D 54 8A 02               LEA EDX,[EDX + ECX*0x4 + 0x2]
006EA73A  66 8B 0A                  MOV CX,word ptr [EDX]
006EA73D  F6 C1 04                  TEST CL,0x4
006EA740  74 43                     JZ 0x006ea785
006EA742  81 E1 FB FF 00 00         AND ECX,0xfffb
006EA748  66 89 0A                  MOV word ptr [EDX],CX
006EA74B  8B 88 90 00 00 00         MOV ECX,dword ptr [EAX + 0x90]
006EA751  49                        DEC ECX
006EA752  89 88 90 00 00 00         MOV dword ptr [EAX + 0x90],ECX
006EA758  79 2B                     JNS 0x006ea785
006EA75A  C7 80 90 00 00 00 00 00 00 00  MOV dword ptr [EAX + 0x90],0x0
006EA764  5D                        POP EBP
006EA765  C2 0C 00                  RET 0xc
LAB_006ea768:
006EA768  68 C8 EE 7E 00            PUSH 0x7eeec8
006EA76D  E8 2E EA FF FF            CALL 0x006e91a0
006EA772  5D                        POP EBP
006EA773  C2 0C 00                  RET 0xc
LAB_006ea776:
006EA776  83 FA FF                  CMP EDX,-0x1
006EA779  74 0A                     JZ 0x006ea785
006EA77B  68 C8 EE 7E 00            PUSH 0x7eeec8
006EA780  E8 CB E4 FF FF            CALL 0x006e8c50
LAB_006ea785:
006EA785  5D                        POP EBP
006EA786  C2 0C 00                  RET 0xc
