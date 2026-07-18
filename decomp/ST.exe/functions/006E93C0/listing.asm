FUN_006e93c0:
006E93C0  55                        PUSH EBP
006E93C1  8B EC                     MOV EBP,ESP
006E93C3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E93C6  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E93CC  3B D0                     CMP EDX,EAX
006E93CE  56                        PUSH ESI
006E93CF  0F 83 A7 00 00 00         JNC 0x006e947c
006E93D5  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E93DB  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E93DE  C1 E0 03                  SHL EAX,0x3
006E93E1  2B C2                     SUB EAX,EDX
006E93E3  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E93E6  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006E93E9  8B 08                     MOV ECX,dword ptr [EAX]
006E93EB  F6 C5 80                  TEST CH,0x80
006E93EE  0F 84 88 00 00 00         JZ 0x006e947c
006E93F4  8B B0 94 00 00 00         MOV ESI,dword ptr [EAX + 0x94]
006E93FA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E93FD  3B CE                     CMP ECX,ESI
006E93FF  7D 6C                     JGE 0x006e946d
006E9401  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006E9404  85 D2                     TEST EDX,EDX
006E9406  7D 47                     JGE 0x006e944f
006E9408  8B 90 A4 00 00 00         MOV EDX,dword ptr [EAX + 0xa4]
006E940E  66 81 64 8A 02 FF DF      AND word ptr [EDX + ECX*0x4 + 0x2],0xdfff
006E9415  8D 4C 8A 02               LEA ECX,[EDX + ECX*0x4 + 0x2]
006E9419  8B 90 94 00 00 00         MOV EDX,dword ptr [EAX + 0x94]
006E941F  33 C9                     XOR ECX,ECX
006E9421  85 D2                     TEST EDX,EDX
006E9423  7E 17                     JLE 0x006e943c
006E9425  8B B0 A4 00 00 00         MOV ESI,dword ptr [EAX + 0xa4]
006E942B  83 C6 02                  ADD ESI,0x2
LAB_006e942e:
006E942E  F6 46 01 20               TEST byte ptr [ESI + 0x1],0x20
006E9432  75 08                     JNZ 0x006e943c
006E9434  41                        INC ECX
006E9435  83 C6 04                  ADD ESI,0x4
006E9438  3B CA                     CMP ECX,EDX
006E943A  7C F2                     JL 0x006e942e
LAB_006e943c:
006E943C  3B CA                     CMP ECX,EDX
006E943E  7C 4B                     JL 0x006e948b
006E9440  C7 80 8C 00 00 00 FF FF FF FF  MOV dword ptr [EAX + 0x8c],0xffffffff
006E944A  5E                        POP ESI
006E944B  5D                        POP EBP
006E944C  C2 0C 00                  RET 0xc
LAB_006e944f:
006E944F  3B D6                     CMP EDX,ESI
006E9451  7D 1A                     JGE 0x006e946d
006E9453  8B B0 A4 00 00 00         MOV ESI,dword ptr [EAX + 0xa4]
006E9459  80 4C 8E 03 20            OR byte ptr [ESI + ECX*0x4 + 0x3],0x20
006E945E  89 90 8C 00 00 00         MOV dword ptr [EAX + 0x8c],EDX
006E9464  8D 4C 8E 02               LEA ECX,[ESI + ECX*0x4 + 0x2]
006E9468  5E                        POP ESI
006E9469  5D                        POP EBP
006E946A  C2 0C 00                  RET 0xc
LAB_006e946d:
006E946D  68 20 ED 7E 00            PUSH 0x7eed20
006E9472  E8 29 FD FF FF            CALL 0x006e91a0
006E9477  5E                        POP ESI
006E9478  5D                        POP EBP
006E9479  C2 0C 00                  RET 0xc
LAB_006e947c:
006E947C  83 FA FF                  CMP EDX,-0x1
006E947F  74 0A                     JZ 0x006e948b
006E9481  68 20 ED 7E 00            PUSH 0x7eed20
006E9486  E8 C5 F7 FF FF            CALL 0x006e8c50
LAB_006e948b:
006E948B  5E                        POP ESI
006E948C  5D                        POP EBP
006E948D  C2 0C 00                  RET 0xc
