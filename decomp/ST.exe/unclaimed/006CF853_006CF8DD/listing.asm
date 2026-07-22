006CF853  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
006CF856  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006CF859  83 7E 64 01               CMP dword ptr [ESI + 0x64],0x1
006CF85D  75 0D                     JNZ 0x006cf86c
006CF85F  85 C0                     TEST EAX,EAX
006CF861  75 09                     JNZ 0x006cf86c
006CF863  8B 82 D4 01 00 00         MOV EAX,dword ptr [EDX + 0x1d4]
006CF869  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006CF86C  C7 45 FC 05 00 00 00      MOV dword ptr [EBP + -0x4],0x5
006CF873  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
006CF876  2B 56 1C                  SUB EDX,dword ptr [ESI + 0x1c]
006CF879  03 D7                     ADD EDX,EDI
006CF87B  52                        PUSH EDX
006CF87C  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006CF87F  2B 46 18                  SUB EAX,dword ptr [ESI + 0x18]
006CF882  03 C1                     ADD EAX,ECX
006CF884  50                        PUSH EAX
006CF885  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
006CF88B  83 C0 07                  ADD EAX,0x7
006CF88E  99                        CDQ
006CF88F  83 E2 07                  AND EDX,0x7
006CF892  03 C2                     ADD EAX,EDX
006CF894  C1 F8 03                  SAR EAX,0x3
006CF897  50                        PUSH EAX
006CF898  8B 96 B8 00 00 00         MOV EDX,dword ptr [ESI + 0xb8]
006CF89E  52                        PUSH EDX
006CF89F  8B 86 B0 00 00 00         MOV EAX,dword ptr [ESI + 0xb0]
006CF8A5  50                        PUSH EAX
006CF8A6  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
006CF8A9  50                        PUSH EAX
006CF8AA  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
006CF8AD  52                        PUSH EDX
006CF8AE  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006CF8B1  25 00 01 00 00            AND EAX,0x100
006CF8B6  F7 D8                     NEG EAX
006CF8B8  1B C0                     SBB EAX,EAX
006CF8BA  23 45 E4                  AND EAX,dword ptr [EBP + -0x1c]
006CF8BD  50                        PUSH EAX
006CF8BE  8B 95 40 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff40]
006CF8C4  52                        PUSH EDX
006CF8C5  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
006CF8CB  50                        PUSH EAX
006CF8CC  57                        PUSH EDI
006CF8CD  51                        PUSH ECX
006CF8CE  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CF8D1  51                        PUSH ECX
006CF8D2  53                        PUSH EBX
006CF8D3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CF8D6  52                        PUSH EDX
006CF8D7  E8 84 91 00 00            CALL 0x006d8a60
006CF8DC  EB 10                     JMP 0x006cf8ee
