CreateInfocPanel:
0051FE40  53                        PUSH EBX
0051FE41  56                        PUSH ESI
0051FE42  68 D9 03 00 00            PUSH 0x3d9
0051FE47  E8 84 06 19 00            CALL 0x006b04d0
0051FE4C  8B F0                     MOV ESI,EAX
0051FE4E  33 DB                     XOR EBX,EBX
0051FE50  3B F3                     CMP ESI,EBX
0051FE52  0F 84 B1 00 00 00         JZ 0x0051ff09
0051FE58  57                        PUSH EDI
0051FE59  8B CE                     MOV ECX,ESI
0051FE5B  E8 50 61 1C 00            CALL 0x006e5fb0
0051FE60  B9 4A 00 00 00            MOV ECX,0x4a
0051FE65  33 C0                     XOR EAX,EAX
0051FE67  8D BE AB 01 00 00         LEA EDI,[ESI + 0x1ab]
0051FE6D  89 5E 5C                  MOV dword ptr [ESI + 0x5c],EBX
0051FE70  C7 46 60 FF FF FF FF      MOV dword ptr [ESI + 0x60],0xffffffff
0051FE77  C7 46 64 04 00 00 00      MOV dword ptr [ESI + 0x64],0x4
0051FE7E  89 5E 68                  MOV dword ptr [ESI + 0x68],EBX
0051FE81  66 C7 86 72 01 00 00 02 00  MOV word ptr [ESI + 0x172],0x2
0051FE8A  89 9E 78 01 00 00         MOV dword ptr [ESI + 0x178],EBX
0051FE90  89 9E 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EBX
0051FE96  89 9E 85 01 00 00         MOV dword ptr [ESI + 0x185],EBX
0051FE9C  89 9E 89 01 00 00         MOV dword ptr [ESI + 0x189],EBX
0051FEA2  C7 06 70 AC 79 00         MOV dword ptr [ESI],0x79ac70
0051FEA8  C7 46 3C C7 01 00 00      MOV dword ptr [ESI + 0x3c],0x1c7
0051FEAF  89 5E 44                  MOV dword ptr [ESI + 0x44],EBX
0051FEB2  C7 46 40 3D 01 00 00      MOV dword ptr [ESI + 0x40],0x13d
0051FEB9  C7 46 48 A1 00 00 00      MOV dword ptr [ESI + 0x48],0xa1
0051FEC0  89 9E 80 01 00 00         MOV dword ptr [ESI + 0x180],EBX
0051FEC6  88 9E 84 01 00 00         MOV byte ptr [ESI + 0x184],BL
0051FECC  89 9E D0 03 00 00         MOV dword ptr [ESI + 0x3d0],EBX
0051FED2  C6 86 D4 03 00 00 FF      MOV byte ptr [ESI + 0x3d4],0xff
0051FED9  F3 AB                     STOSD.REP ES:EDI
0051FEDB  AA                        STOSB ES:EDI
0051FEDC  B9 3C 00 00 00            MOV ECX,0x3c
0051FEE1  33 C0                     XOR EAX,EAX
0051FEE3  8D BE D4 02 00 00         LEA EDI,[ESI + 0x2d4]
0051FEE9  F3 AB                     STOSD.REP ES:EDI
0051FEEB  89 9E CC 03 00 00         MOV dword ptr [ESI + 0x3cc],EBX
0051FEF1  89 9E C8 03 00 00         MOV dword ptr [ESI + 0x3c8],EBX
0051FEF7  89 9E C4 03 00 00         MOV dword ptr [ESI + 0x3c4],EBX
0051FEFD  89 9E D5 03 00 00         MOV dword ptr [ESI + 0x3d5],EBX
0051FF03  8B C6                     MOV EAX,ESI
0051FF05  5F                        POP EDI
0051FF06  5E                        POP ESI
0051FF07  5B                        POP EBX
0051FF08  C3                        RET
LAB_0051ff09:
0051FF09  5E                        POP ESI
0051FF0A  33 C0                     XOR EAX,EAX
0051FF0C  5B                        POP EBX
0051FF0D  C3                        RET
