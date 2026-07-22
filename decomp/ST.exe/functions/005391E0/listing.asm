CreatePausePanel:
005391E0  56                        PUSH ESI
005391E1  57                        PUSH EDI
005391E2  68 88 01 00 00            PUSH 0x188
005391E7  E8 E4 72 17 00            CALL 0x006b04d0
005391EC  8B F0                     MOV ESI,EAX
005391EE  33 FF                     XOR EDI,EDI
005391F0  3B F7                     CMP ESI,EDI
005391F2  74 5F                     JZ 0x00539253
005391F4  8B CE                     MOV ECX,ESI
005391F6  E8 B5 CD 1A 00            CALL 0x006e5fb0
005391FB  89 7E 5C                  MOV dword ptr [ESI + 0x5c],EDI
005391FE  89 7E 3C                  MOV dword ptr [ESI + 0x3c],EDI
00539201  89 7E 68                  MOV dword ptr [ESI + 0x68],EDI
00539204  89 BE 78 01 00 00         MOV dword ptr [ESI + 0x178],EDI
0053920A  89 BE 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EDI
00539210  89 BE 80 01 00 00         MOV dword ptr [ESI + 0x180],EDI
00539216  89 BE 84 01 00 00         MOV dword ptr [ESI + 0x184],EDI
0053921C  C7 46 60 FF FF FF FF      MOV dword ptr [ESI + 0x60],0xffffffff
00539223  C7 46 64 04 00 00 00      MOV dword ptr [ESI + 0x64],0x4
0053922A  66 C7 86 72 01 00 00 02 00  MOV word ptr [ESI + 0x172],0x2
00539233  C7 06 2C AD 79 00         MOV dword ptr [ESI],0x79ad2c
00539239  C7 46 44 9C 00 00 00      MOV dword ptr [ESI + 0x44],0x9c
00539240  C7 46 40 74 01 00 00      MOV dword ptr [ESI + 0x40],0x174
00539247  C7 46 48 A0 00 00 00      MOV dword ptr [ESI + 0x48],0xa0
0053924E  8B C6                     MOV EAX,ESI
00539250  5F                        POP EDI
00539251  5E                        POP ESI
00539252  C3                        RET
LAB_00539253:
00539253  5F                        POP EDI
00539254  33 C0                     XOR EAX,EAX
00539256  5E                        POP ESI
00539257  C3                        RET
