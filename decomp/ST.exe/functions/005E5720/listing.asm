CreateMTask:
005E5720  53                        PUSH EBX
005E5721  56                        PUSH ESI
005E5722  68 D7 06 00 00            PUSH 0x6d7
005E5727  E8 A4 AD 0C 00            CALL 0x006b04d0
005E572C  8B F0                     MOV ESI,EAX
005E572E  33 DB                     XOR EBX,EBX
005E5730  3B F3                     CMP ESI,EBX
005E5732  0F 84 29 01 00 00         JZ 0x005e5861
005E5738  57                        PUSH EDI
005E5739  8B CE                     MOV ECX,ESI
005E573B  E8 70 08 10 00            CALL 0x006e5fb0
005E5740  B9 08 00 00 00            MOV ECX,0x8
005E5745  33 C0                     XOR EAX,EAX
005E5747  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005E574A  C7 06 18 C0 79 00         MOV dword ptr [ESI],0x79c018
005E5750  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
005E5753  89 5E 5D                  MOV dword ptr [ESI + 0x5d],EBX
005E5756  F3 AB                     STOSD.REP ES:EDI
005E5758  B9 08 00 00 00            MOV ECX,0x8
005E575D  8D 7E 3D                  LEA EDI,[ESI + 0x3d]
005E5760  F3 AB                     STOSD.REP ES:EDI
005E5762  8D 8E D1 02 00 00         LEA ECX,[ESI + 0x2d1]
005E5768  89 1D 9C 87 80 00         MOV dword ptr [0x0080879c],EBX
005E576E  E8 AD 00 13 00            CALL 0x00715820
005E5773  8D 8E 62 03 00 00         LEA ECX,[ESI + 0x362]
005E5779  E8 A2 00 13 00            CALL 0x00715820
005E577E  8D 8E F3 03 00 00         LEA ECX,[ESI + 0x3f3]
005E5784  E8 97 00 13 00            CALL 0x00715820
005E5789  8D 8E 8C 04 00 00         LEA ECX,[ESI + 0x48c]
005E578F  E8 8C 00 13 00            CALL 0x00715820
005E5794  8D 8E 1D 05 00 00         LEA ECX,[ESI + 0x51d]
005E579A  E8 81 00 13 00            CALL 0x00715820
005E579F  8D 8E AE 05 00 00         LEA ECX,[ESI + 0x5ae]
005E57A5  E8 76 00 13 00            CALL 0x00715820
005E57AA  8D 8E 91 02 00 00         LEA ECX,[ESI + 0x291]
005E57B0  33 C0                     XOR EAX,EAX
005E57B2  C7 06 38 C2 79 00         MOV dword ptr [ESI],0x79c238
005E57B8  C6 46 6D 02               MOV byte ptr [ESI + 0x6d],0x2
005E57BC  89 5E 69                  MOV dword ptr [ESI + 0x69],EBX
005E57BF  88 5E 6E                  MOV byte ptr [ESI + 0x6e],BL
005E57C2  88 5E 6F                  MOV byte ptr [ESI + 0x6f],BL
005E57C5  89 9E 85 00 00 00         MOV dword ptr [ESI + 0x85],EBX
005E57CB  88 9E 80 00 00 00         MOV byte ptr [ESI + 0x80],BL
005E57D1  89 9E 81 00 00 00         MOV dword ptr [ESI + 0x81],EBX
005E57D7  89 9E 8D 00 00 00         MOV dword ptr [ESI + 0x8d],EBX
005E57DD  89 9E 89 00 00 00         MOV dword ptr [ESI + 0x89],EBX
005E57E3  89 01                     MOV dword ptr [ECX],EAX
005E57E5  83 CA FF                  OR EDX,0xffffffff
005E57E8  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
005E57EB  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
005E57EE  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
005E57F1  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
005E57F4  89 9E B9 02 00 00         MOV dword ptr [ESI + 0x2b9],EBX
005E57FA  8D 86 BD 02 00 00         LEA EAX,[ESI + 0x2bd]
005E5800  B9 05 00 00 00            MOV ECX,0x5
LAB_005e5805:
005E5805  89 50 E8                  MOV dword ptr [EAX + -0x18],EDX
005E5808  89 10                     MOV dword ptr [EAX],EDX
005E580A  83 C0 04                  ADD EAX,0x4
005E580D  49                        DEC ECX
005E580E  75 F5                     JNZ 0x005e5805
005E5810  B9 21 00 00 00            MOV ECX,0x21
005E5815  33 C0                     XOR EAX,EAX
005E5817  8D BE 53 06 00 00         LEA EDI,[ESI + 0x653]
005E581D  89 9E CD 02 00 00         MOV dword ptr [ESI + 0x2cd],EBX
005E5823  89 96 84 04 00 00         MOV dword ptr [ESI + 0x484],EDX
005E5829  89 9E 88 04 00 00         MOV dword ptr [ESI + 0x488],EBX
005E582F  89 96 3F 06 00 00         MOV dword ptr [ESI + 0x63f],EDX
005E5835  89 9E 43 06 00 00         MOV dword ptr [ESI + 0x643],EBX
005E583B  F3 AB                     STOSD.REP ES:EDI
005E583D  89 5E 70                  MOV dword ptr [ESI + 0x70],EBX
005E5840  89 5E 78                  MOV dword ptr [ESI + 0x78],EBX
005E5843  89 5E 74                  MOV dword ptr [ESI + 0x74],EBX
005E5846  89 5E 7C                  MOV dword ptr [ESI + 0x7c],EBX
005E5849  89 9E 4F 06 00 00         MOV dword ptr [ESI + 0x64f],EBX
005E584F  89 9E 4B 06 00 00         MOV dword ptr [ESI + 0x64b],EBX
005E5855  89 9E 47 06 00 00         MOV dword ptr [ESI + 0x647],EBX
005E585B  8B C6                     MOV EAX,ESI
005E585D  5F                        POP EDI
005E585E  5E                        POP ESI
005E585F  5B                        POP EBX
005E5860  C3                        RET
LAB_005e5861:
005E5861  5E                        POP ESI
005E5862  33 C0                     XOR EAX,EAX
005E5864  5B                        POP EBX
005E5865  C3                        RET
