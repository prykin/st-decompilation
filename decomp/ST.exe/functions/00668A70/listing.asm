FUN_00668a70:
00668A70  55                        PUSH EBP
00668A71  8B EC                     MOV EBP,ESP
00668A73  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00668A76  3D 84 03 00 00            CMP EAX,0x384
00668A7B  7C 0E                     JL 0x00668a8b
00668A7D  3D 8F 03 00 00            CMP EAX,0x38f
00668A82  7F 07                     JG 0x00668a8b
00668A84  B8 01 00 00 00            MOV EAX,0x1
00668A89  5D                        POP EBP
00668A8A  C3                        RET
LAB_00668a8b:
00668A8B  33 C0                     XOR EAX,EAX
00668A8D  5D                        POP EBP
00668A8E  C3                        RET
