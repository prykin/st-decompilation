CreatePopUp:
0052D020  53                        PUSH EBX
0052D021  56                        PUSH ESI
0052D022  68 A1 00 00 00            PUSH 0xa1
0052D027  E8 A4 34 18 00            CALL 0x006b04d0
0052D02C  8B F0                     MOV ESI,EAX
0052D02E  33 DB                     XOR EBX,EBX
0052D030  3B F3                     CMP ESI,EBX
0052D032  74 40                     JZ 0x0052d074
0052D034  8B CE                     MOV ECX,ESI
0052D036  E8 75 8F 1B 00            CALL 0x006e5fb0
0052D03B  C7 06 E8 AC 79 00         MOV dword ptr [ESI],0x79ace8
0052D041  89 9E 90 00 00 00         MOV dword ptr [ESI + 0x90],EBX
0052D047  89 9E 94 00 00 00         MOV dword ptr [ESI + 0x94],EBX
0052D04D  89 9E 98 00 00 00         MOV dword ptr [ESI + 0x98],EBX
0052D053  8D 46 54                  LEA EAX,[ESI + 0x54]
0052D056  B9 0F 00 00 00            MOV ECX,0xf
0052D05B  83 CA FF                  OR EDX,0xffffffff
LAB_0052d05e:
0052D05E  89 50 C4                  MOV dword ptr [EAX + -0x3c],EDX
0052D061  89 18                     MOV dword ptr [EAX],EBX
0052D063  83 C0 04                  ADD EAX,0x4
0052D066  49                        DEC ECX
0052D067  75 F5                     JNZ 0x0052d05e
0052D069  88 9E 9C 00 00 00         MOV byte ptr [ESI + 0x9c],BL
0052D06F  8B C6                     MOV EAX,ESI
0052D071  5E                        POP ESI
0052D072  5B                        POP EBX
0052D073  C3                        RET
LAB_0052d074:
0052D074  5E                        POP ESI
0052D075  33 C0                     XOR EAX,EAX
0052D077  5B                        POP EBX
0052D078  C3                        RET
