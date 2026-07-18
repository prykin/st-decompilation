InfocPanelTy::PaintInfocObj:
00520B50  55                        PUSH EBP
00520B51  8B EC                     MOV EBP,ESP
00520B53  83 EC 48                  SUB ESP,0x48
00520B56  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00520B5B  53                        PUSH EBX
00520B5C  56                        PUSH ESI
00520B5D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00520B60  57                        PUSH EDI
00520B61  8D 55 BC                  LEA EDX,[EBP + -0x44]
00520B64  8D 4D B8                  LEA ECX,[EBP + -0x48]
00520B67  6A 00                     PUSH 0x0
00520B69  52                        PUSH EDX
00520B6A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00520B6D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00520B73  E8 78 CC 20 00            CALL 0x0072d7f0
00520B78  8B F0                     MOV ESI,EAX
00520B7A  83 C4 08                  ADD ESP,0x8
00520B7D  85 F6                     TEST ESI,ESI
00520B7F  0F 85 E0 00 00 00         JNZ 0x00520c65
00520B85  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00520B88  8A 86 D4 03 00 00         MOV AL,byte ptr [ESI + 0x3d4]
00520B8E  3C FF                     CMP AL,0xff
00520B90  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00520B93  75 26                     JNZ 0x00520bbb
00520B95  66 3D FF FF               CMP AX,0xffff
00520B99  75 20                     JNZ 0x00520bbb
00520B9B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00520B9E  8D BE 8D 01 00 00         LEA EDI,[ESI + 0x18d]
00520BA4  25 FF FF 00 00            AND EAX,0xffff
00520BA9  50                        PUSH EAX
00520BAA  68 C0 3F 7C 00            PUSH 0x7c3fc0
00520BAF  57                        PUSH EDI
00520BB0  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00520BB6  83 C4 0C                  ADD ESP,0xc
00520BB9  EB 25                     JMP 0x00520be0
LAB_00520bbb:
00520BBB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00520BBE  25 FF FF 00 00            AND EAX,0xffff
00520BC3  81 E1 FF FF 00 00         AND ECX,0xffff
00520BC9  8D BE 8D 01 00 00         LEA EDI,[ESI + 0x18d]
00520BCF  51                        PUSH ECX
00520BD0  50                        PUSH EAX
00520BD1  68 B8 3F 7C 00            PUSH 0x7c3fb8
00520BD6  57                        PUSH EDI
00520BD7  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00520BDD  83 C4 10                  ADD ESP,0x10
LAB_00520be0:
00520BE0  A0 4E 87 80 00            MOV AL,[0x0080874e]
00520BE5  3C 03                     CMP AL,0x3
00520BE7  75 07                     JNZ 0x00520bf0
00520BE9  B8 73 00 00 00            MOV EAX,0x73
00520BEE  EB 0E                     JMP 0x00520bfe
LAB_00520bf0:
00520BF0  FE C8                     DEC AL
00520BF2  F6 D8                     NEG AL
00520BF4  1B C0                     SBB EAX,EAX
00520BF6  25 89 00 00 00            AND EAX,0x89
00520BFB  83 C0 3A                  ADD EAX,0x3a
LAB_00520bfe:
00520BFE  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00520C01  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00520C04  50                        PUSH EAX
00520C05  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00520C08  6A 0C                     PUSH 0xc
00520C0A  6A 2D                     PUSH 0x2d
00520C0C  53                        PUSH EBX
00520C0D  52                        PUSH EDX
00520C0E  6A 00                     PUSH 0x0
00520C10  50                        PUSH EAX
00520C11  E8 5A 35 19 00            CALL 0x006b4170
00520C16  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00520C19  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
00520C1C  6A 0C                     PUSH 0xc
00520C1E  6A 2D                     PUSH 0x2d
00520C20  53                        PUSH EBX
00520C21  51                        PUSH ECX
00520C22  8B 8E 89 01 00 00         MOV ECX,dword ptr [ESI + 0x189]
00520C28  6A 00                     PUSH 0x0
00520C2A  52                        PUSH EDX
00520C2B  E8 60 FE 1E 00            CALL 0x00710a90
00520C30  8A 1D 4E 87 80 00         MOV BL,byte ptr [0x0080874e]
00520C36  33 C0                     XOR EAX,EAX
00520C38  80 FB 03                  CMP BL,0x3
00520C3B  8B 8E 89 01 00 00         MOV ECX,dword ptr [ESI + 0x189]
00520C41  0F 95 C0                  SETNZ AL
00520C44  48                        DEC EAX
00520C45  83 E0 05                  AND EAX,0x5
00520C48  50                        PUSH EAX
00520C49  6A FF                     PUSH -0x1
00520C4B  6A FF                     PUSH -0x1
00520C4D  57                        PUSH EDI
00520C4E  E8 6D 0D 1F 00            CALL 0x007119c0
00520C53  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00520C56  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00520C5C  5F                        POP EDI
00520C5D  5E                        POP ESI
00520C5E  5B                        POP EBX
00520C5F  8B E5                     MOV ESP,EBP
00520C61  5D                        POP EBP
00520C62  C2 10 00                  RET 0x10
LAB_00520c65:
00520C65  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00520C68  68 94 3F 7C 00            PUSH 0x7c3f94
00520C6D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00520C72  56                        PUSH ESI
00520C73  6A 00                     PUSH 0x0
00520C75  68 A9 00 00 00            PUSH 0xa9
00520C7A  68 B0 3E 7C 00            PUSH 0x7c3eb0
00520C7F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00520C85  E8 46 C8 18 00            CALL 0x006ad4d0
00520C8A  83 C4 18                  ADD ESP,0x18
00520C8D  85 C0                     TEST EAX,EAX
00520C8F  74 01                     JZ 0x00520c92
00520C91  CC                        INT3
LAB_00520c92:
00520C92  68 A9 00 00 00            PUSH 0xa9
00520C97  68 B0 3E 7C 00            PUSH 0x7c3eb0
00520C9C  6A 00                     PUSH 0x0
00520C9E  56                        PUSH ESI
00520C9F  E8 9C 51 18 00            CALL 0x006a5e40
00520CA4  5F                        POP EDI
00520CA5  5E                        POP ESI
00520CA6  5B                        POP EBX
00520CA7  8B E5                     MOV ESP,EBP
00520CA9  5D                        POP EBP
00520CAA  C2 10 00                  RET 0x10
