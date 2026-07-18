FUN_0063d660:
0063D660  55                        PUSH EBP
0063D661  8B EC                     MOV EBP,ESP
0063D663  83 EC 0C                  SUB ESP,0xc
0063D666  53                        PUSH EBX
0063D667  56                        PUSH ESI
0063D668  8B F1                     MOV ESI,ECX
0063D66A  33 DB                     XOR EBX,EBX
0063D66C  8B 86 36 03 00 00         MOV EAX,dword ptr [ESI + 0x336]
0063D672  3B C3                     CMP EAX,EBX
0063D674  0F 84 9D 05 00 00         JZ 0x0063dc17
0063D67A  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0063D67D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063D680  25 FF 00 00 00            AND EAX,0xff
0063D685  57                        PUSH EDI
0063D686  83 E8 0A                  SUB EAX,0xa
0063D689  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0063D68C  0F 84 74 04 00 00         JZ 0x0063db06
0063D692  48                        DEC EAX
0063D693  0F 84 29 01 00 00         JZ 0x0063d7c2
0063D699  48                        DEC EAX
0063D69A  0F 85 6C 05 00 00         JNZ 0x0063dc0c
0063D6A0  8B 86 BC 02 00 00         MOV EAX,dword ptr [ESI + 0x2bc]
0063D6A6  3B C3                     CMP EAX,EBX
0063D6A8  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0063D6AB  0F 84 5B 05 00 00         JZ 0x0063dc0c
0063D6B1  D9 05 44 20 7D 00         FLD float ptr [0x007d2044]
0063D6B7  DC C0                     FADD ST0,ST0
0063D6B9  8B 86 B4 02 00 00         MOV EAX,dword ptr [ESI + 0x2b4]
0063D6BF  33 C9                     XOR ECX,ECX
0063D6C1  3B D3                     CMP EDX,EBX
0063D6C3  89 86 B8 02 00 00         MOV dword ptr [ESI + 0x2b8],EAX
0063D6C9  DA 75 08                  FIDIV dword ptr [EBP + 0x8]
0063D6CC  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0063D6CF  C7 86 9A 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x29a],0x1
0063D6D9  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0063D6DC  D9 5D F8                  FSTP float ptr [EBP + -0x8]
0063D6DF  0F 8E 27 05 00 00         JLE 0x0063dc0c
LAB_0063d6e5:
0063D6E5  8B 86 36 03 00 00         MOV EAX,dword ptr [ESI + 0x336]
0063D6EB  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
0063D6EE  0F 83 B4 00 00 00         JNC 0x0063d7a8
0063D6F4  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
0063D6F7  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0063D6FA  0F AF F9                  IMUL EDI,ECX
0063D6FD  03 FA                     ADD EDI,EDX
0063D6FF  85 FF                     TEST EDI,EDI
0063D701  0F 84 A1 00 00 00         JZ 0x0063d7a8
0063D707  DB 45 08                  FILD dword ptr [EBP + 0x8]
0063D70A  D8 4D F8                  FMUL float ptr [EBP + -0x8]
0063D70D  D9 57 28                  FST float ptr [EDI + 0x28]
0063D710  D9 C0                     FLD ST0
0063D712  D9 FF                     FCOS
0063D714  DA 8E B4 02 00 00         FIMUL dword ptr [ESI + 0x2b4]
0063D71A  E8 69 0B 0F 00            CALL 0x0072e288
0063D71F  D9 FE                     FSIN
0063D721  03 86 A4 02 00 00         ADD EAX,dword ptr [ESI + 0x2a4]
0063D727  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
0063D72A  DA 8E B4 02 00 00         FIMUL dword ptr [ESI + 0x2b4]
0063D730  E8 53 0B 0F 00            CALL 0x0072e288
0063D735  8B 96 A8 02 00 00         MOV EDX,dword ptr [ESI + 0x2a8]
0063D73B  03 C2                     ADD EAX,EDX
0063D73D  43                        INC EBX
0063D73E  89 47 0C                  MOV dword ptr [EDI + 0xc],EAX
0063D741  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0063D744  DB 86 AC 02 00 00         FILD dword ptr [ESI + 0x2ac]
0063D74A  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063D750  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063D756  D9 5F 10                  FSTP float ptr [EDI + 0x10]
0063D759  8B 8E A4 02 00 00         MOV ECX,dword ptr [ESI + 0x2a4]
0063D75F  89 4F 14                  MOV dword ptr [EDI + 0x14],ECX
0063D762  8B 96 A8 02 00 00         MOV EDX,dword ptr [ESI + 0x2a8]
0063D768  89 57 18                  MOV dword ptr [EDI + 0x18],EDX
0063D76B  8B 86 AC 02 00 00         MOV EAX,dword ptr [ESI + 0x2ac]
0063D771  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
0063D774  DB 86 B4 02 00 00         FILD dword ptr [ESI + 0x2b4]
0063D77A  C7 47 04 01 00 00 00      MOV dword ptr [EDI + 0x4],0x1
0063D781  C7 47 24 0A 00 00 00      MOV dword ptr [EDI + 0x24],0xa
0063D788  C7 47 20 05 00 00 00      MOV dword ptr [EDI + 0x20],0x5
0063D78F  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
0063D795  D9 5F 2C                  FSTP float ptr [EDI + 0x2c]
0063D798  3B 9E BC 02 00 00         CMP EBX,dword ptr [ESI + 0x2bc]
0063D79E  7C 05                     JL 0x0063d7a5
0063D7A0  33 DB                     XOR EBX,EBX
0063D7A2  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
LAB_0063d7a5:
0063D7A5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0063d7a8:
0063D7A8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0063D7AB  41                        INC ECX
0063D7AC  3B C8                     CMP ECX,EAX
0063D7AE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0063D7B1  0F 8C 2E FF FF FF         JL 0x0063d6e5
0063D7B7  5F                        POP EDI
0063D7B8  5E                        POP ESI
0063D7B9  33 C0                     XOR EAX,EAX
0063D7BB  5B                        POP EBX
0063D7BC  8B E5                     MOV ESP,EBP
0063D7BE  5D                        POP EBP
0063D7BF  C2 04 00                  RET 0x4
LAB_0063d7c2:
0063D7C2  D9 05 44 20 7D 00         FLD float ptr [0x007d2044]
0063D7C8  D8 0D A4 D4 79 00         FMUL float ptr [0x0079d4a4]
0063D7CE  8B 8E B4 02 00 00         MOV ECX,dword ptr [ESI + 0x2b4]
0063D7D4  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0063D7D7  89 8E B8 02 00 00         MOV dword ptr [ESI + 0x2b8],ECX
0063D7DD  C7 86 9A 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x29a],0x1
0063D7E7  D9 C0                     FLD ST0
0063D7E9  DC C0                     FADD ST0,ST0
LAB_0063d7eb:
0063D7EB  8B 86 36 03 00 00         MOV EAX,dword ptr [ESI + 0x336]
0063D7F1  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
0063D7F4  0F 83 9D 00 00 00         JNC 0x0063d897
0063D7FA  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
0063D7FD  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0063D800  0F AF FB                  IMUL EDI,EBX
0063D803  03 F9                     ADD EDI,ECX
0063D805  85 FF                     TEST EDI,EDI
0063D807  0F 84 8A 00 00 00         JZ 0x0063d897
0063D80D  DB 45 08                  FILD dword ptr [EBP + 0x8]
0063D810  D8 C9                     FMUL ST1
0063D812  D9 57 28                  FST float ptr [EDI + 0x28]
0063D815  D9 C0                     FLD ST0
0063D817  D9 FF                     FCOS
0063D819  DA 8E B4 02 00 00         FIMUL dword ptr [ESI + 0x2b4]
0063D81F  E8 64 0A 0F 00            CALL 0x0072e288
0063D824  D9 FE                     FSIN
0063D826  03 86 A4 02 00 00         ADD EAX,dword ptr [ESI + 0x2a4]
0063D82C  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
0063D82F  DA 8E B4 02 00 00         FIMUL dword ptr [ESI + 0x2b4]
0063D835  E8 4E 0A 0F 00            CALL 0x0072e288
0063D83A  03 86 A8 02 00 00         ADD EAX,dword ptr [ESI + 0x2a8]
0063D840  89 47 0C                  MOV dword ptr [EDI + 0xc],EAX
0063D843  DB 86 AC 02 00 00         FILD dword ptr [ESI + 0x2ac]
0063D849  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063D84F  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063D855  D9 5F 10                  FSTP float ptr [EDI + 0x10]
0063D858  8B 96 A4 02 00 00         MOV EDX,dword ptr [ESI + 0x2a4]
0063D85E  89 57 14                  MOV dword ptr [EDI + 0x14],EDX
0063D861  8B 86 A8 02 00 00         MOV EAX,dword ptr [ESI + 0x2a8]
0063D867  89 47 18                  MOV dword ptr [EDI + 0x18],EAX
0063D86A  8B 8E AC 02 00 00         MOV ECX,dword ptr [ESI + 0x2ac]
0063D870  89 4F 1C                  MOV dword ptr [EDI + 0x1c],ECX
0063D873  B8 01 00 00 00            MOV EAX,0x1
0063D878  DB 86 B4 02 00 00         FILD dword ptr [ESI + 0x2b4]
0063D87E  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
0063D881  89 47 24                  MOV dword ptr [EDI + 0x24],EAX
0063D884  89 07                     MOV dword ptr [EDI],EAX
0063D886  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063D889  D9 5F 2C                  FSTP float ptr [EDI + 0x2c]
0063D88C  40                        INC EAX
0063D88D  C7 47 20 00 00 00 00      MOV dword ptr [EDI + 0x20],0x0
0063D894  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0063d897:
0063D897  43                        INC EBX
0063D898  83 FB 32                  CMP EBX,0x32
0063D89B  0F 8C 4A FF FF FF         JL 0x0063d7eb
0063D8A1  DD D8                     FSTP ST0
0063D8A3  D9 05 44 20 7D 00         FLD float ptr [0x007d2044]
0063D8A9  D8 0D A0 D4 79 00         FMUL float ptr [0x0079d4a0]
0063D8AF  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
0063D8B6  BB 32 00 00 00            MOV EBX,0x32
LAB_0063d8bb:
0063D8BB  8B 86 36 03 00 00         MOV EAX,dword ptr [ESI + 0x336]
0063D8C1  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
0063D8C4  0F 83 A3 00 00 00         JNC 0x0063d96d
0063D8CA  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
0063D8CD  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0063D8D0  0F AF FB                  IMUL EDI,EBX
0063D8D3  03 F9                     ADD EDI,ECX
0063D8D5  85 FF                     TEST EDI,EDI
0063D8D7  0F 84 90 00 00 00         JZ 0x0063d96d
0063D8DD  DB 45 08                  FILD dword ptr [EBP + 0x8]
0063D8E0  D8 C9                     FMUL ST1
0063D8E2  D8 C2                     FADD ST0,ST2
0063D8E4  D9 57 28                  FST float ptr [EDI + 0x28]
0063D8E7  D9 C0                     FLD ST0
0063D8E9  D9 FF                     FCOS
0063D8EB  DA 8E B4 02 00 00         FIMUL dword ptr [ESI + 0x2b4]
0063D8F1  E8 92 09 0F 00            CALL 0x0072e288
0063D8F6  D9 FE                     FSIN
0063D8F8  03 86 A4 02 00 00         ADD EAX,dword ptr [ESI + 0x2a4]
0063D8FE  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
0063D901  DA 8E B4 02 00 00         FIMUL dword ptr [ESI + 0x2b4]
0063D907  E8 7C 09 0F 00            CALL 0x0072e288
0063D90C  03 86 A8 02 00 00         ADD EAX,dword ptr [ESI + 0x2a8]
0063D912  89 47 0C                  MOV dword ptr [EDI + 0xc],EAX
0063D915  DB 86 AC 02 00 00         FILD dword ptr [ESI + 0x2ac]
0063D91B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063D921  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063D927  D9 5F 10                  FSTP float ptr [EDI + 0x10]
0063D92A  8B 96 A4 02 00 00         MOV EDX,dword ptr [ESI + 0x2a4]
0063D930  89 57 14                  MOV dword ptr [EDI + 0x14],EDX
0063D933  8B 86 A8 02 00 00         MOV EAX,dword ptr [ESI + 0x2a8]
0063D939  89 47 18                  MOV dword ptr [EDI + 0x18],EAX
0063D93C  8B 8E AC 02 00 00         MOV ECX,dword ptr [ESI + 0x2ac]
0063D942  89 4F 1C                  MOV dword ptr [EDI + 0x1c],ECX
0063D945  B8 01 00 00 00            MOV EAX,0x1
0063D94A  DB 86 B4 02 00 00         FILD dword ptr [ESI + 0x2b4]
0063D950  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
0063D953  89 47 24                  MOV dword ptr [EDI + 0x24],EAX
0063D956  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063D959  C7 47 20 00 00 00 00      MOV dword ptr [EDI + 0x20],0x0
0063D960  D9 5F 2C                  FSTP float ptr [EDI + 0x2c]
0063D963  40                        INC EAX
0063D964  C7 07 02 00 00 00         MOV dword ptr [EDI],0x2
0063D96A  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0063d96d:
0063D96D  43                        INC EBX
0063D96E  8D 53 CE                  LEA EDX,[EBX + -0x32]
0063D971  83 FA 0A                  CMP EDX,0xa
0063D974  0F 8C 41 FF FF FF         JL 0x0063d8bb
0063D97A  DD D8                     FSTP ST0
0063D97C  D9 05 44 20 7D 00         FLD float ptr [0x007d2044]
0063D982  D8 0D A0 D4 79 00         FMUL float ptr [0x0079d4a0]
0063D988  33 DB                     XOR EBX,EBX
0063D98A  B9 3C 00 00 00            MOV ECX,0x3c
0063D98F  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0063D992  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0063d995:
0063D995  8B 86 36 03 00 00         MOV EAX,dword ptr [ESI + 0x336]
0063D99B  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
0063D99E  0F 83 B2 00 00 00         JNC 0x0063da56
0063D9A4  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
0063D9A7  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0063D9AA  0F AF F9                  IMUL EDI,ECX
0063D9AD  03 FA                     ADD EDI,EDX
0063D9AF  85 FF                     TEST EDI,EDI
0063D9B1  0F 84 9F 00 00 00         JZ 0x0063da56
0063D9B7  DB 45 08                  FILD dword ptr [EBP + 0x8]
0063D9BA  D8 C9                     FMUL ST1
0063D9BC  D8 C2                     FADD ST0,ST2
0063D9BE  D9 57 28                  FST float ptr [EDI + 0x28]
0063D9C1  D9 C0                     FLD ST0
0063D9C3  D9 FF                     FCOS
0063D9C5  DA 8E B4 02 00 00         FIMUL dword ptr [ESI + 0x2b4]
0063D9CB  E8 B8 08 0F 00            CALL 0x0072e288
0063D9D0  D9 FE                     FSIN
0063D9D2  03 86 A4 02 00 00         ADD EAX,dword ptr [ESI + 0x2a4]
0063D9D8  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
0063D9DB  DA 8E B4 02 00 00         FIMUL dword ptr [ESI + 0x2b4]
0063D9E1  E8 A2 08 0F 00            CALL 0x0072e288
0063D9E6  8B 96 A8 02 00 00         MOV EDX,dword ptr [ESI + 0x2a8]
0063D9EC  03 C2                     ADD EAX,EDX
0063D9EE  43                        INC EBX
0063D9EF  89 47 0C                  MOV dword ptr [EDI + 0xc],EAX
0063D9F2  83 FB 0A                  CMP EBX,0xa
0063D9F5  DB 86 AC 02 00 00         FILD dword ptr [ESI + 0x2ac]
0063D9FB  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0063D9FE  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063DA04  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063DA0A  D9 5F 10                  FSTP float ptr [EDI + 0x10]
0063DA0D  8B 86 A4 02 00 00         MOV EAX,dword ptr [ESI + 0x2a4]
0063DA13  89 47 14                  MOV dword ptr [EDI + 0x14],EAX
0063DA16  8B 8E A8 02 00 00         MOV ECX,dword ptr [ESI + 0x2a8]
0063DA1C  89 4F 18                  MOV dword ptr [EDI + 0x18],ECX
0063DA1F  8B 96 AC 02 00 00         MOV EDX,dword ptr [ESI + 0x2ac]
0063DA25  89 57 1C                  MOV dword ptr [EDI + 0x1c],EDX
0063DA28  DB 86 B4 02 00 00         FILD dword ptr [ESI + 0x2b4]
0063DA2E  C7 47 04 02 00 00 00      MOV dword ptr [EDI + 0x4],0x2
0063DA35  C7 47 24 19 00 00 00      MOV dword ptr [EDI + 0x24],0x19
0063DA3C  C7 47 20 0A 00 00 00      MOV dword ptr [EDI + 0x20],0xa
0063DA43  C7 07 03 00 00 00         MOV dword ptr [EDI],0x3
0063DA49  D9 5F 2C                  FSTP float ptr [EDI + 0x2c]
0063DA4C  7C 05                     JL 0x0063da53
0063DA4E  33 DB                     XOR EBX,EBX
0063DA50  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
LAB_0063da53:
0063DA53  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0063da56:
0063DA56  41                        INC ECX
0063DA57  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0063DA5A  8D 41 C4                  LEA EAX,[ECX + -0x3c]
0063DA5D  3D 2C 01 00 00            CMP EAX,0x12c
0063DA62  0F 8C 2D FF FF FF         JL 0x0063d995
0063DA68  DD D8                     FSTP ST0
0063DA6A  6A 1B                     PUSH 0x1b
0063DA6C  DD D8                     FSTP ST0
0063DA6E  E8 FD D1 06 00            CALL 0x006aac70
0063DA73  85 C0                     TEST EAX,EAX
0063DA75  89 86 7F 03 00 00         MOV dword ptr [ESI + 0x37f],EAX
0063DA7B  74 2D                     JZ 0x0063daaa
0063DA7D  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
0063DA83  8B 8E B4 02 00 00         MOV ECX,dword ptr [ESI + 0x2b4]
0063DA89  8B 96 A8 02 00 00         MOV EDX,dword ptr [ESI + 0x2a8]
0063DA8F  8B 86 A4 02 00 00         MOV EAX,dword ptr [ESI + 0x2a4]
0063DA95  51                        PUSH ECX
0063DA96  52                        PUSH EDX
0063DA97  50                        PUSH EAX
0063DA98  8B CE                     MOV ECX,ESI
0063DA9A  E8 75 76 DC FF            CALL 0x00405114
0063DA9F  85 C0                     TEST EAX,EAX
0063DAA1  74 07                     JZ 0x0063daaa
0063DAA3  8B CE                     MOV ECX,ESI
0063DAA5  E8 92 49 DC FF            CALL 0x0040243c
LAB_0063daaa:
0063DAAA  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063DAB0  8B 96 A8 02 00 00         MOV EDX,dword ptr [ESI + 0x2a8]
0063DAB6  B8 79 19 8C 02            MOV EAX,0x28c1979
0063DABB  8B B9 80 03 00 00         MOV EDI,dword ptr [ECX + 0x380]
0063DAC1  0F AF D7                  IMUL EDX,EDI
0063DAC4  F7 EA                     IMUL EDX
0063DAC6  D1 FA                     SAR EDX,0x1
0063DAC8  8B C2                     MOV EAX,EDX
0063DACA  C1 E8 1F                  SHR EAX,0x1f
0063DACD  03 D0                     ADD EDX,EAX
0063DACF  B8 79 19 8C 02            MOV EAX,0x28c1979
0063DAD4  52                        PUSH EDX
0063DAD5  8B 96 A4 02 00 00         MOV EDX,dword ptr [ESI + 0x2a4]
0063DADB  0F AF D7                  IMUL EDX,EDI
0063DADE  F7 EA                     IMUL EDX
0063DAE0  D1 FA                     SAR EDX,0x1
0063DAE2  8B C2                     MOV EAX,EDX
0063DAE4  C1 E8 1F                  SHR EAX,0x1f
0063DAE7  03 D0                     ADD EDX,EAX
0063DAE9  52                        PUSH EDX
0063DAEA  E8 21 57 0A 00            CALL 0x006e3210
0063DAEF  D8 05 00 05 79 00         FADD float ptr [0x00790500]
0063DAF5  5F                        POP EDI
0063DAF6  33 C0                     XOR EAX,EAX
0063DAF8  D9 9E 32 03 00 00         FSTP float ptr [ESI + 0x332]
0063DAFE  5E                        POP ESI
0063DAFF  5B                        POP EBX
0063DB00  8B E5                     MOV ESP,EBP
0063DB02  5D                        POP EBP
0063DB03  C2 04 00                  RET 0x4
LAB_0063db06:
0063DB06  D9 05 44 20 7D 00         FLD float ptr [0x007d2044]
0063DB0C  DC C0                     FADD ST0,ST0
0063DB0E  8B 8E B4 02 00 00         MOV ECX,dword ptr [ESI + 0x2b4]
0063DB14  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0063DB17  89 8E B8 02 00 00         MOV dword ptr [ESI + 0x2b8],ECX
0063DB1D  33 C9                     XOR ECX,ECX
0063DB1F  DA B6 BC 02 00 00         FIDIV dword ptr [ESI + 0x2bc]
0063DB25  3B D3                     CMP EDX,EBX
0063DB27  C7 86 9A 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x29a],0x1
0063DB31  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0063DB34  D9 5D F8                  FSTP float ptr [EBP + -0x8]
0063DB37  0F 8E CF 00 00 00         JLE 0x0063dc0c
LAB_0063db3d:
0063DB3D  8B 86 36 03 00 00         MOV EAX,dword ptr [ESI + 0x336]
0063DB43  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
0063DB46  0F 83 B1 00 00 00         JNC 0x0063dbfd
0063DB4C  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
0063DB4F  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0063DB52  0F AF F9                  IMUL EDI,ECX
0063DB55  03 FA                     ADD EDI,EDX
0063DB57  85 FF                     TEST EDI,EDI
0063DB59  0F 84 9E 00 00 00         JZ 0x0063dbfd
0063DB5F  DB 45 08                  FILD dword ptr [EBP + 0x8]
0063DB62  D8 4D F8                  FMUL float ptr [EBP + -0x8]
0063DB65  D9 57 28                  FST float ptr [EDI + 0x28]
0063DB68  D9 C0                     FLD ST0
0063DB6A  D9 FF                     FCOS
0063DB6C  DA 8E B4 02 00 00         FIMUL dword ptr [ESI + 0x2b4]
0063DB72  E8 11 07 0F 00            CALL 0x0072e288
0063DB77  D9 FE                     FSIN
0063DB79  03 86 A4 02 00 00         ADD EAX,dword ptr [ESI + 0x2a4]
0063DB7F  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
0063DB82  DA 8E B4 02 00 00         FIMUL dword ptr [ESI + 0x2b4]
0063DB88  E8 FB 06 0F 00            CALL 0x0072e288
0063DB8D  8B 96 A8 02 00 00         MOV EDX,dword ptr [ESI + 0x2a8]
0063DB93  03 C2                     ADD EAX,EDX
0063DB95  43                        INC EBX
0063DB96  89 47 0C                  MOV dword ptr [EDI + 0xc],EAX
0063DB99  83 FB 32                  CMP EBX,0x32
0063DB9C  DB 86 AC 02 00 00         FILD dword ptr [ESI + 0x2ac]
0063DBA2  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0063DBA5  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063DBAB  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063DBB1  D9 5F 10                  FSTP float ptr [EDI + 0x10]
0063DBB4  8B 96 A4 02 00 00         MOV EDX,dword ptr [ESI + 0x2a4]
0063DBBA  89 57 14                  MOV dword ptr [EDI + 0x14],EDX
0063DBBD  8B 86 A8 02 00 00         MOV EAX,dword ptr [ESI + 0x2a8]
0063DBC3  89 47 18                  MOV dword ptr [EDI + 0x18],EAX
0063DBC6  8B 8E AC 02 00 00         MOV ECX,dword ptr [ESI + 0x2ac]
0063DBCC  89 4F 1C                  MOV dword ptr [EDI + 0x1c],ECX
0063DBCF  DB 86 B4 02 00 00         FILD dword ptr [ESI + 0x2b4]
0063DBD5  C7 47 04 01 00 00 00      MOV dword ptr [EDI + 0x4],0x1
0063DBDC  C7 47 24 0A 00 00 00      MOV dword ptr [EDI + 0x24],0xa
0063DBE3  C7 47 20 05 00 00 00      MOV dword ptr [EDI + 0x20],0x5
0063DBEA  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
0063DBF0  D9 5F 2C                  FSTP float ptr [EDI + 0x2c]
0063DBF3  7C 05                     JL 0x0063dbfa
0063DBF5  33 DB                     XOR EBX,EBX
0063DBF7  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
LAB_0063dbfa:
0063DBFA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0063dbfd:
0063DBFD  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0063DC00  41                        INC ECX
0063DC01  3B C8                     CMP ECX,EAX
0063DC03  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0063DC06  0F 8C 31 FF FF FF         JL 0x0063db3d
LAB_0063dc0c:
0063DC0C  5F                        POP EDI
0063DC0D  5E                        POP ESI
0063DC0E  33 C0                     XOR EAX,EAX
0063DC10  5B                        POP EBX
0063DC11  8B E5                     MOV ESP,EBP
0063DC13  5D                        POP EBP
0063DC14  C2 04 00                  RET 0x4
LAB_0063dc17:
0063DC17  5E                        POP ESI
0063DC18  33 C0                     XOR EAX,EAX
0063DC1A  5B                        POP EBX
0063DC1B  8B E5                     MOV ESP,EBP
0063DC1D  5D                        POP EBP
0063DC1E  C2 04 00                  RET 0x4
