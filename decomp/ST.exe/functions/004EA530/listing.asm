FUN_004ea530:
004EA530  55                        PUSH EBP
004EA531  8B EC                     MOV EBP,ESP
004EA533  56                        PUSH ESI
004EA534  57                        PUSH EDI
004EA535  8B F9                     MOV EDI,ECX
004EA537  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004EA53A  66 85 C9                  TEST CX,CX
004EA53D  0F 8C 9C 00 00 00         JL 0x004ea5df
004EA543  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
004EA54A  66 3B CE                  CMP CX,SI
004EA54D  0F 8D 8C 00 00 00         JGE 0x004ea5df
004EA553  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004EA556  66 85 D2                  TEST DX,DX
004EA559  0F 8C 80 00 00 00         JL 0x004ea5df
004EA55F  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004EA566  7D 77                     JGE 0x004ea5df
004EA568  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004EA56B  66 85 C0                  TEST AX,AX
004EA56E  7C 6F                     JL 0x004ea5df
004EA570  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004EA577  7D 66                     JGE 0x004ea5df
004EA579  53                        PUSH EBX
004EA57A  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004EA581  0F BF C0                  MOVSX EAX,AX
004EA584  0F AF D8                  IMUL EBX,EAX
004EA587  0F BF C6                  MOVSX EAX,SI
004EA58A  0F BF D2                  MOVSX EDX,DX
004EA58D  0F AF C2                  IMUL EAX,EDX
004EA590  03 D8                     ADD EBX,EAX
004EA592  0F BF C1                  MOVSX EAX,CX
004EA595  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004EA59B  03 D8                     ADD EBX,EAX
004EA59D  8B 34 D9                  MOV ESI,dword ptr [ECX + EBX*0x8]
004EA5A0  5B                        POP EBX
004EA5A1  85 F6                     TEST ESI,ESI
004EA5A3  74 3A                     JZ 0x004ea5df
004EA5A5  8B 16                     MOV EDX,dword ptr [ESI]
004EA5A7  8B CE                     MOV ECX,ESI
004EA5A9  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004EA5AC  83 F8 37                  CMP EAX,0x37
004EA5AF  74 0C                     JZ 0x004ea5bd
004EA5B1  8B 06                     MOV EAX,dword ptr [ESI]
004EA5B3  8B CE                     MOV ECX,ESI
004EA5B5  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004EA5B8  83 F8 6C                  CMP EAX,0x6c
004EA5BB  75 22                     JNZ 0x004ea5df
LAB_004ea5bd:
004EA5BD  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
004EA5C0  33 C9                     XOR ECX,ECX
004EA5C2  66 8B 4F 32               MOV CX,word ptr [EDI + 0x32]
004EA5C6  51                        PUSH ECX
004EA5C7  52                        PUSH EDX
004EA5C8  8B CE                     MOV ECX,ESI
004EA5CA  E8 DC 78 F1 FF            CALL 0x00401eab
004EA5CF  85 C0                     TEST EAX,EAX
004EA5D1  74 0C                     JZ 0x004ea5df
004EA5D3  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004EA5D6  56                        PUSH ESI
004EA5D7  50                        PUSH EAX
004EA5D8  8B CF                     MOV ECX,EDI
004EA5DA  E8 05 B3 F1 FF            CALL 0x004058e4
LAB_004ea5df:
004EA5DF  5F                        POP EDI
004EA5E0  33 C0                     XOR EAX,EAX
004EA5E2  5E                        POP ESI
004EA5E3  5D                        POP EBP
004EA5E4  C2 0C 00                  RET 0xc
