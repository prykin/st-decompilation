STParticleC::sub_0062AEF0:
0062AEF0  55                        PUSH EBP
0062AEF1  8B EC                     MOV EBP,ESP
0062AEF3  56                        PUSH ESI
0062AEF4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0062AEF7  8B C1                     MOV EAX,ECX
0062AEF9  57                        PUSH EDI
0062AEFA  B9 35 00 00 00            MOV ECX,0x35
0062AEFF  8B F8                     MOV EDI,EAX
0062AF01  8B 90 CE 00 00 00         MOV EDX,dword ptr [EAX + 0xce]
0062AF07  F3 A5                     MOVSD.REP ES:EDI,ESI
0062AF09  66 A5                     MOVSW ES:EDI,ESI
0062AF0B  A4                        MOVSB ES:EDI,ESI
0062AF0C  5F                        POP EDI
0062AF0D  89 90 CE 00 00 00         MOV dword ptr [EAX + 0xce],EDX
0062AF13  C7 80 CA 00 00 00 00 00 00 00  MOV dword ptr [EAX + 0xca],0x0
0062AF1D  C7 80 C6 00 00 00 FF FF FF FF  MOV dword ptr [EAX + 0xc6],0xffffffff
0062AF27  5E                        POP ESI
0062AF28  5D                        POP EBP
0062AF29  C2 04 00                  RET 0x4
