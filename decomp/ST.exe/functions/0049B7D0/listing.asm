STGroupBoatC::GrpPatrol:
0049B7D0  55                        PUSH EBP
0049B7D1  8B EC                     MOV EBP,ESP
0049B7D3  83 EC 68                  SUB ESP,0x68
0049B7D6  53                        PUSH EBX
0049B7D7  8B D9                     MOV EBX,ECX
0049B7D9  56                        PUSH ESI
0049B7DA  33 F6                     XOR ESI,ESI
0049B7DC  8B 43 29                  MOV EAX,dword ptr [EBX + 0x29]
0049B7DF  57                        PUSH EDI
0049B7E0  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049B7E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049B7E6  3B C6                     CMP EAX,ESI
0049B7E8  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0049B7EB  74 31                     JZ 0x0049b81e
0049B7ED  83 F8 01                  CMP EAX,0x1
0049B7F0  74 2C                     JZ 0x0049b81e
0049B7F2  8B 83 3E 02 00 00         MOV EAX,dword ptr [EBX + 0x23e]
0049B7F8  3B C6                     CMP EAX,ESI
0049B7FA  7E 07                     JLE 0x0049b803
0049B7FC  40                        INC EAX
0049B7FD  89 83 3E 02 00 00         MOV dword ptr [EBX + 0x23e],EAX
LAB_0049b803:
0049B803  56                        PUSH ESI
0049B804  8B CB                     MOV ECX,EBX
0049B806  E8 13 7B F6 FF            CALL 0x0040331e
0049B80B  83 E8 02                  SUB EAX,0x2
0049B80E  5F                        POP EDI
0049B80F  F7 D8                     NEG EAX
0049B811  1B C0                     SBB EAX,EAX
0049B813  5E                        POP ESI
0049B814  83 E0 02                  AND EAX,0x2
0049B817  5B                        POP EBX
0049B818  8B E5                     MOV ESP,EBP
0049B81A  5D                        POP EBP
0049B81B  C2 04 00                  RET 0x4
LAB_0049b81e:
0049B81E  B9 15 00 00 00            MOV ECX,0x15
0049B823  33 C0                     XOR EAX,EAX
0049B825  8D BB 89 00 00 00         LEA EDI,[EBX + 0x89]
0049B82B  F3 AB                     STOSD.REP ES:EDI
0049B82D  8B 83 26 02 00 00         MOV EAX,dword ptr [EBX + 0x226]
0049B833  89 73 65                  MOV dword ptr [EBX + 0x65],ESI
0049B836  3B C6                     CMP EAX,ESI
0049B838  74 0C                     JZ 0x0049b846
0049B83A  50                        PUSH EAX
0049B83B  E8 D0 28 21 00            CALL 0x006ae110
0049B840  89 B3 26 02 00 00         MOV dword ptr [EBX + 0x226],ESI
LAB_0049b846:
0049B846  8B 83 2A 02 00 00         MOV EAX,dword ptr [EBX + 0x22a]
0049B84C  3B C6                     CMP EAX,ESI
0049B84E  74 0C                     JZ 0x0049b85c
0049B850  50                        PUSH EAX
0049B851  E8 BA 28 21 00            CALL 0x006ae110
0049B856  89 B3 2A 02 00 00         MOV dword ptr [EBX + 0x22a],ESI
LAB_0049b85c:
0049B85C  8B 83 2E 02 00 00         MOV EAX,dword ptr [EBX + 0x22e]
0049B862  3B C6                     CMP EAX,ESI
0049B864  74 0C                     JZ 0x0049b872
0049B866  50                        PUSH EAX
0049B867  E8 A4 28 21 00            CALL 0x006ae110
0049B86C  89 B3 2E 02 00 00         MOV dword ptr [EBX + 0x22e],ESI
LAB_0049b872:
0049B872  8B 93 07 01 00 00         MOV EDX,dword ptr [EBX + 0x107]
0049B878  8B 83 03 01 00 00         MOV EAX,dword ptr [EBX + 0x103]
0049B87E  C7 83 32 02 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x232],0xffffffff
0049B888  C7 83 36 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x236],0x1
0049B892  89 B3 3E 02 00 00         MOV dword ptr [EBX + 0x23e],ESI
0049B898  89 B3 3A 02 00 00         MOV dword ptr [EBX + 0x23a],ESI
0049B89E  89 B3 42 02 00 00         MOV dword ptr [EBX + 0x242],ESI
0049B8A4  89 93 46 02 00 00         MOV dword ptr [EBX + 0x246],EDX
0049B8AA  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049B8AD  3B CE                     CMP ECX,ESI
0049B8AF  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0049B8B2  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0049B8B5  0F 8E 22 07 00 00         JLE 0x0049bfdd
0049B8BB  33 D2                     XOR EDX,EDX
0049B8BD  B8 30 75 00 00            MOV EAX,0x7530
0049B8C2  BE D0 8A FF FF            MOV ESI,0xffff8ad0
0049B8C7  3B CA                     CMP ECX,EDX
0049B8C9  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0049B8CC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0049B8CF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0049B8D2  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
0049B8D5  7E 4B                     JLE 0x0049b922
0049B8D7  EB 03                     JMP 0x0049b8dc
LAB_0049b8d9:
0049B8D9  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
LAB_0049b8dc:
0049B8DC  3B D1                     CMP EDX,ECX
0049B8DE  73 3A                     JNC 0x0049b91a
0049B8E0  8B 8B 03 01 00 00         MOV ECX,dword ptr [EBX + 0x103]
0049B8E6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0049B8E9  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
0049B8EC  0F AF C2                  IMUL EAX,EDX
0049B8EF  03 C7                     ADD EAX,EDI
0049B8F1  85 C0                     TEST EAX,EAX
0049B8F3  74 25                     JZ 0x0049b91a
0049B8F5  0F BF 08                  MOVSX ECX,word ptr [EAX]
0049B8F8  39 4D F8                  CMP dword ptr [EBP + -0x8],ECX
0049B8FB  7E 03                     JLE 0x0049b900
0049B8FD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0049b900:
0049B900  39 4D E0                  CMP dword ptr [EBP + -0x20],ECX
0049B903  7D 03                     JGE 0x0049b908
0049B905  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
LAB_0049b908:
0049B908  0F BF 40 02               MOVSX EAX,word ptr [EAX + 0x2]
0049B90C  39 45 FC                  CMP dword ptr [EBP + -0x4],EAX
0049B90F  7E 03                     JLE 0x0049b914
0049B911  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0049b914:
0049B914  3B F0                     CMP ESI,EAX
0049B916  7D 02                     JGE 0x0049b91a
0049B918  8B F0                     MOV ESI,EAX
LAB_0049b91a:
0049B91A  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0049B91D  42                        INC EDX
0049B91E  3B D0                     CMP EDX,EAX
0049B920  7C B7                     JL 0x0049b8d9
LAB_0049b922:
0049B922  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0049B925  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
0049B92C  85 C0                     TEST EAX,EAX
0049B92E  0F 8E 96 00 00 00         JLE 0x0049b9ca
LAB_0049b934:
0049B934  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0049B937  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049B93A  8D 45 EC                  LEA EAX,[EBP + -0x14]
0049B93D  50                        PUSH EAX
0049B93E  E8 2D 13 21 00            CALL 0x006acc70
0049B943  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049B946  66 3D FF FF               CMP AX,0xffff
0049B94A  74 6C                     JZ 0x0049b9b8
0049B94C  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0049B94F  6A 01                     PUSH 0x1
0049B951  50                        PUSH EAX
0049B952  51                        PUSH ECX
0049B953  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049B959  E8 5C 6F F6 FF            CALL 0x004028ba
0049B95E  8B F8                     MOV EDI,EAX
0049B960  85 FF                     TEST EDI,EDI
0049B962  75 1B                     JNZ 0x0049b97f
0049B964  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0049B96A  68 7D 07 00 00            PUSH 0x77d
0049B96F  68 3C BE 7A 00            PUSH 0x7abe3c
0049B974  52                        PUSH EDX
0049B975  68 04 00 FE AF            PUSH 0xaffe0004
0049B97A  E8 C1 A4 20 00            CALL 0x006a5e40
LAB_0049b97f:
0049B97F  8D 45 F0                  LEA EAX,[EBP + -0x10]
0049B982  8D 4D F4                  LEA ECX,[EBP + -0xc]
0049B985  50                        PUSH EAX
0049B986  8D 55 0A                  LEA EDX,[EBP + 0xa]
0049B989  51                        PUSH ECX
0049B98A  52                        PUSH EDX
0049B98B  8B CF                     MOV ECX,EDI
0049B98D  E8 79 A5 F6 FF            CALL 0x00405f0b
0049B992  0F BF 45 0A               MOVSX EAX,word ptr [EBP + 0xa]
0049B996  39 45 F8                  CMP dword ptr [EBP + -0x8],EAX
0049B999  7E 03                     JLE 0x0049b99e
0049B99B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0049b99e:
0049B99E  39 45 E0                  CMP dword ptr [EBP + -0x20],EAX
0049B9A1  7D 03                     JGE 0x0049b9a6
0049B9A3  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_0049b9a6:
0049B9A6  0F BF 45 F4               MOVSX EAX,word ptr [EBP + -0xc]
0049B9AA  39 45 FC                  CMP dword ptr [EBP + -0x4],EAX
0049B9AD  7E 03                     JLE 0x0049b9b2
0049B9AF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0049b9b2:
0049B9B2  3B F0                     CMP ESI,EAX
0049B9B4  7D 02                     JGE 0x0049b9b8
0049B9B6  8B F0                     MOV ESI,EAX
LAB_0049b9b8:
0049B9B8  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0049B9BB  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0049B9BE  40                        INC EAX
0049B9BF  3B C1                     CMP EAX,ECX
0049B9C1  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0049B9C4  0F 8C 6A FF FF FF         JL 0x0049b934
LAB_0049b9ca:
0049B9CA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0049B9CD  B8 0A 00 00 00            MOV EAX,0xa
0049B9D2  2B C8                     SUB ECX,EAX
0049B9D4  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0049B9D7  79 07                     JNS 0x0049b9e0
0049B9D9  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0049b9e0:
0049B9E0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049B9E3  2B C8                     SUB ECX,EAX
0049B9E5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0049B9E8  79 07                     JNS 0x0049b9f1
0049B9EA  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_0049b9f1:
0049B9F1  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0049B9F4  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
0049B9FB  03 C8                     ADD ECX,EAX
0049B9FD  3B CF                     CMP ECX,EDI
0049B9FF  7C 03                     JL 0x0049ba04
0049BA01  8D 4F FF                  LEA ECX,[EDI + -0x1]
LAB_0049ba04:
0049BA04  03 F0                     ADD ESI,EAX
0049BA06  0F BF 05 7A B2 7F 00      MOVSX EAX,word ptr [0x007fb27a]
0049BA0D  3B F0                     CMP ESI,EAX
0049BA0F  7C 03                     JL 0x0049ba14
0049BA11  8D 70 FF                  LEA ESI,[EAX + -0x1]
LAB_0049ba14:
0049BA14  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0049BA17  2B CA                     SUB ECX,EDX
0049BA19  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0049BA1C  2B F2                     SUB ESI,EDX
0049BA1E  41                        INC ECX
0049BA1F  46                        INC ESI
0049BA20  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0049BA23  8B C6                     MOV EAX,ESI
0049BA25  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0049BA28  0F AF C1                  IMUL EAX,ECX
0049BA2B  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0049BA2E  33 C0                     XOR EAX,EAX
0049BA30  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_0049ba33:
0049BA33  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
0049BA3A  0F BF C0                  MOVSX EAX,AX
0049BA3D  0F AF C8                  IMUL ECX,EAX
0049BA40  0F AF 45 D0               IMUL EAX,dword ptr [EBP + -0x30]
0049BA44  8B D7                     MOV EDX,EDI
0049BA46  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0049BA49  0F AF 55 FC               IMUL EDX,dword ptr [EBP + -0x4]
0049BA4D  03 F1                     ADD ESI,ECX
0049BA4F  8B 0D 80 B2 7F 00         MOV ECX,dword ptr [0x007fb280]
0049BA55  03 D6                     ADD EDX,ESI
0049BA57  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0049BA5E  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
0049BA61  8B 0D 38 B2 7F 00         MOV ECX,dword ptr [0x007fb238]
0049BA67  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
0049BA6A  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0049BA6D  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0049BA70  85 C0                     TEST EAX,EAX
0049BA72  7E 40                     JLE 0x0049bab4
0049BA74  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0049BA77  03 C9                     ADD ECX,ECX
LAB_0049ba79:
0049BA79  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0049BA7C  8B C1                     MOV EAX,ECX
0049BA7E  8B F2                     MOV ESI,EDX
0049BA80  C1 E9 02                  SHR ECX,0x2
0049BA83  F3 A5                     MOVSD.REP ES:EDI,ESI
0049BA85  8B C8                     MOV ECX,EAX
0049BA87  83 E1 03                  AND ECX,0x3
0049BA8A  F3 A4                     MOVSB.REP ES:EDI,ESI
0049BA8C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049BA8F  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0049BA92  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
0049BA95  40                        INC EAX
0049BA96  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
0049BA9D  03 C9                     ADD ECX,ECX
0049BA9F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0049BAA2  03 F1                     ADD ESI,ECX
0049BAA4  8D 14 7A                  LEA EDX,[EDX + EDI*0x2]
0049BAA7  0F BF C0                  MOVSX EAX,AX
0049BAAA  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
0049BAAD  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
0049BAB0  3B C6                     CMP EAX,ESI
0049BAB2  7C C5                     JL 0x0049ba79
LAB_0049bab4:
0049BAB4  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049BAB7  40                        INC EAX
0049BAB8  66 3D 05 00               CMP AX,0x5
0049BABC  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0049BABF  0F 8C 6E FF FF FF         JL 0x0049ba33
0049BAC5  8B 83 03 01 00 00         MOV EAX,dword ptr [EBX + 0x103]
0049BACB  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049BACE  85 C9                     TEST ECX,ECX
0049BAD0  76 05                     JBE 0x0049bad7
0049BAD2  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
0049BAD5  EB 02                     JMP 0x0049bad9
LAB_0049bad7:
0049BAD7  33 C0                     XOR EAX,EAX
LAB_0049bad9:
0049BAD9  0F BF 48 04               MOVSX ECX,word ptr [EAX + 0x4]
0049BADD  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
0049BAE1  0F BF 00                  MOVSX EAX,word ptr [EAX]
0049BAE4  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0049BAE7  6A FF                     PUSH -0x1
0049BAE9  6A FF                     PUSH -0x1
0049BAEB  6A FF                     PUSH -0x1
0049BAED  51                        PUSH ECX
0049BAEE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049BAF1  2B D1                     SUB EDX,ECX
0049BAF3  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0049BAF6  2B C7                     SUB EAX,EDI
0049BAF8  52                        PUSH EDX
0049BAF9  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0049BAFC  50                        PUSH EAX
0049BAFD  A1 38 B2 7F 00            MOV EAX,[0x007fb238]
0049BB02  6A 05                     PUSH 0x5
0049BB04  51                        PUSH ECX
0049BB05  52                        PUSH EDX
0049BB06  50                        PUSH EAX
0049BB07  E8 84 F5 20 00            CALL 0x006ab090
0049BB0C  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0049BB0F  B9 01 00 00 00            MOV ECX,0x1
0049BB14  3B C1                     CMP EAX,ECX
0049BB16  7E 72                     JLE 0x0049bb8a
0049BB18  8B 93 03 01 00 00         MOV EDX,dword ptr [EBX + 0x103]
0049BB1E  0F BF 35 7E B2 7F 00      MOVSX ESI,word ptr [0x007fb27e]
0049BB25  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0049BB28  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0049BB2B  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0049BB2E  EB 03                     JMP 0x0049bb33
LAB_0049bb30:
0049BB30  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
LAB_0049bb33:
0049BB33  3B 4D D8                  CMP ECX,dword ptr [EBP + -0x28]
0049BB36  73 0D                     JNC 0x0049bb45
0049BB38  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0049BB3B  8B 7A 1C                  MOV EDI,dword ptr [EDX + 0x1c]
0049BB3E  0F AF C1                  IMUL EAX,ECX
0049BB41  03 C7                     ADD EAX,EDI
0049BB43  EB 02                     JMP 0x0049bb47
LAB_0049bb45:
0049BB45  33 C0                     XOR EAX,EAX
LAB_0049bb47:
0049BB47  0F BF 78 02               MOVSX EDI,word ptr [EAX + 0x2]
0049BB4B  2B 7D FC                  SUB EDI,dword ptr [EBP + -0x4]
0049BB4E  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
0049BB55  0F AF FA                  IMUL EDI,EDX
0049BB58  0F BF 50 04               MOVSX EDX,word ptr [EAX + 0x4]
0049BB5C  0F AF D6                  IMUL EDX,ESI
0049BB5F  0F BF 00                  MOVSX EAX,word ptr [EAX]
0049BB62  03 FA                     ADD EDI,EDX
0049BB64  03 F8                     ADD EDI,EAX
0049BB66  A1 38 B2 7F 00            MOV EAX,[0x007fb238]
0049BB6B  8B D7                     MOV EDX,EDI
0049BB6D  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0049BB70  2B D7                     SUB EDX,EDI
0049BB72  66 83 3C 50 00            CMP word ptr [EAX + EDX*0x2],0x0
0049BB77  7E 0A                     JLE 0x0049bb83
0049BB79  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0049BB7C  41                        INC ECX
0049BB7D  3B C8                     CMP ECX,EAX
0049BB7F  7C AF                     JL 0x0049bb30
0049BB81  EB 07                     JMP 0x0049bb8a
LAB_0049bb83:
0049BB83  C7 45 D4 01 00 00 00      MOV dword ptr [EBP + -0x2c],0x1
LAB_0049bb8a:
0049BB8A  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0049BB8D  33 F6                     XOR ESI,ESI
0049BB8F  85 C0                     TEST EAX,EAX
0049BB91  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0049BB94  0F 8E AA 00 00 00         JLE 0x0049bc44
LAB_0049bb9a:
0049BB9A  8D 4D EC                  LEA ECX,[EBP + -0x14]
0049BB9D  8B D6                     MOV EDX,ESI
0049BB9F  51                        PUSH ECX
0049BBA0  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049BBA3  E8 C8 10 21 00            CALL 0x006acc70
0049BBA8  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049BBAB  66 3D FF FF               CMP AX,0xffff
0049BBAF  0F 84 80 00 00 00         JZ 0x0049bc35
0049BBB5  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049BBB8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049BBBE  6A 01                     PUSH 0x1
0049BBC0  50                        PUSH EAX
0049BBC1  52                        PUSH EDX
0049BBC2  E8 F3 6C F6 FF            CALL 0x004028ba
0049BBC7  8B F0                     MOV ESI,EAX
0049BBC9  85 F6                     TEST ESI,ESI
0049BBCB  75 1A                     JNZ 0x0049bbe7
0049BBCD  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0049BBD2  68 A7 07 00 00            PUSH 0x7a7
0049BBD7  68 3C BE 7A 00            PUSH 0x7abe3c
0049BBDC  50                        PUSH EAX
0049BBDD  68 04 00 FE AF            PUSH 0xaffe0004
0049BBE2  E8 59 A2 20 00            CALL 0x006a5e40
LAB_0049bbe7:
0049BBE7  8D 4D F0                  LEA ECX,[EBP + -0x10]
0049BBEA  8D 55 F4                  LEA EDX,[EBP + -0xc]
0049BBED  51                        PUSH ECX
0049BBEE  8D 45 0A                  LEA EAX,[EBP + 0xa]
0049BBF1  52                        PUSH EDX
0049BBF2  50                        PUSH EAX
0049BBF3  8B CE                     MOV ECX,ESI
0049BBF5  E8 11 A3 F6 FF            CALL 0x00405f0b
0049BBFA  0F BF 4D F4               MOVSX ECX,word ptr [EBP + -0xc]
0049BBFE  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0049BC01  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
0049BC08  0F BF 05 7E B2 7F 00      MOVSX EAX,word ptr [0x007fb27e]
0049BC0F  2B CE                     SUB ECX,ESI
0049BC11  0F AF CA                  IMUL ECX,EDX
0049BC14  0F BF 55 F0               MOVSX EDX,word ptr [EBP + -0x10]
0049BC18  0F AF C2                  IMUL EAX,EDX
0049BC1B  8B 15 38 B2 7F 00         MOV EDX,dword ptr [0x007fb238]
0049BC21  03 C8                     ADD ECX,EAX
0049BC23  0F BF 45 0A               MOVSX EAX,word ptr [EBP + 0xa]
0049BC27  03 C8                     ADD ECX,EAX
0049BC29  2B CF                     SUB ECX,EDI
0049BC2B  66 83 3C 4A 00            CMP word ptr [EDX + ECX*0x2],0x0
0049BC30  74 1D                     JZ 0x0049bc4f
0049BC32  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
LAB_0049bc35:
0049BC35  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0049BC38  46                        INC ESI
0049BC39  3B F0                     CMP ESI,EAX
0049BC3B  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0049BC3E  0F 8C 56 FF FF FF         JL 0x0049bb9a
LAB_0049bc44:
0049BC44  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0049BC47  85 C0                     TEST EAX,EAX
0049BC49  0F 84 7D 01 00 00         JZ 0x0049bdcc
LAB_0049bc4f:
0049BC4F  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0049BC52  48                        DEC EAX
0049BC53  85 C0                     TEST EAX,EAX
0049BC55  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0049BC58  0F 8C 46 01 00 00         JL 0x0049bda4
LAB_0049bc5e:
0049BC5E  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0049BC61  8D 4D C8                  LEA ECX,[EBP + -0x38]
0049BC64  51                        PUSH ECX
0049BC65  8B 8B 03 01 00 00         MOV ECX,dword ptr [EBX + 0x103]
0049BC6B  E8 00 10 21 00            CALL 0x006acc70
0049BC70  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
0049BC77  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
0049BC7E  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0049BC85  0F AF CA                  IMUL ECX,EDX
0049BC88  0F AF C8                  IMUL ECX,EAX
0049BC8B  8B 35 80 B2 7F 00         MOV ESI,dword ptr [0x007fb280]
0049BC91  8B 3D 38 B2 7F 00         MOV EDI,dword ptr [0x007fb238]
0049BC97  D1 E1                     SHL ECX,0x1
0049BC99  8B D1                     MOV EDX,ECX
0049BC9B  6A FF                     PUSH -0x1
0049BC9D  C1 E9 02                  SHR ECX,0x2
0049BCA0  F3 A5                     MOVSD.REP ES:EDI,ESI
0049BCA2  8B CA                     MOV ECX,EDX
0049BCA4  6A FF                     PUSH -0x1
0049BCA6  83 E1 03                  AND ECX,0x3
0049BCA9  6A FF                     PUSH -0x1
0049BCAB  F3 A4                     MOVSB.REP ES:EDI,ESI
0049BCAD  0F BF 45 CC               MOVSX EAX,word ptr [EBP + -0x34]
0049BCB1  0F BF 4D CA               MOVSX ECX,word ptr [EBP + -0x36]
0049BCB5  0F BF 55 C8               MOVSX EDX,word ptr [EBP + -0x38]
0049BCB9  50                        PUSH EAX
0049BCBA  51                        PUSH ECX
0049BCBB  0F BF 05 7C B2 7F 00      MOVSX EAX,word ptr [0x007fb27c]
0049BCC2  0F BF 0D 7A B2 7F 00      MOVSX ECX,word ptr [0x007fb27a]
0049BCC9  52                        PUSH EDX
0049BCCA  50                        PUSH EAX
0049BCCB  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
0049BCD2  A1 38 B2 7F 00            MOV EAX,[0x007fb238]
0049BCD7  51                        PUSH ECX
0049BCD8  52                        PUSH EDX
0049BCD9  50                        PUSH EAX
0049BCDA  E8 B1 F3 20 00            CALL 0x006ab090
0049BCDF  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0049BCE2  33 FF                     XOR EDI,EDI
0049BCE4  85 C0                     TEST EAX,EAX
0049BCE6  0F 8E AB 00 00 00         JLE 0x0049bd97
LAB_0049bcec:
0049BCEC  8D 4D EC                  LEA ECX,[EBP + -0x14]
0049BCEF  8B D7                     MOV EDX,EDI
0049BCF1  51                        PUSH ECX
0049BCF2  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049BCF5  E8 76 0F 21 00            CALL 0x006acc70
0049BCFA  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049BCFD  66 3D FF FF               CMP AX,0xffff
0049BD01  74 76                     JZ 0x0049bd79
0049BD03  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049BD06  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049BD0C  6A 01                     PUSH 0x1
0049BD0E  50                        PUSH EAX
0049BD0F  52                        PUSH EDX
0049BD10  E8 A5 6B F6 FF            CALL 0x004028ba
0049BD15  8B F0                     MOV ESI,EAX
0049BD17  85 F6                     TEST ESI,ESI
0049BD19  75 1A                     JNZ 0x0049bd35
0049BD1B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0049BD20  68 BD 07 00 00            PUSH 0x7bd
0049BD25  68 3C BE 7A 00            PUSH 0x7abe3c
0049BD2A  50                        PUSH EAX
0049BD2B  68 04 00 FE AF            PUSH 0xaffe0004
0049BD30  E8 0B A1 20 00            CALL 0x006a5e40
LAB_0049bd35:
0049BD35  8D 4D F0                  LEA ECX,[EBP + -0x10]
0049BD38  8D 55 F4                  LEA EDX,[EBP + -0xc]
0049BD3B  51                        PUSH ECX
0049BD3C  8D 45 0A                  LEA EAX,[EBP + 0xa]
0049BD3F  52                        PUSH EDX
0049BD40  50                        PUSH EAX
0049BD41  8B CE                     MOV ECX,ESI
0049BD43  E8 C3 A1 F6 FF            CALL 0x00405f0b
0049BD48  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
0049BD4F  0F BF 55 F0               MOVSX EDX,word ptr [EBP + -0x10]
0049BD53  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0049BD5A  0F AF CA                  IMUL ECX,EDX
0049BD5D  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
0049BD61  0F AF C2                  IMUL EAX,EDX
0049BD64  8B 15 38 B2 7F 00         MOV EDX,dword ptr [0x007fb238]
0049BD6A  03 C8                     ADD ECX,EAX
0049BD6C  0F BF 45 0A               MOVSX EAX,word ptr [EBP + 0xa]
0049BD70  03 C8                     ADD ECX,EAX
0049BD72  66 83 3C 4A 00            CMP word ptr [EDX + ECX*0x2],0x0
0049BD77  74 0E                     JZ 0x0049bd87
LAB_0049bd79:
0049BD79  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0049BD7C  47                        INC EDI
0049BD7D  3B F8                     CMP EDI,EAX
0049BD7F  0F 8C 67 FF FF FF         JL 0x0049bcec
0049BD85  EB 10                     JMP 0x0049bd97
LAB_0049bd87:
0049BD87  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0049BD8A  8B 8B 03 01 00 00         MOV ECX,dword ptr [EBX + 0x103]
0049BD90  50                        PUSH EAX
0049BD91  51                        PUSH ECX
0049BD92  E8 D9 4E 21 00            CALL 0x006b0c70
LAB_0049bd97:
0049BD97  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0049BD9A  48                        DEC EAX
0049BD9B  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0049BD9E  0F 89 BA FE FF FF         JNS 0x0049bc5e
LAB_0049bda4:
0049BDA4  8B 83 03 01 00 00         MOV EAX,dword ptr [EBX + 0x103]
0049BDAA  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049BDAD  85 C9                     TEST ECX,ECX
0049BDAF  75 1B                     JNZ 0x0049bdcc
0049BDB1  50                        PUSH EAX
0049BDB2  E8 59 23 21 00            CALL 0x006ae110
0049BDB7  5F                        POP EDI
0049BDB8  C7 83 03 01 00 00 00 00 00 00  MOV dword ptr [EBX + 0x103],0x0
0049BDC2  5E                        POP ESI
0049BDC3  33 C0                     XOR EAX,EAX
0049BDC5  5B                        POP EBX
0049BDC6  8B E5                     MOV ESP,EBP
0049BDC8  5D                        POP EBP
0049BDC9  C2 04 00                  RET 0x4
LAB_0049bdcc:
0049BDCC  8B 93 03 01 00 00         MOV EDX,dword ptr [EBX + 0x103]
0049BDD2  6A 01                     PUSH 0x1
0049BDD4  6A 06                     PUSH 0x6
0049BDD6  33 FF                     XOR EDI,EDI
0049BDD8  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0049BDDB  50                        PUSH EAX
0049BDDC  57                        PUSH EDI
0049BDDD  E8 AE 24 21 00            CALL 0x006ae290
0049BDE2  8B 8B 03 01 00 00         MOV ECX,dword ptr [EBX + 0x103]
0049BDE8  89 83 26 02 00 00         MOV dword ptr [EBX + 0x226],EAX
0049BDEE  33 F6                     XOR ESI,ESI
0049BDF0  39 79 0C                  CMP dword ptr [ECX + 0xc],EDI
0049BDF3  7E 28                     JLE 0x0049be1d
LAB_0049bdf5:
0049BDF5  8D 55 C8                  LEA EDX,[EBP + -0x38]
0049BDF8  52                        PUSH EDX
0049BDF9  8B D6                     MOV EDX,ESI
0049BDFB  E8 70 0E 21 00            CALL 0x006acc70
0049BE00  8B 8B 26 02 00 00         MOV ECX,dword ptr [EBX + 0x226]
0049BE06  8D 45 C8                  LEA EAX,[EBP + -0x38]
0049BE09  50                        PUSH EAX
0049BE0A  56                        PUSH ESI
0049BE0B  51                        PUSH ECX
0049BE0C  E8 2F 23 21 00            CALL 0x006ae140
0049BE11  8B 8B 03 01 00 00         MOV ECX,dword ptr [EBX + 0x103]
0049BE17  46                        INC ESI
0049BE18  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
0049BE1B  7C D8                     JL 0x0049bdf5
LAB_0049be1d:
0049BE1D  8B 93 03 01 00 00         MOV EDX,dword ptr [EBX + 0x103]
0049BE23  52                        PUSH EDX
0049BE24  E8 E7 22 21 00            CALL 0x006ae110
0049BE29  8B CB                     MOV ECX,EBX
0049BE2B  89 BB 03 01 00 00         MOV dword ptr [EBX + 0x103],EDI
0049BE31  E8 4A 81 F6 FF            CALL 0x00403f80
0049BE36  33 C0                     XOR EAX,EAX
0049BE38  6A 01                     PUSH 0x1
0049BE3A  66 8B 43 27               MOV AX,word ptr [EBX + 0x27]
0049BE3E  6A 16                     PUSH 0x16
0049BE40  50                        PUSH EAX
0049BE41  57                        PUSH EDI
0049BE42  E8 49 24 21 00            CALL 0x006ae290
0049BE47  89 83 2E 02 00 00         MOV dword ptr [EBX + 0x22e],EAX
0049BE4D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0049BE50  33 F6                     XOR ESI,ESI
0049BE52  3B C7                     CMP EAX,EDI
0049BE54  89 7D 98                  MOV dword ptr [EBP + -0x68],EDI
0049BE57  89 7D AA                  MOV dword ptr [EBP + -0x56],EDI
0049BE5A  7E 33                     JLE 0x0049be8f
LAB_0049be5c:
0049BE5C  8D 4D EC                  LEA ECX,[EBP + -0x14]
0049BE5F  8B D6                     MOV EDX,ESI
0049BE61  51                        PUSH ECX
0049BE62  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049BE65  E8 06 0E 21 00            CALL 0x006acc70
0049BE6A  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049BE6D  66 3D FF FF               CMP AX,0xffff
0049BE71  74 14                     JZ 0x0049be87
0049BE73  66 89 45 9C               MOV word ptr [EBP + -0x64],AX
0049BE77  8B 83 2E 02 00 00         MOV EAX,dword ptr [EBX + 0x22e]
0049BE7D  8D 55 98                  LEA EDX,[EBP + -0x68]
0049BE80  52                        PUSH EDX
0049BE81  50                        PUSH EAX
0049BE82  E8 39 23 21 00            CALL 0x006ae1c0
LAB_0049be87:
0049BE87  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0049BE8A  46                        INC ESI
0049BE8B  3B F0                     CMP ESI,EAX
0049BE8D  7C CD                     JL 0x0049be5c
LAB_0049be8f:
0049BE8F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049BE95  6A 08                     PUSH 0x8
0049BE97  E8 12 67 F6 FF            CALL 0x004025ae
0049BE9C  8B B3 42 02 00 00         MOV ESI,dword ptr [EBX + 0x242]
0049BEA2  8A C8                     MOV CL,AL
0049BEA4  81 E1 FF 00 00 00         AND ECX,0xff
0049BEAA  6A 01                     PUSH 0x1
0049BEAC  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0049BEAF  6A 02                     PUSH 0x2
0049BEB1  6A 00                     PUSH 0x0
0049BEB3  6A 00                     PUSH 0x0
0049BEB5  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0049BEB8  8D 04 D6                  LEA EAX,[ESI + EDX*0x8]
0049BEBB  99                        CDQ
0049BEBC  F7 F9                     IDIV ECX
0049BEBE  8B C8                     MOV ECX,EAX
0049BEC0  B8 56 55 55 55            MOV EAX,0x55555556
0049BEC5  F7 E9                     IMUL ECX
0049BEC7  8B C2                     MOV EAX,EDX
0049BEC9  C1 E8 1F                  SHR EAX,0x1f
0049BECC  03 D0                     ADD EDX,EAX
0049BECE  89 93 3A 02 00 00         MOV dword ptr [EBX + 0x23a],EDX
0049BED4  E8 B7 23 21 00            CALL 0x006ae290
0049BED9  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049BEDF  8B F8                     MOV EDI,EAX
0049BEE1  33 F6                     XOR ESI,ESI
0049BEE3  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
0049BEE6  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0049BEEC  8B 8B 2E 02 00 00         MOV ECX,dword ptr [EBX + 0x22e]
0049BEF2  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
0049BEF5  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0049BEF8  85 C0                     TEST EAX,EAX
0049BEFA  0F 8E 9B 00 00 00         JLE 0x0049bf9b
LAB_0049bf00:
0049BF00  8D 45 98                  LEA EAX,[EBP + -0x68]
0049BF03  8B D6                     MOV EDX,ESI
0049BF05  50                        PUSH EAX
0049BF06  E8 65 0D 21 00            CALL 0x006acc70
0049BF0B  66 81 7D 9C FF FF         CMP word ptr [EBP + -0x64],0xffff
0049BF11  74 75                     JZ 0x0049bf88
0049BF13  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
0049BF16  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049BF19  6A 01                     PUSH 0x1
0049BF1B  51                        PUSH ECX
0049BF1C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049BF22  52                        PUSH EDX
0049BF23  E8 92 69 F6 FF            CALL 0x004028ba
0049BF28  8B F8                     MOV EDI,EAX
0049BF2A  85 FF                     TEST EDI,EDI
0049BF2C  75 3D                     JNZ 0x0049bf6b
0049BF2E  68 94 BF 7A 00            PUSH 0x7abf94
0049BF33  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049BF38  50                        PUSH EAX
0049BF39  50                        PUSH EAX
0049BF3A  68 ED 07 00 00            PUSH 0x7ed
0049BF3F  68 3C BE 7A 00            PUSH 0x7abe3c
0049BF44  E8 87 15 21 00            CALL 0x006ad4d0
0049BF49  83 C4 18                  ADD ESP,0x18
0049BF4C  85 C0                     TEST EAX,EAX
0049BF4E  74 01                     JZ 0x0049bf51
0049BF50  CC                        INT3
LAB_0049bf51:
0049BF51  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0049BF56  68 EE 07 00 00            PUSH 0x7ee
0049BF5B  68 3C BE 7A 00            PUSH 0x7abe3c
0049BF60  50                        PUSH EAX
0049BF61  68 04 00 FE AF            PUSH 0xaffe0004
0049BF66  E8 D5 9E 20 00            CALL 0x006a5e40
LAB_0049bf6b:
0049BF6B  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0049BF6E  8D 4D 9C                  LEA ECX,[EBP + -0x64]
0049BF71  51                        PUSH ECX
0049BF72  52                        PUSH EDX
0049BF73  E8 48 22 21 00            CALL 0x006ae1c0
0049BF78  8D 45 C0                  LEA EAX,[EBP + -0x40]
0049BF7B  8B CF                     MOV ECX,EDI
0049BF7D  50                        PUSH EAX
0049BF7E  6A 06                     PUSH 0x6
0049BF80  89 75 C4                  MOV dword ptr [EBP + -0x3c],ESI
0049BF83  E8 9E 61 F6 FF            CALL 0x00402126
LAB_0049bf88:
0049BF88  8B 8B 2E 02 00 00         MOV ECX,dword ptr [EBX + 0x22e]
0049BF8E  46                        INC ESI
0049BF8F  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
0049BF92  0F 8C 68 FF FF FF         JL 0x0049bf00
0049BF98  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
LAB_0049bf9b:
0049BF9B  8B 93 32 02 00 00         MOV EDX,dword ptr [EBX + 0x232]
0049BFA1  8D 4D B0                  LEA ECX,[EBP + -0x50]
0049BFA4  51                        PUSH ECX
0049BFA5  8B 8B 2A 02 00 00         MOV ECX,dword ptr [EBX + 0x22a]
0049BFAB  E8 C0 0C 21 00            CALL 0x006acc70
0049BFB0  0F BF 55 B4               MOVSX EDX,word ptr [EBP + -0x4c]
0049BFB4  0F BF 45 B2               MOVSX EAX,word ptr [EBP + -0x4e]
0049BFB8  0F BF 4D B0               MOVSX ECX,word ptr [EBP + -0x50]
0049BFBC  6A 00                     PUSH 0x0
0049BFBE  52                        PUSH EDX
0049BFBF  50                        PUSH EAX
0049BFC0  51                        PUSH ECX
0049BFC1  57                        PUSH EDI
0049BFC2  8B CB                     MOV ECX,EBX
0049BFC4  E8 B2 9D F6 FF            CALL 0x00405d7b
0049BFC9  57                        PUSH EDI
0049BFCA  E8 41 21 21 00            CALL 0x006ae110
0049BFCF  5F                        POP EDI
0049BFD0  5E                        POP ESI
0049BFD1  B8 02 00 00 00            MOV EAX,0x2
0049BFD6  5B                        POP EBX
0049BFD7  8B E5                     MOV ESP,EBP
0049BFD9  5D                        POP EBP
0049BFDA  C2 04 00                  RET 0x4
LAB_0049bfdd:
0049BFDD  50                        PUSH EAX
0049BFDE  E8 2D 21 21 00            CALL 0x006ae110
0049BFE3  89 B3 03 01 00 00         MOV dword ptr [EBX + 0x103],ESI
0049BFE9  5F                        POP EDI
0049BFEA  5E                        POP ESI
0049BFEB  33 C0                     XOR EAX,EAX
0049BFED  5B                        POP EBX
0049BFEE  8B E5                     MOV ESP,EBP
0049BFF0  5D                        POP EBP
0049BFF1  C2 04 00                  RET 0x4
