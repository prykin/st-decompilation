FUN_0055d390:
0055D390  55                        PUSH EBP
0055D391  8B EC                     MOV EBP,ESP
0055D393  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055D396  53                        PUSH EBX
0055D397  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0055D39A  56                        PUSH ESI
0055D39B  57                        PUSH EDI
0055D39C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0055D39F  57                        PUSH EDI
0055D3A0  53                        PUSH EBX
0055D3A1  8B F1                     MOV ESI,ECX
0055D3A3  50                        PUSH EAX
0055D3A4  FF 15 30 C0 85 00         CALL dword ptr [0x0085c030]
0055D3AA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055D3AD  6A 3F                     PUSH 0x3f
0055D3AF  8D 96 48 06 00 00         LEA EDX,[ESI + 0x648]
0055D3B5  51                        PUSH ECX
0055D3B6  52                        PUSH EDX
0055D3B7  E8 84 0F 1D 00            CALL 0x0072e340
0055D3BC  6A 1F                     PUSH 0x1f
0055D3BE  8D 86 88 06 00 00         LEA EAX,[ESI + 0x688]
0055D3C4  53                        PUSH EBX
0055D3C5  50                        PUSH EAX
0055D3C6  C6 86 87 06 00 00 00      MOV byte ptr [ESI + 0x687],0x0
0055D3CD  E8 6E 0F 1D 00            CALL 0x0072e340
0055D3D2  83 C4 18                  ADD ESP,0x18
0055D3D5  89 BE A8 06 00 00         MOV dword ptr [ESI + 0x6a8],EDI
0055D3DB  C6 86 A7 06 00 00 00      MOV byte ptr [ESI + 0x6a7],0x0
0055D3E2  5F                        POP EDI
0055D3E3  5E                        POP ESI
0055D3E4  5B                        POP EBX
0055D3E5  5D                        POP EBP
0055D3E6  C2 0C 00                  RET 0xc
