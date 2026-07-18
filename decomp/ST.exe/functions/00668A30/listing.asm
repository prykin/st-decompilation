FUN_00668a30:
00668A30  55                        PUSH EBP
00668A31  8B EC                     MOV EBP,ESP
00668A33  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00668A36  3D 84 03 00 00            CMP EAX,0x384
00668A3B  7C 15                     JL 0x00668a52
00668A3D  3D 85 03 00 00            CMP EAX,0x385
00668A42  7E 07                     JLE 0x00668a4b
00668A44  3D 8D 03 00 00            CMP EAX,0x38d
00668A49  75 07                     JNZ 0x00668a52
LAB_00668a4b:
00668A4B  B8 01 00 00 00            MOV EAX,0x1
00668A50  5D                        POP EBP
00668A51  C3                        RET
LAB_00668a52:
00668A52  33 C0                     XOR EAX,EAX
00668A54  5D                        POP EBP
00668A55  C3                        RET
