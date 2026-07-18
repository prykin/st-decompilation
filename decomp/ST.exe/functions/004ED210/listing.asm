FUN_004ed210:
004ED210  55                        PUSH EBP
004ED211  8B EC                     MOV EBP,ESP
004ED213  83 EC 0C                  SUB ESP,0xc
004ED216  53                        PUSH EBX
004ED217  56                        PUSH ESI
004ED218  8B F1                     MOV ESI,ECX
004ED21A  57                        PUSH EDI
004ED21B  8B 8E D0 04 00 00         MOV ECX,dword ptr [ESI + 0x4d0]
004ED221  83 F9 03                  CMP ECX,0x3
004ED224  0F 84 5E 01 00 00         JZ 0x004ed388
004ED22A  83 F9 05                  CMP ECX,0x5
004ED22D  0F 84 55 01 00 00         JZ 0x004ed388
004ED233  83 F9 04                  CMP ECX,0x4
004ED236  0F 85 77 01 00 00         JNZ 0x004ed3b3
004ED23C  A1 B8 AA 79 00            MOV EAX,[0x0079aab8]
004ED241  83 F8 01                  CMP EAX,0x1
004ED244  0F 8E 69 01 00 00         JLE 0x004ed3b3
004ED24A  8B BE D4 04 00 00         MOV EDI,dword ptr [ESI + 0x4d4]
004ED250  3B F8                     CMP EDI,EAX
004ED252  0F 8D 5B 01 00 00         JGE 0x004ed3b3
004ED258  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004ED25D  8B 96 DC 04 00 00         MOV EDX,dword ptr [ESI + 0x4dc]
004ED263  8B 9E D8 04 00 00         MOV EBX,dword ptr [ESI + 0x4d8]
004ED269  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004ED26F  03 D3                     ADD EDX,EBX
004ED271  3B C2                     CMP EAX,EDX
004ED273  0F 82 3A 01 00 00         JC 0x004ed3b3
004ED279  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
004ED27C  47                        INC EDI
004ED27D  C1 E1 03                  SHL ECX,0x3
004ED280  89 86 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EAX
004ED286  89 BE D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EDI
004ED28C  8B 91 C4 AA 79 00         MOV EDX,dword ptr [ECX + 0x79aac4]
004ED292  8B 81 D0 AA 79 00         MOV EAX,dword ptr [ECX + 0x79aad0]
004ED298  2B C2                     SUB EAX,EDX
004ED29A  8B 1D B8 AA 79 00         MOV EBX,dword ptr [0x0079aab8]
004ED2A0  0F AF C7                  IMUL EAX,EDI
004ED2A3  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004ED2A6  99                        CDQ
004ED2A7  F7 FB                     IDIV EBX
004ED2A9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004ED2AC  03 C2                     ADD EAX,EDX
004ED2AE  8B 91 C8 AA 79 00         MOV EDX,dword ptr [ECX + 0x79aac8]
004ED2B4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004ED2B7  8B 81 D4 AA 79 00         MOV EAX,dword ptr [ECX + 0x79aad4]
004ED2BD  2B C2                     SUB EAX,EDX
004ED2BF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004ED2C2  0F AF C7                  IMUL EAX,EDI
004ED2C5  99                        CDQ
004ED2C6  F7 FB                     IDIV EBX
004ED2C8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004ED2CB  8B 99 C0 AA 79 00         MOV EBX,dword ptr [ECX + 0x79aac0]
004ED2D1  03 C2                     ADD EAX,EDX
004ED2D3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004ED2D6  8B 81 CC AA 79 00         MOV EAX,dword ptr [ECX + 0x79aacc]
004ED2DC  2B C3                     SUB EAX,EBX
004ED2DE  0F AF C7                  IMUL EAX,EDI
004ED2E1  99                        CDQ
004ED2E2  F7 3D B8 AA 79 00         IDIV dword ptr [0x0079aab8]
004ED2E8  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
004ED2EC  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
004ED2F0  03 D8                     ADD EBX,EAX
004ED2F2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004ED2F5  03 CB                     ADD ECX,EBX
004ED2F7  03 C2                     ADD EAX,EDX
004ED2F9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004ED2FC  89 8E E0 04 00 00         MOV dword ptr [ESI + 0x4e0],ECX
004ED302  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
004ED306  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004ED309  89 86 E4 04 00 00         MOV dword ptr [ESI + 0x4e4],EAX
004ED30F  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
004ED312  51                        PUSH ECX
004ED313  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004ED316  89 86 E8 04 00 00         MOV dword ptr [ESI + 0x4e8],EAX
004ED31C  DB 45 F8                  FILD dword ptr [EBP + -0x8]
004ED31F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004ED325  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004ED32B  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
004ED331  D9 1C 24                  FSTP float ptr [ESP]
004ED334  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004ED337  51                        PUSH ECX
004ED338  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004ED33E  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004ED344  D9 1C 24                  FSTP float ptr [ESP]
004ED347  DB 86 E0 04 00 00         FILD dword ptr [ESI + 0x4e0]
004ED34D  51                        PUSH ECX
004ED34E  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004ED354  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004ED35A  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004ED360  D9 1C 24                  FSTP float ptr [ESP]
004ED363  E8 71 72 F1 FF            CALL 0x004045d9
004ED368  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004ED36E  8B 8E D4 04 00 00         MOV ECX,dword ptr [ESI + 0x4d4]
004ED374  3B 0C 85 A8 AA 79 00      CMP ECX,dword ptr [EAX*0x4 + 0x79aaa8]
004ED37B  7C 36                     JL 0x004ed3b3
004ED37D  6A 00                     PUSH 0x0
004ED37F  8B CE                     MOV ECX,ESI
004ED381  E8 78 6B F1 FF            CALL 0x00403efe
004ED386  EB 1B                     JMP 0x004ed3a3
LAB_004ed388:
004ED388  6A 0E                     PUSH 0xe
004ED38A  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004ED390  E8 1A 6F F1 FF            CALL 0x004042af
004ED395  8B 96 F5 01 00 00         MOV EDX,dword ptr [ESI + 0x1f5]
004ED39B  3B 82 0C 02 00 00         CMP EAX,dword ptr [EDX + 0x20c]
004ED3A1  75 10                     JNZ 0x004ed3b3
LAB_004ed3a3:
004ED3A3  8B CE                     MOV ECX,ESI
004ED3A5  E8 BC 44 F1 FF            CALL 0x00401866
004ED3AA  6A 00                     PUSH 0x0
004ED3AC  8B CE                     MOV ECX,ESI
004ED3AE  E8 44 59 F1 FF            CALL 0x00402cf7
LAB_004ed3b3:
004ED3B3  5F                        POP EDI
004ED3B4  5E                        POP ESI
004ED3B5  33 C0                     XOR EAX,EAX
004ED3B7  5B                        POP EBX
004ED3B8  8B E5                     MOV ESP,EBP
004ED3BA  5D                        POP EBP
004ED3BB  C3                        RET
