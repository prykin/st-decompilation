FUN_004d0670:
004D0670  53                        PUSH EBX
004D0671  56                        PUSH ESI
004D0672  8B F1                     MOV ESI,ECX
004D0674  57                        PUSH EDI
004D0675  33 FF                     XOR EDI,EDI
004D0677  33 DB                     XOR EBX,EBX
004D0679  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004D067F  83 F8 03                  CMP EAX,0x3
004D0682  74 09                     JZ 0x004d068d
004D0684  83 F8 02                  CMP EAX,0x2
004D0687  0F 85 8E 01 00 00         JNZ 0x004d081b
LAB_004d068d:
004D068D  8B 86 F5 01 00 00         MOV EAX,dword ptr [ESI + 0x1f5]
004D0693  6A 09                     PUSH 0x9
004D0695  8B 88 54 01 00 00         MOV ECX,dword ptr [EAX + 0x154]
004D069B  8B 90 58 01 00 00         MOV EDX,dword ptr [EAX + 0x158]
004D06A1  3B CA                     CMP ECX,EDX
004D06A3  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004D06A9  7D 1E                     JGE 0x004d06c9
004D06AB  E8 FF 3B F3 FF            CALL 0x004042af
004D06B0  8B 96 F5 01 00 00         MOV EDX,dword ptr [ESI + 0x1f5]
004D06B6  8B 8A 54 01 00 00         MOV ECX,dword ptr [EDX + 0x154]
004D06BC  83 C1 02                  ADD ECX,0x2
004D06BF  3B C1                     CMP EAX,ECX
004D06C1  0F 8C 54 01 00 00         JL 0x004d081b
004D06C7  EB 1C                     JMP 0x004d06e5
LAB_004d06c9:
004D06C9  E8 E1 3B F3 FF            CALL 0x004042af
004D06CE  8B 96 F5 01 00 00         MOV EDX,dword ptr [ESI + 0x1f5]
004D06D4  8B 8A 54 01 00 00         MOV ECX,dword ptr [EDX + 0x154]
004D06DA  83 E9 02                  SUB ECX,0x2
004D06DD  3B C1                     CMP EAX,ECX
004D06DF  0F 8F 36 01 00 00         JG 0x004d081b
LAB_004d06e5:
004D06E5  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
004D06EB  E8 2C 51 F3 FF            CALL 0x0040581c
004D06F0  83 F8 03                  CMP EAX,0x3
004D06F3  77 61                     JA 0x004d0756
switchD_004d06f5::switchD:
004D06F5  FF 24 85 24 08 4D 00      JMP dword ptr [EAX*0x4 + 0x4d0824]
switchD_004d06f5::caseD_0:
004D06FC  8B 96 69 03 00 00         MOV EDX,dword ptr [ESI + 0x369]
004D0702  8B 1D 38 94 7A 00         MOV EBX,dword ptr [0x007a9438]
004D0708  C1 E2 04                  SHL EDX,0x4
004D070B  8B BA B8 90 7A 00         MOV EDI,dword ptr [EDX + 0x7a90b8]
004D0711  EB 43                     JMP 0x004d0756
switchD_004d06f5::caseD_1:
004D0713  8B 86 69 03 00 00         MOV EAX,dword ptr [ESI + 0x369]
004D0719  8B 1D 3C 94 7A 00         MOV EBX,dword ptr [0x007a943c]
004D071F  C1 E0 04                  SHL EAX,0x4
004D0722  8B B8 BC 90 7A 00         MOV EDI,dword ptr [EAX + 0x7a90bc]
004D0728  EB 2C                     JMP 0x004d0756
switchD_004d06f5::caseD_2:
004D072A  8B 8E 69 03 00 00         MOV ECX,dword ptr [ESI + 0x369]
004D0730  8B 1D 40 94 7A 00         MOV EBX,dword ptr [0x007a9440]
004D0736  C1 E1 04                  SHL ECX,0x4
004D0739  8B B9 C0 90 7A 00         MOV EDI,dword ptr [ECX + 0x7a90c0]
004D073F  EB 15                     JMP 0x004d0756
switchD_004d06f5::caseD_3:
004D0741  8B 96 69 03 00 00         MOV EDX,dword ptr [ESI + 0x369]
004D0747  8B 1D 44 94 7A 00         MOV EBX,dword ptr [0x007a9444]
004D074D  C1 E2 04                  SHL EDX,0x4
004D0750  8B BA C4 90 7A 00         MOV EDI,dword ptr [EDX + 0x7a90c4]
switchD_004d06f5::default:
004D0756  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D075C  6A 00                     PUSH 0x0
004D075E  57                        PUSH EDI
004D075F  57                        PUSH EDI
004D0760  6A 0E                     PUSH 0xe
004D0762  E8 53 17 F3 FF            CALL 0x00401eba
004D0767  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D076D  6A 00                     PUSH 0x0
004D076F  57                        PUSH EDI
004D0770  57                        PUSH EDI
004D0771  6A 0C                     PUSH 0xc
004D0773  E8 42 17 F3 FF            CALL 0x00401eba
004D0778  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D077E  57                        PUSH EDI
004D077F  6A 0E                     PUSH 0xe
004D0781  E8 DE 08 F3 FF            CALL 0x00401064
004D0786  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D078C  57                        PUSH EDI
004D078D  6A 0C                     PUSH 0xc
004D078F  E8 D0 08 F3 FF            CALL 0x00401064
004D0794  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004D0799  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004D079F  51                        PUSH ECX
004D07A0  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D07A6  6A 0E                     PUSH 0xe
004D07A8  E8 93 4A F3 FF            CALL 0x00405240
004D07AD  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D07B3  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D07B9  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004D07BF  50                        PUSH EAX
004D07C0  6A 0C                     PUSH 0xc
004D07C2  E8 79 4A F3 FF            CALL 0x00405240
004D07C7  8B 86 69 03 00 00         MOV EAX,dword ptr [ESI + 0x369]
004D07CD  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004D07D0  33 C0                     XOR EAX,EAX
004D07D2  8D 3C 4D 42 94 7A 00      LEA EDI,[ECX*0x2 + 0x7a9442]
004D07D9  83 C9 FF                  OR ECX,0xffffffff
004D07DC  F2 AE                     SCASB.REPNE ES:EDI
004D07DE  F7 D1                     NOT ECX
004D07E0  49                        DEC ECX
004D07E1  74 38                     JZ 0x004d081b
004D07E3  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D07E9  50                        PUSH EAX
004D07EA  53                        PUSH EBX
004D07EB  53                        PUSH EBX
004D07EC  6A 0D                     PUSH 0xd
004D07EE  E8 C7 16 F3 FF            CALL 0x00401eba
004D07F3  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D07F9  53                        PUSH EBX
004D07FA  6A 0D                     PUSH 0xd
004D07FC  E8 63 08 F3 FF            CALL 0x00401064
004D0801  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D0807  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D080D  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004D0813  50                        PUSH EAX
004D0814  6A 0D                     PUSH 0xd
004D0816  E8 25 4A F3 FF            CALL 0x00405240
LAB_004d081b:
004D081B  5F                        POP EDI
004D081C  5E                        POP ESI
004D081D  33 C0                     XOR EAX,EAX
004D081F  5B                        POP EBX
004D0820  C3                        RET
