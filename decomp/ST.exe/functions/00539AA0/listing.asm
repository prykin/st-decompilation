FUN_00539aa0:
00539AA0  53                        PUSH EBX
00539AA1  56                        PUSH ESI
00539AA2  68 E1 01 00 00            PUSH 0x1e1
00539AA7  E8 24 6A 17 00            CALL 0x006b04d0
00539AAC  8B F0                     MOV ESI,EAX
00539AAE  33 DB                     XOR EBX,EBX
00539AB0  3B F3                     CMP ESI,EBX
00539AB2  0F 84 96 00 00 00         JZ 0x00539b4e
00539AB8  57                        PUSH EDI
00539AB9  8B CE                     MOV ECX,ESI
00539ABB  E8 F0 C4 1A 00            CALL 0x006e5fb0
00539AC0  B9 10 00 00 00            MOV ECX,0x10
00539AC5  33 C0                     XOR EAX,EAX
00539AC7  8D BE 81 01 00 00         LEA EDI,[ESI + 0x181]
00539ACD  89 5E 5C                  MOV dword ptr [ESI + 0x5c],EBX
00539AD0  89 5E 44                  MOV dword ptr [ESI + 0x44],EBX
00539AD3  89 5E 3C                  MOV dword ptr [ESI + 0x3c],EBX
00539AD6  C7 46 60 FF FF FF FF      MOV dword ptr [ESI + 0x60],0xffffffff
00539ADD  C7 46 64 04 00 00 00      MOV dword ptr [ESI + 0x64],0x4
00539AE4  89 5E 68                  MOV dword ptr [ESI + 0x68],EBX
00539AE7  66 C7 86 72 01 00 00 02 00  MOV word ptr [ESI + 0x172],0x2
00539AF0  89 9E 78 01 00 00         MOV dword ptr [ESI + 0x178],EBX
00539AF6  C7 06 48 AD 79 00         MOV dword ptr [ESI],0x79ad48
00539AFC  C7 46 40 D0 01 00 00      MOV dword ptr [ESI + 0x40],0x1d0
00539B03  C7 46 48 DC 00 00 00      MOV dword ptr [ESI + 0x48],0xdc
00539B0A  88 9E 80 01 00 00         MOV byte ptr [ESI + 0x180],BL
00539B10  89 9E CD 01 00 00         MOV dword ptr [ESI + 0x1cd],EBX
00539B16  89 9E DD 01 00 00         MOV dword ptr [ESI + 0x1dd],EBX
00539B1C  89 9E D9 01 00 00         MOV dword ptr [ESI + 0x1d9],EBX
00539B22  89 9E D5 01 00 00         MOV dword ptr [ESI + 0x1d5],EBX
00539B28  89 9E D1 01 00 00         MOV dword ptr [ESI + 0x1d1],EBX
00539B2E  89 9E C1 01 00 00         MOV dword ptr [ESI + 0x1c1],EBX
00539B34  89 9E C5 01 00 00         MOV dword ptr [ESI + 0x1c5],EBX
00539B3A  89 9E 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EBX
00539B40  F3 AB                     STOSD.REP ES:EDI
00539B42  89 9E C9 01 00 00         MOV dword ptr [ESI + 0x1c9],EBX
00539B48  8B C6                     MOV EAX,ESI
00539B4A  5F                        POP EDI
00539B4B  5E                        POP ESI
00539B4C  5B                        POP EBX
00539B4D  C3                        RET
LAB_00539b4e:
00539B4E  5E                        POP ESI
00539B4F  33 C0                     XOR EAX,EAX
00539B51  5B                        POP EBX
00539B52  C3                        RET
