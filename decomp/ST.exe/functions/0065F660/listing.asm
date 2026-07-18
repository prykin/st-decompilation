FUN_0065f660:
0065F660  55                        PUSH EBP
0065F661  8B EC                     MOV EBP,ESP
0065F663  83 EC 60                  SUB ESP,0x60
0065F666  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0065F66B  53                        PUSH EBX
0065F66C  56                        PUSH ESI
0065F66D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0065F670  57                        PUSH EDI
0065F671  8D 55 A4                  LEA EDX,[EBP + -0x5c]
0065F674  8D 4D A0                  LEA ECX,[EBP + -0x60]
0065F677  6A 00                     PUSH 0x0
0065F679  52                        PUSH EDX
0065F67A  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0065F67D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0065F683  E8 68 E1 0C 00            CALL 0x0072d7f0
0065F688  8B F0                     MOV ESI,EAX
0065F68A  83 C4 08                  ADD ESP,0x8
0065F68D  85 F6                     TEST ESI,ESI
0065F68F  0F 85 F8 00 00 00         JNZ 0x0065f78d
0065F695  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0065F698  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0065F69B  85 C0                     TEST EAX,EAX
0065F69D  0F 8E D7 00 00 00         JLE 0x0065f77a
0065F6A3  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_0065f6a6:
0065F6A6  33 C0                     XOR EAX,EAX
0065F6A8  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0065F6AB  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0065F6AE  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0065F6B1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0065F6B4  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0065F6B7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0065F6BA  0F BF 78 02               MOVSX EDI,word ptr [EAX + 0x2]
0065F6BE  0F BF 48 08               MOVSX ECX,word ptr [EAX + 0x8]
0065F6C2  85 FF                     TEST EDI,EDI
0065F6C4  8D 4C 39 FF               LEA ECX,[ECX + EDI*0x1 + -0x1]
0065F6C8  7D 11                     JGE 0x0065f6db
0065F6CA  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0065F6CD  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0065F6D3  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0065F6D9  EB 0E                     JMP 0x0065f6e9
LAB_0065f6db:
0065F6DB  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0065F6DE  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0065F6E4  05 39 30 00 00            ADD EAX,0x3039
LAB_0065f6e9:
0065F6E9  2B CF                     SUB ECX,EDI
0065F6EB  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0065F6EE  41                        INC ECX
0065F6EF  33 D2                     XOR EDX,EDX
0065F6F1  C1 E8 10                  SHR EAX,0x10
0065F6F4  F7 F1                     DIV ECX
0065F6F6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0065F6F9  0F BF 48 06               MOVSX ECX,word ptr [EAX + 0x6]
0065F6FD  8B DA                     MOV EBX,EDX
0065F6FF  03 DF                     ADD EBX,EDI
0065F701  0F BF 38                  MOVSX EDI,word ptr [EAX]
0065F704  85 FF                     TEST EDI,EDI
0065F706  8D 4C 39 FF               LEA ECX,[ECX + EDI*0x1 + -0x1]
0065F70A  7D 11                     JGE 0x0065f71d
0065F70C  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0065F70F  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0065F715  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0065F71B  EB 0E                     JMP 0x0065f72b
LAB_0065f71d:
0065F71D  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0065F720  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0065F726  05 39 30 00 00            ADD EAX,0x3039
LAB_0065f72b:
0065F72B  2B CF                     SUB ECX,EDI
0065F72D  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0065F730  41                        INC ECX
0065F731  33 D2                     XOR EDX,EDX
0065F733  C1 E8 10                  SHR EAX,0x10
0065F736  F7 F1                     DIV ECX
0065F738  8D 4D E8                  LEA ECX,[EBP + -0x18]
0065F73B  6A 00                     PUSH 0x0
0065F73D  51                        PUSH ECX
0065F73E  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0065F741  8D 04 3A                  LEA EAX,[EDX + EDI*0x1]
0065F744  8D 55 E6                  LEA EDX,[EBP + -0x1a]
0065F747  52                        PUSH EDX
0065F748  51                        PUSH ECX
0065F749  6A 02                     PUSH 0x2
0065F74B  53                        PUSH EBX
0065F74C  50                        PUSH EAX
0065F74D  E8 02 56 DA FF            CALL 0x00404d54
0065F752  83 C4 1C                  ADD ESP,0x1c
0065F755  85 C0                     TEST EAX,EAX
0065F757  74 0F                     JZ 0x0065f768
0065F759  8D 55 E4                  LEA EDX,[EBP + -0x1c]
0065F75C  8B CE                     MOV ECX,ESI
0065F75E  52                        PUSH EDX
0065F75F  E8 4E 57 DA FF            CALL 0x00404eb2
0065F764  85 C0                     TEST EAX,EAX
0065F766  75 12                     JNZ 0x0065f77a
LAB_0065f768:
0065F768  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065F76B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0065F76E  40                        INC EAX
0065F76F  3B C1                     CMP EAX,ECX
0065F771  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0065F774  0F 8C 2C FF FF FF         JL 0x0065f6a6
LAB_0065f77a:
0065F77A  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0065F77D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0065F782  33 C0                     XOR EAX,EAX
0065F784  5F                        POP EDI
0065F785  5E                        POP ESI
0065F786  5B                        POP EBX
0065F787  8B E5                     MOV ESP,EBP
0065F789  5D                        POP EBP
0065F78A  C2 08 00                  RET 0x8
LAB_0065f78d:
0065F78D  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0065F790  68 20 2C 7D 00            PUSH 0x7d2c20
0065F795  68 CC 4C 7A 00            PUSH 0x7a4ccc
0065F79A  56                        PUSH ESI
0065F79B  6A 00                     PUSH 0x0
0065F79D  68 03 03 00 00            PUSH 0x303
0065F7A2  68 80 2B 7D 00            PUSH 0x7d2b80
0065F7A7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0065F7AD  E8 1E DD 04 00            CALL 0x006ad4d0
0065F7B2  83 C4 18                  ADD ESP,0x18
0065F7B5  85 C0                     TEST EAX,EAX
0065F7B7  74 01                     JZ 0x0065f7ba
0065F7B9  CC                        INT3
LAB_0065f7ba:
0065F7BA  68 04 03 00 00            PUSH 0x304
0065F7BF  68 80 2B 7D 00            PUSH 0x7d2b80
0065F7C4  6A 00                     PUSH 0x0
0065F7C6  56                        PUSH ESI
0065F7C7  E8 74 66 04 00            CALL 0x006a5e40
0065F7CC  8B C6                     MOV EAX,ESI
0065F7CE  5F                        POP EDI
0065F7CF  5E                        POP ESI
0065F7D0  5B                        POP EBX
0065F7D1  8B E5                     MOV ESP,EBP
0065F7D3  5D                        POP EBP
0065F7D4  C2 08 00                  RET 0x8
