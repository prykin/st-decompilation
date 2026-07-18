FUN_00647ad0:
00647AD0  56                        PUSH ESI
00647AD1  57                        PUSH EDI
00647AD2  8B F1                     MOV ESI,ECX
00647AD4  E8 07 E6 09 00            CALL 0x006e60e0
00647AD9  8D 7E 1C                  LEA EDI,[ESI + 0x1c]
00647ADC  8B CF                     MOV ECX,EDI
00647ADE  E8 4C B1 DB FF            CALL 0x00402c2f
00647AE3  85 F6                     TEST ESI,ESI
00647AE5  C7 06 58 D6 79 00         MOV dword ptr [ESI],0x79d658
00647AEB  C7 07 18 D6 79 00         MOV dword ptr [EDI],0x79d618
00647AF1  74 15                     JZ 0x00647b08
00647AF3  8D BE D3 05 00 00         LEA EDI,[ESI + 0x5d3]
00647AF9  B9 21 00 00 00            MOV ECX,0x21
00647AFE  33 C0                     XOR EAX,EAX
00647B00  F3 AB                     STOSD.REP ES:EDI
00647B02  AA                        STOSB ES:EDI
00647B03  8B C6                     MOV EAX,ESI
00647B05  5F                        POP EDI
00647B06  5E                        POP ESI
00647B07  C3                        RET
LAB_00647b08:
00647B08  33 FF                     XOR EDI,EDI
00647B0A  B9 21 00 00 00            MOV ECX,0x21
00647B0F  33 C0                     XOR EAX,EAX
00647B11  F3 AB                     STOSD.REP ES:EDI
00647B13  AA                        STOSB ES:EDI
00647B14  8B C6                     MOV EAX,ESI
00647B16  5F                        POP EDI
00647B17  5E                        POP ESI
00647B18  C3                        RET
