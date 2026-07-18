FUN_004a7af0:
004A7AF0  55                        PUSH EBP
004A7AF1  8B EC                     MOV EBP,ESP
004A7AF3  83 EC 28                  SUB ESP,0x28
004A7AF6  53                        PUSH EBX
004A7AF7  56                        PUSH ESI
004A7AF8  8B F1                     MOV ESI,ECX
004A7AFA  57                        PUSH EDI
004A7AFB  8B 8E 2A 02 00 00         MOV ECX,dword ptr [ESI + 0x22a]
004A7B01  85 C9                     TEST ECX,ECX
004A7B03  75 0E                     JNZ 0x004a7b13
004A7B05  5F                        POP EDI
004A7B06  5E                        POP ESI
004A7B07  B8 01 00 00 00            MOV EAX,0x1
004A7B0C  5B                        POP EBX
004A7B0D  8B E5                     MOV ESP,EBP
004A7B0F  5D                        POP EBP
004A7B10  C2 0C 00                  RET 0xc
LAB_004a7b13:
004A7B13  8B 96 32 02 00 00         MOV EDX,dword ptr [ESI + 0x232]
004A7B19  8D 45 F0                  LEA EAX,[EBP + -0x10]
004A7B1C  50                        PUSH EAX
004A7B1D  E8 4E 51 20 00            CALL 0x006acc70
004A7B22  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004A7B25  BB 01 00 00 00            MOV EBX,0x1
004A7B2A  3B C3                     CMP EAX,EBX
004A7B2C  0F 85 D9 01 00 00         JNZ 0x004a7d0b
004A7B32  0F BF 4D F4               MOVSX ECX,word ptr [EBP + -0xc]
004A7B36  0F BF 55 F2               MOVSX EDX,word ptr [EBP + -0xe]
004A7B3A  0F BF 45 F0               MOVSX EAX,word ptr [EBP + -0x10]
004A7B3E  6A 00                     PUSH 0x0
004A7B40  51                        PUSH ECX
004A7B41  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004A7B44  52                        PUSH EDX
004A7B45  81 E1 FF FF 00 00         AND ECX,0xffff
004A7B4B  50                        PUSH EAX
004A7B4C  51                        PUSH ECX
004A7B4D  8B CE                     MOV ECX,ESI
004A7B4F  E8 26 C5 F5 FF            CALL 0x0040407a
004A7B54  8B F8                     MOV EDI,EAX
004A7B56  8B 86 42 02 00 00         MOV EAX,dword ptr [ESI + 0x242]
004A7B5C  3B F8                     CMP EDI,EAX
004A7B5E  7F 4F                     JG 0x004a7baf
004A7B60  8B 86 3E 02 00 00         MOV EAX,dword ptr [ESI + 0x23e]
004A7B66  85 C0                     TEST EAX,EAX
004A7B68  75 06                     JNZ 0x004a7b70
004A7B6A  89 9E 3E 02 00 00         MOV dword ptr [ESI + 0x23e],EBX
LAB_004a7b70:
004A7B70  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004A7B73  8B 8E 2E 02 00 00         MOV ECX,dword ptr [ESI + 0x22e]
004A7B79  8D 55 D8                  LEA EDX,[EBP + -0x28]
004A7B7C  52                        PUSH EDX
004A7B7D  8B D7                     MOV EDX,EDI
004A7B7F  E8 EC 50 20 00            CALL 0x006acc70
004A7B84  8B 8E 2E 02 00 00         MOV ECX,dword ptr [ESI + 0x22e]
004A7B8A  8D 45 D8                  LEA EAX,[EBP + -0x28]
004A7B8D  50                        PUSH EAX
004A7B8E  57                        PUSH EDI
004A7B8F  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
004A7B92  51                        PUSH ECX
LAB_004a7b93:
004A7B93  E8 A8 65 20 00            CALL 0x006ae140
004A7B98  53                        PUSH EBX
004A7B99  8B CE                     MOV ECX,ESI
004A7B9B  E8 7E B7 F5 FF            CALL 0x0040331e
004A7BA0  F7 D8                     NEG EAX
004A7BA2  1B C0                     SBB EAX,EAX
004A7BA4  5F                        POP EDI
004A7BA5  5E                        POP ESI
004A7BA6  5B                        POP EBX
004A7BA7  F7 D8                     NEG EAX
004A7BA9  8B E5                     MOV ESP,EBP
004A7BAB  5D                        POP EBP
004A7BAC  C2 0C 00                  RET 0xc
LAB_004a7baf:
004A7BAF  66 39 5E 27               CMP word ptr [ESI + 0x27],BX
004A7BB3  0F 86 F6 00 00 00         JBE 0x004a7caf
004A7BB9  8B 8E 36 02 00 00         MOV ECX,dword ptr [ESI + 0x236]
004A7BBF  3B CB                     CMP ECX,EBX
004A7BC1  75 0C                     JNZ 0x004a7bcf
004A7BC3  8B 45 FA                  MOV EAX,dword ptr [EBP + -0x6]
004A7BC6  99                        CDQ
004A7BC7  2B C2                     SUB EAX,EDX
004A7BC9  D1 F8                     SAR EAX,0x1
004A7BCB  3B F8                     CMP EDI,EAX
004A7BCD  7E 18                     JLE 0x004a7be7
LAB_004a7bcf:
004A7BCF  85 C9                     TEST ECX,ECX
004A7BD1  0F 85 D8 00 00 00         JNZ 0x004a7caf
004A7BD7  8B 45 F6                  MOV EAX,dword ptr [EBP + -0xa]
004A7BDA  99                        CDQ
004A7BDB  2B C2                     SUB EAX,EDX
004A7BDD  D1 F8                     SAR EAX,0x1
004A7BDF  3B F8                     CMP EDI,EAX
004A7BE1  0F 8F C8 00 00 00         JG 0x004a7caf
LAB_004a7be7:
004A7BE7  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004A7BEA  8B 8E 2E 02 00 00         MOV ECX,dword ptr [ESI + 0x22e]
004A7BF0  8D 55 D8                  LEA EDX,[EBP + -0x28]
004A7BF3  52                        PUSH EDX
004A7BF4  8B D3                     MOV EDX,EBX
004A7BF6  E8 75 50 20 00            CALL 0x006acc70
004A7BFB  8B 45 EA                  MOV EAX,dword ptr [EBP + -0x16]
004A7BFE  83 E8 00                  SUB EAX,0x0
004A7C01  0F 84 8D 00 00 00         JZ 0x004a7c94
004A7C07  48                        DEC EAX
004A7C08  0F 84 AC 00 00 00         JZ 0x004a7cba
004A7C0E  48                        DEC EAX
004A7C0F  74 30                     JZ 0x004a7c41
004A7C11  68 88 C4 7A 00            PUSH 0x7ac488
004A7C16  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A7C1B  6A 00                     PUSH 0x0
004A7C1D  6A 00                     PUSH 0x0
004A7C1F  68 4B 16 00 00            PUSH 0x164b
004A7C24  68 3C BE 7A 00            PUSH 0x7abe3c
004A7C29  E8 A2 58 20 00            CALL 0x006ad4d0
004A7C2E  83 C4 18                  ADD ESP,0x18
004A7C31  85 C0                     TEST EAX,EAX
004A7C33  74 7A                     JZ 0x004a7caf
004A7C35  CC                        INT3
LAB_004a7c41:
004A7C41  3B 7D E2                  CMP EDI,dword ptr [EBP + -0x1e]
004A7C44  7C 4E                     JL 0x004a7c94
004A7C46  8B 86 3E 02 00 00         MOV EAX,dword ptr [ESI + 0x23e]
004A7C4C  85 C0                     TEST EAX,EAX
004A7C4E  75 0A                     JNZ 0x004a7c5a
004A7C50  C7 86 3E 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x23e],0x1
LAB_004a7c5a:
004A7C5A  8B 8E 2E 02 00 00         MOV ECX,dword ptr [ESI + 0x22e]
004A7C60  8D 45 D8                  LEA EAX,[EBP + -0x28]
004A7C63  50                        PUSH EAX
004A7C64  53                        PUSH EBX
004A7C65  51                        PUSH ECX
004A7C66  89 7D E6                  MOV dword ptr [EBP + -0x1a],EDI
004A7C69  C7 45 EA 03 00 00 00      MOV dword ptr [EBP + -0x16],0x3
004A7C70  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
004A7C77  E8 C4 64 20 00            CALL 0x006ae140
004A7C7C  6A 01                     PUSH 0x1
004A7C7E  8B CE                     MOV ECX,ESI
004A7C80  E8 99 B6 F5 FF            CALL 0x0040331e
004A7C85  F7 D8                     NEG EAX
004A7C87  1B C0                     SBB EAX,EAX
004A7C89  5F                        POP EDI
004A7C8A  5E                        POP ESI
004A7C8B  5B                        POP EBX
004A7C8C  F7 D8                     NEG EAX
004A7C8E  8B E5                     MOV ESP,EBP
004A7C90  5D                        POP EBP
004A7C91  C2 0C 00                  RET 0xc
LAB_004a7c94:
004A7C94  8B 86 2E 02 00 00         MOV EAX,dword ptr [ESI + 0x22e]
004A7C9A  8D 55 D8                  LEA EDX,[EBP + -0x28]
004A7C9D  52                        PUSH EDX
004A7C9E  53                        PUSH EBX
004A7C9F  50                        PUSH EAX
004A7CA0  89 7D DE                  MOV dword ptr [EBP + -0x22],EDI
004A7CA3  C7 45 EA 01 00 00 00      MOV dword ptr [EBP + -0x16],0x1
004A7CAA  E8 91 64 20 00            CALL 0x006ae140
LAB_004a7caf:
004A7CAF  5F                        POP EDI
004A7CB0  5E                        POP ESI
004A7CB1  33 C0                     XOR EAX,EAX
004A7CB3  5B                        POP EBX
004A7CB4  8B E5                     MOV ESP,EBP
004A7CB6  5D                        POP EBP
004A7CB7  C2 0C 00                  RET 0xc
LAB_004a7cba:
004A7CBA  3B 7D DE                  CMP EDI,dword ptr [EBP + -0x22]
004A7CBD  7C 26                     JL 0x004a7ce5
004A7CBF  8B 96 2E 02 00 00         MOV EDX,dword ptr [ESI + 0x22e]
004A7CC5  8D 4D D8                  LEA ECX,[EBP + -0x28]
004A7CC8  51                        PUSH ECX
004A7CC9  53                        PUSH EBX
004A7CCA  52                        PUSH EDX
004A7CCB  89 7D E2                  MOV dword ptr [EBP + -0x1e],EDI
004A7CCE  C7 45 EA 02 00 00 00      MOV dword ptr [EBP + -0x16],0x2
004A7CD5  E8 66 64 20 00            CALL 0x006ae140
004A7CDA  5F                        POP EDI
004A7CDB  5E                        POP ESI
004A7CDC  33 C0                     XOR EAX,EAX
004A7CDE  5B                        POP EBX
004A7CDF  8B E5                     MOV ESP,EBP
004A7CE1  5D                        POP EBP
004A7CE2  C2 0C 00                  RET 0xc
LAB_004a7ce5:
004A7CE5  8B 8E 2E 02 00 00         MOV ECX,dword ptr [ESI + 0x22e]
004A7CEB  8D 45 D8                  LEA EAX,[EBP + -0x28]
004A7CEE  50                        PUSH EAX
004A7CEF  53                        PUSH EBX
004A7CF0  51                        PUSH ECX
004A7CF1  89 7D DE                  MOV dword ptr [EBP + -0x22],EDI
004A7CF4  C7 45 EA 01 00 00 00      MOV dword ptr [EBP + -0x16],0x1
004A7CFB  E8 40 64 20 00            CALL 0x006ae140
004A7D00  5F                        POP EDI
004A7D01  5E                        POP ESI
004A7D02  33 C0                     XOR EAX,EAX
004A7D04  5B                        POP EBX
004A7D05  8B E5                     MOV ESP,EBP
004A7D07  5D                        POP EBP
004A7D08  C2 0C 00                  RET 0xc
LAB_004a7d0b:
004A7D0B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004A7D0E  51                        PUSH ECX
004A7D0F  8B CE                     MOV ECX,ESI
004A7D11  E8 59 AB F5 FF            CALL 0x0040286f
004A7D16  0F BF 50 47               MOVSX EDX,word ptr [EAX + 0x47]
004A7D1A  3B 90 C7 00 00 00         CMP EDX,dword ptr [EAX + 0xc7]
004A7D20  75 8D                     JNZ 0x004a7caf
004A7D22  0F BF 48 49               MOVSX ECX,word ptr [EAX + 0x49]
004A7D26  3B 88 CB 00 00 00         CMP ECX,dword ptr [EAX + 0xcb]
004A7D2C  75 81                     JNZ 0x004a7caf
004A7D2E  0F BF 50 4B               MOVSX EDX,word ptr [EAX + 0x4b]
004A7D32  3B 90 CF 00 00 00         CMP EDX,dword ptr [EAX + 0xcf]
004A7D38  0F 85 71 FF FF FF         JNZ 0x004a7caf
004A7D3E  8B 86 3E 02 00 00         MOV EAX,dword ptr [ESI + 0x23e]
004A7D44  85 C0                     TEST EAX,EAX
004A7D46  75 06                     JNZ 0x004a7d4e
004A7D48  89 9E 3E 02 00 00         MOV dword ptr [ESI + 0x23e],EBX
LAB_004a7d4e:
004A7D4E  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004A7D51  8B 8E 2E 02 00 00         MOV ECX,dword ptr [ESI + 0x22e]
004A7D57  8D 45 D8                  LEA EAX,[EBP + -0x28]
004A7D5A  8B D7                     MOV EDX,EDI
004A7D5C  50                        PUSH EAX
004A7D5D  E8 0E 4F 20 00            CALL 0x006acc70
004A7D62  8B 96 2E 02 00 00         MOV EDX,dword ptr [ESI + 0x22e]
004A7D68  8D 4D D8                  LEA ECX,[EBP + -0x28]
004A7D6B  51                        PUSH ECX
004A7D6C  57                        PUSH EDI
004A7D6D  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
004A7D70  52                        PUSH EDX
004A7D71  E9 1D FE FF FF            JMP 0x004a7b93
