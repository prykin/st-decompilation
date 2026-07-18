FUN_006ea800:
006EA800  55                        PUSH EBP
006EA801  8B EC                     MOV EBP,ESP
006EA803  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006EA806  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EA80C  3B D0                     CMP EDX,EAX
006EA80E  73 71                     JNC 0x006ea881
006EA810  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006EA816  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EA819  C1 E0 03                  SHL EAX,0x3
006EA81C  2B C2                     SUB EAX,EDX
006EA81E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EA821  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006EA824  8B 08                     MOV ECX,dword ptr [EAX]
006EA826  F6 C5 80                  TEST CH,0x80
006EA829  74 56                     JZ 0x006ea881
006EA82B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006EA82E  8B 90 94 00 00 00         MOV EDX,dword ptr [EAX + 0x94]
006EA834  3B CA                     CMP ECX,EDX
006EA836  7D 3B                     JGE 0x006ea873
006EA838  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006EA83B  85 D2                     TEST EDX,EDX
006EA83D  8B 90 A4 00 00 00         MOV EDX,dword ptr [EAX + 0xa4]
006EA843  8D 4C 8A 02               LEA ECX,[EDX + ECX*0x4 + 0x2]
006EA847  74 05                     JZ 0x006ea84e
006EA849  80 09 10                  OR byte ptr [ECX],0x10
006EA84C  EB 05                     JMP 0x006ea853
LAB_006ea84e:
006EA84E  66 81 21 EF FF            AND word ptr [ECX],0xffef
LAB_006ea853:
006EA853  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006EA856  85 C9                     TEST ECX,ECX
006EA858  75 36                     JNZ 0x006ea890
006EA85A  8B 08                     MOV ECX,dword ptr [EAX]
006EA85C  F7 C1 01 00 01 00         TEST ECX,0x10001
006EA862  74 2C                     JZ 0x006ea890
006EA864  81 E1 FF FF 87 FF         AND ECX,0xff87ffff
006EA86A  83 C9 04                  OR ECX,0x4
006EA86D  89 08                     MOV dword ptr [EAX],ECX
006EA86F  5D                        POP EBP
006EA870  C2 0C 00                  RET 0xc
LAB_006ea873:
006EA873  68 F0 EE 7E 00            PUSH 0x7eeef0
006EA878  E8 23 E9 FF FF            CALL 0x006e91a0
006EA87D  5D                        POP EBP
006EA87E  C2 0C 00                  RET 0xc
LAB_006ea881:
006EA881  83 FA FF                  CMP EDX,-0x1
006EA884  74 0A                     JZ 0x006ea890
006EA886  68 F0 EE 7E 00            PUSH 0x7eeef0
006EA88B  E8 C0 E3 FF FF            CALL 0x006e8c50
LAB_006ea890:
006EA890  5D                        POP EBP
006EA891  C2 0C 00                  RET 0xc
