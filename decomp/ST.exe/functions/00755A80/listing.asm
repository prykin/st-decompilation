FUN_00755a80:
00755A80  55                        PUSH EBP
00755A81  8B EC                     MOV EBP,ESP
00755A83  83 EC 5C                  SUB ESP,0x5c
00755A86  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00755A89  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00755A8C  53                        PUSH EBX
00755A8D  56                        PUSH ESI
00755A8E  57                        PUSH EDI
00755A8F  33 C9                     XOR ECX,ECX
00755A91  33 FF                     XOR EDI,EDI
00755A93  83 CE FF                  OR ESI,0xffffffff
00755A96  85 C0                     TEST EAX,EAX
00755A98  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00755A9B  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00755A9E  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00755AA1  0F 84 EB 00 00 00         JZ 0x00755b92
00755AA7  8D 58 07                  LEA EBX,[EAX + 0x7]
00755AAA  83 E3 FC                  AND EBX,0xfffffffc
00755AAD  83 FB 08                  CMP EBX,0x8
00755AB0  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
00755AB3  73 08                     JNC 0x00755abd
00755AB5  BB 08 00 00 00            MOV EBX,0x8
00755ABA  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
LAB_00755abd:
00755ABD  8B 52 34                  MOV EDX,dword ptr [EDX + 0x34]
00755AC0  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00755AC3  8D 7A 08                  LEA EDI,[EDX + 0x8]
00755AC6  03 C2                     ADD EAX,EDX
00755AC8  74 0F                     JZ 0x00755ad9
LAB_00755aca:
00755ACA  8B 08                     MOV ECX,dword ptr [EAX]
00755ACC  3B CB                     CMP ECX,EBX
00755ACE  73 09                     JNC 0x00755ad9
00755AD0  8B F8                     MOV EDI,EAX
00755AD2  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00755AD5  03 C2                     ADD EAX,EDX
00755AD7  75 F1                     JNZ 0x00755aca
LAB_00755ad9:
00755AD9  85 C0                     TEST EAX,EAX
00755ADB  0F 84 A9 00 00 00         JZ 0x00755b8a
00755AE1  8B F0                     MOV ESI,EAX
00755AE3  8D 59 F8                  LEA EBX,[ECX + -0x8]
00755AE6  2B F2                     SUB ESI,EDX
00755AE8  39 5D 0C                  CMP dword ptr [EBP + 0xc],EBX
00755AEB  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00755AEE  72 08                     JC 0x00755af8
00755AF0  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00755AF3  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
00755AF6  EB 6D                     JMP 0x00755b65
LAB_00755af8:
00755AF8  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00755AFB  2B FA                     SUB EDI,EDX
00755AFD  2B CB                     SUB ECX,EBX
00755AFF  6A 00                     PUSH 0x0
00755B01  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00755B04  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00755B07  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00755B0C  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00755B0F  8D 55 A8                  LEA EDX,[EBP + -0x58]
00755B12  8D 4D A4                  LEA ECX,[EBP + -0x5c]
00755B15  52                        PUSH EDX
00755B16  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00755B19  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00755B1C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00755B22  E8 C9 7C FD FF            CALL 0x0072d7f0
00755B27  83 C4 08                  ADD ESP,0x8
00755B2A  85 C0                     TEST EAX,EAX
00755B2C  75 49                     JNZ 0x00755b77
00755B2E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00755B31  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00755B34  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00755B37  8D 45 E8                  LEA EAX,[EBP + -0x18]
00755B3A  6A 08                     PUSH 0x8
00755B3C  8D 0C 3E                  LEA ECX,[ESI + EDI*0x1]
00755B3F  50                        PUSH EAX
00755B40  51                        PUSH ECX
00755B41  53                        PUSH EBX
00755B42  E8 19 ED F7 FF            CALL 0x006d4860
00755B47  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
00755B4A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00755B50  8B 4B 34                  MOV ECX,dword ptr [EBX + 0x34]
00755B53  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00755B56  8D 04 31                  LEA EAX,[ECX + ESI*0x1]
00755B59  8D 4C 11 04               LEA ECX,[ECX + EDX*0x1 + 0x4]
00755B5D  8B 11                     MOV EDX,dword ptr [ECX]
00755B5F  03 D7                     ADD EDX,EDI
00755B61  89 11                     MOV dword ptr [ECX],EDX
00755B63  89 38                     MOV dword ptr [EAX],EDI
LAB_00755b65:
00755B65  8B 08                     MOV ECX,dword ptr [EAX]
00755B67  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00755B6A  83 C6 04                  ADD ESI,0x4
00755B6D  83 C9 01                  OR ECX,0x1
00755B70  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00755B73  89 08                     MOV dword ptr [EAX],ECX
00755B75  EB 1B                     JMP 0x00755b92
LAB_00755b77:
00755B77  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00755B7A  83 CE FF                  OR ESI,0xffffffff
00755B7D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00755B83  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00755B86  8B F8                     MOV EDI,EAX
00755B88  EB 05                     JMP 0x00755b8f
LAB_00755b8a:
00755B8A  BF FE FF FF FF            MOV EDI,0xfffffffe
LAB_00755b8f:
00755B8F  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_00755b92:
00755B92  85 FF                     TEST EDI,EDI
00755B94  74 14                     JZ 0x00755baa
00755B96  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00755B9C  6A 60                     PUSH 0x60
00755B9E  68 20 2D 7F 00            PUSH 0x7f2d20
00755BA3  52                        PUSH EDX
00755BA4  57                        PUSH EDI
00755BA5  E8 96 02 F5 FF            CALL 0x006a5e40
LAB_00755baa:
00755BAA  8B C6                     MOV EAX,ESI
00755BAC  5F                        POP EDI
00755BAD  5E                        POP ESI
00755BAE  5B                        POP EBX
00755BAF  8B E5                     MOV ESP,EBP
00755BB1  5D                        POP EBP
00755BB2  C2 08 00                  RET 0x8
