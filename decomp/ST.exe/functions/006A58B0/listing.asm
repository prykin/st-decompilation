FUN_006a58b0:
006A58B0  55                        PUSH EBP
006A58B1  8B EC                     MOV EBP,ESP
006A58B3  53                        PUSH EBX
006A58B4  56                        PUSH ESI
006A58B5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006A58B8  33 C0                     XOR EAX,EAX
006A58BA  85 F6                     TEST ESI,ESI
006A58BC  57                        PUSH EDI
006A58BD  74 71                     JZ 0x006a5930
006A58BF  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006A58C2  85 DB                     TEST EBX,EBX
006A58C4  74 6A                     JZ 0x006a5930
006A58C6  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006A58C9  85 FF                     TEST EDI,EDI
006A58CB  74 63                     JZ 0x006a5930
006A58CD  33 C9                     XOR ECX,ECX
LAB_006a58cf:
006A58CF  8B 54 8F 18               MOV EDX,dword ptr [EDI + ECX*0x4 + 0x18]
006A58D3  2B 54 8B 18               SUB EDX,dword ptr [EBX + ECX*0x4 + 0x18]
006A58D7  89 54 8E 18               MOV dword ptr [ESI + ECX*0x4 + 0x18],EDX
006A58DB  8B 54 8F 04               MOV EDX,dword ptr [EDI + ECX*0x4 + 0x4]
006A58DF  2B 54 8B 04               SUB EDX,dword ptr [EBX + ECX*0x4 + 0x4]
006A58E3  89 54 8E 04               MOV dword ptr [ESI + ECX*0x4 + 0x4],EDX
006A58E7  83 7C 8E 18 00            CMP dword ptr [ESI + ECX*0x4 + 0x18],0x0
006A58EC  75 04                     JNZ 0x006a58f2
006A58EE  85 D2                     TEST EDX,EDX
006A58F0  74 17                     JZ 0x006a5909
LAB_006a58f2:
006A58F2  85 C9                     TEST ECX,ECX
006A58F4  74 13                     JZ 0x006a5909
006A58F6  83 F9 02                  CMP ECX,0x2
006A58F9  75 09                     JNZ 0x006a5904
006A58FB  F6 05 78 C1 7E 00 10      TEST byte ptr [0x007ec178],0x10
006A5902  74 05                     JZ 0x006a5909
LAB_006a5904:
006A5904  B8 01 00 00 00            MOV EAX,0x1
LAB_006a5909:
006A5909  41                        INC ECX
006A590A  83 F9 05                  CMP ECX,0x5
006A590D  7C C0                     JL 0x006a58cf
006A590F  8B 4F 2C                  MOV ECX,dword ptr [EDI + 0x2c]
006A5912  8B 53 2C                  MOV EDX,dword ptr [EBX + 0x2c]
006A5915  2B CA                     SUB ECX,EDX
006A5917  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
006A591A  8B 57 30                  MOV EDX,dword ptr [EDI + 0x30]
006A591D  8B 4B 30                  MOV ECX,dword ptr [EBX + 0x30]
006A5920  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
006A5926  2B D1                     SUB EDX,ECX
006A5928  5F                        POP EDI
006A5929  89 56 30                  MOV dword ptr [ESI + 0x30],EDX
006A592C  5E                        POP ESI
006A592D  5B                        POP EBX
006A592E  5D                        POP EBP
006A592F  C3                        RET
LAB_006a5930:
006A5930  68 34 C9 7E 00            PUSH 0x7ec934
006A5935  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A593A  6A 00                     PUSH 0x0
006A593C  6A 00                     PUSH 0x0
006A593E  6A 00                     PUSH 0x0
006A5940  6A 00                     PUSH 0x0
006A5942  E8 59 B6 08 00            CALL 0x00730fa0
006A5947  83 C4 18                  ADD ESP,0x18
006A594A  83 F8 01                  CMP EAX,0x1
006A594D  75 01                     JNZ 0x006a5950
006A594F  CC                        INT3
LAB_006a5950:
006A5950  5F                        POP EDI
006A5951  5E                        POP ESI
006A5952  33 C0                     XOR EAX,EAX
006A5954  5B                        POP EBX
006A5955  5D                        POP EBP
006A5956  C3                        RET
