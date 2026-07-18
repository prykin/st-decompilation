FUN_0040f4d0:
0040F4D0  55                        PUSH EBP
0040F4D1  8B EC                     MOV EBP,ESP
0040F4D3  6A FF                     PUSH -0x1
0040F4D5  68 50 00 79 00            PUSH 0x790050
0040F4DA  68 64 D9 72 00            PUSH 0x72d964
0040F4DF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0040F4E5  50                        PUSH EAX
0040F4E6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0040F4ED  83 EC 24                  SUB ESP,0x24
0040F4F0  53                        PUSH EBX
0040F4F1  56                        PUSH ESI
0040F4F2  57                        PUSH EDI
0040F4F3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0040F4F6  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0040F4FD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040F500  83 C0 03                  ADD EAX,0x3
0040F503  24 FC                     AND AL,0xfc
0040F505  E8 36 E5 31 00            CALL 0x0072da40
0040F50A  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0040F50D  8B DC                     MOV EBX,ESP
0040F50F  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
0040F512  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0040F519  EB 2A                     JMP 0x0040f545
LAB_0040f545:
0040F545  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0040F548  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0040F54B  8B FB                     MOV EDI,EBX
0040F54D  8B D1                     MOV EDX,ECX
0040F54F  C1 E9 02                  SHR ECX,0x2
0040F552  F3 A5                     MOVSD.REP ES:EDI,ESI
0040F554  8B CA                     MOV ECX,EDX
0040F556  83 E1 03                  AND ECX,0x3
0040F559  F3 A4                     MOVSB.REP ES:EDI,ESI
0040F55B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0040F55E  85 C0                     TEST EAX,EAX
0040F560  0F 84 1B 01 00 00         JZ 0x0040f681
0040F566  33 D2                     XOR EDX,EDX
0040F568  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0040F56B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0040F56E  8B F9                     MOV EDI,ECX
0040F570  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0040F573  2B FE                     SUB EDI,ESI
0040F575  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
0040F578  8B C7                     MOV EAX,EDI
0040F57A  3B C1                     CMP EAX,ECX
0040F57C  7D 0F                     JGE 0x0040f58d
LAB_0040f57e:
0040F57E  80 3C 18 00               CMP byte ptr [EAX + EBX*0x1],0x0
0040F582  74 01                     JZ 0x0040f585
0040F584  42                        INC EDX
LAB_0040f585:
0040F585  40                        INC EAX
0040F586  3B C1                     CMP EAX,ECX
0040F588  7C F4                     JL 0x0040f57e
0040F58A  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_0040f58d:
0040F58D  33 C0                     XOR EAX,EAX
0040F58F  85 F6                     TEST ESI,ESI
0040F591  7E 0F                     JLE 0x0040f5a2
LAB_0040f593:
0040F593  80 3C 18 00               CMP byte ptr [EAX + EBX*0x1],0x0
0040F597  74 01                     JZ 0x0040f59a
0040F599  42                        INC EDX
LAB_0040f59a:
0040F59A  40                        INC EAX
0040F59B  3B C6                     CMP EAX,ESI
0040F59D  7C F4                     JL 0x0040f593
0040F59F  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_0040f5a2:
0040F5A2  33 C0                     XOR EAX,EAX
0040F5A4  85 F6                     TEST ESI,ESI
0040F5A6  7E 43                     JLE 0x0040f5eb
0040F5A8  8B FB                     MOV EDI,EBX
0040F5AA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0040F5AD  2B D3                     SUB EDX,EBX
0040F5AF  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
LAB_0040f5b2:
0040F5B2  80 3C 3E 00               CMP byte ptr [ESI + EDI*0x1],0x0
0040F5B6  74 03                     JZ 0x0040f5bb
0040F5B8  FF 45 E0                  INC dword ptr [EBP + -0x20]
LAB_0040f5bb:
0040F5BB  80 3F 00                  CMP byte ptr [EDI],0x0
0040F5BE  74 07                     JZ 0x0040f5c7
0040F5C0  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0040F5C3  03 CA                     ADD ECX,EDX
0040F5C5  EB 03                     JMP 0x0040f5ca
LAB_0040f5c7:
0040F5C7  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
LAB_0040f5ca:
0040F5CA  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0040F5CD  88 0C 3A                  MOV byte ptr [EDX + EDI*0x1],CL
0040F5D0  8B D0                     MOV EDX,EAX
0040F5D2  2B D6                     SUB EDX,ESI
0040F5D4  03 D3                     ADD EDX,EBX
0040F5D6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0040F5D9  80 3C 0A 00               CMP byte ptr [EDX + ECX*0x1],0x0
0040F5DD  74 03                     JZ 0x0040f5e2
0040F5DF  FF 4D E0                  DEC dword ptr [EBP + -0x20]
LAB_0040f5e2:
0040F5E2  40                        INC EAX
0040F5E3  47                        INC EDI
0040F5E4  3B C6                     CMP EAX,ESI
0040F5E6  7C CA                     JL 0x0040f5b2
0040F5E8  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
LAB_0040f5eb:
0040F5EB  3B C7                     CMP EAX,EDI
0040F5ED  7D 40                     JGE 0x0040f62f
0040F5EF  8D 3C 18                  LEA EDI,[EAX + EBX*0x1]
0040F5F2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0040F5F5  2B D3                     SUB EDX,EBX
0040F5F7  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
LAB_0040f5fa:
0040F5FA  80 3C 37 00               CMP byte ptr [EDI + ESI*0x1],0x0
0040F5FE  74 03                     JZ 0x0040f603
0040F600  FF 45 E0                  INC dword ptr [EBP + -0x20]
LAB_0040f603:
0040F603  80 3F 00                  CMP byte ptr [EDI],0x0
0040F606  74 07                     JZ 0x0040f60f
0040F608  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0040F60B  03 CA                     ADD ECX,EDX
0040F60D  EB 03                     JMP 0x0040f612
LAB_0040f60f:
0040F60F  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
LAB_0040f612:
0040F612  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0040F615  88 0C 17                  MOV byte ptr [EDI + EDX*0x1],CL
0040F618  8B C8                     MOV ECX,EAX
0040F61A  2B CE                     SUB ECX,ESI
0040F61C  80 3C 19 00               CMP byte ptr [ECX + EBX*0x1],0x0
0040F620  74 03                     JZ 0x0040f625
0040F622  FF 4D E0                  DEC dword ptr [EBP + -0x20]
LAB_0040f625:
0040F625  40                        INC EAX
0040F626  47                        INC EDI
0040F627  3B 45 D8                  CMP EAX,dword ptr [EBP + -0x28]
0040F62A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0040F62D  7C CB                     JL 0x0040f5fa
LAB_0040f62f:
0040F62F  3B C1                     CMP EAX,ECX
0040F631  0F 8D 42 01 00 00         JGE 0x0040f779
0040F637  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0040F63A  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
0040F63D  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
0040F640  8B FB                     MOV EDI,EBX
0040F642  2B FA                     SUB EDI,EDX
0040F644  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
0040F647  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
LAB_0040f64a:
0040F64A  8B D0                     MOV EDX,EAX
0040F64C  2B D1                     SUB EDX,ECX
0040F64E  03 D3                     ADD EDX,EBX
0040F650  80 3C 32 00               CMP byte ptr [EDX + ESI*0x1],0x0
0040F654  74 03                     JZ 0x0040f659
0040F656  FF 45 E0                  INC dword ptr [EBP + -0x20]
LAB_0040f659:
0040F659  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
0040F65C  80 3C 3A 00               CMP byte ptr [EDX + EDI*0x1],0x0
0040F660  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0040F663  74 02                     JZ 0x0040f667
0040F665  03 D1                     ADD EDX,ECX
LAB_0040f667:
0040F667  88 17                     MOV byte ptr [EDI],DL
0040F669  8B D0                     MOV EDX,EAX
0040F66B  2B D6                     SUB EDX,ESI
0040F66D  80 3C 1A 00               CMP byte ptr [EDX + EBX*0x1],0x0
0040F671  74 03                     JZ 0x0040f676
0040F673  FF 4D E0                  DEC dword ptr [EBP + -0x20]
LAB_0040f676:
0040F676  40                        INC EAX
0040F677  47                        INC EDI
0040F678  3B C1                     CMP EAX,ECX
0040F67A  7C CE                     JL 0x0040f64a
0040F67C  E9 F8 00 00 00            JMP 0x0040f779
LAB_0040f681:
0040F681  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0040F684  8B C7                     MOV EAX,EDI
0040F686  99                        CDQ
0040F687  2B C2                     SUB EAX,EDX
0040F689  8B D0                     MOV EDX,EAX
0040F68B  D1 FA                     SAR EDX,0x1
0040F68D  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0040F690  33 C9                     XOR ECX,ECX
0040F692  85 FF                     TEST EDI,EDI
0040F694  7E 0F                     JLE 0x0040f6a5
LAB_0040f696:
0040F696  80 3C 19 00               CMP byte ptr [ECX + EBX*0x1],0x0
0040F69A  74 01                     JZ 0x0040f69d
0040F69C  42                        INC EDX
LAB_0040f69d:
0040F69D  41                        INC ECX
0040F69E  3B CF                     CMP ECX,EDI
0040F6A0  7C F4                     JL 0x0040f696
0040F6A2  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_0040f6a5:
0040F6A5  33 C9                     XOR ECX,ECX
0040F6A7  85 FF                     TEST EDI,EDI
0040F6A9  7E 36                     JLE 0x0040f6e1
0040F6AB  8B F3                     MOV ESI,EBX
0040F6AD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0040F6B0  2B C3                     SUB EAX,EBX
0040F6B2  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_0040f6b5:
0040F6B5  80 3C 3E 00               CMP byte ptr [ESI + EDI*0x1],0x0
0040F6B9  74 04                     JZ 0x0040f6bf
0040F6BB  42                        INC EDX
0040F6BC  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_0040f6bf:
0040F6BF  80 3E 00                  CMP byte ptr [ESI],0x0
0040F6C2  74 08                     JZ 0x0040f6cc
0040F6C4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040F6C7  03 D0                     ADD EDX,EAX
0040F6C9  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
LAB_0040f6cc:
0040F6CC  88 14 06                  MOV byte ptr [ESI + EAX*0x1],DL
0040F6CF  F6 C1 01                  TEST CL,0x1
0040F6D2  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0040F6D5  74 04                     JZ 0x0040f6db
0040F6D7  4A                        DEC EDX
0040F6D8  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_0040f6db:
0040F6DB  41                        INC ECX
0040F6DC  46                        INC ESI
0040F6DD  3B CF                     CMP ECX,EDI
0040F6DF  7C D4                     JL 0x0040f6b5
LAB_0040f6e1:
0040F6E1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040F6E4  8B F0                     MOV ESI,EAX
0040F6E6  2B F7                     SUB ESI,EDI
0040F6E8  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
0040F6EB  3B CE                     CMP ECX,ESI
0040F6ED  7D 40                     JGE 0x0040f72f
0040F6EF  8D 34 19                  LEA ESI,[ECX + EBX*0x1]
0040F6F2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0040F6F5  2B C3                     SUB EAX,EBX
0040F6F7  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_0040f6fa:
0040F6FA  80 3C 3E 00               CMP byte ptr [ESI + EDI*0x1],0x0
0040F6FE  74 04                     JZ 0x0040f704
0040F700  42                        INC EDX
0040F701  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_0040f704:
0040F704  80 3E 00                  CMP byte ptr [ESI],0x0
0040F707  74 08                     JZ 0x0040f711
0040F709  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040F70C  03 D0                     ADD EDX,EAX
0040F70E  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
LAB_0040f711:
0040F711  88 14 06                  MOV byte ptr [ESI + EAX*0x1],DL
0040F714  8B D1                     MOV EDX,ECX
0040F716  2B D7                     SUB EDX,EDI
0040F718  80 3C 1A 00               CMP byte ptr [EDX + EBX*0x1],0x0
0040F71C  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0040F71F  74 04                     JZ 0x0040f725
0040F721  4A                        DEC EDX
0040F722  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_0040f725:
0040F725  41                        INC ECX
0040F726  46                        INC ESI
0040F727  3B 4D D8                  CMP ECX,dword ptr [EBP + -0x28]
0040F72A  7C CE                     JL 0x0040f6fa
0040F72C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_0040f72f:
0040F72F  3B C8                     CMP ECX,EAX
0040F731  7D 46                     JGE 0x0040f779
0040F733  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0040F736  8D 34 39                  LEA ESI,[ECX + EDI*0x1]
0040F739  2B C1                     SUB EAX,ECX
0040F73B  8B D3                     MOV EDX,EBX
0040F73D  2B D7                     SUB EDX,EDI
0040F73F  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0040F742  EB 03                     JMP 0x0040f747
LAB_0040f744:
0040F744  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
LAB_0040f747:
0040F747  A8 01                     TEST AL,0x1
0040F749  75 03                     JNZ 0x0040f74e
0040F74B  FF 45 E0                  INC dword ptr [EBP + -0x20]
LAB_0040f74e:
0040F74E  80 3C 16 00               CMP byte ptr [ESI + EDX*0x1],0x0
0040F752  74 0A                     JZ 0x0040f75e
0040F754  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0040F757  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0040F75A  03 D7                     ADD EDX,EDI
0040F75C  EB 03                     JMP 0x0040f761
LAB_0040f75e:
0040F75E  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
LAB_0040f761:
0040F761  88 16                     MOV byte ptr [ESI],DL
0040F763  8B D1                     MOV EDX,ECX
0040F765  2B 55 10                  SUB EDX,dword ptr [EBP + 0x10]
0040F768  80 3C 1A 00               CMP byte ptr [EDX + EBX*0x1],0x0
0040F76C  74 03                     JZ 0x0040f771
0040F76E  FF 4D E0                  DEC dword ptr [EBP + -0x20]
LAB_0040f771:
0040F771  41                        INC ECX
0040F772  48                        DEC EAX
0040F773  46                        INC ESI
0040F774  3B 4D 0C                  CMP ECX,dword ptr [EBP + 0xc]
0040F777  7C CB                     JL 0x0040f744
LAB_0040f779:
0040F779  8D 65 C0                  LEA ESP,[EBP + -0x40]
0040F77C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0040F77F  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0040F786  5F                        POP EDI
0040F787  5E                        POP ESI
0040F788  5B                        POP EBX
0040F789  8B E5                     MOV ESP,EBP
0040F78B  5D                        POP EBP
0040F78C  C2 10 00                  RET 0x10
