FUN_005b95b0:
005B95B0  53                        PUSH EBX
005B95B1  56                        PUSH ESI
005B95B2  68 AA 1E 00 00            PUSH 0x1eaa
005B95B7  E8 14 6F 0F 00            CALL 0x006b04d0
005B95BC  8B F0                     MOV ESI,EAX
005B95BE  33 DB                     XOR EBX,EBX
005B95C0  3B F3                     CMP ESI,EBX
005B95C2  0F 84 13 01 00 00         JZ 0x005b96db
005B95C8  57                        PUSH EDI
005B95C9  8B CE                     MOV ECX,ESI
005B95CB  E8 E0 C9 12 00            CALL 0x006e5fb0
005B95D0  B9 08 00 00 00            MOV ECX,0x8
005B95D5  33 C0                     XOR EAX,EAX
005B95D7  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005B95DA  C7 06 18 C0 79 00         MOV dword ptr [ESI],0x79c018
005B95E0  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
005B95E3  89 5E 5D                  MOV dword ptr [ESI + 0x5d],EBX
005B95E6  F3 AB                     STOSD.REP ES:EDI
005B95E8  B9 08 00 00 00            MOV ECX,0x8
005B95ED  8D 7E 3D                  LEA EDI,[ESI + 0x3d]
005B95F0  F3 AB                     STOSD.REP ES:EDI
005B95F2  89 1D 9C 87 80 00         MOV dword ptr [0x0080879c],EBX
005B95F8  8D BE 74 01 00 00         LEA EDI,[ESI + 0x174]
005B95FE  BB 0D 00 00 00            MOV EBX,0xd
LAB_005b9603:
005B9603  8D 8F 6F FF FF FF         LEA ECX,[EDI + 0xffffff6f]
005B9609  E8 12 C2 15 00            CALL 0x00715820
005B960E  8B CF                     MOV ECX,EDI
005B9610  E8 0B C2 15 00            CALL 0x00715820
005B9615  8D 8F 91 00 00 00         LEA ECX,[EDI + 0x91]
005B961B  E8 00 C2 15 00            CALL 0x00715820
005B9620  81 C7 FB 01 00 00         ADD EDI,0x1fb
005B9626  4B                        DEC EBX
005B9627  75 DA                     JNZ 0x005b9603
005B9629  B9 0D 00 00 00            MOV ECX,0xd
005B962E  33 C0                     XOR EAX,EAX
005B9630  8D 7E 66                  LEA EDI,[ESI + 0x66]
005B9633  C7 06 08 C0 79 00         MOV dword ptr [ESI],0x79c008
005B9639  C6 46 65 02               MOV byte ptr [ESI + 0x65],0x2
005B963D  C6 86 9A 00 00 00 00      MOV byte ptr [ESI + 0x9a],0x0
005B9644  F3 AB                     STOSD.REP ES:EDI
005B9646  8D 96 BC 00 00 00         LEA EDX,[ESI + 0xbc]
005B964C  BB 0D 00 00 00            MOV EBX,0xd
LAB_005b9651:
005B9651  B9 09 00 00 00            MOV ECX,0x9
005B9656  33 C0                     XOR EAX,EAX
005B9658  8B FA                     MOV EDI,EDX
005B965A  81 C2 FB 01 00 00         ADD EDX,0x1fb
005B9660  F3 AB                     STOSD.REP ES:EDI
005B9662  66 AB                     STOSW ES:EDI
005B9664  4B                        DEC EBX
005B9665  AA                        STOSB ES:EDI
005B9666  75 E9                     JNZ 0x005b9651
005B9668  8D 8E F7 1C 00 00         LEA ECX,[ESI + 0x1cf7]
005B966E  E8 AD C1 15 00            CALL 0x00715820
005B9673  8D 8E 88 1D 00 00         LEA ECX,[ESI + 0x1d88]
005B9679  E8 A2 C1 15 00            CALL 0x00715820
005B967E  8D 8E 19 1E 00 00         LEA ECX,[ESI + 0x1e19]
005B9684  E8 97 C1 15 00            CALL 0x00715820
005B9689  B9 06 00 00 00            MOV ECX,0x6
005B968E  33 C0                     XOR EAX,EAX
005B9690  8D BE 82 1C 00 00         LEA EDI,[ESI + 0x1c82]
005B9696  C7 06 A8 C0 79 00         MOV dword ptr [ESI],0x79c0a8
005B969C  C6 86 5F 1A 00 00 00      MOV byte ptr [ESI + 0x1a5f],0x0
005B96A3  C6 86 AA 1C 00 00 00      MOV byte ptr [ESI + 0x1caa],0x0
005B96AA  C6 86 A9 1C 00 00 00      MOV byte ptr [ESI + 0x1ca9],0x0
005B96B1  C7 86 AB 1C 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1cab],0x0
005B96BB  F3 AB                     STOSD.REP ES:EDI
005B96BD  66 AB                     STOSW ES:EDI
005B96BF  8D 8E 9C 1C 00 00         LEA ECX,[ESI + 0x1c9c]
005B96C5  B8 01 01 01 01            MOV EAX,0x1010101
005B96CA  5F                        POP EDI
005B96CB  89 01                     MOV dword ptr [ECX],EAX
005B96CD  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
005B96D0  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
005B96D3  88 41 0C                  MOV byte ptr [ECX + 0xc],AL
005B96D6  8B C6                     MOV EAX,ESI
005B96D8  5E                        POP ESI
005B96D9  5B                        POP EBX
005B96DA  C3                        RET
LAB_005b96db:
005B96DB  5E                        POP ESI
005B96DC  33 C0                     XOR EAX,EAX
005B96DE  5B                        POP EBX
005B96DF  C3                        RET
