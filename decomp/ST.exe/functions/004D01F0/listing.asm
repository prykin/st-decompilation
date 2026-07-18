FUN_004d01f0:
004D01F0  55                        PUSH EBP
004D01F1  8B EC                     MOV EBP,ESP
004D01F3  83 EC 0C                  SUB ESP,0xc
004D01F6  56                        PUSH ESI
004D01F7  8B F1                     MOV ESI,ECX
004D01F9  8B 86 FF 05 00 00         MOV EAX,dword ptr [ESI + 0x5ff]
004D01FF  85 C0                     TEST EAX,EAX
004D0201  0F 85 C2 00 00 00         JNZ 0x004d02c9
004D0207  6A 40                     PUSH 0x40
004D0209  E8 22 E3 25 00            CALL 0x0072e530
004D020E  83 C4 04                  ADD ESP,0x4
004D0211  85 C0                     TEST EAX,EAX
004D0213  74 09                     JZ 0x004d021e
004D0215  8B C8                     MOV ECX,EAX
004D0217  E8 FA 10 F3 FF            CALL 0x00401316
004D021C  EB 02                     JMP 0x004d0220
LAB_004d021e:
004D021E  33 C0                     XOR EAX,EAX
LAB_004d0220:
004D0220  6A 11                     PUSH 0x11
004D0222  68 8C 00 00 00            PUSH 0x8c
004D0227  68 B4 00 00 00            PUSH 0xb4
004D022C  89 86 FF 05 00 00         MOV dword ptr [ESI + 0x5ff],EAX
004D0232  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
004D0238  6A 00                     PUSH 0x0
004D023A  6A 45                     PUSH 0x45
004D023C  6A 5A                     PUSH 0x5a
004D023E  51                        PUSH ECX
004D023F  8B C8                     MOV ECX,EAX
004D0241  E8 35 51 F3 FF            CALL 0x0040537b
004D0246  85 C0                     TEST EAX,EAX
004D0248  74 17                     JZ 0x004d0261
004D024A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004D0250  68 8B 02 00 00            PUSH 0x28b
004D0255  68 9C F3 7B 00            PUSH 0x7bf39c
004D025A  52                        PUSH EDX
004D025B  50                        PUSH EAX
004D025C  E8 DF 5B 1D 00            CALL 0x006a5e40
LAB_004d0261:
004D0261  8D 45 FC                  LEA EAX,[EBP + -0x4]
004D0264  8D 4D F8                  LEA ECX,[EBP + -0x8]
004D0267  50                        PUSH EAX
004D0268  8D 55 F4                  LEA EDX,[EBP + -0xc]
004D026B  51                        PUSH ECX
004D026C  52                        PUSH EDX
004D026D  8B CE                     MOV ECX,ESI
004D026F  E8 21 55 F3 FF            CALL 0x00405795
004D0274  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004D0277  51                        PUSH ECX
004D0278  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004D027E  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004D0284  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
004D028A  D9 1C 24                  FSTP float ptr [ESP]
004D028D  DB 45 F8                  FILD dword ptr [EBP + -0x8]
004D0290  51                        PUSH ECX
004D0291  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004D0297  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004D029D  D9 1C 24                  FSTP float ptr [ESP]
004D02A0  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004D02A3  51                        PUSH ECX
004D02A4  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D02AA  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004D02B0  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004D02B6  D9 1C 24                  FSTP float ptr [ESP]
004D02B9  E8 1B 43 F3 FF            CALL 0x004045d9
004D02BE  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D02C4  E8 C7 27 F3 FF            CALL 0x00402a90
LAB_004d02c9:
004D02C9  33 C0                     XOR EAX,EAX
004D02CB  5E                        POP ESI
004D02CC  8B E5                     MOV ESP,EBP
004D02CE  5D                        POP EBP
004D02CF  C3                        RET
