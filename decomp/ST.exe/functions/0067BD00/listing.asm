FUN_0067bd00:
0067BD00  55                        PUSH EBP
0067BD01  8B EC                     MOV EBP,ESP
0067BD03  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067BD06  53                        PUSH EBX
0067BD07  56                        PUSH ESI
0067BD08  33 C9                     XOR ECX,ECX
0067BD0A  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
0067BD0D  57                        PUSH EDI
0067BD0E  85 F6                     TEST ESI,ESI
0067BD10  7E 24                     JLE 0x0067bd36
0067BD12  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0067BD15  3B CE                     CMP ECX,ESI
LAB_0067bd17:
0067BD17  73 18                     JNC 0x0067bd31
0067BD19  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0067BD1C  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
0067BD1F  0F AF C1                  IMUL EAX,ECX
0067BD22  03 C3                     ADD EAX,EBX
0067BD24  85 C0                     TEST EAX,EAX
0067BD26  74 09                     JZ 0x0067bd31
0067BD28  33 DB                     XOR EBX,EBX
0067BD2A  66 8B 18                  MOV BX,word ptr [EAX]
0067BD2D  3B DF                     CMP EBX,EDI
0067BD2F  74 07                     JZ 0x0067bd38
LAB_0067bd31:
0067BD31  41                        INC ECX
0067BD32  3B CE                     CMP ECX,ESI
0067BD34  7C E1                     JL 0x0067bd17
LAB_0067bd36:
0067BD36  33 C0                     XOR EAX,EAX
LAB_0067bd38:
0067BD38  5F                        POP EDI
0067BD39  5E                        POP ESI
0067BD3A  5B                        POP EBX
0067BD3B  5D                        POP EBP
0067BD3C  C3                        RET
