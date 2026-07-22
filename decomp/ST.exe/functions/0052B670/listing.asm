CreateMoney:
0052B670  53                        PUSH EBX
0052B671  56                        PUSH ESI
0052B672  68 A6 00 00 00            PUSH 0xa6
0052B677  E8 54 4E 18 00            CALL 0x006b04d0
0052B67C  8B F0                     MOV ESI,EAX
0052B67E  33 DB                     XOR EBX,EBX
0052B680  3B F3                     CMP ESI,EBX
0052B682  0F 84 99 00 00 00         JZ 0x0052b721
0052B688  8B CE                     MOV ECX,ESI
0052B68A  E8 21 A9 1B 00            CALL 0x006e5fb0
0052B68F  B8 24 00 00 00            MOV EAX,0x24
0052B694  C7 06 E4 AC 79 00         MOV dword ptr [ESI],0x79ace4
0052B69A  89 46 48                  MOV dword ptr [ESI + 0x48],EAX
0052B69D  89 46 50                  MOV dword ptr [ESI + 0x50],EAX
0052B6A0  B8 0B 00 00 00            MOV EAX,0xb
0052B6A5  C7 46 34 0F 00 00 00      MOV dword ptr [ESI + 0x34],0xf
0052B6AC  89 46 54                  MOV dword ptr [ESI + 0x54],EAX
0052B6AF  89 46 4C                  MOV dword ptr [ESI + 0x4c],EAX
0052B6B2  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
0052B6B5  C7 46 5C 08 00 00 00      MOV dword ptr [ESI + 0x5c],0x8
0052B6BC  C7 46 60 1E 00 00 00      MOV dword ptr [ESI + 0x60],0x1e
0052B6C3  C7 46 64 0C 00 00 00      MOV dword ptr [ESI + 0x64],0xc
0052B6CA  88 5E 68                  MOV byte ptr [ESI + 0x68],BL
0052B6CD  89 5E 7E                  MOV dword ptr [ESI + 0x7e],EBX
0052B6D0  89 5E 7A                  MOV dword ptr [ESI + 0x7a],EBX
0052B6D3  89 5E 76                  MOV dword ptr [ESI + 0x76],EBX
0052B6D6  89 5E 72                  MOV dword ptr [ESI + 0x72],EBX
0052B6D9  89 9E 82 00 00 00         MOV dword ptr [ESI + 0x82],EBX
0052B6DF  89 5E 6E                  MOV dword ptr [ESI + 0x6e],EBX
0052B6E2  89 5E 6A                  MOV dword ptr [ESI + 0x6a],EBX
0052B6E5  89 9E 9E 00 00 00         MOV dword ptr [ESI + 0x9e],EBX
0052B6EB  88 9E A3 00 00 00         MOV byte ptr [ESI + 0xa3],BL
0052B6F1  89 9E 9A 00 00 00         MOV dword ptr [ESI + 0x9a],EBX
0052B6F7  89 9E 96 00 00 00         MOV dword ptr [ESI + 0x96],EBX
0052B6FD  89 9E 92 00 00 00         MOV dword ptr [ESI + 0x92],EBX
0052B703  89 9E 8E 00 00 00         MOV dword ptr [ESI + 0x8e],EBX
0052B709  89 9E 8A 00 00 00         MOV dword ptr [ESI + 0x8a],EBX
0052B70F  89 9E 86 00 00 00         MOV dword ptr [ESI + 0x86],EBX
0052B715  C6 86 A2 00 00 00 01      MOV byte ptr [ESI + 0xa2],0x1
0052B71C  8B C6                     MOV EAX,ESI
0052B71E  5E                        POP ESI
0052B71F  5B                        POP EBX
0052B720  C3                        RET
LAB_0052b721:
0052B721  5E                        POP ESI
0052B722  33 C0                     XOR EAX,EAX
0052B724  5B                        POP EBX
0052B725  C3                        RET
