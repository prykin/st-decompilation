FUN_0074ae34:
0074AE34  56                        PUSH ESI
0074AE35  8B F1                     MOV ESI,ECX
0074AE37  FF B6 3C 01 00 00         PUSH dword ptr [ESI + 0x13c]
0074AE3D  8B 06                     MOV EAX,dword ptr [ESI]
0074AE3F  83 A6 DC 00 00 00 00      AND dword ptr [ESI + 0xdc],0x0
0074AE46  C7 86 E0 00 00 00 40 4B 4C 00  MOV dword ptr [ESI + 0xe0],0x4c4b40
0074AE50  FF B6 38 01 00 00         PUSH dword ptr [ESI + 0x138]
0074AE56  FF 90 B4 00 00 00         CALL dword ptr [EAX + 0xb4]
0074AE5C  8B CE                     MOV ECX,ESI
0074AE5E  E8 B3 FF FF FF            CALL 0x0074ae16
0074AE63  5E                        POP ESI
0074AE64  C2 04 00                  RET 0x4
