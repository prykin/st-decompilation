CreateSAMPanel:
0053CE10  53                        PUSH EBX
0053CE11  56                        PUSH ESI
0053CE12  68 D1 01 00 00            PUSH 0x1d1
0053CE17  E8 B4 36 17 00            CALL 0x006b04d0
0053CE1C  8B F0                     MOV ESI,EAX
0053CE1E  33 DB                     XOR EBX,EBX
0053CE20  3B F3                     CMP ESI,EBX
0053CE22  0F 84 92 00 00 00         JZ 0x0053ceba
0053CE28  57                        PUSH EDI
0053CE29  8B CE                     MOV ECX,ESI
0053CE2B  E8 80 91 1A 00            CALL 0x006e5fb0
0053CE30  8D 8E AB 01 00 00         LEA ECX,[ESI + 0x1ab]
0053CE36  33 C0                     XOR EAX,EAX
0053CE38  89 5E 5C                  MOV dword ptr [ESI + 0x5c],EBX
0053CE3B  C7 46 60 FF FF FF FF      MOV dword ptr [ESI + 0x60],0xffffffff
0053CE42  C7 46 64 04 00 00 00      MOV dword ptr [ESI + 0x64],0x4
0053CE49  89 5E 68                  MOV dword ptr [ESI + 0x68],EBX
0053CE4C  66 C7 86 72 01 00 00 02 00  MOV word ptr [ESI + 0x172],0x2
0053CE55  89 9E 78 01 00 00         MOV dword ptr [ESI + 0x178],EBX
0053CE5B  89 9E 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EBX
0053CE61  89 9E 85 01 00 00         MOV dword ptr [ESI + 0x185],EBX
0053CE67  89 9E 89 01 00 00         MOV dword ptr [ESI + 0x189],EBX
0053CE6D  C7 06 8C AD 79 00         MOV dword ptr [ESI],0x79ad8c
0053CE73  C7 46 3C 0C 00 00 00      MOV dword ptr [ESI + 0x3c],0xc
0053CE7A  89 5E 44                  MOV dword ptr [ESI + 0x44],EBX
0053CE7D  C7 46 40 28 01 00 00      MOV dword ptr [ESI + 0x40],0x128
0053CE84  C7 46 48 8C 00 00 00      MOV dword ptr [ESI + 0x48],0x8c
0053CE8B  C7 86 80 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x180],0x1
0053CE95  88 9E 84 01 00 00         MOV byte ptr [ESI + 0x184],BL
0053CE9B  89 01                     MOV dword ptr [ECX],EAX
0053CE9D  8D BE B5 01 00 00         LEA EDI,[ESI + 0x1b5]
0053CEA3  66 89 41 04               MOV word ptr [ECX + 0x4],AX
0053CEA7  B9 07 00 00 00            MOV ECX,0x7
0053CEAC  F3 AB                     STOSD.REP ES:EDI
0053CEAE  89 9E B1 01 00 00         MOV dword ptr [ESI + 0x1b1],EBX
0053CEB4  8B C6                     MOV EAX,ESI
0053CEB6  5F                        POP EDI
0053CEB7  5E                        POP ESI
0053CEB8  5B                        POP EBX
0053CEB9  C3                        RET
LAB_0053ceba:
0053CEBA  5E                        POP ESI
0053CEBB  33 C0                     XOR EAX,EAX
0053CEBD  5B                        POP EBX
0053CEBE  C3                        RET
