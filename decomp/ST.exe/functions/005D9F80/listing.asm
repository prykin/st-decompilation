FUN_005d9f80:
005D9F80  53                        PUSH EBX
005D9F81  56                        PUSH ESI
005D9F82  68 D8 1D 00 00            PUSH 0x1dd8
005D9F87  E8 44 65 0D 00            CALL 0x006b04d0
005D9F8C  8B F0                     MOV ESI,EAX
005D9F8E  33 DB                     XOR EBX,EBX
005D9F90  3B F3                     CMP ESI,EBX
005D9F92  0F 84 26 01 00 00         JZ 0x005da0be
005D9F98  57                        PUSH EDI
005D9F99  8B CE                     MOV ECX,ESI
005D9F9B  E8 10 C0 10 00            CALL 0x006e5fb0
005D9FA0  B9 08 00 00 00            MOV ECX,0x8
005D9FA5  33 C0                     XOR EAX,EAX
005D9FA7  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005D9FAA  C7 06 18 C0 79 00         MOV dword ptr [ESI],0x79c018
005D9FB0  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
005D9FB3  89 5E 5D                  MOV dword ptr [ESI + 0x5d],EBX
005D9FB6  F3 AB                     STOSD.REP ES:EDI
005D9FB8  B9 08 00 00 00            MOV ECX,0x8
005D9FBD  8D 7E 3D                  LEA EDI,[ESI + 0x3d]
005D9FC0  F3 AB                     STOSD.REP ES:EDI
005D9FC2  89 1D 9C 87 80 00         MOV dword ptr [0x0080879c],EBX
005D9FC8  8D BE 74 01 00 00         LEA EDI,[ESI + 0x174]
005D9FCE  BB 0D 00 00 00            MOV EBX,0xd
LAB_005d9fd3:
005D9FD3  8D 8F 6F FF FF FF         LEA ECX,[EDI + 0xffffff6f]
005D9FD9  E8 42 B8 13 00            CALL 0x00715820
005D9FDE  8B CF                     MOV ECX,EDI
005D9FE0  E8 3B B8 13 00            CALL 0x00715820
005D9FE5  8D 8F 91 00 00 00         LEA ECX,[EDI + 0x91]
005D9FEB  E8 30 B8 13 00            CALL 0x00715820
005D9FF0  81 C7 FB 01 00 00         ADD EDI,0x1fb
005D9FF6  4B                        DEC EBX
005D9FF7  75 DA                     JNZ 0x005d9fd3
005D9FF9  B9 0D 00 00 00            MOV ECX,0xd
005D9FFE  33 C0                     XOR EAX,EAX
005DA000  8D 7E 66                  LEA EDI,[ESI + 0x66]
005DA003  C7 06 08 C0 79 00         MOV dword ptr [ESI],0x79c008
005DA009  C6 46 65 02               MOV byte ptr [ESI + 0x65],0x2
005DA00D  C6 86 9A 00 00 00 00      MOV byte ptr [ESI + 0x9a],0x0
005DA014  F3 AB                     STOSD.REP ES:EDI
005DA016  8D 96 BC 00 00 00         LEA EDX,[ESI + 0xbc]
005DA01C  BB 0D 00 00 00            MOV EBX,0xd
LAB_005da021:
005DA021  B9 09 00 00 00            MOV ECX,0x9
005DA026  33 C0                     XOR EAX,EAX
005DA028  8B FA                     MOV EDI,EDX
005DA02A  81 C2 FB 01 00 00         ADD EDX,0x1fb
005DA030  F3 AB                     STOSD.REP ES:EDI
005DA032  66 AB                     STOSW ES:EDI
005DA034  4B                        DEC EBX
005DA035  AA                        STOSB ES:EDI
005DA036  75 E9                     JNZ 0x005da021
005DA038  8D 8E 60 1A 00 00         LEA ECX,[ESI + 0x1a60]
005DA03E  E8 DD B7 13 00            CALL 0x00715820
005DA043  8D 8E 01 1B 00 00         LEA ECX,[ESI + 0x1b01]
005DA049  E8 D2 B7 13 00            CALL 0x00715820
005DA04E  8D 8E 92 1B 00 00         LEA ECX,[ESI + 0x1b92]
005DA054  E8 C7 B7 13 00            CALL 0x00715820
005DA059  8D 8E 23 1C 00 00         LEA ECX,[ESI + 0x1c23]
005DA05F  E8 BC B7 13 00            CALL 0x00715820
005DA064  8D 8E F1 1A 00 00         LEA ECX,[ESI + 0x1af1]
005DA06A  33 C0                     XOR EAX,EAX
005DA06C  C7 06 AC C1 79 00         MOV dword ptr [ESI],0x79c1ac
005DA072  C6 86 5F 1A 00 00 00      MOV byte ptr [ESI + 0x1a5f],0x0
005DA079  89 01                     MOV dword ptr [ECX],EAX
005DA07B  5F                        POP EDI
005DA07C  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
005DA07F  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
005DA082  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
005DA085  89 86 B8 1C 00 00         MOV dword ptr [ESI + 0x1cb8],EAX
005DA08B  89 86 C4 1C 00 00         MOV dword ptr [ESI + 0x1cc4],EAX
005DA091  89 86 CC 1C 00 00         MOV dword ptr [ESI + 0x1ccc],EAX
005DA097  89 86 D0 1C 00 00         MOV dword ptr [ESI + 0x1cd0],EAX
005DA09D  89 86 C8 1C 00 00         MOV dword ptr [ESI + 0x1cc8],EAX
005DA0A3  89 86 C0 1C 00 00         MOV dword ptr [ESI + 0x1cc0],EAX
005DA0A9  89 86 BC 1C 00 00         MOV dword ptr [ESI + 0x1cbc],EAX
005DA0AF  C7 86 B4 1C 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x1cb4],0xffffffff
005DA0B9  8B C6                     MOV EAX,ESI
005DA0BB  5E                        POP ESI
005DA0BC  5B                        POP EBX
005DA0BD  C3                        RET
LAB_005da0be:
005DA0BE  5E                        POP ESI
005DA0BF  33 C0                     XOR EAX,EAX
005DA0C1  5B                        POP EBX
005DA0C2  C3                        RET
