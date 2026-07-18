FUN_005bd2e0:
005BD2E0  55                        PUSH EBP
005BD2E1  8B EC                     MOV EBP,ESP
005BD2E3  51                        PUSH ECX
005BD2E4  53                        PUSH EBX
005BD2E5  56                        PUSH ESI
005BD2E6  68 9E 1C 00 00            PUSH 0x1c9e
005BD2EB  E8 E0 31 0F 00            CALL 0x006b04d0
005BD2F0  8B F0                     MOV ESI,EAX
005BD2F2  33 DB                     XOR EBX,EBX
005BD2F4  3B F3                     CMP ESI,EBX
005BD2F6  0F 84 47 01 00 00         JZ 0x005bd443
005BD2FC  57                        PUSH EDI
005BD2FD  8B CE                     MOV ECX,ESI
005BD2FF  E8 AC 8C 12 00            CALL 0x006e5fb0
005BD304  B9 08 00 00 00            MOV ECX,0x8
005BD309  33 C0                     XOR EAX,EAX
005BD30B  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005BD30E  C7 06 18 C0 79 00         MOV dword ptr [ESI],0x79c018
005BD314  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
005BD317  89 5E 5D                  MOV dword ptr [ESI + 0x5d],EBX
005BD31A  F3 AB                     STOSD.REP ES:EDI
005BD31C  B9 08 00 00 00            MOV ECX,0x8
005BD321  8D 7E 3D                  LEA EDI,[ESI + 0x3d]
005BD324  F3 AB                     STOSD.REP ES:EDI
005BD326  89 1D 9C 87 80 00         MOV dword ptr [0x0080879c],EBX
005BD32C  8D BE 74 01 00 00         LEA EDI,[ESI + 0x174]
005BD332  C7 45 FC 0D 00 00 00      MOV dword ptr [EBP + -0x4],0xd
LAB_005bd339:
005BD339  8D 8F 6F FF FF FF         LEA ECX,[EDI + 0xffffff6f]
005BD33F  E8 DC 84 15 00            CALL 0x00715820
005BD344  8B CF                     MOV ECX,EDI
005BD346  E8 D5 84 15 00            CALL 0x00715820
005BD34B  8D 8F 91 00 00 00         LEA ECX,[EDI + 0x91]
005BD351  E8 CA 84 15 00            CALL 0x00715820
005BD356  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BD359  81 C7 FB 01 00 00         ADD EDI,0x1fb
005BD35F  48                        DEC EAX
005BD360  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005BD363  75 D4                     JNZ 0x005bd339
005BD365  B9 0D 00 00 00            MOV ECX,0xd
005BD36A  33 C0                     XOR EAX,EAX
005BD36C  8D 7E 66                  LEA EDI,[ESI + 0x66]
005BD36F  C7 06 08 C0 79 00         MOV dword ptr [ESI],0x79c008
005BD375  C6 46 65 02               MOV byte ptr [ESI + 0x65],0x2
005BD379  88 9E 9A 00 00 00         MOV byte ptr [ESI + 0x9a],BL
005BD37F  F3 AB                     STOSD.REP ES:EDI
005BD381  8D 96 BC 00 00 00         LEA EDX,[ESI + 0xbc]
005BD387  C7 45 FC 0D 00 00 00      MOV dword ptr [EBP + -0x4],0xd
LAB_005bd38e:
005BD38E  B9 09 00 00 00            MOV ECX,0x9
005BD393  33 C0                     XOR EAX,EAX
005BD395  8B FA                     MOV EDI,EDX
005BD397  81 C2 FB 01 00 00         ADD EDX,0x1fb
005BD39D  F3 AB                     STOSD.REP ES:EDI
005BD39F  66 AB                     STOSW ES:EDI
005BD3A1  AA                        STOSB ES:EDI
005BD3A2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BD3A5  48                        DEC EAX
005BD3A6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005BD3A9  75 E3                     JNZ 0x005bd38e
005BD3AB  8D 8E 77 1A 00 00         LEA ECX,[ESI + 0x1a77]
005BD3B1  E8 6A 84 15 00            CALL 0x00715820
005BD3B6  8D 8E 08 1B 00 00         LEA ECX,[ESI + 0x1b08]
005BD3BC  E8 5F 84 15 00            CALL 0x00715820
005BD3C1  8D 8E 99 1B 00 00         LEA ECX,[ESI + 0x1b99]
005BD3C7  E8 54 84 15 00            CALL 0x00715820
005BD3CC  8D BE 2A 1C 00 00         LEA EDI,[ESI + 0x1c2a]
005BD3D2  B9 16 00 00 00            MOV ECX,0x16
005BD3D7  83 C8 FF                  OR EAX,0xffffffff
005BD3DA  C7 06 C4 C0 79 00         MOV dword ptr [ESI],0x79c0c4
005BD3E0  C7 86 65 1A 00 00 01 00 00 00  MOV dword ptr [ESI + 0x1a65],0x1
005BD3EA  89 9E 73 1A 00 00         MOV dword ptr [ESI + 0x1a73],EBX
005BD3F0  89 9E 61 1A 00 00         MOV dword ptr [ESI + 0x1a61],EBX
005BD3F6  88 9E 71 1A 00 00         MOV byte ptr [ESI + 0x1a71],BL
005BD3FC  89 9E 69 1A 00 00         MOV dword ptr [ESI + 0x1a69],EBX
005BD402  89 9E 6D 1A 00 00         MOV dword ptr [ESI + 0x1a6d],EBX
005BD408  88 9E 72 1A 00 00         MOV byte ptr [ESI + 0x1a72],BL
005BD40E  F3 AB                     STOSD.REP ES:EDI
005BD410  89 86 8A 1C 00 00         MOV dword ptr [ESI + 0x1c8a],EAX
005BD416  89 9E 82 1C 00 00         MOV dword ptr [ESI + 0x1c82],EBX
005BD41C  89 9E 86 1C 00 00         MOV dword ptr [ESI + 0x1c86],EBX
005BD422  89 9E 8E 1C 00 00         MOV dword ptr [ESI + 0x1c8e],EBX
005BD428  89 9E 92 1C 00 00         MOV dword ptr [ESI + 0x1c92],EBX
005BD42E  89 9E 9A 1C 00 00         MOV dword ptr [ESI + 0x1c9a],EBX
005BD434  89 9E 96 1C 00 00         MOV dword ptr [ESI + 0x1c96],EBX
005BD43A  8B C6                     MOV EAX,ESI
005BD43C  5F                        POP EDI
005BD43D  5E                        POP ESI
005BD43E  5B                        POP EBX
005BD43F  8B E5                     MOV ESP,EBP
005BD441  5D                        POP EBP
005BD442  C3                        RET
LAB_005bd443:
005BD443  5E                        POP ESI
005BD444  33 C0                     XOR EAX,EAX
005BD446  5B                        POP EBX
005BD447  8B E5                     MOV ESP,EBP
005BD449  5D                        POP EBP
005BD44A  C3                        RET
