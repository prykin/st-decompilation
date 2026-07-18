FUN_0074837c:
0074837C  56                        PUSH ESI
0074837D  57                        PUSH EDI
0074837E  8B F9                     MOV EDI,ECX
00748380  8B 87 98 00 00 00         MOV EAX,dword ptr [EDI + 0x98]
00748386  8D B7 98 00 00 00         LEA ESI,[EDI + 0x98]
0074838C  85 C0                     TEST EAX,EAX
0074838E  74 09                     JZ 0x00748399
00748390  8B 08                     MOV ECX,dword ptr [EAX]
00748392  50                        PUSH EAX
00748393  FF 51 08                  CALL dword ptr [ECX + 0x8]
00748396  83 26 00                  AND dword ptr [ESI],0x0
LAB_00748399:
00748399  8B 87 9C 00 00 00         MOV EAX,dword ptr [EDI + 0x9c]
0074839F  8D B7 9C 00 00 00         LEA ESI,[EDI + 0x9c]
007483A5  85 C0                     TEST EAX,EAX
007483A7  74 09                     JZ 0x007483b2
007483A9  8B 08                     MOV ECX,dword ptr [EAX]
007483AB  50                        PUSH EAX
007483AC  FF 51 08                  CALL dword ptr [ECX + 0x8]
007483AF  83 26 00                  AND dword ptr [ESI],0x0
LAB_007483b2:
007483B2  5F                        POP EDI
007483B3  33 C0                     XOR EAX,EAX
007483B5  5E                        POP ESI
007483B6  C3                        RET
