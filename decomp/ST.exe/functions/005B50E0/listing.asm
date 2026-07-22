CreateMainMenu:
005B50E0  53                        PUSH EBX
005B50E1  56                        PUSH ESI
005B50E2  68 E4 1E 00 00            PUSH 0x1ee4
005B50E7  E8 E4 B3 0F 00            CALL 0x006b04d0
005B50EC  8B F0                     MOV ESI,EAX
005B50EE  33 DB                     XOR EBX,EBX
005B50F0  3B F3                     CMP ESI,EBX
005B50F2  0F 84 EB 00 00 00         JZ 0x005b51e3
005B50F8  57                        PUSH EDI
005B50F9  8B CE                     MOV ECX,ESI
005B50FB  E8 B0 0E 13 00            CALL 0x006e5fb0
005B5100  B9 08 00 00 00            MOV ECX,0x8
005B5105  33 C0                     XOR EAX,EAX
005B5107  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005B510A  C7 06 18 C0 79 00         MOV dword ptr [ESI],0x79c018
005B5110  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
005B5113  89 5E 5D                  MOV dword ptr [ESI + 0x5d],EBX
005B5116  F3 AB                     STOSD.REP ES:EDI
005B5118  B9 08 00 00 00            MOV ECX,0x8
005B511D  8D 7E 3D                  LEA EDI,[ESI + 0x3d]
005B5120  F3 AB                     STOSD.REP ES:EDI
005B5122  89 1D 9C 87 80 00         MOV dword ptr [0x0080879c],EBX
005B5128  8D BE 74 01 00 00         LEA EDI,[ESI + 0x174]
005B512E  BB 0D 00 00 00            MOV EBX,0xd
LAB_005b5133:
005B5133  8D 8F 6F FF FF FF         LEA ECX,[EDI + 0xffffff6f]
005B5139  E8 E2 06 16 00            CALL 0x00715820
005B513E  8B CF                     MOV ECX,EDI
005B5140  E8 DB 06 16 00            CALL 0x00715820
005B5145  8D 8F 91 00 00 00         LEA ECX,[EDI + 0x91]
005B514B  E8 D0 06 16 00            CALL 0x00715820
005B5150  81 C7 FB 01 00 00         ADD EDI,0x1fb
005B5156  4B                        DEC EBX
005B5157  75 DA                     JNZ 0x005b5133
005B5159  B9 0D 00 00 00            MOV ECX,0xd
005B515E  33 C0                     XOR EAX,EAX
005B5160  8D 7E 66                  LEA EDI,[ESI + 0x66]
005B5163  C7 06 08 C0 79 00         MOV dword ptr [ESI],0x79c008
005B5169  C6 46 65 02               MOV byte ptr [ESI + 0x65],0x2
005B516D  C6 86 9A 00 00 00 00      MOV byte ptr [ESI + 0x9a],0x0
005B5174  F3 AB                     STOSD.REP ES:EDI
005B5176  8D 96 BC 00 00 00         LEA EDX,[ESI + 0xbc]
005B517C  BB 0D 00 00 00            MOV EBX,0xd
LAB_005b5181:
005B5181  B9 09 00 00 00            MOV ECX,0x9
005B5186  33 C0                     XOR EAX,EAX
005B5188  8B FA                     MOV EDI,EDX
005B518A  81 C2 FB 01 00 00         ADD EDX,0x1fb
005B5190  F3 AB                     STOSD.REP ES:EDI
005B5192  66 AB                     STOSW ES:EDI
005B5194  4B                        DEC EBX
005B5195  AA                        STOSB ES:EDI
005B5196  75 E9                     JNZ 0x005b5181
005B5198  B9 0A 00 00 00            MOV ECX,0xa
005B519D  33 C0                     XOR EAX,EAX
005B519F  8D BE 7F 1A 00 00         LEA EDI,[ESI + 0x1a7f]
005B51A5  C7 06 98 C0 79 00         MOV dword ptr [ESI],0x79c098
005B51AB  F3 AB                     STOSD.REP ES:EDI
005B51AD  B9 0A 00 00 00            MOV ECX,0xa
005B51B2  8D BE A7 1A 00 00         LEA EDI,[ESI + 0x1aa7]
005B51B8  F3 AB                     STOSD.REP ES:EDI
005B51BA  B9 08 00 00 00            MOV ECX,0x8
005B51BF  8D BE 5F 1A 00 00         LEA EDI,[ESI + 0x1a5f]
005B51C5  89 86 CF 1A 00 00         MOV dword ptr [ESI + 0x1acf],EAX
005B51CB  88 86 E3 1E 00 00         MOV byte ptr [ESI + 0x1ee3],AL
005B51D1  C7 86 DF 1E 00 00 01 00 00 00  MOV dword ptr [ESI + 0x1edf],0x1
005B51DB  F3 AB                     STOSD.REP ES:EDI
005B51DD  8B C6                     MOV EAX,ESI
005B51DF  5F                        POP EDI
005B51E0  5E                        POP ESI
005B51E1  5B                        POP EBX
005B51E2  C3                        RET
LAB_005b51e3:
005B51E3  5E                        POP ESI
005B51E4  33 C0                     XOR EAX,EAX
005B51E6  5B                        POP EBX
005B51E7  C3                        RET
