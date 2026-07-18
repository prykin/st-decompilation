FUN_0067c7e0:
0067C7E0  55                        PUSH EBP
0067C7E1  8B EC                     MOV EBP,ESP
0067C7E3  81 EC AC 00 00 00         SUB ESP,0xac
0067C7E9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067C7EE  53                        PUSH EBX
0067C7EF  56                        PUSH ESI
0067C7F0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0067C7F3  57                        PUSH EDI
0067C7F4  8D 95 58 FF FF FF         LEA EDX,[EBP + 0xffffff58]
0067C7FA  8D 8D 54 FF FF FF         LEA ECX,[EBP + 0xffffff54]
0067C800  6A 00                     PUSH 0x0
0067C802  52                        PUSH EDX
0067C803  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
0067C809  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067C80F  E8 DC 0F 0B 00            CALL 0x0072d7f0
0067C814  8B F0                     MOV ESI,EAX
0067C816  83 C4 08                  ADD ESP,0x8
0067C819  85 F6                     TEST ESI,ESI
0067C81B  0F 85 A2 04 00 00         JNZ 0x0067ccc3
0067C821  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0067C826  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0067C829  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0067C82C  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0067C832  89 8B FE 06 00 00         MOV dword ptr [EBX + 0x6fe],ECX
0067C838  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0067C83B  3D 97 5D 00 00            CMP EAX,0x5d97
0067C840  0F 87 82 03 00 00         JA 0x0067cbc8
0067C846  0F 84 70 03 00 00         JZ 0x0067cbbc
0067C84C  3D 0F 01 00 00            CMP EAX,0x10f
0067C851  0F 87 6D 02 00 00         JA 0x0067cac4
0067C857  0F 84 C8 01 00 00         JZ 0x0067ca25
0067C85D  2B C6                     SUB EAX,ESI
0067C85F  0F 84 CF 00 00 00         JZ 0x0067c934
0067C865  83 E8 02                  SUB EAX,0x2
0067C868  74 78                     JZ 0x0067c8e2
0067C86A  48                        DEC EAX
0067C86B  0F 85 0B 01 00 00         JNZ 0x0067c97c
0067C871  8B 15 BC 17 81 00         MOV EDX,dword ptr [0x008117bc]
0067C877  85 D2                     TEST EDX,EDX
0067C879  74 3E                     JZ 0x0067c8b9
0067C87B  B9 08 00 00 00            MOV ECX,0x8
0067C880  33 C0                     XOR EAX,EAX
0067C882  8D 7D CC                  LEA EDI,[EBP + -0x34]
0067C885  F3 AB                     STOSD.REP ES:EDI
0067C887  66 8B 83 D7 05 00 00      MOV AX,word ptr [EBX + 0x5d7]
0067C88E  C7 45 DC EC 5D 00 00      MOV dword ptr [EBP + -0x24],0x5dec
0067C895  85 DB                     TEST EBX,EBX
0067C897  66 89 45 E0               MOV word ptr [EBP + -0x20],AX
0067C89B  74 08                     JZ 0x0067c8a5
0067C89D  8D 4B 1C                  LEA ECX,[EBX + 0x1c]
0067C8A0  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0067C8A3  EB 07                     JMP 0x0067c8ac
LAB_0067c8a5:
0067C8A5  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
LAB_0067c8ac:
0067C8AC  8B 02                     MOV EAX,dword ptr [EDX]
0067C8AE  8D 4D CC                  LEA ECX,[EBP + -0x34]
0067C8B1  51                        PUSH ECX
0067C8B2  8B CA                     MOV ECX,EDX
0067C8B4  FF 10                     CALL dword ptr [EAX]
0067C8B6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_0067c8b9:
0067C8B9  E8 61 5F D8 FF            CALL 0x0040281f
0067C8BE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067C8C4  85 C9                     TEST ECX,ECX
0067C8C6  74 0E                     JZ 0x0067c8d6
0067C8C8  8A 93 D7 05 00 00         MOV DL,byte ptr [EBX + 0x5d7]
0067C8CE  6A 00                     PUSH 0x0
0067C8D0  52                        PUSH EDX
0067C8D1  E8 16 65 D8 FF            CALL 0x00402dec
LAB_0067c8d6:
0067C8D6  8B CB                     MOV ECX,EBX
0067C8D8  E8 81 7F D8 FF            CALL 0x0040485e
0067C8DD  E9 9A 00 00 00            JMP 0x0067c97c
LAB_0067c8e2:
0067C8E2  8B 77 14                  MOV ESI,dword ptr [EDI + 0x14]
0067C8E5  85 F6                     TEST ESI,ESI
0067C8E7  75 17                     JNZ 0x0067c900
0067C8E9  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0067C8EE  68 86 05 00 00            PUSH 0x586
0067C8F3  68 4C 2E 7D 00            PUSH 0x7d2e4c
0067C8F8  50                        PUSH EAX
0067C8F9  6A FA                     PUSH -0x6
0067C8FB  E8 40 95 02 00            CALL 0x006a5e40
LAB_0067c900:
0067C900  56                        PUSH ESI
0067C901  8B CB                     MOV ECX,EBX
0067C903  E8 F7 6A D8 FF            CALL 0x004033ff
0067C908  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067C90E  85 C9                     TEST ECX,ECX
0067C910  74 0D                     JZ 0x0067c91f
0067C912  8A 93 D7 05 00 00         MOV DL,byte ptr [EBX + 0x5d7]
0067C918  53                        PUSH EBX
0067C919  52                        PUSH EDX
0067C91A  E8 CD 64 D8 FF            CALL 0x00402dec
LAB_0067c91f:
0067C91F  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0067C922  85 C0                     TEST EAX,EAX
0067C924  75 07                     JNZ 0x0067c92d
0067C926  8B CB                     MOV ECX,EBX
0067C928  E8 8F 7B D8 FF            CALL 0x004044bc
LAB_0067c92d:
0067C92D  E8 37 56 D8 FF            CALL 0x00401f69
0067C932  EB 48                     JMP 0x0067c97c
LAB_0067c934:
0067C934  8B 83 D7 05 00 00         MOV EAX,dword ptr [EBX + 0x5d7]
0067C93A  8A 88 50 99 80 00         MOV CL,byte ptr [EAX + 0x809950]
0067C940  84 C9                     TEST CL,CL
0067C942  76 56                     JBE 0x0067c99a
0067C944  8B CB                     MOV ECX,EBX
0067C946  E8 45 57 D8 FF            CALL 0x00402090
0067C94B  B9 08 00 00 00            MOV ECX,0x8
0067C950  33 C0                     XOR EAX,EAX
0067C952  8D 7D CC                  LEA EDI,[EBP + -0x34]
0067C955  F3 AB                     STOSD.REP ES:EDI
0067C957  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0067C95A  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
0067C95D  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0067C960  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0067C963  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0067C966  8D 55 CC                  LEA EDX,[EBP + -0x34]
0067C969  C7 45 DC 0A 00 00 00      MOV dword ptr [EBP + -0x24],0xa
0067C970  52                        PUSH EDX
0067C971  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0067C974  E8 97 8E 06 00            CALL 0x006e5810
LAB_0067c979:
0067C979  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
switchD_0067cbde::caseD_5d99:
0067C97C  57                        PUSH EDI
0067C97D  8B CB                     MOV ECX,EBX
0067C97F  E8 4C 96 06 00            CALL 0x006e5fd0
0067C984  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
0067C98A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0067C98F  33 C0                     XOR EAX,EAX
0067C991  5F                        POP EDI
0067C992  5E                        POP ESI
0067C993  5B                        POP EBX
0067C994  8B E5                     MOV ESP,EBP
0067C996  5D                        POP EBP
0067C997  C2 04 00                  RET 0x4
LAB_0067c99a:
0067C99A  8B 15 BC 17 81 00         MOV EDX,dword ptr [0x008117bc]
0067C9A0  85 D2                     TEST EDX,EDX
0067C9A2  74 3E                     JZ 0x0067c9e2
0067C9A4  B9 08 00 00 00            MOV ECX,0x8
0067C9A9  33 C0                     XOR EAX,EAX
0067C9AB  8D 7D CC                  LEA EDI,[EBP + -0x34]
0067C9AE  F3 AB                     STOSD.REP ES:EDI
0067C9B0  66 8B 83 D7 05 00 00      MOV AX,word ptr [EBX + 0x5d7]
0067C9B7  C7 45 DC EB 5D 00 00      MOV dword ptr [EBP + -0x24],0x5deb
0067C9BE  85 DB                     TEST EBX,EBX
0067C9C0  66 89 45 E0               MOV word ptr [EBP + -0x20],AX
0067C9C4  74 08                     JZ 0x0067c9ce
0067C9C6  8D 4B 1C                  LEA ECX,[EBX + 0x1c]
0067C9C9  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0067C9CC  EB 07                     JMP 0x0067c9d5
LAB_0067c9ce:
0067C9CE  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
LAB_0067c9d5:
0067C9D5  8B 02                     MOV EAX,dword ptr [EDX]
0067C9D7  8D 4D CC                  LEA ECX,[EBP + -0x34]
0067C9DA  51                        PUSH ECX
0067C9DB  8B CA                     MOV ECX,EDX
0067C9DD  FF 10                     CALL dword ptr [EAX]
0067C9DF  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_0067c9e2:
0067C9E2  57                        PUSH EDI
0067C9E3  8D 4B 1C                  LEA ECX,[EBX + 0x1c]
0067C9E6  E8 F5 51 D8 FF            CALL 0x00401be0
0067C9EB  8B 83 58 06 00 00         MOV EAX,dword ptr [EBX + 0x658]
0067C9F1  85 C0                     TEST EAX,EAX
0067C9F3  75 16                     JNZ 0x0067ca0b
0067C9F5  8B CB                     MOV ECX,EBX
0067C9F7  C7 83 58 06 00 00 01 00 00 00  MOV dword ptr [EBX + 0x658],0x1
0067CA01  E8 39 52 D8 FF            CALL 0x00401c3f
0067CA06  E9 71 FF FF FF            JMP 0x0067c97c
LAB_0067ca0b:
0067CA0B  8B CB                     MOV ECX,EBX
0067CA0D  E8 47 79 D8 FF            CALL 0x00404359
0067CA12  8B CB                     MOV ECX,EBX
0067CA14  E8 4C 86 D8 FF            CALL 0x00405065
0067CA19  8B CB                     MOV ECX,EBX
0067CA1B  E8 59 59 D8 FF            CALL 0x00402379
0067CA20  E9 57 FF FF FF            JMP 0x0067c97c
LAB_0067ca25:
0067CA25  8D 55 F0                  LEA EDX,[EBP + -0x10]
0067CA28  8B CB                     MOV ECX,EBX
0067CA2A  52                        PUSH EDX
0067CA2B  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0067CA32  E8 C9 68 D8 FF            CALL 0x00403300
0067CA37  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0067CA3A  8B 93 D7 05 00 00         MOV EDX,dword ptr [EBX + 0x5d7]
0067CA40  6A 0C                     PUSH 0xc
0067CA42  51                        PUSH ECX
0067CA43  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0067CA46  50                        PUSH EAX
0067CA47  A1 D0 D6 79 00            MOV EAX,[0x0079d6d0]
0067CA4C  52                        PUSH EDX
0067CA4D  6A 02                     PUSH 0x2
0067CA4F  50                        PUSH EAX
0067CA50  E8 AB 61 07 00            CALL 0x006f2c00
0067CA55  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0067CA5B  83 C4 0C                  ADD ESP,0xc
0067CA5E  50                        PUSH EAX
0067CA5F  E8 14 46 D8 FF            CALL 0x00401078
0067CA64  8B 8B D7 05 00 00         MOV ECX,dword ptr [EBX + 0x5d7]
0067CA6A  8B 15 D0 D6 79 00         MOV EDX,dword ptr [0x0079d6d0]
0067CA70  51                        PUSH ECX
0067CA71  6A 02                     PUSH 0x2
0067CA73  52                        PUSH EDX
0067CA74  E8 87 61 07 00            CALL 0x006f2c00
0067CA79  8B 8B D7 05 00 00         MOV ECX,dword ptr [EBX + 0x5d7]
0067CA7F  8B F8                     MOV EDI,EAX
0067CA81  33 C0                     XOR EAX,EAX
0067CA83  83 C4 0C                  ADD ESP,0xc
0067CA86  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0067CA89  8D 94 C9 C8 87 80 00      LEA EDX,[ECX + ECX*0x8 + 0x8087c8]
0067CA90  83 C9 FF                  OR ECX,0xffffffff
0067CA93  F2 AE                     SCASB.REPNE ES:EDI
0067CA95  F7 D1                     NOT ECX
0067CA97  2B F9                     SUB EDI,ECX
0067CA99  8B C1                     MOV EAX,ECX
0067CA9B  8B F7                     MOV ESI,EDI
0067CA9D  8B FA                     MOV EDI,EDX
0067CA9F  C1 E9 02                  SHR ECX,0x2
0067CAA2  F3 A5                     MOVSD.REP ES:EDI,ESI
0067CAA4  8B C8                     MOV ECX,EAX
0067CAA6  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0067CAA9  83 E1 03                  AND ECX,0x3
0067CAAC  85 C0                     TEST EAX,EAX
0067CAAE  F3 A4                     MOVSB.REP ES:EDI,ESI
0067CAB0  0F 84 C3 FE FF FF         JZ 0x0067c979
0067CAB6  8D 4D EC                  LEA ECX,[EBP + -0x14]
0067CAB9  51                        PUSH ECX
0067CABA  E8 A1 E5 02 00            CALL 0x006ab060
0067CABF  E9 B5 FE FF FF            JMP 0x0067c979
LAB_0067cac4:
0067CAC4  3D 11 01 00 00            CMP EAX,0x111
0067CAC9  74 7E                     JZ 0x0067cb49
0067CACB  3D 94 5D 00 00            CMP EAX,0x5d94
0067CAD0  0F 85 A6 FE FF FF         JNZ 0x0067c97c
0067CAD6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067CADC  85 C9                     TEST ECX,ECX
0067CADE  74 17                     JZ 0x0067caf7
0067CAE0  66 8B 57 16               MOV DX,word ptr [EDI + 0x16]
0067CAE4  8A 83 D7 05 00 00         MOV AL,byte ptr [EBX + 0x5d7]
0067CAEA  6A 01                     PUSH 0x1
0067CAEC  52                        PUSH EDX
0067CAED  50                        PUSH EAX
0067CAEE  E8 C7 5D D8 FF            CALL 0x004028ba
0067CAF3  8B F8                     MOV EDI,EAX
0067CAF5  EB 02                     JMP 0x0067caf9
LAB_0067caf7:
0067CAF7  33 FF                     XOR EDI,EDI
LAB_0067caf9:
0067CAF9  85 FF                     TEST EDI,EDI
0067CAFB  0F 84 78 FE FF FF         JZ 0x0067c979
0067CB01  8B 17                     MOV EDX,dword ptr [EDI]
0067CB03  8B CF                     MOV ECX,EDI
0067CB05  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0067CB08  83 F8 01                  CMP EAX,0x1
0067CB0B  7C 0C                     JL 0x0067cb19
0067CB0D  83 F8 29                  CMP EAX,0x29
0067CB10  7D 07                     JGE 0x0067cb19
0067CB12  B8 01 00 00 00            MOV EAX,0x1
0067CB17  EB 02                     JMP 0x0067cb1b
LAB_0067cb19:
0067CB19  33 C0                     XOR EAX,EAX
LAB_0067cb1b:
0067CB1B  85 C0                     TEST EAX,EAX
0067CB1D  0F 84 56 FE FF FF         JZ 0x0067c979
0067CB23  66 8B 87 1C 08 00 00      MOV AX,word ptr [EDI + 0x81c]
0067CB2A  8B CB                     MOV ECX,EBX
0067CB2C  50                        PUSH EAX
0067CB2D  E8 1A 8F D8 FF            CALL 0x00405a4c
0067CB32  85 C0                     TEST EAX,EAX
0067CB34  0F 84 3F FE FF FF         JZ 0x0067c979
0067CB3A  6A 00                     PUSH 0x0
0067CB3C  57                        PUSH EDI
0067CB3D  8B C8                     MOV ECX,EAX
0067CB3F  E8 BC 76 D8 FF            CALL 0x00404200
0067CB44  E9 30 FE FF FF            JMP 0x0067c979
LAB_0067cb49:
0067CB49  8B 83 95 06 00 00         MOV EAX,dword ptr [EBX + 0x695]
0067CB4F  33 F6                     XOR ESI,ESI
0067CB51  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0067CB54  85 C9                     TEST ECX,ECX
0067CB56  0F 8E 20 FE FF FF         JLE 0x0067c97c
0067CB5C  3B F1                     CMP ESI,ECX
LAB_0067cb5e:
0067CB5E  73 0D                     JNC 0x0067cb6d
0067CB60  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
0067CB63  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0067CB66  0F AF FE                  IMUL EDI,ESI
0067CB69  03 F9                     ADD EDI,ECX
0067CB6B  EB 02                     JMP 0x0067cb6f
LAB_0067cb6d:
0067CB6D  33 FF                     XOR EDI,EDI
LAB_0067cb6f:
0067CB6F  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0067CB72  85 C0                     TEST EAX,EAX
0067CB74  76 33                     JBE 0x0067cba9
0067CB76  8D 4D F8                  LEA ECX,[EBP + -0x8]
0067CB79  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0067CB80  51                        PUSH ECX
0067CB81  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0067CB87  50                        PUSH EAX
0067CB88  E8 43 97 06 00            CALL 0x006e62d0
0067CB8D  85 C0                     TEST EAX,EAX
0067CB8F  75 0B                     JNZ 0x0067cb9c
0067CB91  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0067CB94  85 C0                     TEST EAX,EAX
0067CB96  74 04                     JZ 0x0067cb9c
0067CB98  89 07                     MOV dword ptr [EDI],EAX
0067CB9A  EB 0D                     JMP 0x0067cba9
LAB_0067cb9c:
0067CB9C  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
0067CBA2  C7 47 04 00 00 00 00      MOV dword ptr [EDI + 0x4],0x0
LAB_0067cba9:
0067CBA9  8B 83 95 06 00 00         MOV EAX,dword ptr [EBX + 0x695]
0067CBAF  46                        INC ESI
0067CBB0  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0067CBB3  3B F1                     CMP ESI,ECX
0067CBB5  7C A7                     JL 0x0067cb5e
0067CBB7  E9 BD FD FF FF            JMP 0x0067c979
LAB_0067cbbc:
0067CBBC  8B CB                     MOV ECX,EBX
0067CBBE  E8 CD 54 D8 FF            CALL 0x00402090
0067CBC3  E9 B4 FD FF FF            JMP 0x0067c97c
LAB_0067cbc8:
0067CBC8  05 68 A2 FF FF            ADD EAX,0xffffa268
0067CBCD  83 F8 54                  CMP EAX,0x54
0067CBD0  0F 87 A6 FD FF FF         JA 0x0067c97c
0067CBD6  33 D2                     XOR EDX,EDX
0067CBD8  8A 90 2C CD 67 00         MOV DL,byte ptr [EAX + 0x67cd2c]
switchD_0067cbde::switchD:
0067CBDE  FF 24 95 1C CD 67 00      JMP dword ptr [EDX*0x4 + 0x67cd1c]
switchD_0067cbde::caseD_5d98:
0067CBE5  66 83 7F 14 00            CMP word ptr [EDI + 0x14],0x0
0067CBEA  75 18                     JNZ 0x0067cc04
0067CBEC  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0067CBEF  8B 8B D7 05 00 00         MOV ECX,dword ptr [EBX + 0x5d7]
0067CBF5  50                        PUSH EAX
0067CBF6  51                        PUSH ECX
0067CBF7  E8 74 56 D8 FF            CALL 0x00402270
0067CBFC  83 C4 08                  ADD ESP,0x8
0067CBFF  E9 78 FD FF FF            JMP 0x0067c97c
LAB_0067cc04:
0067CC04  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
0067CC07  8D 4D FC                  LEA ECX,[EBP + -0x4]
0067CC0A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0067CC11  E8 2A 32 03 00            CALL 0x006afe40
0067CC16  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0067CC19  85 D2                     TEST EDX,EDX
0067CC1B  0F 84 5B FD FF FF         JZ 0x0067c97c
0067CC21  B9 0D 00 00 00            MOV ECX,0xd
0067CC26  33 C0                     XOR EAX,EAX
0067CC28  8D 7D 98                  LEA EDI,[EBP + -0x68]
0067CC2B  6A FF                     PUSH -0x1
0067CC2D  F3 AB                     STOSD.REP ES:EDI
0067CC2F  8B 83 FE 06 00 00         MOV EAX,dword ptr [EBX + 0x6fe]
0067CC35  8D 4D 98                  LEA ECX,[EBP + -0x68]
0067CC38  51                        PUSH ECX
0067CC39  8B CB                     MOV ECX,EBX
0067CC3B  C7 45 98 72 00 00 00      MOV dword ptr [EBP + -0x68],0x72
0067CC42  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0067CC45  C7 45 A0 00 00 00 00      MOV dword ptr [EBP + -0x60],0x0
0067CC4C  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
0067CC4F  E8 72 91 D8 FF            CALL 0x00405dc6
0067CC54  8D 55 98                  LEA EDX,[EBP + -0x68]
0067CC57  6A FF                     PUSH -0x1
0067CC59  52                        PUSH EDX
0067CC5A  8B CB                     MOV ECX,EBX
0067CC5C  C7 45 A0 01 00 00 00      MOV dword ptr [EBP + -0x60],0x1
0067CC63  E8 5E 91 D8 FF            CALL 0x00405dc6
0067CC68  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067CC6B  50                        PUSH EAX
0067CC6C  E8 9F 14 03 00            CALL 0x006ae110
0067CC71  E9 03 FD FF FF            JMP 0x0067c979
switchD_0067cbde::caseD_5dd5:
0067CC76  57                        PUSH EDI
0067CC77  8D 4B 1C                  LEA ECX,[EBX + 0x1c]
0067CC7A  E8 61 4F D8 FF            CALL 0x00401be0
0067CC7F  8B 8B 45 06 00 00         MOV ECX,dword ptr [EBX + 0x645]
0067CC85  8B 83 FE 06 00 00         MOV EAX,dword ptr [EBX + 0x6fe]
0067CC8B  83 C1 0A                  ADD ECX,0xa
0067CC8E  3B C1                     CMP EAX,ECX
0067CC90  0F 82 E6 FC FF FF         JC 0x0067c97c
0067CC96  89 83 45 06 00 00         MOV dword ptr [EBX + 0x645],EAX
0067CC9C  66 8B 57 18               MOV DX,word ptr [EDI + 0x18]
0067CCA0  52                        PUSH EDX
0067CCA1  8B CB                     MOV ECX,EBX
0067CCA3  E8 34 44 D8 FF            CALL 0x004010dc
0067CCA8  57                        PUSH EDI
0067CCA9  8B CB                     MOV ECX,EBX
0067CCAB  E8 D6 53 D8 FF            CALL 0x00402086
0067CCB0  E9 C7 FC FF FF            JMP 0x0067c97c
switchD_0067cbde::caseD_5dc5:
0067CCB5  57                        PUSH EDI
0067CCB6  8D 4B 1C                  LEA ECX,[EBX + 0x1c]
0067CCB9  E8 22 4F D8 FF            CALL 0x00401be0
0067CCBE  E9 B9 FC FF FF            JMP 0x0067c97c
LAB_0067ccc3:
0067CCC3  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
0067CCC9  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0067CCCC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067CCD2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0067CCD5  8B 42 18                  MOV EAX,dword ptr [EDX + 0x18]
0067CCD8  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
0067CCDB  50                        PUSH EAX
0067CCDC  52                        PUSH EDX
0067CCDD  68 48 2F 7D 00            PUSH 0x7d2f48
0067CCE2  56                        PUSH ESI
0067CCE3  6A 00                     PUSH 0x0
0067CCE5  68 55 06 00 00            PUSH 0x655
0067CCEA  68 4C 2E 7D 00            PUSH 0x7d2e4c
0067CCEF  E8 DC 07 03 00            CALL 0x006ad4d0
0067CCF4  83 C4 1C                  ADD ESP,0x1c
0067CCF7  85 C0                     TEST EAX,EAX
0067CCF9  74 01                     JZ 0x0067ccfc
0067CCFB  CC                        INT3
LAB_0067ccfc:
0067CCFC  68 56 06 00 00            PUSH 0x656
0067CD01  68 4C 2E 7D 00            PUSH 0x7d2e4c
0067CD06  6A 00                     PUSH 0x0
0067CD08  56                        PUSH ESI
0067CD09  E8 32 91 02 00            CALL 0x006a5e40
0067CD0E  5F                        POP EDI
0067CD0F  5E                        POP ESI
0067CD10  B8 FF FF 00 00            MOV EAX,0xffff
0067CD15  5B                        POP EBX
0067CD16  8B E5                     MOV ESP,EBP
0067CD18  5D                        POP EBP
0067CD19  C2 04 00                  RET 0x4
