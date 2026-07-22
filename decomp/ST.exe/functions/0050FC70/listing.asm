CreateFrmPanel:
0050FC70  53                        PUSH EBX
0050FC71  56                        PUSH ESI
0050FC72  68 E3 01 00 00            PUSH 0x1e3
0050FC77  E8 54 08 1A 00            CALL 0x006b04d0
0050FC7C  8B F0                     MOV ESI,EAX
0050FC7E  33 DB                     XOR EBX,EBX
0050FC80  3B F3                     CMP ESI,EBX
0050FC82  0F 84 A2 00 00 00         JZ 0x0050fd2a
0050FC88  57                        PUSH EDI
0050FC89  8B CE                     MOV ECX,ESI
0050FC8B  E8 20 63 1D 00            CALL 0x006e5fb0
0050FC90  B9 08 00 00 00            MOV ECX,0x8
0050FC95  33 C0                     XOR EAX,EAX
0050FC97  8D BE B3 01 00 00         LEA EDI,[ESI + 0x1b3]
0050FC9D  89 5E 5C                  MOV dword ptr [ESI + 0x5c],EBX
0050FCA0  C7 46 60 FF FF FF FF      MOV dword ptr [ESI + 0x60],0xffffffff
0050FCA7  C7 46 64 04 00 00 00      MOV dword ptr [ESI + 0x64],0x4
0050FCAE  89 5E 68                  MOV dword ptr [ESI + 0x68],EBX
0050FCB1  66 C7 86 72 01 00 00 02 00  MOV word ptr [ESI + 0x172],0x2
0050FCBA  89 9E 78 01 00 00         MOV dword ptr [ESI + 0x178],EBX
0050FCC0  89 9E 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EBX
0050FCC6  89 9E 85 01 00 00         MOV dword ptr [ESI + 0x185],EBX
0050FCCC  89 9E 89 01 00 00         MOV dword ptr [ESI + 0x189],EBX
0050FCD2  C7 06 1C AC 79 00         MOV dword ptr [ESI],0x79ac1c
0050FCD8  C7 46 3C 0C 00 00 00      MOV dword ptr [ESI + 0x3c],0xc
0050FCDF  89 5E 44                  MOV dword ptr [ESI + 0x44],EBX
0050FCE2  C7 46 40 28 01 00 00      MOV dword ptr [ESI + 0x40],0x128
0050FCE9  C7 46 48 8C 00 00 00      MOV dword ptr [ESI + 0x48],0x8c
0050FCF0  C7 86 80 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x180],0x1
0050FCFA  88 9E 84 01 00 00         MOV byte ptr [ESI + 0x184],BL
0050FD00  33 D2                     XOR EDX,EDX
0050FD02  F3 AB                     STOSD.REP ES:EDI
0050FD04  8D 8E D3 01 00 00         LEA ECX,[ESI + 0x1d3]
0050FD0A  5F                        POP EDI
0050FD0B  89 01                     MOV dword ptr [ECX],EAX
0050FD0D  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0050FD10  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0050FD13  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0050FD16  8D 86 AB 01 00 00         LEA EAX,[ESI + 0x1ab]
0050FD1C  89 96 AB 01 00 00         MOV dword ptr [ESI + 0x1ab],EDX
0050FD22  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0050FD25  8B C6                     MOV EAX,ESI
0050FD27  5E                        POP ESI
0050FD28  5B                        POP EBX
0050FD29  C3                        RET
LAB_0050fd2a:
0050FD2A  5E                        POP ESI
0050FD2B  33 C0                     XOR EAX,EAX
0050FD2D  5B                        POP EBX
0050FD2E  C3                        RET
