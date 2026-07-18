FUN_006cfeb0:
006CFEB0  55                        PUSH EBP
006CFEB1  8B EC                     MOV EBP,ESP
006CFEB3  53                        PUSH EBX
006CFEB4  56                        PUSH ESI
006CFEB5  57                        PUSH EDI
006CFEB6  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006CFEB9  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006CFEBC  8B 1E                     MOV EBX,dword ptr [ESI]
006CFEBE  8B 07                     MOV EAX,dword ptr [EDI]
006CFEC0  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006CFEC3  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
006CFEC6  03 D3                     ADD EDX,EBX
006CFEC8  3B D8                     CMP EBX,EAX
006CFECA  7F 01                     JG 0x006cfecd
006CFECC  93                        XCHG EAX,EBX
LAB_006cfecd:
006CFECD  3B D1                     CMP EDX,ECX
006CFECF  7C 02                     JL 0x006cfed3
006CFED1  87 D1                     XCHG ECX,EDX
LAB_006cfed3:
006CFED3  2B D3                     SUB EDX,EBX
006CFED5  7E 32                     JLE 0x006cff09
006CFED7  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006CFEDA  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006CFEDD  8B 77 04                  MOV ESI,dword ptr [EDI + 0x4]
006CFEE0  8B 7F 0C                  MOV EDI,dword ptr [EDI + 0xc]
006CFEE3  03 C8                     ADD ECX,EAX
006CFEE5  3B C6                     CMP EAX,ESI
006CFEE7  7F 01                     JG 0x006cfeea
006CFEE9  96                        XCHG EAX,ESI
LAB_006cfeea:
006CFEEA  3B CF                     CMP ECX,EDI
006CFEEC  7C 02                     JL 0x006cfef0
006CFEEE  87 CF                     XCHG EDI,ECX
LAB_006cfef0:
006CFEF0  2B C8                     SUB ECX,EAX
006CFEF2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006CFEF5  7E 12                     JLE 0x006cff09
006CFEF7  89 1E                     MOV dword ptr [ESI],EBX
006CFEF9  89 56 08                  MOV dword ptr [ESI + 0x8],EDX
006CFEFC  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006CFEFF  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
006CFF02  B8 01 00 00 00            MOV EAX,0x1
006CFF07  EB 02                     JMP 0x006cff0b
LAB_006cff09:
006CFF09  33 C0                     XOR EAX,EAX
LAB_006cff0b:
006CFF0B  5F                        POP EDI
006CFF0C  5E                        POP ESI
006CFF0D  5B                        POP EBX
006CFF0E  5D                        POP EBP
006CFF0F  C3                        RET
