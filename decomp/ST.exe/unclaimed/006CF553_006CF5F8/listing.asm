006CF553  8B 5E 5C                  MOV EBX,dword ptr [ESI + 0x5c]
006CF556  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006CF559  83 7E 64 01               CMP dword ptr [ESI + 0x64],0x1
006CF55D  75 10                     JNZ 0x006cf56f
006CF55F  85 DB                     TEST EBX,EBX
006CF561  75 0C                     JNZ 0x006cf56f
006CF563  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006CF566  8B 9B D4 01 00 00         MOV EBX,dword ptr [EBX + 0x1d4]
006CF56C  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006CF56F  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
006CF576  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006CF579  8B 5B 04                  MOV EBX,dword ptr [EBX + 0x4]
006CF57C  2B 5D 24                  SUB EBX,dword ptr [EBP + 0x24]
006CF57F  2B 5E 1C                  SUB EBX,dword ptr [ESI + 0x1c]
006CF582  03 DA                     ADD EBX,EDX
006CF584  03 5E 2C                  ADD EBX,dword ptr [ESI + 0x2c]
006CF587  53                        PUSH EBX
006CF588  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CF58B  8B 12                     MOV EDX,dword ptr [EDX]
006CF58D  2B 56 18                  SUB EDX,dword ptr [ESI + 0x18]
006CF590  2B 55 20                  SUB EDX,dword ptr [EBP + 0x20]
006CF593  03 56 28                  ADD EDX,dword ptr [ESI + 0x28]
006CF596  03 D0                     ADD EDX,EAX
006CF598  52                        PUSH EDX
006CF599  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
006CF59F  83 C0 07                  ADD EAX,0x7
006CF5A2  99                        CDQ
006CF5A3  83 E2 07                  AND EDX,0x7
006CF5A6  03 C2                     ADD EAX,EDX
006CF5A8  C1 F8 03                  SAR EAX,0x3
006CF5AB  50                        PUSH EAX
006CF5AC  8B 86 B8 00 00 00         MOV EAX,dword ptr [ESI + 0xb8]
006CF5B2  50                        PUSH EAX
006CF5B3  8B 96 B0 00 00 00         MOV EDX,dword ptr [ESI + 0xb0]
006CF5B9  52                        PUSH EDX
006CF5BA  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
006CF5BD  50                        PUSH EAX
006CF5BE  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
006CF5C1  50                        PUSH EAX
006CF5C2  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006CF5C5  81 E2 00 01 00 00         AND EDX,0x100
006CF5CB  F7 DA                     NEG EDX
006CF5CD  1B D2                     SBB EDX,EDX
006CF5CF  23 55 E4                  AND EDX,dword ptr [EBP + -0x1c]
006CF5D2  52                        PUSH EDX
006CF5D3  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006CF5D6  50                        PUSH EAX
006CF5D7  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006CF5DA  52                        PUSH EDX
006CF5DB  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
006CF5E1  50                        PUSH EAX
006CF5E2  51                        PUSH ECX
006CF5E3  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
006CF5E6  8B 51 06                  MOV EDX,dword ptr [ECX + 0x6]
006CF5E9  52                        PUSH EDX
006CF5EA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006CF5ED  50                        PUSH EAX
006CF5EE  57                        PUSH EDI
006CF5EF  E8 6C 94 00 00            CALL 0x006d8a60
006CF5F4  E9 82 FD FF FF            JMP 0x006cf37b
