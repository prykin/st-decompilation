FUN_006fa7a0:
006FA7A0  55                        PUSH EBP
006FA7A1  8B EC                     MOV EBP,ESP
006FA7A3  83 EC 14                  SUB ESP,0x14
006FA7A6  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FA7A9  53                        PUSH EBX
006FA7AA  48                        DEC EAX
006FA7AB  56                        PUSH ESI
006FA7AC  57                        PUSH EDI
006FA7AD  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006FA7B7  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FA7BA  0F 88 F5 05 00 00         JS 0x006fadb5
006FA7C0  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
LAB_006fa7c3:
006FA7C3  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006FA7C6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FA7C9  83 F8 01                  CMP EAX,0x1
006FA7CC  75 49                     JNZ 0x006fa817
006FA7CE  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FA7D1  48                        DEC EAX
006FA7D2  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FA7D5  0F 88 DA 05 00 00         JS 0x006fadb5
006FA7DB  33 C0                     XOR EAX,EAX
006FA7DD  8A 01                     MOV AL,byte ptr [ECX]
006FA7DF  41                        INC ECX
006FA7E0  85 C0                     TEST EAX,EAX
006FA7E2  74 2C                     JZ 0x006fa810
006FA7E4  8B D6                     MOV EDX,ESI
LAB_006fa7e6:
006FA7E6  A8 80                     TEST AL,0x80
006FA7E8  74 16                     JZ 0x006fa800
006FA7EA  A8 40                     TEST AL,0x40
006FA7EC  74 06                     JZ 0x006fa7f4
006FA7EE  41                        INC ECX
006FA7EF  83 E0 3F                  AND EAX,0x3f
006FA7F2  EB 0F                     JMP 0x006fa803
LAB_006fa7f4:
006FA7F4  8B F8                     MOV EDI,EAX
006FA7F6  83 E7 3F                  AND EDI,0x3f
006FA7F9  03 CF                     ADD ECX,EDI
006FA7FB  83 E0 3F                  AND EAX,0x3f
006FA7FE  EB 03                     JMP 0x006fa803
LAB_006fa800:
006FA800  83 E0 7F                  AND EAX,0x7f
LAB_006fa803:
006FA803  2B D0                     SUB EDX,EAX
006FA805  85 D2                     TEST EDX,EDX
006FA807  7E 07                     JLE 0x006fa810
006FA809  33 C0                     XOR EAX,EAX
006FA80B  8A 01                     MOV AL,byte ptr [ECX]
006FA80D  41                        INC ECX
006FA80E  EB D6                     JMP 0x006fa7e6
LAB_006fa810:
006FA810  C7 45 34 02 00 00 00      MOV dword ptr [EBP + 0x34],0x2
LAB_006fa817:
006FA817  33 C0                     XOR EAX,EAX
006FA819  8A 01                     MOV AL,byte ptr [ECX]
006FA81B  41                        INC ECX
006FA81C  85 C0                     TEST EAX,EAX
006FA81E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006FA821  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FA824  0F 84 4A 05 00 00         JZ 0x006fad74
006FA82A  8B 7D 3C                  MOV EDI,dword ptr [EBP + 0x3c]
006FA82D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006FA830  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006FA833  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006FA836  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
006FA839  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006FA83C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006FA83F  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_006fa842:
006FA842  A8 80                     TEST AL,0x80
006FA844  74 20                     JZ 0x006fa866
006FA846  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FA849  83 E0 3F                  AND EAX,0x3f
006FA84C  3B C3                     CMP EAX,EBX
006FA84E  7F 38                     JG 0x006fa888
006FA850  F6 45 F0 40               TEST byte ptr [EBP + -0x10],0x40
006FA854  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA857  74 06                     JZ 0x006fa85f
006FA859  43                        INC EBX
006FA85A  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FA85D  EB 11                     JMP 0x006fa870
LAB_006fa85f:
006FA85F  03 D8                     ADD EBX,EAX
006FA861  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FA864  EB 0A                     JMP 0x006fa870
LAB_006fa866:
006FA866  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FA869  83 E0 7F                  AND EAX,0x7f
006FA86C  3B C3                     CMP EAX,EBX
006FA86E  7F 18                     JG 0x006fa888
LAB_006fa870:
006FA870  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FA873  2B D8                     SUB EBX,EAX
006FA875  33 C0                     XOR EAX,EAX
006FA877  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FA87A  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FA87D  8A 03                     MOV AL,byte ptr [EBX]
006FA87F  43                        INC EBX
006FA880  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006FA883  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FA886  EB BA                     JMP 0x006fa842
LAB_006fa888:
006FA888  2B C3                     SUB EAX,EBX
006FA88A  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006FA88D  81 E3 C0 00 00 00         AND EBX,0xc0
006FA893  80 FB 80                  CMP BL,0x80
006FA896  75 06                     JNZ 0x006fa89e
006FA898  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FA89B  01 5D 1C                  ADD dword ptr [EBP + 0x1c],EBX
LAB_006fa89e:
006FA89E  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006FA8A1  3B C3                     CMP EAX,EBX
006FA8A3  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FA8A6  0F 8F 72 02 00 00         JG 0x006fab1e
006FA8AC  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006FA8AF  81 E3 80 00 00 00         AND EBX,0x80
006FA8B5  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
LAB_006fa8b8:
006FA8B8  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FA8BB  2B D8                     SUB EBX,EAX
006FA8BD  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FA8C0  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006FA8C3  85 DB                     TEST EBX,EBX
006FA8C5  0F 84 EB 01 00 00         JZ 0x006faab6
006FA8CB  F6 45 F0 40               TEST byte ptr [EBP + -0x10],0x40
006FA8CF  0F 84 EC 00 00 00         JZ 0x006fa9c1
006FA8D5  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FA8D8  33 D2                     XOR EDX,EDX
006FA8DA  33 DB                     XOR EBX,EBX
006FA8DC  8A 17                     MOV DL,byte ptr [EDI]
006FA8DE  8B 7D 38                  MOV EDI,dword ptr [EBP + 0x38]
006FA8E1  8A 1C 3A                  MOV BL,byte ptr [EDX + EDI*0x1]
006FA8E4  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FA8E7  47                        INC EDI
006FA8E8  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006FA8EB  85 F6                     TEST ESI,ESI
006FA8ED  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FA8F0  7E 57                     JLE 0x006fa949
006FA8F2  83 FE 01                  CMP ESI,0x1
006FA8F5  75 06                     JNZ 0x006fa8fd
006FA8F7  BE 02 00 00 00            MOV ESI,0x2
006FA8FC  48                        DEC EAX
LAB_006fa8fd:
006FA8FD  85 C0                     TEST EAX,EAX
006FA8FF  0F 8E FF 01 00 00         JLE 0x006fab04
006FA905  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006FA908  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006FA90B  33 F6                     XOR ESI,ESI
006FA90D  66 8B 32                  MOV SI,word ptr [EDX]
006FA910  3B FE                     CMP EDI,ESI
006FA912  77 15                     JA 0x006fa929
006FA914  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FA917  88 19                     MOV byte ptr [ECX],BL
006FA919  83 C2 02                  ADD EDX,0x2
006FA91C  41                        INC ECX
006FA91D  47                        INC EDI
006FA91E  33 F6                     XOR ESI,ESI
006FA920  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006FA923  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006FA926  48                        DEC EAX
006FA927  EB 26                     JMP 0x006fa94f
LAB_006fa929:
006FA929  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FA92C  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FA92F  33 DB                     XOR EBX,EBX
006FA931  83 C2 02                  ADD EDX,0x2
006FA934  8A 1F                     MOV BL,byte ptr [EDI]
006FA936  41                        INC ECX
006FA937  47                        INC EDI
006FA938  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006FA93B  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
006FA93E  33 F6                     XOR ESI,ESI
006FA940  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
006FA943  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006FA946  48                        DEC EAX
006FA947  EB 06                     JMP 0x006fa94f
LAB_006fa949:
006FA949  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FA94C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_006fa94f:
006FA94F  85 C0                     TEST EAX,EAX
006FA951  0F 8E 7E 01 00 00         JLE 0x006faad5
LAB_006fa957:
006FA957  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FA95A  33 F6                     XOR ESI,ESI
006FA95C  66 8B 32                  MOV SI,word ptr [EDX]
006FA95F  3B DE                     CMP EBX,ESI
006FA961  77 05                     JA 0x006fa968
006FA963  8A 5D EC                  MOV BL,byte ptr [EBP + -0x14]
006FA966  EB 0A                     JMP 0x006fa972
LAB_006fa968:
006FA968  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FA96B  33 DB                     XOR EBX,EBX
006FA96D  8A 1F                     MOV BL,byte ptr [EDI]
006FA96F  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
LAB_006fa972:
006FA972  88 19                     MOV byte ptr [ECX],BL
006FA974  83 C2 02                  ADD EDX,0x2
006FA977  41                        INC ECX
006FA978  47                        INC EDI
006FA979  48                        DEC EAX
006FA97A  BE 01 00 00 00            MOV ESI,0x1
006FA97F  85 C0                     TEST EAX,EAX
006FA981  7E 33                     JLE 0x006fa9b6
006FA983  48                        DEC EAX
006FA984  BE 02 00 00 00            MOV ESI,0x2
006FA989  85 C0                     TEST EAX,EAX
006FA98B  7E 29                     JLE 0x006fa9b6
006FA98D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FA990  33 F6                     XOR ESI,ESI
006FA992  66 8B 32                  MOV SI,word ptr [EDX]
006FA995  3B DE                     CMP EBX,ESI
006FA997  77 05                     JA 0x006fa99e
006FA999  8A 5D EC                  MOV BL,byte ptr [EBP + -0x14]
006FA99C  EB 0A                     JMP 0x006fa9a8
LAB_006fa99e:
006FA99E  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FA9A1  33 DB                     XOR EBX,EBX
006FA9A3  8A 1F                     MOV BL,byte ptr [EDI]
006FA9A5  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
LAB_006fa9a8:
006FA9A8  88 19                     MOV byte ptr [ECX],BL
006FA9AA  83 C2 02                  ADD EDX,0x2
006FA9AD  41                        INC ECX
006FA9AE  47                        INC EDI
006FA9AF  33 F6                     XOR ESI,ESI
006FA9B1  48                        DEC EAX
006FA9B2  85 C0                     TEST EAX,EAX
006FA9B4  7F A1                     JG 0x006fa957
LAB_006fa9b6:
006FA9B6  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006FA9B9  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006FA9BC  E9 14 01 00 00            JMP 0x006faad5
LAB_006fa9c1:
006FA9C1  85 F6                     TEST ESI,ESI
006FA9C3  7E 53                     JLE 0x006faa18
006FA9C5  83 FE 01                  CMP ESI,0x1
006FA9C8  75 0D                     JNZ 0x006fa9d7
006FA9CA  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FA9CD  46                        INC ESI
006FA9CE  48                        DEC EAX
006FA9CF  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FA9D2  BE 02 00 00 00            MOV ESI,0x2
LAB_006fa9d7:
006FA9D7  85 C0                     TEST EAX,EAX
006FA9D9  0F 8E F6 00 00 00         JLE 0x006faad5
006FA9DF  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FA9E2  33 F6                     XOR ESI,ESI
006FA9E4  66 8B 32                  MOV SI,word ptr [EDX]
006FA9E7  3B DE                     CMP EBX,ESI
006FA9E9  77 0C                     JA 0x006fa9f7
006FA9EB  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FA9EE  33 DB                     XOR EBX,EBX
006FA9F0  8A 1E                     MOV BL,byte ptr [ESI]
006FA9F2  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006FA9F5  EB 07                     JMP 0x006fa9fe
LAB_006fa9f7:
006FA9F7  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FA9FA  33 DB                     XOR EBX,EBX
006FA9FC  8A 1F                     MOV BL,byte ptr [EDI]
LAB_006fa9fe:
006FA9FE  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
006FAA01  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FAA04  88 19                     MOV byte ptr [ECX],BL
006FAA06  83 C2 02                  ADD EDX,0x2
006FAA09  41                        INC ECX
006FAA0A  47                        INC EDI
006FAA0B  46                        INC ESI
006FAA0C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006FAA0F  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FAA12  33 F6                     XOR ESI,ESI
006FAA14  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006FAA17  48                        DEC EAX
LAB_006faa18:
006FAA18  85 C0                     TEST EAX,EAX
006FAA1A  0F 8E B5 00 00 00         JLE 0x006faad5
LAB_006faa20:
006FAA20  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FAA23  33 F6                     XOR ESI,ESI
006FAA25  66 8B 32                  MOV SI,word ptr [EDX]
006FAA28  3B DE                     CMP EBX,ESI
006FAA2A  77 0C                     JA 0x006faa38
006FAA2C  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FAA2F  33 DB                     XOR EBX,EBX
006FAA31  8A 1E                     MOV BL,byte ptr [ESI]
006FAA33  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006FAA36  EB 07                     JMP 0x006faa3f
LAB_006faa38:
006FAA38  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FAA3B  33 DB                     XOR EBX,EBX
006FAA3D  8A 1F                     MOV BL,byte ptr [EDI]
LAB_006faa3f:
006FAA3F  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
006FAA42  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FAA45  88 19                     MOV byte ptr [ECX],BL
006FAA47  83 C2 02                  ADD EDX,0x2
006FAA4A  41                        INC ECX
006FAA4B  47                        INC EDI
006FAA4C  46                        INC ESI
006FAA4D  48                        DEC EAX
006FAA4E  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FAA51  BE 01 00 00 00            MOV ESI,0x1
006FAA56  85 C0                     TEST EAX,EAX
006FAA58  0F 8E 58 FF FF FF         JLE 0x006fa9b6
006FAA5E  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FAA61  46                        INC ESI
006FAA62  48                        DEC EAX
006FAA63  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FAA66  BE 02 00 00 00            MOV ESI,0x2
006FAA6B  85 C0                     TEST EAX,EAX
006FAA6D  0F 8E 43 FF FF FF         JLE 0x006fa9b6
006FAA73  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FAA76  33 F6                     XOR ESI,ESI
006FAA78  66 8B 32                  MOV SI,word ptr [EDX]
006FAA7B  3B DE                     CMP EBX,ESI
006FAA7D  77 0C                     JA 0x006faa8b
006FAA7F  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FAA82  33 DB                     XOR EBX,EBX
006FAA84  8A 1E                     MOV BL,byte ptr [ESI]
006FAA86  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006FAA89  EB 07                     JMP 0x006faa92
LAB_006faa8b:
006FAA8B  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FAA8E  33 DB                     XOR EBX,EBX
006FAA90  8A 1F                     MOV BL,byte ptr [EDI]
LAB_006faa92:
006FAA92  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
006FAA95  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FAA98  88 19                     MOV byte ptr [ECX],BL
006FAA9A  83 C2 02                  ADD EDX,0x2
006FAA9D  41                        INC ECX
006FAA9E  47                        INC EDI
006FAA9F  46                        INC ESI
006FAAA0  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FAAA3  33 F6                     XOR ESI,ESI
006FAAA5  48                        DEC EAX
006FAAA6  85 C0                     TEST EAX,EAX
006FAAA8  0F 8F 72 FF FF FF         JG 0x006faa20
006FAAAE  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006FAAB1  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006FAAB4  EB 1F                     JMP 0x006faad5
LAB_006faab6:
006FAAB6  48                        DEC EAX
006FAAB7  78 1C                     JS 0x006faad5
006FAAB9  40                        INC EAX
LAB_006faaba:
006FAABA  83 FE 01                  CMP ESI,0x1
006FAABD  74 05                     JZ 0x006faac4
006FAABF  41                        INC ECX
006FAAC0  47                        INC EDI
006FAAC1  83 C2 02                  ADD EDX,0x2
LAB_006faac4:
006FAAC4  46                        INC ESI
006FAAC5  83 FE 02                  CMP ESI,0x2
006FAAC8  7E 02                     JLE 0x006faacc
006FAACA  33 F6                     XOR ESI,ESI
LAB_006faacc:
006FAACC  48                        DEC EAX
006FAACD  75 EB                     JNZ 0x006faaba
006FAACF  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006FAAD2  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
LAB_006faad5:
006FAAD5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FAAD8  85 DB                     TEST EBX,EBX
006FAADA  7E 40                     JLE 0x006fab1c
006FAADC  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FAADF  33 C0                     XOR EAX,EAX
006FAAE1  8A 03                     MOV AL,byte ptr [EBX]
006FAAE3  8B D8                     MOV EBX,EAX
006FAAE5  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006FAAE8  81 E3 80 00 00 00         AND EBX,0x80
006FAAEE  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006FAAF1  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FAAF4  43                        INC EBX
006FAAF5  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FAAF8  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006FAAFB  85 DB                     TEST EBX,EBX
006FAAFD  74 0D                     JZ 0x006fab0c
006FAAFF  83 E0 3F                  AND EAX,0x3f
006FAB02  EB 0B                     JMP 0x006fab0f
LAB_006fab04:
006FAB04  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FAB07  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006FAB0A  EB C9                     JMP 0x006faad5
LAB_006fab0c:
006FAB0C  83 E0 7F                  AND EAX,0x7f
LAB_006fab0f:
006FAB0F  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FAB12  3B C3                     CMP EAX,EBX
006FAB14  0F 8E 9E FD FF FF         JLE 0x006fa8b8
006FAB1A  EB 02                     JMP 0x006fab1e
LAB_006fab1c:
006FAB1C  33 C0                     XOR EAX,EAX
LAB_006fab1e:
006FAB1E  2B C3                     SUB EAX,EBX
006FAB20  85 DB                     TEST EBX,EBX
006FAB22  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006FAB25  0F 8E F1 01 00 00         JLE 0x006fad1c
006FAB2B  F6 C3 80                  TEST BL,0x80
006FAB2E  0F 84 E8 01 00 00         JZ 0x006fad1c
006FAB34  F6 C3 40                  TEST BL,0x40
006FAB37  0F 84 EF 00 00 00         JZ 0x006fac2c
006FAB3D  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FAB40  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
006FAB43  33 D2                     XOR EDX,EDX
006FAB45  8A 17                     MOV DL,byte ptr [EDI]
006FAB47  8B FA                     MOV EDI,EDX
006FAB49  33 D2                     XOR EDX,EDX
006FAB4B  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
006FAB4E  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FAB51  43                        INC EBX
006FAB52  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006FAB55  85 F6                     TEST ESI,ESI
006FAB57  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FAB5A  7E 50                     JLE 0x006fabac
006FAB5C  83 FE 01                  CMP ESI,0x1
006FAB5F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FAB62  75 01                     JNZ 0x006fab65
006FAB64  4E                        DEC ESI
LAB_006fab65:
006FAB65  85 F6                     TEST ESI,ESI
006FAB67  0F 8E AC 01 00 00         JLE 0x006fad19
006FAB6D  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FAB70  33 FF                     XOR EDI,EDI
006FAB72  66 8B 3B                  MOV DI,word ptr [EBX]
006FAB75  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FAB78  3B DF                     CMP EBX,EDI
006FAB7A  77 13                     JA 0x006fab8f
006FAB7C  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FAB7F  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FAB82  88 11                     MOV byte ptr [ECX],DL
006FAB84  83 C3 02                  ADD EBX,0x2
006FAB87  41                        INC ECX
006FAB88  47                        INC EDI
006FAB89  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FAB8C  4E                        DEC ESI
006FAB8D  EB 23                     JMP 0x006fabb2
LAB_006fab8f:
006FAB8F  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FAB92  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FAB95  33 D2                     XOR EDX,EDX
006FAB97  8A 17                     MOV DL,byte ptr [EDI]
006FAB99  8A 14 1A                  MOV DL,byte ptr [EDX + EBX*0x1]
006FAB9C  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FAB9F  88 11                     MOV byte ptr [ECX],DL
006FABA1  83 C3 02                  ADD EBX,0x2
006FABA4  41                        INC ECX
006FABA5  47                        INC EDI
006FABA6  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FABA9  4E                        DEC ESI
006FABAA  EB 06                     JMP 0x006fabb2
LAB_006fabac:
006FABAC  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FABAF  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006fabb2:
006FABB2  85 F6                     TEST ESI,ESI
006FABB4  0F 8E 5F 01 00 00         JLE 0x006fad19
LAB_006fabba:
006FABBA  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FABBD  33 D2                     XOR EDX,EDX
006FABBF  66 8B 13                  MOV DX,word ptr [EBX]
006FABC2  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FABC5  3B DA                     CMP EBX,EDX
006FABC7  77 05                     JA 0x006fabce
006FABC9  8A 55 EC                  MOV DL,byte ptr [EBP + -0x14]
006FABCC  EB 0A                     JMP 0x006fabd8
LAB_006fabce:
006FABCE  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FABD1  33 D2                     XOR EDX,EDX
006FABD3  8A 17                     MOV DL,byte ptr [EDI]
006FABD5  8A 14 1A                  MOV DL,byte ptr [EDX + EBX*0x1]
LAB_006fabd8:
006FABD8  88 11                     MOV byte ptr [ECX],DL
006FABDA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006FABDD  83 C2 02                  ADD EDX,0x2
006FABE0  41                        INC ECX
006FABE1  47                        INC EDI
006FABE2  4E                        DEC ESI
006FABE3  85 F6                     TEST ESI,ESI
006FABE5  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006FABE8  0F 8E 2B 01 00 00         JLE 0x006fad19
006FABEE  4E                        DEC ESI
006FABEF  85 F6                     TEST ESI,ESI
006FABF1  0F 8E 22 01 00 00         JLE 0x006fad19
006FABF7  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FABFA  33 D2                     XOR EDX,EDX
006FABFC  66 8B 13                  MOV DX,word ptr [EBX]
006FABFF  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FAC02  3B DA                     CMP EBX,EDX
006FAC04  77 05                     JA 0x006fac0b
006FAC06  8A 55 EC                  MOV DL,byte ptr [EBP + -0x14]
006FAC09  EB 0A                     JMP 0x006fac15
LAB_006fac0b:
006FAC0B  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FAC0E  33 D2                     XOR EDX,EDX
006FAC10  8A 17                     MOV DL,byte ptr [EDI]
006FAC12  8A 14 1A                  MOV DL,byte ptr [EDX + EBX*0x1]
LAB_006fac15:
006FAC15  88 11                     MOV byte ptr [ECX],DL
006FAC17  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006FAC1A  83 C2 02                  ADD EDX,0x2
006FAC1D  41                        INC ECX
006FAC1E  47                        INC EDI
006FAC1F  4E                        DEC ESI
006FAC20  85 F6                     TEST ESI,ESI
006FAC22  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006FAC25  7F 93                     JG 0x006fabba
006FAC27  E9 ED 00 00 00            JMP 0x006fad19
LAB_006fac2c:
006FAC2C  85 F6                     TEST ESI,ESI
006FAC2E  7E 58                     JLE 0x006fac88
006FAC30  83 FE 01                  CMP ESI,0x1
006FAC33  75 0E                     JNZ 0x006fac43
006FAC35  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FAC38  46                        INC ESI
006FAC39  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FAC3C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FAC3F  4E                        DEC ESI
006FAC40  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_006fac43:
006FAC43  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FAC46  85 F6                     TEST ESI,ESI
006FAC48  0F 8E CE 00 00 00         JLE 0x006fad1c
006FAC4E  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FAC51  33 F6                     XOR ESI,ESI
006FAC53  66 8B 32                  MOV SI,word ptr [EDX]
006FAC56  3B DE                     CMP EBX,ESI
006FAC58  77 0C                     JA 0x006fac66
006FAC5A  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FAC5D  33 DB                     XOR EBX,EBX
006FAC5F  8A 1E                     MOV BL,byte ptr [ESI]
006FAC61  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006FAC64  EB 07                     JMP 0x006fac6d
LAB_006fac66:
006FAC66  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FAC69  33 DB                     XOR EBX,EBX
006FAC6B  8A 1F                     MOV BL,byte ptr [EDI]
LAB_006fac6d:
006FAC6D  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
006FAC70  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FAC73  88 19                     MOV byte ptr [ECX],BL
006FAC75  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FAC78  83 C2 02                  ADD EDX,0x2
006FAC7B  41                        INC ECX
006FAC7C  47                        INC EDI
006FAC7D  43                        INC EBX
006FAC7E  4E                        DEC ESI
006FAC7F  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FAC82  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006FAC85  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_006fac88:
006FAC88  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FAC8B  85 F6                     TEST ESI,ESI
006FAC8D  0F 8E 89 00 00 00         JLE 0x006fad1c
LAB_006fac93:
006FAC93  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FAC96  33 F6                     XOR ESI,ESI
006FAC98  66 8B 32                  MOV SI,word ptr [EDX]
006FAC9B  3B DE                     CMP EBX,ESI
006FAC9D  77 0C                     JA 0x006facab
006FAC9F  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FACA2  33 DB                     XOR EBX,EBX
006FACA4  8A 1E                     MOV BL,byte ptr [ESI]
006FACA6  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006FACA9  EB 07                     JMP 0x006facb2
LAB_006facab:
006FACAB  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FACAE  33 DB                     XOR EBX,EBX
006FACB0  8A 1F                     MOV BL,byte ptr [EDI]
LAB_006facb2:
006FACB2  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
006FACB5  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FACB8  88 19                     MOV byte ptr [ECX],BL
006FACBA  83 C2 02                  ADD EDX,0x2
006FACBD  41                        INC ECX
006FACBE  47                        INC EDI
006FACBF  46                        INC ESI
006FACC0  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FACC3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FACC6  4E                        DEC ESI
006FACC7  85 F6                     TEST ESI,ESI
006FACC9  7E 4E                     JLE 0x006fad19
006FACCB  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FACCE  43                        INC EBX
006FACCF  4E                        DEC ESI
006FACD0  85 F6                     TEST ESI,ESI
006FACD2  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FACD5  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FACD8  7E 3F                     JLE 0x006fad19
006FACDA  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FACDD  33 F6                     XOR ESI,ESI
006FACDF  66 8B 32                  MOV SI,word ptr [EDX]
006FACE2  3B DE                     CMP EBX,ESI
006FACE4  77 0C                     JA 0x006facf2
006FACE6  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FACE9  33 DB                     XOR EBX,EBX
006FACEB  8A 1E                     MOV BL,byte ptr [ESI]
006FACED  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006FACF0  EB 07                     JMP 0x006facf9
LAB_006facf2:
006FACF2  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FACF5  33 DB                     XOR EBX,EBX
006FACF7  8A 1F                     MOV BL,byte ptr [EDI]
LAB_006facf9:
006FACF9  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
006FACFC  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FACFF  88 19                     MOV byte ptr [ECX],BL
006FAD01  83 C2 02                  ADD EDX,0x2
006FAD04  41                        INC ECX
006FAD05  47                        INC EDI
006FAD06  46                        INC ESI
006FAD07  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FAD0A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FAD0D  4E                        DEC ESI
006FAD0E  85 F6                     TEST ESI,ESI
006FAD10  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FAD13  0F 8F 7A FF FF FF         JG 0x006fac93
LAB_006fad19:
006FAD19  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_006fad1c:
006FAD1C  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006FAD1F  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006FAD22  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006FAD25  8B CE                     MOV ECX,ESI
006FAD27  2B CA                     SUB ECX,EDX
006FAD29  2B CF                     SUB ECX,EDI
006FAD2B  3B C1                     CMP EAX,ECX
006FAD2D  7D 37                     JGE 0x006fad66
LAB_006fad2f:
006FAD2F  81 E3 C0 00 00 00         AND EBX,0xc0
006FAD35  2B C8                     SUB ECX,EAX
006FAD37  80 FB 80                  CMP BL,0x80
006FAD3A  75 03                     JNZ 0x006fad3f
006FAD3C  01 45 1C                  ADD dword ptr [EBP + 0x1c],EAX
LAB_006fad3f:
006FAD3F  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FAD42  33 DB                     XOR EBX,EBX
006FAD44  8A 1F                     MOV BL,byte ptr [EDI]
006FAD46  8B C3                     MOV EAX,EBX
006FAD48  24 80                     AND AL,0x80
006FAD4A  47                        INC EDI
006FAD4B  84 C0                     TEST AL,AL
006FAD4D  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FAD50  8B C3                     MOV EAX,EBX
006FAD52  74 0E                     JZ 0x006fad62
006FAD54  83 E0 3F                  AND EAX,0x3f
006FAD57  F6 C3 40                  TEST BL,0x40
006FAD5A  74 06                     JZ 0x006fad62
006FAD5C  8B D7                     MOV EDX,EDI
006FAD5E  42                        INC EDX
006FAD5F  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_006fad62:
006FAD62  3B C1                     CMP EAX,ECX
006FAD64  7C C9                     JL 0x006fad2f
LAB_006fad66:
006FAD66  81 E3 C0 00 00 00         AND EBX,0xc0
006FAD6C  80 FB 80                  CMP BL,0x80
006FAD6F  75 03                     JNZ 0x006fad74
006FAD71  01 4D 1C                  ADD dword ptr [EBP + 0x1c],ECX
LAB_006fad74:
006FAD74  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006FAD77  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006FAD7A  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006FAD7D  8B 55 40                  MOV EDX,dword ptr [EBP + 0x40]
006FAD80  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
006FAD83  03 C1                     ADD EAX,ECX
006FAD85  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006FAD88  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006FAD8B  03 F8                     ADD EDI,EAX
006FAD8D  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006FAD90  03 DA                     ADD EBX,EDX
006FAD92  40                        INC EAX
006FAD93  83 F8 02                  CMP EAX,0x2
006FAD96  89 5D 3C                  MOV dword ptr [EBP + 0x3c],EBX
006FAD99  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
006FAD9C  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
006FAD9F  7E 07                     JLE 0x006fada8
006FADA1  C7 45 34 00 00 00 00      MOV dword ptr [EBP + 0x34],0x0
LAB_006fada8:
006FADA8  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FADAB  48                        DEC EAX
006FADAC  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FADAF  0F 89 0E FA FF FF         JNS 0x006fa7c3
LAB_006fadb5:
006FADB5  5F                        POP EDI
006FADB6  5E                        POP ESI
006FADB7  5B                        POP EBX
006FADB8  8B E5                     MOV ESP,EBP
006FADBA  5D                        POP EBP
006FADBB  C2 40 00                  RET 0x40
