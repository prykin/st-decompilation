FUN_0062ed10:
0062ED10  56                        PUSH ESI
0062ED11  8B F1                     MOV ESI,ECX
0062ED13  E8 1B 2C DD FF            CALL 0x00401933
0062ED18  83 C8 FF                  OR EAX,0xffffffff
0062ED1B  8D 96 E5 01 00 00         LEA EDX,[ESI + 0x1e5]
0062ED21  89 86 D5 01 00 00         MOV dword ptr [ESI + 0x1d5],EAX
0062ED27  89 86 D9 01 00 00         MOV dword ptr [ESI + 0x1d9],EAX
0062ED2D  89 86 DD 01 00 00         MOV dword ptr [ESI + 0x1dd],EAX
0062ED33  33 C0                     XOR EAX,EAX
0062ED35  33 C9                     XOR ECX,ECX
0062ED37  C7 06 98 D0 79 00         MOV dword ptr [ESI],0x79d098
0062ED3D  89 86 E1 01 00 00         MOV dword ptr [ESI + 0x1e1],EAX
0062ED43  89 0A                     MOV dword ptr [EDX],ECX
0062ED45  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
0062ED48  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
0062ED4B  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
0062ED4E  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
0062ED51  88 86 F9 01 00 00         MOV byte ptr [ESI + 0x1f9],AL
0062ED57  89 86 FA 01 00 00         MOV dword ptr [ESI + 0x1fa],EAX
0062ED5D  8B C6                     MOV EAX,ESI
0062ED5F  5E                        POP ESI
0062ED60  C3                        RET
