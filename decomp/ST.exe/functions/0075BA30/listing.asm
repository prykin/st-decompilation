FUN_0075ba30:
0075BA30  55                        PUSH EBP
0075BA31  8B EC                     MOV EBP,ESP
0075BA33  83 EC 4C                  SUB ESP,0x4c
0075BA36  53                        PUSH EBX
0075BA37  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075BA3A  56                        PUSH ESI
0075BA3B  57                        PUSH EDI
0075BA3C  8B 83 0C 01 00 00         MOV EAX,dword ptr [EBX + 0x10c]
0075BA42  8B B3 AA 01 00 00         MOV ESI,dword ptr [EBX + 0x1aa]
0075BA48  85 C0                     TEST EAX,EAX
0075BA4A  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0075BA4D  74 1C                     JZ 0x0075ba6b
0075BA4F  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0075BA52  85 C0                     TEST EAX,EAX
0075BA54  75 15                     JNZ 0x0075ba6b
0075BA56  53                        PUSH EBX
0075BA57  E8 E4 03 00 00            CALL 0x0075be40
0075BA5C  85 C0                     TEST EAX,EAX
0075BA5E  75 0B                     JNZ 0x0075ba6b
LAB_0075ba60:
0075BA60  5F                        POP EDI
0075BA61  5E                        POP ESI
0075BA62  33 C0                     XOR EAX,EAX
0075BA64  5B                        POP EBX
0075BA65  8B E5                     MOV ESP,EBP
0075BA67  5D                        POP EBP
0075BA68  C2 08 00                  RET 0x8
LAB_0075ba6b:
0075BA6B  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
0075BA6E  89 5D C8                  MOV dword ptr [EBP + -0x38],EBX
0075BA71  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
0075BA78  8B 08                     MOV ECX,dword ptr [EAX]
0075BA7A  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
0075BA7D  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0075BA80  8B 83 8E 01 00 00         MOV EAX,dword ptr [EBX + 0x18e]
0075BA86  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
0075BA89  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0075BA8C  8B 7E 08                  MOV EDI,dword ptr [ESI + 0x8]
0075BA8F  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0075BA92  8D 4E 10                  LEA ECX,[ESI + 0x10]
0075BA95  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0075BA98  8D 4E 14                  LEA ECX,[ESI + 0x14]
0075BA9B  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
0075BA9E  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0075BAA1  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0075BAA4  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0075BAA7  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0075BAAA  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0075BAAD  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0075BAB0  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0075BAB3  8B 8B 52 01 00 00         MOV ECX,dword ptr [EBX + 0x152]
0075BAB9  85 C9                     TEST ECX,ECX
0075BABB  0F 8E 2A 03 00 00         JLE 0x0075bdeb
0075BAC1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075BAC4  8D 8B 56 01 00 00         LEA ECX,[EBX + 0x156]
0075BACA  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0075BACD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0075bad0:
0075BAD0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0075BAD3  83 F8 08                  CMP EAX,0x8
0075BAD6  8B 0A                     MOV ECX,dword ptr [EDX]
0075BAD8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0075BADB  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0075BADE  8B 0A                     MOV ECX,dword ptr [EDX]
0075BAE0  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0075BAE3  8B 9C 8B 3A 01 00 00      MOV EBX,dword ptr [EBX + ECX*0x4 + 0x13a]
0075BAEA  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0075BAED  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
0075BAF0  8B 54 8E 28               MOV EDX,dword ptr [ESI + ECX*0x4 + 0x28]
0075BAF4  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
0075BAF7  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0075BAFA  8B 54 8E 38               MOV EDX,dword ptr [ESI + ECX*0x4 + 0x38]
0075BAFE  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0075BB01  7D 2A                     JGE 0x0075bb2d
0075BB03  6A 00                     PUSH 0x0
0075BB05  50                        PUSH EAX
0075BB06  8D 45 B4                  LEA EAX,[EBP + -0x4c]
0075BB09  57                        PUSH EDI
0075BB0A  50                        PUSH EAX
0075BB0B  E8 10 FC FF FF            CALL 0x0075b720
0075BB10  85 C0                     TEST EAX,EAX
0075BB12  0F 84 48 FF FF FF         JZ 0x0075ba60
0075BB18  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0075BB1B  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
0075BB1E  83 F8 08                  CMP EAX,0x8
0075BB21  7D 0A                     JGE 0x0075bb2d
0075BB23  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0075BB26  B9 01 00 00 00            MOV ECX,0x1
0075BB2B  EB 2F                     JMP 0x0075bb5c
LAB_0075bb2d:
0075BB2D  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0075BB30  8D 48 F8                  LEA ECX,[EAX + -0x8]
0075BB33  8B D7                     MOV EDX,EDI
0075BB35  D3 FA                     SAR EDX,CL
0075BB37  81 E2 FF 00 00 00         AND EDX,0xff
0075BB3D  8B 8C 96 D4 00 00 00      MOV ECX,dword ptr [ESI + EDX*0x4 + 0xd4]
0075BB44  85 C9                     TEST ECX,ECX
0075BB46  74 0F                     JZ 0x0075bb57
0075BB48  2B C1                     SUB EAX,ECX
0075BB4A  33 C9                     XOR ECX,ECX
0075BB4C  8A 8C 32 D4 04 00 00      MOV CL,byte ptr [EDX + ESI*0x1 + 0x4d4]
0075BB53  8B F1                     MOV ESI,ECX
0075BB55  EB 22                     JMP 0x0075bb79
LAB_0075bb57:
0075BB57  B9 09 00 00 00            MOV ECX,0x9
LAB_0075bb5c:
0075BB5C  51                        PUSH ECX
0075BB5D  56                        PUSH ESI
0075BB5E  50                        PUSH EAX
0075BB5F  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0075BB62  57                        PUSH EDI
0075BB63  52                        PUSH EDX
0075BB64  E8 97 FC FF FF            CALL 0x0075b800
0075BB69  8B F0                     MOV ESI,EAX
0075BB6B  85 F6                     TEST ESI,ESI
0075BB6D  0F 8C ED FE FF FF         JL 0x0075ba60
0075BB73  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
0075BB76  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
LAB_0075bb79:
0075BB79  85 F6                     TEST ESI,ESI
0075BB7B  74 4D                     JZ 0x0075bbca
0075BB7D  3B C6                     CMP EAX,ESI
0075BB7F  7D 1A                     JGE 0x0075bb9b
0075BB81  56                        PUSH ESI
0075BB82  50                        PUSH EAX
0075BB83  8D 45 B4                  LEA EAX,[EBP + -0x4c]
0075BB86  57                        PUSH EDI
0075BB87  50                        PUSH EAX
0075BB88  E8 93 FB FF FF            CALL 0x0075b720
0075BB8D  85 C0                     TEST EAX,EAX
0075BB8F  0F 84 CB FE FF FF         JZ 0x0075ba60
0075BB95  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
0075BB98  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
LAB_0075bb9b:
0075BB9B  BA 01 00 00 00            MOV EDX,0x1
0075BBA0  8B CE                     MOV ECX,ESI
0075BBA2  2B C6                     SUB EAX,ESI
0075BBA4  8B DF                     MOV EBX,EDI
0075BBA6  D3 E2                     SHL EDX,CL
0075BBA8  8B C8                     MOV ECX,EAX
0075BBAA  D3 FB                     SAR EBX,CL
0075BBAC  8B 0C B5 D4 1F 7A 00      MOV ECX,dword ptr [ESI*0x4 + 0x7a1fd4]
0075BBB3  4A                        DEC EDX
0075BBB4  23 D3                     AND EDX,EBX
0075BBB6  3B D1                     CMP EDX,ECX
0075BBB8  7D 0B                     JGE 0x0075bbc5
0075BBBA  8B 34 B5 14 20 7A 00      MOV ESI,dword ptr [ESI*0x4 + 0x7a2014]
0075BBC1  03 F2                     ADD ESI,EDX
0075BBC3  EB 02                     JMP 0x0075bbc7
LAB_0075bbc5:
0075BBC5  8B F2                     MOV ESI,EDX
LAB_0075bbc7:
0075BBC7  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_0075bbca:
0075BBCA  8B 4B 30                  MOV ECX,dword ptr [EBX + 0x30]
0075BBCD  85 C9                     TEST ECX,ECX
0075BBCF  0F 84 25 01 00 00         JZ 0x0075bcfa
0075BBD5  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0075BBD8  8B 54 8D D0               MOV EDX,dword ptr [EBP + ECX*0x4 + -0x30]
0075BBDC  8D 4C 8D D0               LEA ECX,[EBP + ECX*0x4 + -0x30]
0075BBE0  03 F2                     ADD ESI,EDX
0075BBE2  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0075BBE5  89 31                     MOV dword ptr [ECX],ESI
0075BBE7  89 32                     MOV dword ptr [EDX],ESI
0075BBE9  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
0075BBEC  83 F9 01                  CMP ECX,0x1
0075BBEF  0F 8E 05 01 00 00         JLE 0x0075bcfa
0075BBF5  BB 01 00 00 00            MOV EBX,0x1
LAB_0075bbfa:
0075BBFA  83 F8 08                  CMP EAX,0x8
0075BBFD  7D 2A                     JGE 0x0075bc29
0075BBFF  6A 00                     PUSH 0x0
0075BC01  50                        PUSH EAX
0075BC02  8D 45 B4                  LEA EAX,[EBP + -0x4c]
0075BC05  57                        PUSH EDI
0075BC06  50                        PUSH EAX
0075BC07  E8 14 FB FF FF            CALL 0x0075b720
0075BC0C  85 C0                     TEST EAX,EAX
0075BC0E  0F 84 4C FE FF FF         JZ 0x0075ba60
0075BC14  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0075BC17  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
0075BC1A  83 F8 08                  CMP EAX,0x8
0075BC1D  7D 0A                     JGE 0x0075bc29
0075BC1F  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0075BC22  B9 01 00 00 00            MOV ECX,0x1
0075BC27  EB 2F                     JMP 0x0075bc58
LAB_0075bc29:
0075BC29  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0075BC2C  8D 48 F8                  LEA ECX,[EAX + -0x8]
0075BC2F  8B D7                     MOV EDX,EDI
0075BC31  D3 FA                     SAR EDX,CL
0075BC33  81 E2 FF 00 00 00         AND EDX,0xff
0075BC39  8B 8C 96 D4 00 00 00      MOV ECX,dword ptr [ESI + EDX*0x4 + 0xd4]
0075BC40  85 C9                     TEST ECX,ECX
0075BC42  74 0F                     JZ 0x0075bc53
0075BC44  2B C1                     SUB EAX,ECX
0075BC46  33 C9                     XOR ECX,ECX
0075BC48  8A 8C 32 D4 04 00 00      MOV CL,byte ptr [EDX + ESI*0x1 + 0x4d4]
0075BC4F  8B F1                     MOV ESI,ECX
0075BC51  EB 22                     JMP 0x0075bc75
LAB_0075bc53:
0075BC53  B9 09 00 00 00            MOV ECX,0x9
LAB_0075bc58:
0075BC58  51                        PUSH ECX
0075BC59  56                        PUSH ESI
0075BC5A  50                        PUSH EAX
0075BC5B  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0075BC5E  57                        PUSH EDI
0075BC5F  52                        PUSH EDX
0075BC60  E8 9B FB FF FF            CALL 0x0075b800
0075BC65  8B F0                     MOV ESI,EAX
0075BC67  85 F6                     TEST ESI,ESI
0075BC69  0F 8C F1 FD FF FF         JL 0x0075ba60
0075BC6F  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
0075BC72  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
LAB_0075bc75:
0075BC75  8B CE                     MOV ECX,ESI
0075BC77  C1 F9 04                  SAR ECX,0x4
0075BC7A  83 E6 0F                  AND ESI,0xf
0075BC7D  74 61                     JZ 0x0075bce0
0075BC7F  03 D9                     ADD EBX,ECX
0075BC81  3B C6                     CMP EAX,ESI
0075BC83  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
0075BC86  7D 1A                     JGE 0x0075bca2
0075BC88  56                        PUSH ESI
0075BC89  50                        PUSH EAX
0075BC8A  8D 45 B4                  LEA EAX,[EBP + -0x4c]
0075BC8D  57                        PUSH EDI
0075BC8E  50                        PUSH EAX
0075BC8F  E8 8C FA FF FF            CALL 0x0075b720
0075BC94  85 C0                     TEST EAX,EAX
0075BC96  0F 84 C4 FD FF FF         JZ 0x0075ba60
0075BC9C  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
0075BC9F  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
LAB_0075bca2:
0075BCA2  BA 01 00 00 00            MOV EDX,0x1
0075BCA7  8B CE                     MOV ECX,ESI
0075BCA9  2B C6                     SUB EAX,ESI
0075BCAB  8B DF                     MOV EBX,EDI
0075BCAD  D3 E2                     SHL EDX,CL
0075BCAF  8B C8                     MOV ECX,EAX
0075BCB1  D3 FB                     SAR EBX,CL
0075BCB3  8B 0C B5 D4 1F 7A 00      MOV ECX,dword ptr [ESI*0x4 + 0x7a1fd4]
0075BCBA  4A                        DEC EDX
0075BCBB  23 D3                     AND EDX,EBX
0075BCBD  3B D1                     CMP EDX,ECX
0075BCBF  7D 0B                     JGE 0x0075bccc
0075BCC1  8B 34 B5 14 20 7A 00      MOV ESI,dword ptr [ESI*0x4 + 0x7a2014]
0075BCC8  03 F2                     ADD ESI,EDX
0075BCCA  EB 02                     JMP 0x0075bcce
LAB_0075bccc:
0075BCCC  8B F2                     MOV ESI,EDX
LAB_0075bcce:
0075BCCE  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0075BCD1  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0075BCD4  8B 0C 9D 94 1E 7A 00      MOV ECX,dword ptr [EBX*0x4 + 0x7a1e94]
0075BCDB  89 34 8A                  MOV dword ptr [EDX + ECX*0x4],ESI
0075BCDE  EB 0B                     JMP 0x0075bceb
LAB_0075bce0:
0075BCE0  83 F9 0F                  CMP ECX,0xf
0075BCE3  0F 85 D0 00 00 00         JNZ 0x0075bdb9
0075BCE9  03 D9                     ADD EBX,ECX
LAB_0075bceb:
0075BCEB  43                        INC EBX
0075BCEC  83 FB 40                  CMP EBX,0x40
0075BCEF  0F 8C 05 FF FF FF         JL 0x0075bbfa
0075BCF5  E9 BF 00 00 00            JMP 0x0075bdb9
LAB_0075bcfa:
0075BCFA  BB 01 00 00 00            MOV EBX,0x1
LAB_0075bcff:
0075BCFF  83 F8 08                  CMP EAX,0x8
0075BD02  7D 2A                     JGE 0x0075bd2e
0075BD04  6A 00                     PUSH 0x0
0075BD06  50                        PUSH EAX
0075BD07  8D 45 B4                  LEA EAX,[EBP + -0x4c]
0075BD0A  57                        PUSH EDI
0075BD0B  50                        PUSH EAX
0075BD0C  E8 0F FA FF FF            CALL 0x0075b720
0075BD11  85 C0                     TEST EAX,EAX
0075BD13  0F 84 47 FD FF FF         JZ 0x0075ba60
0075BD19  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0075BD1C  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
0075BD1F  83 F8 08                  CMP EAX,0x8
0075BD22  7D 0A                     JGE 0x0075bd2e
0075BD24  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0075BD27  B9 01 00 00 00            MOV ECX,0x1
0075BD2C  EB 2F                     JMP 0x0075bd5d
LAB_0075bd2e:
0075BD2E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0075BD31  8D 48 F8                  LEA ECX,[EAX + -0x8]
0075BD34  8B D7                     MOV EDX,EDI
0075BD36  D3 FA                     SAR EDX,CL
0075BD38  81 E2 FF 00 00 00         AND EDX,0xff
0075BD3E  8B 8C 96 D4 00 00 00      MOV ECX,dword ptr [ESI + EDX*0x4 + 0xd4]
0075BD45  85 C9                     TEST ECX,ECX
0075BD47  74 0F                     JZ 0x0075bd58
0075BD49  2B C1                     SUB EAX,ECX
0075BD4B  33 C9                     XOR ECX,ECX
0075BD4D  8A 8C 32 D4 04 00 00      MOV CL,byte ptr [EDX + ESI*0x1 + 0x4d4]
0075BD54  8B F1                     MOV ESI,ECX
0075BD56  EB 22                     JMP 0x0075bd7a
LAB_0075bd58:
0075BD58  B9 09 00 00 00            MOV ECX,0x9
LAB_0075bd5d:
0075BD5D  51                        PUSH ECX
0075BD5E  56                        PUSH ESI
0075BD5F  50                        PUSH EAX
0075BD60  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0075BD63  57                        PUSH EDI
0075BD64  52                        PUSH EDX
0075BD65  E8 96 FA FF FF            CALL 0x0075b800
0075BD6A  8B F0                     MOV ESI,EAX
0075BD6C  85 F6                     TEST ESI,ESI
0075BD6E  0F 8C EC FC FF FF         JL 0x0075ba60
0075BD74  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
0075BD77  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
LAB_0075bd7a:
0075BD7A  8B CE                     MOV ECX,ESI
0075BD7C  C1 F9 04                  SAR ECX,0x4
0075BD7F  83 E6 0F                  AND ESI,0xf
0075BD82  74 24                     JZ 0x0075bda8
0075BD84  03 D9                     ADD EBX,ECX
0075BD86  3B C6                     CMP EAX,ESI
0075BD88  7D 1A                     JGE 0x0075bda4
0075BD8A  56                        PUSH ESI
0075BD8B  50                        PUSH EAX
0075BD8C  8D 45 B4                  LEA EAX,[EBP + -0x4c]
0075BD8F  57                        PUSH EDI
0075BD90  50                        PUSH EAX
0075BD91  E8 8A F9 FF FF            CALL 0x0075b720
0075BD96  85 C0                     TEST EAX,EAX
0075BD98  0F 84 C2 FC FF FF         JZ 0x0075ba60
0075BD9E  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
0075BDA1  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
LAB_0075bda4:
0075BDA4  2B C6                     SUB EAX,ESI
0075BDA6  EB 07                     JMP 0x0075bdaf
LAB_0075bda8:
0075BDA8  83 F9 0F                  CMP ECX,0xf
0075BDAB  75 0C                     JNZ 0x0075bdb9
0075BDAD  03 D9                     ADD EBX,ECX
LAB_0075bdaf:
0075BDAF  43                        INC EBX
0075BDB0  83 FB 40                  CMP EBX,0x40
0075BDB3  0F 8C 46 FF FF FF         JL 0x0075bcff
LAB_0075bdb9:
0075BDB9  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0075BDBC  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0075BDBF  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0075BDC2  BA 04 00 00 00            MOV EDX,0x4
0075BDC7  03 F2                     ADD ESI,EDX
0075BDC9  03 DA                     ADD EBX,EDX
0075BDCB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075BDCE  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0075BDD1  41                        INC ECX
0075BDD2  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0075BDD5  8B B2 52 01 00 00         MOV ESI,dword ptr [EDX + 0x152]
0075BDDB  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0075BDDE  3B CE                     CMP ECX,ESI
0075BDE0  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
0075BDE3  8B DA                     MOV EBX,EDX
0075BDE5  0F 8C E5 FC FF FF         JL 0x0075bad0
LAB_0075bdeb:
0075BDEB  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
0075BDEE  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0075BDF1  89 11                     MOV dword ptr [ECX],EDX
0075BDF3  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
0075BDF6  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0075BDF9  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
0075BDFC  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0075BDFF  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
0075BE02  89 8B 8E 01 00 00         MOV dword ptr [EBX + 0x18e],ECX
0075BE08  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0075BE0B  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
0075BE0E  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0075BE11  89 56 14                  MOV dword ptr [ESI + 0x14],EDX
0075BE14  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0075BE17  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
0075BE1A  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0075BE1D  89 7E 08                  MOV dword ptr [ESI + 0x8],EDI
0075BE20  48                        DEC EAX
0075BE21  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
0075BE24  89 56 20                  MOV dword ptr [ESI + 0x20],EDX
0075BE27  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
0075BE2A  5F                        POP EDI
0075BE2B  5E                        POP ESI
0075BE2C  B8 01 00 00 00            MOV EAX,0x1
0075BE31  5B                        POP EBX
0075BE32  8B E5                     MOV ESP,EBP
0075BE34  5D                        POP EBP
0075BE35  C2 08 00                  RET 0x8
