FUN_00521840:
00521840  53                        PUSH EBX
00521841  56                        PUSH ESI
00521842  68 A5 01 00 00            PUSH 0x1a5
00521847  E8 84 EC 18 00            CALL 0x006b04d0
0052184C  8B F0                     MOV ESI,EAX
0052184E  33 DB                     XOR EBX,EBX
00521850  3B F3                     CMP ESI,EBX
00521852  74 77                     JZ 0x005218cb
00521854  8B CE                     MOV ECX,ESI
00521856  E8 55 47 1C 00            CALL 0x006e5fb0
0052185B  89 5E 5C                  MOV dword ptr [ESI + 0x5c],EBX
0052185E  C7 46 60 FF FF FF FF      MOV dword ptr [ESI + 0x60],0xffffffff
00521865  C7 46 64 04 00 00 00      MOV dword ptr [ESI + 0x64],0x4
0052186C  89 5E 68                  MOV dword ptr [ESI + 0x68],EBX
0052186F  66 C7 86 72 01 00 00 02 00  MOV word ptr [ESI + 0x172],0x2
00521878  89 9E 78 01 00 00         MOV dword ptr [ESI + 0x178],EBX
0052187E  C7 06 9C AC 79 00         MOV dword ptr [ESI],0x79ac9c
00521884  C7 46 3C 0C 00 00 00      MOV dword ptr [ESI + 0x3c],0xc
0052188B  89 5E 44                  MOV dword ptr [ESI + 0x44],EBX
0052188E  C7 46 40 F8 02 00 00      MOV dword ptr [ESI + 0x40],0x2f8
00521895  C7 46 48 1E 00 00 00      MOV dword ptr [ESI + 0x48],0x1e
0052189C  89 9E 80 01 00 00         MOV dword ptr [ESI + 0x180],EBX
005218A2  89 9E 84 01 00 00         MOV dword ptr [ESI + 0x184],EBX
005218A8  89 9E 9C 01 00 00         MOV dword ptr [ESI + 0x19c],EBX
005218AE  89 9E A0 01 00 00         MOV dword ptr [ESI + 0x1a0],EBX
005218B4  89 9E 98 01 00 00         MOV dword ptr [ESI + 0x198],EBX
005218BA  88 9E A4 01 00 00         MOV byte ptr [ESI + 0x1a4],BL
005218C0  89 9E 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EBX
005218C6  8B C6                     MOV EAX,ESI
005218C8  5E                        POP ESI
005218C9  5B                        POP EBX
005218CA  C3                        RET
LAB_005218cb:
005218CB  5E                        POP ESI
005218CC  33 C0                     XOR EAX,EAX
005218CE  5B                        POP EBX
005218CF  C3                        RET
