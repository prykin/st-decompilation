FUN_0069b910:
0069B910  55                        PUSH EBP
0069B911  8B EC                     MOV EBP,ESP
0069B913  83 EC 28                  SUB ESP,0x28
0069B916  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0069B919  33 C0                     XOR EAX,EAX
0069B91B  53                        PUSH EBX
0069B91C  56                        PUSH ESI
0069B91D  3B C8                     CMP ECX,EAX
0069B91F  57                        PUSH EDI
0069B920  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0069B923  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0069B926  0F 8E 2D 02 00 00         JLE 0x0069bb59
0069B92C  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0069B92F  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
0069B932  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0069B935  EB 03                     JMP 0x0069b93a
LAB_0069b937:
0069B937  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_0069b93a:
0069B93A  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
LAB_0069b93d:
0069B93D  85 DB                     TEST EBX,EBX
0069B93F  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
0069B942  0F 8E 0E 02 00 00         JLE 0x0069bb56
0069B948  E8 73 2D 09 00            CALL 0x0072e6c0
0069B94D  99                        CDQ
0069B94E  F7 FE                     IDIV ESI
0069B950  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0069B953  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0069B956  8B CA                     MOV ECX,EDX
0069B958  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0069B95B  C1 E1 06                  SHL ECX,0x6
0069B95E  39 44 39 2C               CMP dword ptr [ECX + EDI*0x1 + 0x2c],EAX
0069B962  7F 03                     JG 0x0069b967
0069B964  4B                        DEC EBX
0069B965  EB D6                     JMP 0x0069b93d
LAB_0069b967:
0069B967  C1 E2 06                  SHL EDX,0x6
0069B96A  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
0069B971  8B 4C 3A 30               MOV ECX,dword ptr [EDX + EDI*0x1 + 0x30]
0069B975  8B 44 3A 38               MOV EAX,dword ptr [EDX + EDI*0x1 + 0x38]
0069B979  8D 34 3A                  LEA ESI,[EDX + EDI*0x1]
0069B97C  2B C1                     SUB EAX,ECX
0069B97E  99                        CDQ
0069B97F  2B C2                     SUB EAX,EDX
0069B981  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0069B984  8B D8                     MOV EBX,EAX
0069B986  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0069B989  D1 FB                     SAR EBX,0x1
0069B98B  03 D9                     ADD EBX,ECX
0069B98D  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
0069B990  2B C1                     SUB EAX,ECX
0069B992  99                        CDQ
0069B993  2B C2                     SUB EAX,EDX
0069B995  D1 F8                     SAR EAX,0x1
0069B997  03 C1                     ADD EAX,ECX
0069B999  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0069B99C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069B99F  85 C0                     TEST EAX,EAX
0069B9A1  0F 84 87 00 00 00         JZ 0x0069ba2e
0069B9A7  85 C0                     TEST EAX,EAX
0069B9A9  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0069B9B0  7E 7C                     JLE 0x0069ba2e
0069B9B2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0069B9B5  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0069B9B8  EB 03                     JMP 0x0069b9bd
LAB_0069b9ba:
0069B9BA  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_0069b9bd:
0069B9BD  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0069B9C0  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0069B9C3  8B 0A                     MOV ECX,dword ptr [EDX]
0069B9C5  3B C8                     CMP ECX,EAX
0069B9C7  74 52                     JZ 0x0069ba1b
0069B9C9  C1 E1 06                  SHL ECX,0x6
0069B9CC  03 CF                     ADD ECX,EDI
0069B9CE  8B 79 30                  MOV EDI,dword ptr [ECX + 0x30]
0069B9D1  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
0069B9D4  2B C7                     SUB EAX,EDI
0069B9D6  99                        CDQ
0069B9D7  2B C2                     SUB EAX,EDX
0069B9D9  8B F0                     MOV ESI,EAX
0069B9DB  8B 41 3C                  MOV EAX,dword ptr [ECX + 0x3c]
0069B9DE  D1 FE                     SAR ESI,0x1
0069B9E0  03 F7                     ADD ESI,EDI
0069B9E2  8B 79 34                  MOV EDI,dword ptr [ECX + 0x34]
0069B9E5  2B C7                     SUB EAX,EDI
0069B9E7  99                        CDQ
0069B9E8  2B C2                     SUB EAX,EDX
0069B9EA  D1 F8                     SAR EAX,0x1
0069B9EC  03 C7                     ADD EAX,EDI
0069B9EE  50                        PUSH EAX
0069B9EF  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0069B9F2  56                        PUSH ESI
0069B9F3  50                        PUSH EAX
0069B9F4  53                        PUSH EBX
0069B9F5  E8 96 15 01 00            CALL 0x006acf90
0069B9FA  3B 45 18                  CMP EAX,dword ptr [EBP + 0x18]
0069B9FD  7C 25                     JL 0x0069ba24
0069B9FF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0069BA02  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0069BA05  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0069BA08  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0069BA0B  40                        INC EAX
0069BA0C  83 C2 04                  ADD EDX,0x4
0069BA0F  3B C1                     CMP EAX,ECX
0069BA11  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0069BA14  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0069BA17  7C A1                     JL 0x0069b9ba
0069BA19  EB 13                     JMP 0x0069ba2e
LAB_0069ba1b:
0069BA1B  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0069BA22  EB 0A                     JMP 0x0069ba2e
LAB_0069ba24:
0069BA24  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0069BA27  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0069ba2e:
0069BA2E  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0069BA31  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0069BA34  48                        DEC EAX
0069BA35  85 C9                     TEST ECX,ECX
0069BA37  0F 85 F7 00 00 00         JNZ 0x0069bb34
0069BA3D  85 C0                     TEST EAX,EAX
0069BA3F  0F 8F 11 01 00 00         JG 0x0069bb56
0069BA45  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069BA48  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
0069BA4F  85 C0                     TEST EAX,EAX
0069BA51  0F 8E FF 00 00 00         JLE 0x0069bb56
0069BA57  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0069BA5A  41                        INC ECX
0069BA5B  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
LAB_0069ba5e:
0069BA5E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0069BA61  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
0069BA64  3B C2                     CMP EAX,EDX
0069BA66  0F 8C A1 00 00 00         JL 0x0069bb0d
0069BA6C  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
0069BA6F  8B 5E 30                  MOV EBX,dword ptr [ESI + 0x30]
0069BA72  99                        CDQ
0069BA73  2B C2                     SUB EAX,EDX
0069BA75  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
0069BA7C  8B F8                     MOV EDI,EAX
0069BA7E  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0069BA81  99                        CDQ
0069BA82  D1 FF                     SAR EDI,0x1
0069BA84  2B C2                     SUB EAX,EDX
0069BA86  03 FB                     ADD EDI,EBX
0069BA88  8B D8                     MOV EBX,EAX
0069BA8A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0069BA8D  D1 FB                     SAR EBX,0x1
0069BA8F  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
0069BA92  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069BA95  03 D9                     ADD EBX,ECX
0069BA97  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0069BA9E  85 C0                     TEST EAX,EAX
0069BAA0  0F 8E 81 00 00 00         JLE 0x0069bb27
0069BAA6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0069BAA9  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_0069baac:
0069BAAC  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0069BAAF  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0069BAB2  8B 02                     MOV EAX,dword ptr [EDX]
0069BAB4  3B C1                     CMP EAX,ECX
0069BAB6  74 4B                     JZ 0x0069bb03
0069BAB8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069BABB  C1 E0 06                  SHL EAX,0x6
0069BABE  03 C8                     ADD ECX,EAX
0069BAC0  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
0069BAC3  99                        CDQ
0069BAC4  2B C2                     SUB EAX,EDX
0069BAC6  8B F0                     MOV ESI,EAX
0069BAC8  8B 41 30                  MOV EAX,dword ptr [ECX + 0x30]
0069BACB  D1 FE                     SAR ESI,0x1
0069BACD  03 F0                     ADD ESI,EAX
0069BACF  8B 41 3C                  MOV EAX,dword ptr [ECX + 0x3c]
0069BAD2  99                        CDQ
0069BAD3  2B C2                     SUB EAX,EDX
0069BAD5  8B 51 34                  MOV EDX,dword ptr [ECX + 0x34]
0069BAD8  D1 F8                     SAR EAX,0x1
0069BADA  03 C2                     ADD EAX,EDX
0069BADC  50                        PUSH EAX
0069BADD  56                        PUSH ESI
0069BADE  53                        PUSH EBX
0069BADF  57                        PUSH EDI
0069BAE0  E8 AB 14 01 00            CALL 0x006acf90
0069BAE5  3B 45 18                  CMP EAX,dword ptr [EBP + 0x18]
0069BAE8  7C 19                     JL 0x0069bb03
0069BAEA  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0069BAED  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0069BAF0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0069BAF3  40                        INC EAX
0069BAF4  83 C2 04                  ADD EDX,0x4
0069BAF7  3B C1                     CMP EAX,ECX
0069BAF9  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0069BAFC  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0069BAFF  7D 26                     JGE 0x0069bb27
0069BB01  EB A9                     JMP 0x0069baac
LAB_0069bb03:
0069BB03  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0069BB06  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0069bb0d:
0069BB0D  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0069BB10  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0069BB13  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0069BB16  40                        INC EAX
0069BB17  42                        INC EDX
0069BB18  3B C1                     CMP EAX,ECX
0069BB1A  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0069BB1D  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0069BB20  7D 0B                     JGE 0x0069bb2d
0069BB22  E9 37 FF FF FF            JMP 0x0069ba5e
LAB_0069bb27:
0069BB27  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0069BB2A  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_0069bb2d:
0069BB2D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0069BB30  85 C0                     TEST EAX,EAX
0069BB32  74 22                     JZ 0x0069bb56
LAB_0069bb34:
0069BB34  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0069BB37  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069BB3A  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0069BB3D  89 0C 82                  MOV dword ptr [EDX + EAX*0x4],ECX
0069BB40  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0069BB43  40                        INC EAX
0069BB44  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0069BB47  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0069BB4A  40                        INC EAX
0069BB4B  3B C1                     CMP EAX,ECX
0069BB4D  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0069BB50  0F 8C E1 FD FF FF         JL 0x0069b937
LAB_0069bb56:
0069BB56  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0069bb59:
0069BB59  5F                        POP EDI
0069BB5A  5E                        POP ESI
0069BB5B  5B                        POP EBX
0069BB5C  8B E5                     MOV ESP,EBP
0069BB5E  5D                        POP EBP
0069BB5F  C2 18 00                  RET 0x18
