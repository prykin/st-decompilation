FUN_00749a93:
00749A93  53                        PUSH EBX
00749A94  56                        PUSH ESI
00749A95  57                        PUSH EDI
00749A96  8B F1                     MOV ESI,ECX
00749A98  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
00749A9C  8D 5E 7C                  LEA EBX,[ESI + 0x7c]
00749A9F  53                        PUSH EBX
00749AA0  FF 74 24 20               PUSH dword ptr [ESP + 0x20]
00749AA4  FF 74 24 20               PUSH dword ptr [ESP + 0x20]
00749AA8  E8 36 D4 FF FF            CALL 0x00746ee3
00749AAD  33 FF                     XOR EDI,EDI
00749AAF  8D 4E 54                  LEA ECX,[ESI + 0x54]
00749AB2  57                        PUSH EDI
00749AB3  89 7E 50                  MOV dword ptr [ESI + 0x50],EDI
00749AB6  E8 2F 37 00 00            CALL 0x0074d1ea
00749ABB  6A 01                     PUSH 0x1
00749ABD  8D 4E 58                  LEA ECX,[ESI + 0x58]
00749AC0  E8 25 37 00 00            CALL 0x0074d1ea
00749AC5  8D 4E 5C                  LEA ECX,[ESI + 0x5c]
00749AC8  6A 01                     PUSH 0x1
00749ACA  E8 1B 37 00 00            CALL 0x0074d1ea
00749ACF  53                        PUSH EBX
00749AD0  8B 1D 88 BB 85 00         MOV EBX,dword ptr [0x0085bb88]
00749AD6  89 7E 60                  MOV dword ptr [ESI + 0x60],EDI
00749AD9  89 7E 64                  MOV dword ptr [ESI + 0x64],EDI
00749ADC  89 7E 68                  MOV dword ptr [ESI + 0x68],EDI
00749ADF  89 7E 6C                  MOV dword ptr [ESI + 0x6c],EDI
00749AE2  89 7E 70                  MOV dword ptr [ESI + 0x70],EDI
00749AE5  89 7E 74                  MOV dword ptr [ESI + 0x74],EDI
00749AE8  89 7E 78                  MOV dword ptr [ESI + 0x78],EDI
00749AEB  FF D3                     CALL EBX
00749AED  8D 86 94 00 00 00         LEA EAX,[ESI + 0x94]
00749AF3  50                        PUSH EAX
00749AF4  FF D3                     CALL EBX
00749AF6  FF 76 5C                  PUSH dword ptr [ESI + 0x5c]
00749AF9  89 BE B8 00 00 00         MOV dword ptr [ESI + 0xb8],EDI
00749AFF  89 BE AC 00 00 00         MOV dword ptr [ESI + 0xac],EDI
00749B05  C7 86 B0 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0xb0],0x1
00749B0F  89 BE B4 00 00 00         MOV dword ptr [ESI + 0xb4],EDI
00749B15  89 BE BC 00 00 00         MOV dword ptr [ESI + 0xbc],EDI
00749B1B  89 BE C0 00 00 00         MOV dword ptr [ESI + 0xc0],EDI
00749B21  C7 06 D0 13 7A 00         MOV dword ptr [ESI],0x7a13d0
00749B27  C7 46 0C 90 13 7A 00      MOV dword ptr [ESI + 0xc],0x7a1390
00749B2E  C7 46 10 78 13 7A 00      MOV dword ptr [ESI + 0x10],0x7a1378
00749B35  FF 15 80 BB 85 00         CALL dword ptr [0x0085bb80]
00749B3B  8B C6                     MOV EAX,ESI
00749B3D  5F                        POP EDI
00749B3E  5E                        POP ESI
00749B3F  5B                        POP EBX
00749B40  C2 10 00                  RET 0x10
