FUN_0063de20:
0063DE20  55                        PUSH EBP
0063DE21  8B EC                     MOV EBP,ESP
0063DE23  83 EC 0C                  SUB ESP,0xc
0063DE26  8B 91 66 02 00 00         MOV EDX,dword ptr [ECX + 0x266]
0063DE2C  33 C0                     XOR EAX,EAX
0063DE2E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0063DE31  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0063DE34  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0063DE37  B8 79 19 8C 02            MOV EAX,0x28c1979
0063DE3C  85 D2                     TEST EDX,EDX
0063DE3E  7C 10                     JL 0x0063de50
0063DE40  F7 EA                     IMUL EDX
0063DE42  D1 FA                     SAR EDX,0x1
0063DE44  8B C2                     MOV EAX,EDX
0063DE46  C1 E8 1F                  SHR EAX,0x1f
0063DE49  03 D0                     ADD EDX,EAX
0063DE4B  0F BF D2                  MOVSX EDX,DX
0063DE4E  EB 0F                     JMP 0x0063de5f
LAB_0063de50:
0063DE50  F7 EA                     IMUL EDX
0063DE52  D1 FA                     SAR EDX,0x1
0063DE54  8B C2                     MOV EAX,EDX
0063DE56  C1 E8 1F                  SHR EAX,0x1f
0063DE59  03 D0                     ADD EDX,EAX
0063DE5B  0F BF D2                  MOVSX EDX,DX
0063DE5E  4A                        DEC EDX
LAB_0063de5f:
0063DE5F  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0063DE62  8B 91 6A 02 00 00         MOV EDX,dword ptr [ECX + 0x26a]
0063DE68  85 D2                     TEST EDX,EDX
0063DE6A  B8 79 19 8C 02            MOV EAX,0x28c1979
0063DE6F  7C 10                     JL 0x0063de81
0063DE71  F7 EA                     IMUL EDX
0063DE73  D1 FA                     SAR EDX,0x1
0063DE75  8B C2                     MOV EAX,EDX
0063DE77  C1 E8 1F                  SHR EAX,0x1f
0063DE7A  03 D0                     ADD EDX,EAX
0063DE7C  0F BF D2                  MOVSX EDX,DX
0063DE7F  EB 0F                     JMP 0x0063de90
LAB_0063de81:
0063DE81  F7 EA                     IMUL EDX
0063DE83  D1 FA                     SAR EDX,0x1
0063DE85  8B C2                     MOV EAX,EDX
0063DE87  C1 E8 1F                  SHR EAX,0x1f
0063DE8A  03 D0                     ADD EDX,EAX
0063DE8C  0F BF D2                  MOVSX EDX,DX
0063DE8F  4A                        DEC EDX
LAB_0063de90:
0063DE90  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0063DE93  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0063DE96  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0063DE99  8D 4D F4                  LEA ECX,[EBP + -0xc]
0063DE9C  6A 00                     PUSH 0x0
0063DE9E  51                        PUSH ECX
0063DE9F  52                        PUSH EDX
0063DEA0  6A 00                     PUSH 0x0
0063DEA2  6A 02                     PUSH 0x2
0063DEA4  B9 58 76 80 00            MOV ECX,0x807658
0063DEA9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0063DEAC  E8 27 6D DC FF            CALL 0x00404bd8
0063DEB1  8B E5                     MOV ESP,EBP
0063DEB3  5D                        POP EBP
0063DEB4  C2 04 00                  RET 0x4
