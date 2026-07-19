STJellyGunC::STJellyGunC:
005823D0  56                        PUSH ESI
005823D1  57                        PUSH EDI
005823D2  8B F1                     MOV ESI,ECX
005823D4  E8 5A F5 E7 FF            CALL 0x00401933
005823D9  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
005823DF  8B CF                     MOV ECX,EDI
005823E1  E8 30 EF E7 FF            CALL 0x00401316
005823E6  C7 07 EC B8 79 00         MOV dword ptr [EDI],0x79b8ec
005823EC  B9 0F 00 00 00            MOV ECX,0xf
005823F1  33 C0                     XOR EAX,EAX
005823F3  8D BE 56 02 00 00         LEA EDI,[ESI + 0x256]
005823F9  C7 06 8C B7 79 00         MOV dword ptr [ESI],0x79b78c
005823FF  F3 AB                     STOSD.REP ES:EDI
00582401  66 AB                     STOSW ES:EDI
00582403  33 C0                     XOR EAX,EAX
00582405  C7 86 41 02 00 00 FF 00 00 00  MOV dword ptr [ESI + 0x241],0xff
0058240F  89 86 31 02 00 00         MOV dword ptr [ESI + 0x231],EAX
00582415  89 86 35 02 00 00         MOV dword ptr [ESI + 0x235],EAX
0058241B  89 86 39 02 00 00         MOV dword ptr [ESI + 0x239],EAX
00582421  89 86 3D 02 00 00         MOV dword ptr [ESI + 0x23d],EAX
00582427  89 86 47 02 00 00         MOV dword ptr [ESI + 0x247],EAX
0058242D  89 86 4B 02 00 00         MOV dword ptr [ESI + 0x24b],EAX
00582433  89 86 52 02 00 00         MOV dword ptr [ESI + 0x252],EAX
00582439  8B C6                     MOV EAX,ESI
0058243B  5F                        POP EDI
0058243C  5E                        POP ESI
0058243D  C3                        RET
