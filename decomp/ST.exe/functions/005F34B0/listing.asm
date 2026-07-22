STBHEShellC::sub_005F34B0:
005F34B0  8B 41 61                  MOV EAX,dword ptr [ECX + 0x61]
005F34B3  8B 51 65                  MOV EDX,dword ptr [ECX + 0x65]
005F34B6  56                        PUSH ESI
005F34B7  8B 71 69                  MOV ESI,dword ptr [ECX + 0x69]
005F34BA  89 B1 9B 00 00 00         MOV dword ptr [ECX + 0x9b],ESI
005F34C0  89 B1 A7 00 00 00         MOV dword ptr [ECX + 0xa7],ESI
005F34C6  89 81 93 00 00 00         MOV dword ptr [ECX + 0x93],EAX
005F34CC  89 91 97 00 00 00         MOV dword ptr [ECX + 0x97],EDX
005F34D2  89 81 9F 00 00 00         MOV dword ptr [ECX + 0x9f],EAX
005F34D8  89 91 A3 00 00 00         MOV dword ptr [ECX + 0xa3],EDX
005F34DE  C7 81 87 00 00 00 01 00 00 00  MOV dword ptr [ECX + 0x87],0x1
005F34E8  C7 81 AB 00 00 00 00 00 00 00  MOV dword ptr [ECX + 0xab],0x0
005F34F2  C7 81 AF 00 00 00 14 00 00 00  MOV dword ptr [ECX + 0xaf],0x14
005F34FC  C7 81 8F 00 00 00 FF FF FF FF  MOV dword ptr [ECX + 0x8f],0xffffffff
005F3506  5E                        POP ESI
005F3507  C3                        RET
