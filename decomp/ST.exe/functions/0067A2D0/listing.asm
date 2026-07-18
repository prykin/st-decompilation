FUN_0067a2d0:
0067A2D0  8B 81 A4 00 00 00         MOV EAX,dword ptr [ECX + 0xa4]
0067A2D6  56                        PUSH ESI
0067A2D7  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0067A2DD  05 39 30 00 00            ADD EAX,0x3039
0067A2E2  BE 1A 00 00 00            MOV ESI,0x1a
0067A2E7  89 81 A4 00 00 00         MOV dword ptr [ECX + 0xa4],EAX
0067A2ED  C1 E8 10                  SHR EAX,0x10
0067A2F0  83 E0 07                  AND EAX,0x7
0067A2F3  83 C0 08                  ADD EAX,0x8
0067A2F6  89 81 50 06 00 00         MOV dword ptr [ECX + 0x650],EAX
0067A2FC  8B 91 A4 00 00 00         MOV EDX,dword ptr [ECX + 0xa4]
0067A302  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0067A308  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0067A30E  33 D2                     XOR EDX,EDX
0067A310  89 81 A4 00 00 00         MOV dword ptr [ECX + 0xa4],EAX
0067A316  C1 E8 10                  SHR EAX,0x10
0067A319  F7 F6                     DIV ESI
0067A31B  83 C2 19                  ADD EDX,0x19
0067A31E  89 91 6E 06 00 00         MOV dword ptr [ECX + 0x66e],EDX
0067A324  8B 81 A4 00 00 00         MOV EAX,dword ptr [ECX + 0xa4]
0067A32A  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0067A330  05 39 30 00 00            ADD EAX,0x3039
0067A335  33 D2                     XOR EDX,EDX
0067A337  89 81 A4 00 00 00         MOV dword ptr [ECX + 0xa4],EAX
0067A33D  C1 E8 10                  SHR EAX,0x10
0067A340  F7 F6                     DIV ESI
0067A342  83 C2 32                  ADD EDX,0x32
0067A345  89 91 81 06 00 00         MOV dword ptr [ECX + 0x681],EDX
0067A34B  E8 66 7A D8 FF            CALL 0x00401db6
0067A350  5E                        POP ESI
0067A351  C3                        RET
