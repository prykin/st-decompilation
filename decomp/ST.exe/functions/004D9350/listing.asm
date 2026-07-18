FUN_004d9350:
004D9350  55                        PUSH EBP
004D9351  8B EC                     MOV EBP,ESP
004D9353  83 EC 0C                  SUB ESP,0xc
004D9356  53                        PUSH EBX
004D9357  56                        PUSH ESI
004D9358  8B F1                     MOV ESI,ECX
004D935A  57                        PUSH EDI
004D935B  8B 8E D0 04 00 00         MOV ECX,dword ptr [ESI + 0x4d0]
004D9361  83 F9 03                  CMP ECX,0x3
004D9364  0F 84 76 01 00 00         JZ 0x004d94e0
004D936A  83 F9 05                  CMP ECX,0x5
004D936D  0F 84 6D 01 00 00         JZ 0x004d94e0
004D9373  83 F9 04                  CMP ECX,0x4
004D9376  0F 85 8F 01 00 00         JNZ 0x004d950b
004D937C  A1 E0 8D 79 00            MOV EAX,[0x00798de0]
004D9381  83 F8 01                  CMP EAX,0x1
004D9384  0F 8E 81 01 00 00         JLE 0x004d950b
004D938A  8B BE D4 04 00 00         MOV EDI,dword ptr [ESI + 0x4d4]
004D9390  3B F8                     CMP EDI,EAX
004D9392  0F 8D 73 01 00 00         JGE 0x004d950b
004D9398  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004D939D  8B 96 DC 04 00 00         MOV EDX,dword ptr [ESI + 0x4dc]
004D93A3  8B 9E D8 04 00 00         MOV EBX,dword ptr [ESI + 0x4d8]
004D93A9  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004D93AF  03 D3                     ADD EDX,EBX
004D93B1  3B C2                     CMP EAX,EDX
004D93B3  0F 82 52 01 00 00         JC 0x004d950b
004D93B9  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
004D93BC  47                        INC EDI
004D93BD  C1 E1 03                  SHL ECX,0x3
004D93C0  89 86 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EAX
004D93C6  89 BE D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EDI
004D93CC  8B 91 EC 8D 79 00         MOV EDX,dword ptr [ECX + 0x798dec]
004D93D2  8B 81 F8 8D 79 00         MOV EAX,dword ptr [ECX + 0x798df8]
004D93D8  2B C2                     SUB EAX,EDX
004D93DA  8B 1D E0 8D 79 00         MOV EBX,dword ptr [0x00798de0]
004D93E0  0F AF C7                  IMUL EAX,EDI
004D93E3  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004D93E6  99                        CDQ
004D93E7  F7 FB                     IDIV EBX
004D93E9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004D93EC  03 C2                     ADD EAX,EDX
004D93EE  8B 91 F0 8D 79 00         MOV EDX,dword ptr [ECX + 0x798df0]
004D93F4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004D93F7  8B 81 FC 8D 79 00         MOV EAX,dword ptr [ECX + 0x798dfc]
004D93FD  2B C2                     SUB EAX,EDX
004D93FF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004D9402  0F AF C7                  IMUL EAX,EDI
004D9405  99                        CDQ
004D9406  F7 FB                     IDIV EBX
004D9408  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004D940B  8B 99 E8 8D 79 00         MOV EBX,dword ptr [ECX + 0x798de8]
004D9411  03 C2                     ADD EAX,EDX
004D9413  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004D9416  8B 81 F4 8D 79 00         MOV EAX,dword ptr [ECX + 0x798df4]
004D941C  2B C3                     SUB EAX,EBX
004D941E  0F AF C7                  IMUL EAX,EDI
004D9421  99                        CDQ
004D9422  F7 3D E0 8D 79 00         IDIV dword ptr [0x00798de0]
004D9428  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
004D942C  03 D8                     ADD EBX,EAX
004D942E  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
004D9432  8D 54 19 64               LEA EDX,[ECX + EBX*0x1 + 0x64]
004D9436  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004D9439  89 96 E0 04 00 00         MOV dword ptr [ESI + 0x4e0],EDX
004D943F  51                        PUSH ECX
004D9440  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
004D9444  8D 44 08 64               LEA EAX,[EAX + ECX*0x1 + 0x64]
004D9448  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004D944B  89 86 E4 04 00 00         MOV dword ptr [ESI + 0x4e4],EAX
004D9451  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004D9454  03 C2                     ADD EAX,EDX
004D9456  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004D9459  89 86 E8 04 00 00         MOV dword ptr [ESI + 0x4e8],EAX
004D945F  DB 45 F8                  FILD dword ptr [EBP + -0x8]
004D9462  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004D9468  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004D946E  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
004D9474  D9 1C 24                  FSTP float ptr [ESP]
004D9477  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004D947A  51                        PUSH ECX
004D947B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004D9481  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004D9487  D9 1C 24                  FSTP float ptr [ESP]
004D948A  DB 86 E0 04 00 00         FILD dword ptr [ESI + 0x4e0]
004D9490  51                        PUSH ECX
004D9491  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D9497  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004D949D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004D94A3  D9 1C 24                  FSTP float ptr [ESP]
004D94A6  E8 2E B1 F2 FF            CALL 0x004045d9
004D94AB  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004D94B1  8B 8E D4 04 00 00         MOV ECX,dword ptr [ESI + 0x4d4]
004D94B7  3B 0C 85 D0 8D 79 00      CMP ECX,dword ptr [EAX*0x4 + 0x798dd0]
004D94BE  7C 4B                     JL 0x004d950b
004D94C0  83 F8 04                  CMP EAX,0x4
004D94C3  75 3D                     JNZ 0x004d9502
004D94C5  6A 00                     PUSH 0x0
004D94C7  8B CE                     MOV ECX,ESI
004D94C9  E8 30 AA F2 FF            CALL 0x00403efe
004D94CE  6A 00                     PUSH 0x0
004D94D0  8B CE                     MOV ECX,ESI
004D94D2  E8 20 98 F2 FF            CALL 0x00402cf7
004D94D7  5F                        POP EDI
004D94D8  5E                        POP ESI
004D94D9  33 C0                     XOR EAX,EAX
004D94DB  5B                        POP EBX
004D94DC  8B E5                     MOV ESP,EBP
004D94DE  5D                        POP EBP
004D94DF  C3                        RET
LAB_004d94e0:
004D94E0  6A 0C                     PUSH 0xc
004D94E2  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004D94E8  E8 C2 AD F2 FF            CALL 0x004042af
004D94ED  8B 96 F5 01 00 00         MOV EDX,dword ptr [ESI + 0x1f5]
004D94F3  3B 82 C4 01 00 00         CMP EAX,dword ptr [EDX + 0x1c4]
004D94F9  75 10                     JNZ 0x004d950b
004D94FB  8B CE                     MOV ECX,ESI
004D94FD  E8 15 96 F2 FF            CALL 0x00402b17
LAB_004d9502:
004D9502  6A 00                     PUSH 0x0
004D9504  8B CE                     MOV ECX,ESI
004D9506  E8 EC 97 F2 FF            CALL 0x00402cf7
LAB_004d950b:
004D950B  5F                        POP EDI
004D950C  5E                        POP ESI
004D950D  33 C0                     XOR EAX,EAX
004D950F  5B                        POP EBX
004D9510  8B E5                     MOV ESP,EBP
004D9512  5D                        POP EBP
004D9513  C3                        RET
