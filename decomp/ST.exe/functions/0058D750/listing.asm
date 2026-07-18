FUN_0058d750:
0058D750  56                        PUSH ESI
0058D751  57                        PUSH EDI
0058D752  8B F1                     MOV ESI,ECX
0058D754  E8 DA 41 E7 FF            CALL 0x00401933
0058D759  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0058D75F  8B CF                     MOV ECX,EDI
0058D761  E8 B0 3B E7 FF            CALL 0x00401316
0058D766  C7 07 E0 BF 79 00         MOV dword ptr [EDI],0x79bfe0
0058D76C  33 D2                     XOR EDX,EDX
0058D76E  B9 0D 00 00 00            MOV ECX,0xd
0058D773  33 C0                     XOR EAX,EAX
0058D775  8D BE 5B 02 00 00         LEA EDI,[ESI + 0x25b]
0058D77B  C7 06 80 BE 79 00         MOV dword ptr [ESI],0x79be80
0058D781  89 96 57 02 00 00         MOV dword ptr [ESI + 0x257],EDX
0058D787  F3 AB                     STOSD.REP ES:EDI
0058D789  89 96 3D 02 00 00         MOV dword ptr [ESI + 0x23d],EDX
0058D78F  C7 86 49 02 00 00 FF 00 00 00  MOV dword ptr [ESI + 0x249],0xff
0058D799  8B C6                     MOV EAX,ESI
0058D79B  5F                        POP EDI
0058D79C  5E                        POP ESI
0058D79D  C3                        RET
