FUN_0049a940:
0049A940  55                        PUSH EBP
0049A941  8B EC                     MOV EBP,ESP
0049A943  83 EC 54                  SUB ESP,0x54
0049A946  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
0049A949  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0049A94F  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0049A952  53                        PUSH EBX
0049A953  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049A956  56                        PUSH ESI
0049A957  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0049A95A  57                        PUSH EDI
0049A95B  8D 4D B0                  LEA ECX,[EBP + -0x50]
0049A95E  8D 45 AC                  LEA EAX,[EBP + -0x54]
0049A961  6A 00                     PUSH 0x0
0049A963  51                        PUSH ECX
0049A964  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
0049A967  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049A96C  E8 7F 2E 29 00            CALL 0x0072d7f0
0049A971  8B F0                     MOV ESI,EAX
0049A973  83 C4 08                  ADD ESP,0x8
0049A976  85 F6                     TEST ESI,ESI
0049A978  0F 85 BA 00 00 00         JNZ 0x0049aa38
0049A97E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049A981  85 C0                     TEST EAX,EAX
0049A983  74 09                     JZ 0x0049a98e
0049A985  83 F8 01                  CMP EAX,0x1
0049A988  0F 85 93 00 00 00         JNZ 0x0049aa21
LAB_0049a98e:
0049A98E  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0049A991  B9 15 00 00 00            MOV ECX,0x15
0049A996  33 C0                     XOR EAX,EAX
0049A998  8D BB 89 00 00 00         LEA EDI,[EBX + 0x89]
0049A99E  F3 AB                     STOSD.REP ES:EDI
0049A9A0  33 FF                     XOR EDI,EDI
0049A9A2  89 7B 65                  MOV dword ptr [EBX + 0x65],EDI
0049A9A5  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0049A9AB  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0049A9B1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0049A9B4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049A9B7  3B C7                     CMP EAX,EDI
0049A9B9  76 66                     JBE 0x0049aa21
0049A9BB  33 D2                     XOR EDX,EDX
LAB_0049a9bd:
0049A9BD  8D 4D F8                  LEA ECX,[EBP + -0x8]
0049A9C0  51                        PUSH ECX
0049A9C1  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049A9C4  E8 A7 22 21 00            CALL 0x006acc70
0049A9C9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049A9CC  66 3D FF FF               CMP AX,0xffff
0049A9D0  74 3F                     JZ 0x0049aa11
0049A9D2  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049A9D5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049A9DB  6A 01                     PUSH 0x1
0049A9DD  50                        PUSH EAX
0049A9DE  52                        PUSH EDX
0049A9DF  E8 D6 7E F6 FF            CALL 0x004028ba
0049A9E4  8B F0                     MOV ESI,EAX
0049A9E6  85 F6                     TEST ESI,ESI
0049A9E8  75 1A                     JNZ 0x0049aa04
0049A9EA  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0049A9EF  68 5E 06 00 00            PUSH 0x65e
0049A9F4  68 3C BE 7A 00            PUSH 0x7abe3c
0049A9F9  50                        PUSH EAX
0049A9FA  68 04 00 FE AF            PUSH 0xaffe0004
0049A9FF  E8 3C B4 20 00            CALL 0x006a5e40
LAB_0049aa04:
0049AA04  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049AA07  51                        PUSH ECX
0049AA08  6A 03                     PUSH 0x3
0049AA0A  8B CE                     MOV ECX,ESI
0049AA0C  E8 15 77 F6 FF            CALL 0x00402126
LAB_0049aa11:
0049AA11  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049AA14  47                        INC EDI
0049AA15  8B D7                     MOV EDX,EDI
0049AA17  81 E2 FF FF 00 00         AND EDX,0xffff
0049AA1D  3B D0                     CMP EDX,EAX
0049AA1F  72 9C                     JC 0x0049a9bd
LAB_0049aa21:
0049AA21  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0049AA24  B8 02 00 00 00            MOV EAX,0x2
0049AA29  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0049AA2F  5F                        POP EDI
0049AA30  5E                        POP ESI
0049AA31  5B                        POP EBX
0049AA32  8B E5                     MOV ESP,EBP
0049AA34  5D                        POP EBP
0049AA35  C2 04 00                  RET 0x4
LAB_0049aa38:
0049AA38  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0049AA3B  68 3C BF 7A 00            PUSH 0x7abf3c
0049AA40  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049AA45  56                        PUSH ESI
0049AA46  6A 00                     PUSH 0x0
0049AA48  68 65 06 00 00            PUSH 0x665
0049AA4D  68 3C BE 7A 00            PUSH 0x7abe3c
0049AA52  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049AA57  E8 74 2A 21 00            CALL 0x006ad4d0
0049AA5C  83 C4 18                  ADD ESP,0x18
0049AA5F  85 C0                     TEST EAX,EAX
0049AA61  74 01                     JZ 0x0049aa64
0049AA63  CC                        INT3
LAB_0049aa64:
0049AA64  68 66 06 00 00            PUSH 0x666
0049AA69  68 3C BE 7A 00            PUSH 0x7abe3c
0049AA6E  6A 00                     PUSH 0x0
0049AA70  56                        PUSH ESI
0049AA71  E8 CA B3 20 00            CALL 0x006a5e40
0049AA76  5F                        POP EDI
0049AA77  5E                        POP ESI
0049AA78  83 C8 FF                  OR EAX,0xffffffff
0049AA7B  5B                        POP EBX
0049AA7C  8B E5                     MOV ESP,EBP
0049AA7E  5D                        POP EBP
0049AA7F  C2 04 00                  RET 0x4
