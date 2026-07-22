STColl3C::sub_005FA8B0:
005FA8B0  55                        PUSH EBP
005FA8B1  8B EC                     MOV EBP,ESP
005FA8B3  83 EC 10                  SUB ESP,0x10
005FA8B6  66 8B 81 5D 02 00 00      MOV AX,word ptr [ECX + 0x25d]
005FA8BD  66 8B 91 65 02 00 00      MOV DX,word ptr [ECX + 0x265]
005FA8C4  53                        PUSH EBX
005FA8C5  33 DB                     XOR EBX,EBX
005FA8C7  56                        PUSH ESI
005FA8C8  66 8B B1 61 02 00 00      MOV SI,word ptr [ECX + 0x261]
005FA8CF  66 85 C0                  TEST AX,AX
005FA8D2  57                        PUSH EDI
005FA8D3  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
005FA8D6  7C 71                     JL 0x005fa949
005FA8D8  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
005FA8DF  66 3B C7                  CMP AX,DI
005FA8E2  7D 65                     JGE 0x005fa949
005FA8E4  66 85 F6                  TEST SI,SI
005FA8E7  7C 60                     JL 0x005fa949
005FA8E9  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
005FA8F0  7D 57                     JGE 0x005fa949
005FA8F2  66 85 D2                  TEST DX,DX
005FA8F5  7C 52                     JL 0x005fa949
005FA8F7  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
005FA8FE  7D 49                     JGE 0x005fa949
005FA900  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
005FA907  0F BF D2                  MOVSX EDX,DX
005FA90A  0F AF DA                  IMUL EBX,EDX
005FA90D  0F BF D7                  MOVSX EDX,DI
005FA910  0F BF F6                  MOVSX ESI,SI
005FA913  0F AF D6                  IMUL EDX,ESI
005FA916  0F BF C0                  MOVSX EAX,AX
005FA919  03 DA                     ADD EBX,EDX
005FA91B  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
005FA921  03 D8                     ADD EBX,EAX
005FA923  8B 34 DA                  MOV ESI,dword ptr [EDX + EBX*0x8]
005FA926  85 F6                     TEST ESI,ESI
005FA928  74 1C                     JZ 0x005fa946
005FA92A  81 7E 20 E8 03 00 00      CMP dword ptr [ESI + 0x20],0x3e8
005FA931  75 3F                     JNZ 0x005fa972
005FA933  8B 06                     MOV EAX,dword ptr [ESI]
005FA935  8B CE                     MOV ECX,ESI
005FA937  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
005FA93A  83 F8 6E                  CMP EAX,0x6e
005FA93D  75 33                     JNZ 0x005fa972
005FA93F  BF 01 00 00 00            MOV EDI,0x1
005FA944  EB 2F                     JMP 0x005fa975
LAB_005fa946:
005FA946  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_005fa949:
005FA949  8B 89 55 02 00 00         MOV ECX,dword ptr [ECX + 0x255]
005FA94F  85 C9                     TEST ECX,ECX
005FA951  74 60                     JZ 0x005fa9b3
005FA953  8D 55 F0                  LEA EDX,[EBP + -0x10]
005FA956  52                        PUSH EDX
005FA957  51                        PUSH ECX
005FA958  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005FA95E  E8 6D B9 0E 00            CALL 0x006e62d0
005FA963  83 F8 FC                  CMP EAX,-0x4
005FA966  74 4B                     JZ 0x005fa9b3
005FA968  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005FA96B  BF 01 00 00 00            MOV EDI,0x1
005FA970  EB 03                     JMP 0x005fa975
LAB_005fa972:
005FA972  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_005fa975:
005FA975  85 F6                     TEST ESI,ESI
005FA977  74 2F                     JZ 0x005fa9a8
005FA979  8D 45 FA                  LEA EAX,[EBP + -0x6]
005FA97C  8D 4D FC                  LEA ECX,[EBP + -0x4]
005FA97F  50                        PUSH EAX
005FA980  8D 55 FE                  LEA EDX,[EBP + -0x2]
005FA983  51                        PUSH ECX
005FA984  52                        PUSH EDX
005FA985  8B CE                     MOV ECX,ESI
005FA987  E8 39 6F E0 FF            CALL 0x004018c5
005FA98C  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
005FA990  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005FA993  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
005FA997  89 01                     MOV dword ptr [ECX],EAX
005FA999  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005FA99C  0F BF 4D FA               MOVSX ECX,word ptr [EBP + -0x6]
005FA9A0  89 10                     MOV dword ptr [EAX],EDX
005FA9A2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005FA9A5  41                        INC ECX
005FA9A6  89 0A                     MOV dword ptr [EDX],ECX
LAB_005fa9a8:
005FA9A8  8B C7                     MOV EAX,EDI
005FA9AA  5F                        POP EDI
005FA9AB  5E                        POP ESI
005FA9AC  5B                        POP EBX
005FA9AD  8B E5                     MOV ESP,EBP
005FA9AF  5D                        POP EBP
005FA9B0  C2 0C 00                  RET 0xc
LAB_005fa9b3:
005FA9B3  5F                        POP EDI
005FA9B4  8B C3                     MOV EAX,EBX
005FA9B6  5E                        POP ESI
005FA9B7  5B                        POP EBX
005FA9B8  8B E5                     MOV ESP,EBP
005FA9BA  5D                        POP EBP
005FA9BB  C2 0C 00                  RET 0xc
