CreateMReport:
005C2620  53                        PUSH EBX
005C2621  56                        PUSH ESI
005C2622  68 5B 04 00 00            PUSH 0x45b
005C2627  E8 A4 DE 0E 00            CALL 0x006b04d0
005C262C  8B F0                     MOV ESI,EAX
005C262E  33 DB                     XOR EBX,EBX
005C2630  3B F3                     CMP ESI,EBX
005C2632  0F 84 DF 00 00 00         JZ 0x005c2717
005C2638  57                        PUSH EDI
005C2639  8B CE                     MOV ECX,ESI
005C263B  E8 70 39 12 00            CALL 0x006e5fb0
005C2640  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005C2643  B9 08 00 00 00            MOV ECX,0x8
005C2648  33 C0                     XOR EAX,EAX
005C264A  8B FA                     MOV EDI,EDX
005C264C  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
005C264F  89 5E 5D                  MOV dword ptr [ESI + 0x5d],EBX
005C2652  F3 AB                     STOSD.REP ES:EDI
005C2654  8D 7E 3D                  LEA EDI,[ESI + 0x3d]
005C2657  B9 08 00 00 00            MOV ECX,0x8
005C265C  F3 AB                     STOSD.REP ES:EDI
005C265E  89 1D 9C 87 80 00         MOV dword ptr [0x0080879c],EBX
005C2664  B9 08 00 00 00            MOV ECX,0x8
005C2669  8B FA                     MOV EDI,EDX
005C266B  C7 06 E4 C0 79 00         MOV dword ptr [ESI],0x79c0e4
005C2671  F3 AB                     STOSD.REP ES:EDI
005C2673  B9 08 00 00 00            MOV ECX,0x8
005C2678  8D 7E 3D                  LEA EDI,[ESI + 0x3d]
005C267B  F3 AB                     STOSD.REP ES:EDI
005C267D  B0 01                     MOV AL,0x1
005C267F  8D 96 8F 00 00 00         LEA EDX,[ESI + 0x8f]
005C2685  33 C9                     XOR ECX,ECX
005C2687  C6 46 65 02               MOV byte ptr [ESI + 0x65],0x2
005C268B  88 46 66                  MOV byte ptr [ESI + 0x66],AL
005C268E  89 5E 73                  MOV dword ptr [ESI + 0x73],EBX
005C2691  89 5E 7B                  MOV dword ptr [ESI + 0x7b],EBX
005C2694  89 5E 77                  MOV dword ptr [ESI + 0x77],EBX
005C2697  89 5E 6F                  MOV dword ptr [ESI + 0x6f],EBX
005C269A  89 9E 8B 00 00 00         MOV dword ptr [ESI + 0x8b],EBX
005C26A0  89 9E 87 00 00 00         MOV dword ptr [ESI + 0x87],EBX
005C26A6  89 9E 83 00 00 00         MOV dword ptr [ESI + 0x83],EBX
005C26AC  89 5E 7F                  MOV dword ptr [ESI + 0x7f],EBX
005C26AF  89 0A                     MOV dword ptr [EDX],ECX
005C26B1  8D BE A7 02 00 00         LEA EDI,[ESI + 0x2a7]
005C26B7  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
005C26BA  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
005C26BD  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
005C26C0  88 46 68                  MOV byte ptr [ESI + 0x68],AL
005C26C3  B9 08 00 00 00            MOV ECX,0x8
005C26C8  33 C0                     XOR EAX,EAX
005C26CA  89 9E 9F 00 00 00         MOV dword ptr [ESI + 0x9f],EBX
005C26D0  88 5E 67                  MOV byte ptr [ESI + 0x67],BL
005C26D3  88 5E 69                  MOV byte ptr [ESI + 0x69],BL
005C26D6  F3 AB                     STOSD.REP ES:EDI
005C26D8  8D 8E 47 03 00 00         LEA ECX,[ESI + 0x347]
005C26DE  89 9E A3 02 00 00         MOV dword ptr [ESI + 0x2a3],EBX
005C26E4  88 5E 6A                  MOV byte ptr [ESI + 0x6a],BL
005C26E7  89 5E 6B                  MOV dword ptr [ESI + 0x6b],EBX
005C26EA  89 01                     MOV dword ptr [ECX],EAX
005C26EC  8D BE 53 03 00 00         LEA EDI,[ESI + 0x353]
005C26F2  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
005C26F5  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
005C26F8  B9 3F 00 00 00            MOV ECX,0x3f
005C26FD  F3 AB                     STOSD.REP ES:EDI
005C26FF  89 9E 4F 04 00 00         MOV dword ptr [ESI + 0x44f],EBX
005C2705  89 9E 57 04 00 00         MOV dword ptr [ESI + 0x457],EBX
005C270B  89 9E 53 04 00 00         MOV dword ptr [ESI + 0x453],EBX
005C2711  8B C6                     MOV EAX,ESI
005C2713  5F                        POP EDI
005C2714  5E                        POP ESI
005C2715  5B                        POP EBX
005C2716  C3                        RET
LAB_005c2717:
005C2717  5E                        POP ESI
005C2718  33 C0                     XOR EAX,EAX
005C271A  5B                        POP EBX
005C271B  C3                        RET
