FUN_004d9fe0:
004D9FE0  55                        PUSH EBP
004D9FE1  8B EC                     MOV EBP,ESP
004D9FE3  83 EC 0C                  SUB ESP,0xc
004D9FE6  53                        PUSH EBX
004D9FE7  56                        PUSH ESI
004D9FE8  8B F1                     MOV ESI,ECX
004D9FEA  57                        PUSH EDI
004D9FEB  8B 8E D0 04 00 00         MOV ECX,dword ptr [ESI + 0x4d0]
004D9FF1  83 F9 03                  CMP ECX,0x3
004D9FF4  0F 84 73 01 00 00         JZ 0x004da16d
004D9FFA  83 F9 05                  CMP ECX,0x5
004D9FFD  0F 84 6A 01 00 00         JZ 0x004da16d
004DA003  83 F9 04                  CMP ECX,0x4
004DA006  0F 85 8C 01 00 00         JNZ 0x004da198
004DA00C  A1 B0 8E 79 00            MOV EAX,[0x00798eb0]
004DA011  83 F8 01                  CMP EAX,0x1
004DA014  0F 8E 7E 01 00 00         JLE 0x004da198
004DA01A  8B BE D4 04 00 00         MOV EDI,dword ptr [ESI + 0x4d4]
004DA020  3B F8                     CMP EDI,EAX
004DA022  0F 8D 70 01 00 00         JGE 0x004da198
004DA028  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004DA02D  8B 96 DC 04 00 00         MOV EDX,dword ptr [ESI + 0x4dc]
004DA033  8B 9E D8 04 00 00         MOV EBX,dword ptr [ESI + 0x4d8]
004DA039  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004DA03F  03 D3                     ADD EDX,EBX
004DA041  3B C2                     CMP EAX,EDX
004DA043  0F 82 4F 01 00 00         JC 0x004da198
004DA049  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
004DA04C  47                        INC EDI
004DA04D  C1 E1 03                  SHL ECX,0x3
004DA050  89 86 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EAX
004DA056  89 BE D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EDI
004DA05C  8B 91 BC 8E 79 00         MOV EDX,dword ptr [ECX + 0x798ebc]
004DA062  8B 81 C8 8E 79 00         MOV EAX,dword ptr [ECX + 0x798ec8]
004DA068  2B C2                     SUB EAX,EDX
004DA06A  8B 1D B0 8E 79 00         MOV EBX,dword ptr [0x00798eb0]
004DA070  0F AF C7                  IMUL EAX,EDI
004DA073  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004DA076  99                        CDQ
004DA077  F7 FB                     IDIV EBX
004DA079  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004DA07C  03 C2                     ADD EAX,EDX
004DA07E  8B 91 C0 8E 79 00         MOV EDX,dword ptr [ECX + 0x798ec0]
004DA084  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004DA087  8B 81 CC 8E 79 00         MOV EAX,dword ptr [ECX + 0x798ecc]
004DA08D  2B C2                     SUB EAX,EDX
004DA08F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004DA092  0F AF C7                  IMUL EAX,EDI
004DA095  99                        CDQ
004DA096  F7 FB                     IDIV EBX
004DA098  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004DA09B  8B 99 B8 8E 79 00         MOV EBX,dword ptr [ECX + 0x798eb8]
004DA0A1  03 C2                     ADD EAX,EDX
004DA0A3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004DA0A6  8B 81 C4 8E 79 00         MOV EAX,dword ptr [ECX + 0x798ec4]
004DA0AC  2B C3                     SUB EAX,EBX
004DA0AE  0F AF C7                  IMUL EAX,EDI
004DA0B1  99                        CDQ
004DA0B2  F7 3D B0 8E 79 00         IDIV dword ptr [0x00798eb0]
004DA0B8  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
004DA0BC  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
004DA0C0  03 D8                     ADD EBX,EAX
004DA0C2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004DA0C5  03 CB                     ADD ECX,EBX
004DA0C7  03 C2                     ADD EAX,EDX
004DA0C9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004DA0CC  89 8E E0 04 00 00         MOV dword ptr [ESI + 0x4e0],ECX
004DA0D2  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
004DA0D6  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004DA0D9  89 86 E4 04 00 00         MOV dword ptr [ESI + 0x4e4],EAX
004DA0DF  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
004DA0E2  51                        PUSH ECX
004DA0E3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004DA0E6  89 86 E8 04 00 00         MOV dword ptr [ESI + 0x4e8],EAX
004DA0EC  DB 45 F8                  FILD dword ptr [EBP + -0x8]
004DA0EF  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004DA0F5  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004DA0FB  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
004DA101  D9 1C 24                  FSTP float ptr [ESP]
004DA104  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004DA107  51                        PUSH ECX
004DA108  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004DA10E  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004DA114  D9 1C 24                  FSTP float ptr [ESP]
004DA117  DB 86 E0 04 00 00         FILD dword ptr [ESI + 0x4e0]
004DA11D  51                        PUSH ECX
004DA11E  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004DA124  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004DA12A  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004DA130  D9 1C 24                  FSTP float ptr [ESP]
004DA133  E8 A1 A4 F2 FF            CALL 0x004045d9
004DA138  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004DA13E  8B 8E D4 04 00 00         MOV ECX,dword ptr [ESI + 0x4d4]
004DA144  3B 0C 85 A0 8E 79 00      CMP ECX,dword ptr [EAX*0x4 + 0x798ea0]
004DA14B  7C 4B                     JL 0x004da198
004DA14D  83 F8 04                  CMP EAX,0x4
004DA150  75 3D                     JNZ 0x004da18f
004DA152  6A 00                     PUSH 0x0
004DA154  8B CE                     MOV ECX,ESI
004DA156  E8 A3 9D F2 FF            CALL 0x00403efe
004DA15B  6A 00                     PUSH 0x0
004DA15D  8B CE                     MOV ECX,ESI
004DA15F  E8 93 8B F2 FF            CALL 0x00402cf7
004DA164  5F                        POP EDI
004DA165  5E                        POP ESI
004DA166  33 C0                     XOR EAX,EAX
004DA168  5B                        POP EBX
004DA169  8B E5                     MOV ESP,EBP
004DA16B  5D                        POP EBP
004DA16C  C3                        RET
LAB_004da16d:
004DA16D  6A 0C                     PUSH 0xc
004DA16F  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004DA175  E8 35 A1 F2 FF            CALL 0x004042af
004DA17A  8B 96 F5 01 00 00         MOV EDX,dword ptr [ESI + 0x1f5]
004DA180  3B 82 C4 01 00 00         CMP EAX,dword ptr [EDX + 0x1c4]
004DA186  75 10                     JNZ 0x004da198
004DA188  8B CE                     MOV ECX,ESI
004DA18A  E8 16 BA F2 FF            CALL 0x00405ba5
LAB_004da18f:
004DA18F  6A 00                     PUSH 0x0
004DA191  8B CE                     MOV ECX,ESI
004DA193  E8 5F 8B F2 FF            CALL 0x00402cf7
LAB_004da198:
004DA198  5F                        POP EDI
004DA199  5E                        POP ESI
004DA19A  33 C0                     XOR EAX,EAX
004DA19C  5B                        POP EBX
004DA19D  8B E5                     MOV ESP,EBP
004DA19F  5D                        POP EBP
004DA1A0  C3                        RET
