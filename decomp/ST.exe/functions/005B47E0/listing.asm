MainMenuTy::sub_005B47E0:
005B47E0  55                        PUSH EBP
005B47E1  8B EC                     MOV EBP,ESP
005B47E3  51                        PUSH ECX
005B47E4  56                        PUSH ESI
005B47E5  8B F1                     MOV ESI,ECX
005B47E7  57                        PUSH EDI
005B47E8  C7 45 FC 0D 00 00 00      MOV dword ptr [EBP + -0x4],0xd
005B47EF  C7 86 DF 1E 00 00 01 00 00 00  MOV dword ptr [ESI + 0x1edf],0x1
005B47F9  8D 7E 66                  LEA EDI,[ESI + 0x66]
LAB_005b47fc:
005B47FC  8B 07                     MOV EAX,dword ptr [EDI]
005B47FE  85 C0                     TEST EAX,EAX
005B4800  74 24                     JZ 0x005b4826
005B4802  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005B4805  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005B4808  C7 46 29 02 00 00 00      MOV dword ptr [ESI + 0x29],0x2
005B480F  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005B4816  C7 46 31 01 00 00 00      MOV dword ptr [ESI + 0x31],0x1
005B481D  8B 01                     MOV EAX,dword ptr [ECX]
005B481F  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005B4822  52                        PUSH EDX
005B4823  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_005b4826:
005B4826  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B4829  83 C7 04                  ADD EDI,0x4
005B482C  48                        DEC EAX
005B482D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005B4830  75 CA                     JNZ 0x005b47fc
005B4832  5F                        POP EDI
005B4833  5E                        POP ESI
005B4834  8B E5                     MOV ESP,EBP
005B4836  5D                        POP EBP
005B4837  C3                        RET
