FUN_0062dfd0:
0062DFD0  55                        PUSH EBP
0062DFD1  8B EC                     MOV EBP,ESP
0062DFD3  83 EC 0C                  SUB ESP,0xc
0062DFD6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062DFD9  53                        PUSH EBX
0062DFDA  8B D9                     MOV EBX,ECX
0062DFDC  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
0062DFE3  8B 4C 83 70               MOV ECX,dword ptr [EBX + EAX*0x4 + 0x70]
0062DFE7  85 C9                     TEST ECX,ECX
0062DFE9  75 0A                     JNZ 0x0062dff5
0062DFEB  83 C8 FF                  OR EAX,0xffffffff
0062DFEE  5B                        POP EBX
0062DFEF  8B E5                     MOV ESP,EBP
0062DFF1  5D                        POP EBP
0062DFF2  C2 0C 00                  RET 0xc
LAB_0062dff5:
0062DFF5  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0062DFF8  56                        PUSH ESI
0062DFF9  33 F6                     XOR ESI,ESI
0062DFFB  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0062DFFE  85 D2                     TEST EDX,EDX
0062E000  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0062E003  0F 8E 8F 00 00 00         JLE 0x0062e098
0062E009  57                        PUSH EDI
LAB_0062e00a:
0062E00A  8B 4C 83 70               MOV ECX,dword ptr [EBX + EAX*0x4 + 0x70]
0062E00E  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
0062E011  73 78                     JNC 0x0062e08b
0062E013  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
0062E016  0F AF FE                  IMUL EDI,ESI
0062E019  03 79 1C                  ADD EDI,dword ptr [ECX + 0x1c]
0062E01C  85 FF                     TEST EDI,EDI
0062E01E  74 6B                     JZ 0x0062e08b
0062E020  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062E023  39 0F                     CMP dword ptr [EDI],ECX
0062E025  75 64                     JNZ 0x0062e08b
0062E027  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
0062E02A  85 C9                     TEST ECX,ECX
0062E02C  7C 5D                     JL 0x0062e08b
0062E02E  8B 44 83 50               MOV EAX,dword ptr [EBX + EAX*0x4 + 0x50]
0062E032  85 C0                     TEST EAX,EAX
0062E034  74 3E                     JZ 0x0062e074
0062E036  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
0062E039  73 39                     JNC 0x0062e074
0062E03B  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0062E03E  0F AF F1                  IMUL ESI,ECX
0062E041  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
0062E044  85 F6                     TEST ESI,ESI
0062E046  74 29                     JZ 0x0062e071
0062E048  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
0062E04B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062E04E  52                        PUSH EDX
0062E04F  50                        PUSH EAX
0062E050  8B CB                     MOV ECX,EBX
0062E052  E8 C7 75 DD FF            CALL 0x0040561e
0062E057  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0062E05A  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
0062E05D  89 0A                     MOV dword ptr [EDX],ECX
0062E05F  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0062E062  C7 44 86 10 00 00 00 00   MOV dword ptr [ESI + EAX*0x4 + 0x10],0x0
0062E06A  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0062E06D  48                        DEC EAX
0062E06E  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
LAB_0062e071:
0062E071  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_0062e074:
0062E074  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062E077  56                        PUSH ESI
0062E078  8B 54 8B 70               MOV EDX,dword ptr [EBX + ECX*0x4 + 0x70]
0062E07C  52                        PUSH EDX
0062E07D  E8 EE 2B 08 00            CALL 0x006b0c70
0062E082  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0062E085  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062E088  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_0062e08b:
0062E08B  46                        INC ESI
0062E08C  3B F2                     CMP ESI,EDX
0062E08E  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0062E091  0F 8C 73 FF FF FF         JL 0x0062e00a
0062E097  5F                        POP EDI
LAB_0062e098:
0062E098  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0062E09B  5E                        POP ESI
0062E09C  5B                        POP EBX
0062E09D  8B E5                     MOV ESP,EBP
0062E09F  5D                        POP EBP
0062E0A0  C2 0C 00                  RET 0xc
