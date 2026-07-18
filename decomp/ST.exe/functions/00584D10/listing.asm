FUN_00584d10:
00584D10  55                        PUSH EBP
00584D11  8B EC                     MOV EBP,ESP
00584D13  83 EC 60                  SUB ESP,0x60
00584D16  53                        PUSH EBX
00584D17  56                        PUSH ESI
00584D18  8B D9                     MOV EBX,ECX
00584D1A  57                        PUSH EDI
00584D1B  B9 16 00 00 00            MOV ECX,0x16
00584D20  33 C0                     XOR EAX,EAX
00584D22  8B B3 51 02 00 00         MOV ESI,dword ptr [EBX + 0x251]
00584D28  8B 93 5C 02 00 00         MOV EDX,dword ptr [EBX + 0x25c]
00584D2E  8D 7D A0                  LEA EDI,[EBP + -0x60]
00584D31  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00584D34  F3 AB                     STOSD.REP ES:EDI
00584D36  66 8B 8B 84 02 00 00      MOV CX,word ptr [EBX + 0x284]
00584D3D  88 45 CC                  MOV byte ptr [EBP + -0x34],AL
00584D40  8B 83 80 02 00 00         MOV EAX,dword ptr [EBX + 0x280]
00584D46  33 FF                     XOR EDI,EDI
00584D48  C7 45 C8 A3 00 00 00      MOV dword ptr [EBP + -0x38],0xa3
00584D4F  89 45 CD                  MOV dword ptr [EBP + -0x33],EAX
00584D52  66 89 4D D1               MOV word ptr [EBP + -0x2f],CX
00584D56  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
00584D59  C7 45 A0 28 00 00 00      MOV dword ptr [EBP + -0x60],0x28
00584D60  C7 45 AC 01 00 00 00      MOV dword ptr [EBP + -0x54],0x1
00584D67  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_00584d6a:
00584D6A  8D 45 BE                  LEA EAX,[EBP + -0x42]
00584D6D  8D 4D BC                  LEA ECX,[EBP + -0x44]
00584D70  50                        PUSH EAX
00584D71  8D 55 BA                  LEA EDX,[EBP + -0x46]
00584D74  51                        PUSH ECX
00584D75  52                        PUSH EDX
00584D76  8B CB                     MOV ECX,EBX
00584D78  66 89 75 C6               MOV word ptr [EBP + -0x3a],SI
00584D7C  E8 62 E4 E7 FF            CALL 0x004031e3
00584D81  83 7D F8 04               CMP dword ptr [EBP + -0x8],0x4
00584D85  0F 8D B5 00 00 00         JGE 0x00584e40
00584D8B  56                        PUSH ESI
00584D8C  E8 BF B1 12 00            CALL 0x006aff50
00584D91  8B F0                     MOV ESI,EAX
00584D93  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00584D96  50                        PUSH EAX
00584D97  E8 BF B1 12 00            CALL 0x006aff5b
00584D9C  8B C8                     MOV ECX,EAX
00584D9E  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
00584DA1  83 C4 08                  ADD ESP,0x8
00584DA4  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00584DA7  B8 56 55 55 55            MOV EAX,0x55555556
00584DAC  8D 34 D6                  LEA ESI,[ESI + EDX*0x8]
00584DAF  F7 EE                     IMUL ESI
00584DB1  8B C2                     MOV EAX,EDX
00584DB3  C1 E8 1F                  SHR EAX,0x1f
00584DB6  03 D0                     ADD EDX,EAX
00584DB8  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00584DBD  F7 EA                     IMUL EDX
00584DBF  C1 FA 0C                  SAR EDX,0xc
00584DC2  8B C2                     MOV EAX,EDX
00584DC4  C1 E8 1F                  SHR EAX,0x1f
00584DC7  03 D0                     ADD EDX,EAX
00584DC9  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00584DCC  66 01 55 BA               ADD word ptr [EBP + -0x46],DX
00584DD0  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00584DD3  B8 55 55 55 55            MOV EAX,0x55555555
00584DD8  8D 0C D1                  LEA ECX,[ECX + EDX*0x8]
00584DDB  F7 E9                     IMUL ECX
00584DDD  2B D1                     SUB EDX,ECX
00584DDF  D1 FA                     SAR EDX,0x1
00584DE1  8B C2                     MOV EAX,EDX
00584DE3  C1 E8 1F                  SHR EAX,0x1f
00584DE6  03 D0                     ADD EDX,EAX
00584DE8  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00584DED  F7 EA                     IMUL EDX
00584DEF  C1 FA 0C                  SAR EDX,0xc
00584DF2  8B C2                     MOV EAX,EDX
00584DF4  C1 E8 1F                  SHR EAX,0x1f
00584DF7  03 D0                     ADD EDX,EAX
00584DF9  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00584DFE  66 01 55 BC               ADD word ptr [EBP + -0x44],DX
00584E02  F7 EE                     IMUL ESI
00584E04  8B 75 BA                  MOV ESI,dword ptr [EBP + -0x46]
00584E07  C1 FA 0C                  SAR EDX,0xc
00584E0A  8B C2                     MOV EAX,EDX
00584E0C  C1 E8 1F                  SHR EAX,0x1f
00584E0F  03 D0                     ADD EDX,EAX
00584E11  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00584E16  03 D6                     ADD EDX,ESI
00584E18  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00584E1B  66 89 55 C0               MOV word ptr [EBP + -0x40],DX
00584E1F  F7 E9                     IMUL ECX
00584E21  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00584E24  C1 FA 0C                  SAR EDX,0xc
00584E27  8B CA                     MOV ECX,EDX
00584E29  C1 E9 1F                  SHR ECX,0x1f
00584E2C  03 D1                     ADD EDX,ECX
00584E2E  8B 4D BE                  MOV ECX,dword ptr [EBP + -0x42]
00584E31  2B C2                     SUB EAX,EDX
00584E33  83 C1 32                  ADD ECX,0x32
00584E36  66 89 45 C2               MOV word ptr [EBP + -0x3e],AX
00584E3A  66 89 4D C4               MOV word ptr [EBP + -0x3c],CX
00584E3E  EB 61                     JMP 0x00584ea1
LAB_00584e40:
00584E40  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
00584E43  B9 93 01 00 00            MOV ECX,0x193
00584E48  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00584E4E  66 83 45 BE E2            ADD word ptr [EBP + -0x42],-0x1e
00584E53  66 89 7D C4               MOV word ptr [EBP + -0x3c],DI
00584E57  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00584E5D  33 D2                     XOR EDX,EDX
00584E5F  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00584E62  C1 E8 10                  SHR EAX,0x10
00584E65  F7 F1                     DIV ECX
00584E67  8B 45 BA                  MOV EAX,dword ptr [EBP + -0x46]
00584E6A  8D 8C 02 37 FF FF FF      LEA ECX,[EDX + EAX*0x1 + 0xffffff37]
00584E71  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
00584E74  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00584E7A  66 89 4D C0               MOV word ptr [EBP + -0x40],CX
00584E7E  B9 93 01 00 00            MOV ECX,0x193
00584E83  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00584E89  33 D2                     XOR EDX,EDX
00584E8B  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00584E8E  C1 E8 10                  SHR EAX,0x10
00584E91  F7 F1                     DIV ECX
00584E93  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00584E96  8D 8C 02 37 FF FF FF      LEA ECX,[EDX + EAX*0x1 + 0xffffff37]
00584E9D  66 89 4D C2               MOV word ptr [EBP + -0x3e],CX
LAB_00584ea1:
00584EA1  66 8B 45 BA               MOV AX,word ptr [EBP + -0x46]
00584EA5  66 3B C7                  CMP AX,DI
00584EA8  0F 8C 99 00 00 00         JL 0x00584f47
00584EAE  66 39 7D BC               CMP word ptr [EBP + -0x44],DI
00584EB2  0F 8C 8F 00 00 00         JL 0x00584f47
00584EB8  66 39 7D BE               CMP word ptr [EBP + -0x42],DI
00584EBC  0F 8C 85 00 00 00         JL 0x00584f47
00584EC2  0F BF C8                  MOVSX ECX,AX
00584EC5  B8 79 19 8C 02            MOV EAX,0x28c1979
00584ECA  F7 E9                     IMUL ECX
00584ECC  D1 FA                     SAR EDX,0x1
00584ECE  8B C2                     MOV EAX,EDX
00584ED0  C1 E8 1F                  SHR EAX,0x1f
00584ED3  03 D0                     ADD EDX,EAX
00584ED5  66 3B 15 40 B2 7F 00      CMP DX,word ptr [0x007fb240]
00584EDC  7D 69                     JGE 0x00584f47
00584EDE  0F BF 4D BC               MOVSX ECX,word ptr [EBP + -0x44]
00584EE2  B8 79 19 8C 02            MOV EAX,0x28c1979
00584EE7  F7 E9                     IMUL ECX
00584EE9  D1 FA                     SAR EDX,0x1
00584EEB  8B CA                     MOV ECX,EDX
00584EED  C1 E9 1F                  SHR ECX,0x1f
00584EF0  03 D1                     ADD EDX,ECX
00584EF2  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00584EF9  7D 4C                     JGE 0x00584f47
00584EFB  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00584F01  8D 55 A0                  LEA EDX,[EBP + -0x60]
00584F04  57                        PUSH EDI
00584F05  52                        PUSH EDX
00584F06  57                        PUSH EDI
00584F07  57                        PUSH EDI
00584F08  6A 28                     PUSH 0x28
00584F0A  E8 B3 CC E7 FF            CALL 0x00401bc2
00584F0F  66 81 7D BE C9 00         CMP word ptr [EBP + -0x42],0xc9
00584F15  7E 20                     JLE 0x00584f37
00584F17  8B 45 BE                  MOV EAX,dword ptr [EBP + -0x42]
00584F1A  8D 4D A0                  LEA ECX,[EBP + -0x60]
00584F1D  57                        PUSH EDI
00584F1E  51                        PUSH ECX
00584F1F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00584F25  57                        PUSH EDI
00584F26  05 37 FF FF FF            ADD EAX,0xffffff37
00584F2B  57                        PUSH EDI
00584F2C  6A 28                     PUSH 0x28
00584F2E  66 89 45 C4               MOV word ptr [EBP + -0x3c],AX
00584F32  E8 8B CC E7 FF            CALL 0x00401bc2
LAB_00584f37:
00584F37  8D 46 5A                  LEA EAX,[ESI + 0x5a]
00584F3A  B9 68 01 00 00            MOV ECX,0x168
00584F3F  99                        CDQ
00584F40  F7 F9                     IDIV ECX
00584F42  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00584F45  8B F2                     MOV ESI,EDX
LAB_00584f47:
00584F47  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00584F4A  40                        INC EAX
00584F4B  83 F8 05                  CMP EAX,0x5
00584F4E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00584F51  0F 8C 13 FE FF FF         JL 0x00584d6a
00584F57  8B 83 51 02 00 00         MOV EAX,dword ptr [EBX + 0x251]
00584F5D  83 C0 F1                  ADD EAX,-0xf
00584F60  89 83 51 02 00 00         MOV dword ptr [EBX + 0x251],EAX
00584F66  79 0A                     JNS 0x00584f72
00584F68  C7 83 51 02 00 00 68 01 00 00  MOV dword ptr [EBX + 0x251],0x168
LAB_00584f72:
00584F72  5F                        POP EDI
00584F73  5E                        POP ESI
00584F74  5B                        POP EBX
00584F75  8B E5                     MOV ESP,EBP
00584F77  5D                        POP EBP
00584F78  C3                        RET
