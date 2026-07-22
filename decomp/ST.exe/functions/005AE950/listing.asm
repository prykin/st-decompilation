ChooseMapTy::sub_005AE950:
005AE950  53                        PUSH EBX
005AE951  56                        PUSH ESI
005AE952  8B F1                     MOV ESI,ECX
005AE954  57                        PUSH EDI
005AE955  33 DB                     XOR EBX,EBX
005AE957  BF 20 00 00 00            MOV EDI,0x20
005AE95C  8B 86 83 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c83]
005AE962  89 9E 60 1A 00 00         MOV dword ptr [ESI + 0x1a60],EBX
005AE968  3B C3                     CMP EAX,EBX
005AE96A  C7 46 29 02 00 00 00      MOV dword ptr [ESI + 0x29],0x2
005AE971  89 7E 2D                  MOV dword ptr [ESI + 0x2d],EDI
005AE974  74 12                     JZ 0x005ae988
005AE976  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005AE979  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005AE97C  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
005AE97F  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005AE982  8B 01                     MOV EAX,dword ptr [ECX]
005AE984  52                        PUSH EDX
005AE985  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_005ae988:
005AE988  8B 86 6C 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a6c]
005AE98E  3B C3                     CMP EAX,EBX
005AE990  74 12                     JZ 0x005ae9a4
005AE992  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005AE995  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005AE998  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
005AE99B  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005AE99E  8B 01                     MOV EAX,dword ptr [ECX]
005AE9A0  52                        PUSH EDX
005AE9A1  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_005ae9a4:
005AE9A4  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AE9A9  8B 80 89 03 00 00         MOV EAX,dword ptr [EAX + 0x389]
005AE9AF  3B C3                     CMP EAX,EBX
005AE9B1  74 15                     JZ 0x005ae9c8
005AE9B3  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005AE9B6  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005AE9B9  89 7E 2D                  MOV dword ptr [ESI + 0x2d],EDI
005AE9BC  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
005AE9BF  8B 11                     MOV EDX,dword ptr [ECX]
005AE9C1  8D 46 1D                  LEA EAX,[ESI + 0x1d]
005AE9C4  50                        PUSH EAX
005AE9C5  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_005ae9c8:
005AE9C8  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AE9CE  39 99 4C 05 00 00         CMP dword ptr [ECX + 0x54c],EBX
005AE9D4  74 4A                     JZ 0x005aea20
005AE9D6  89 7E 2D                  MOV dword ptr [ESI + 0x2d],EDI
005AE9D9  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
005AE9DC  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005AE9E2  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005AE9E5  57                        PUSH EDI
005AE9E6  8B CE                     MOV ECX,ESI
005AE9E8  8B 82 4C 05 00 00         MOV EAX,dword ptr [EDX + 0x54c]
005AE9EE  50                        PUSH EAX
005AE9EF  6A 02                     PUSH 0x2
005AE9F1  E8 8A 76 13 00            CALL 0x006e6080
005AE9F6  C7 46 2D 29 00 00 00      MOV dword ptr [ESI + 0x2d],0x29
005AE9FD  C7 46 31 19 00 00 00      MOV dword ptr [ESI + 0x31],0x19
005AEA04  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AEA0A  57                        PUSH EDI
005AEA0B  8B 91 4C 05 00 00         MOV EDX,dword ptr [ECX + 0x54c]
005AEA11  8B CE                     MOV ECX,ESI
005AEA13  52                        PUSH EDX
005AEA14  6A 02                     PUSH 0x2
005AEA16  E8 65 76 13 00            CALL 0x006e6080
005AEA1B  BF 20 00 00 00            MOV EDI,0x20
LAB_005aea20:
005AEA20  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AEA25  39 98 50 05 00 00         CMP dword ptr [EAX + 0x550],EBX
005AEA2B  74 20                     JZ 0x005aea4d
005AEA2D  89 7E 2D                  MOV dword ptr [ESI + 0x2d],EDI
005AEA30  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
005AEA33  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005AEA39  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
005AEA3C  51                        PUSH ECX
005AEA3D  8B CE                     MOV ECX,ESI
005AEA3F  8B 82 50 05 00 00         MOV EAX,dword ptr [EDX + 0x550]
005AEA45  50                        PUSH EAX
005AEA46  6A 02                     PUSH 0x2
005AEA48  E8 33 76 13 00            CALL 0x006e6080
LAB_005aea4d:
005AEA4D  5F                        POP EDI
005AEA4E  5E                        POP ESI
005AEA4F  5B                        POP EBX
005AEA50  C3                        RET
