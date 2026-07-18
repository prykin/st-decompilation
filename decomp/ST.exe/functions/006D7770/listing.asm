FUN_006d7770:
006D7770  55                        PUSH EBP
006D7771  8B EC                     MOV EBP,ESP
006D7773  6A FF                     PUSH -0x1
006D7775  68 18 DF 79 00            PUSH 0x79df18
006D777A  68 64 D9 72 00            PUSH 0x72d964
006D777F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006D7785  50                        PUSH EAX
006D7786  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006D778D  83 EC 10                  SUB ESP,0x10
006D7790  53                        PUSH EBX
006D7791  56                        PUSH ESI
006D7792  57                        PUSH EDI
006D7793  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006D7796  33 C0                     XOR EAX,EAX
006D7798  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D779B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D779E  8B 51 20                  MOV EDX,dword ptr [ECX + 0x20]
006D77A1  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006D77A4  66 81 7A 04 12 AF         CMP word ptr [EDX + 0x4],0xaf12
006D77AA  75 4A                     JNZ 0x006d77f6
006D77AC  33 F6                     XOR ESI,ESI
006D77AE  66 8B 72 08               MOV SI,word ptr [EDX + 0x8]
006D77B2  89 71 08                  MOV dword ptr [ECX + 0x8],ESI
006D77B5  33 F6                     XOR ESI,ESI
006D77B7  66 8B 72 0A               MOV SI,word ptr [EDX + 0xa]
006D77BB  89 71 0C                  MOV dword ptr [ECX + 0xc],ESI
006D77BE  33 F6                     XOR ESI,ESI
006D77C0  66 8B 72 10               MOV SI,word ptr [EDX + 0x10]
006D77C4  89 71 10                  MOV dword ptr [ECX + 0x10],ESI
006D77C7  33 F6                     XOR ESI,ESI
006D77C9  66 8B 72 06               MOV SI,word ptr [EDX + 0x6]
006D77CD  89 71 14                  MOV dword ptr [ECX + 0x14],ESI
006D77D0  C7 41 18 FF FF FF FF      MOV dword ptr [ECX + 0x18],0xffffffff
006D77D7  8B 72 50                  MOV ESI,dword ptr [EDX + 0x50]
006D77DA  03 F2                     ADD ESI,EDX
006D77DC  89 71 28                  MOV dword ptr [ECX + 0x28],ESI
006D77DF  8B 72 54                  MOV ESI,dword ptr [EDX + 0x54]
006D77E2  03 F2                     ADD ESI,EDX
006D77E4  89 71 2C                  MOV dword ptr [ECX + 0x2c],ESI
006D77E7  8B 32                     MOV ESI,dword ptr [EDX]
006D77E9  03 F2                     ADD ESI,EDX
006D77EB  89 71 24                  MOV dword ptr [ECX + 0x24],ESI
006D77EE  8B 51 28                  MOV EDX,dword ptr [ECX + 0x28]
006D77F1  89 51 20                  MOV dword ptr [ECX + 0x20],EDX
006D77F4  EB 18                     JMP 0x006d780e
LAB_006d77f6:
006D77F6  B8 FB FF FF FF            MOV EAX,0xfffffffb
006D77FB  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006D77FE  EB 0E                     JMP 0x006d780e
LAB_006d780e:
006D780E  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006D7815  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D7818  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006D781F  5F                        POP EDI
006D7820  5E                        POP ESI
006D7821  5B                        POP EBX
006D7822  8B E5                     MOV ESP,EBP
006D7824  5D                        POP EBP
006D7825  C2 04 00                  RET 0x4
