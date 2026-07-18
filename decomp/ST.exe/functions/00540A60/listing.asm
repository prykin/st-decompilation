StartServTy::WrSarrDDX:
00540A60  55                        PUSH EBP
00540A61  8B EC                     MOV EBP,ESP
00540A63  83 EC 4C                  SUB ESP,0x4c
00540A66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00540A6B  53                        PUSH EBX
00540A6C  56                        PUSH ESI
00540A6D  57                        PUSH EDI
00540A6E  8D 55 B8                  LEA EDX,[EBP + -0x48]
00540A71  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00540A74  6A 00                     PUSH 0x0
00540A76  52                        PUSH EDX
00540A77  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00540A7A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00540A80  E8 6B CD 1E 00            CALL 0x0072d7f0
00540A85  83 C4 08                  ADD ESP,0x8
00540A88  85 C0                     TEST EAX,EAX
00540A8A  0F 85 07 01 00 00         JNZ 0x00540b97
00540A90  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00540A93  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
00540A96  85 C0                     TEST EAX,EAX
00540A98  7F 1E                     JG 0x00540ab8
00540A9A  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00540A9D  6A FF                     PUSH -0x1
00540A9F  6A 00                     PUSH 0x0
00540AA1  50                        PUSH EAX
00540AA2  8B CF                     MOV ECX,EDI
00540AA4  E8 C7 0B 1D 00            CALL 0x00711670
00540AA9  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00540AAC  33 D2                     XOR EDX,EDX
00540AAE  85 C9                     TEST ECX,ECX
00540AB0  0F 9E C2                  SETLE DL
00540AB3  4A                        DEC EDX
00540AB4  23 D1                     AND EDX,ECX
00540AB6  03 C2                     ADD EAX,EDX
LAB_00540ab8:
00540AB8  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00540ABB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00540ABE  85 DB                     TEST EBX,EBX
00540AC0  7F 20                     JG 0x00540ae2
00540AC2  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00540AC5  6A FF                     PUSH -0x1
00540AC7  6A 00                     PUSH 0x0
00540AC9  50                        PUSH EAX
00540ACA  8B CF                     MOV ECX,EDI
00540ACC  E8 0F 0B 1D 00            CALL 0x007115e0
00540AD1  8B D8                     MOV EBX,EAX
00540AD3  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00540AD6  33 C9                     XOR ECX,ECX
00540AD8  85 C0                     TEST EAX,EAX
00540ADA  0F 9E C1                  SETLE CL
00540ADD  49                        DEC ECX
00540ADE  23 C8                     AND ECX,EAX
00540AE0  03 D9                     ADD EBX,ECX
LAB_00540ae2:
00540AE2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00540AE5  85 F6                     TEST ESI,ESI
00540AE7  74 34                     JZ 0x00540b1d
00540AE9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00540AEC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00540AEF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00540AF2  53                        PUSH EBX
00540AF3  52                        PUSH EDX
00540AF4  50                        PUSH EAX
00540AF5  51                        PUSH ECX
00540AF6  6A 00                     PUSH 0x0
00540AF8  56                        PUSH ESI
00540AF9  6A 00                     PUSH 0x0
00540AFB  6A 00                     PUSH 0x0
00540AFD  6A 00                     PUSH 0x0
00540AFF  6A 00                     PUSH 0x0
00540B01  E8 EA 4A 17 00            CALL 0x006b55f0
00540B06  6A 00                     PUSH 0x0
00540B08  6A 00                     PUSH 0x0
00540B0A  6A 00                     PUSH 0x0
00540B0C  6A 00                     PUSH 0x0
00540B0E  6A 00                     PUSH 0x0
00540B10  50                        PUSH EAX
00540B11  8B CF                     MOV ECX,EDI
00540B13  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00540B16  E8 75 FF 1C 00            CALL 0x00710a90
00540B1B  EB 19                     JMP 0x00540b36
LAB_00540b1d:
00540B1D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00540B20  6A 01                     PUSH 0x1
00540B22  53                        PUSH EBX
00540B23  52                        PUSH EDX
00540B24  6A 00                     PUSH 0x0
00540B26  6A 00                     PUSH 0x0
00540B28  6A 00                     PUSH 0x0
00540B2A  6A 00                     PUSH 0x0
00540B2C  8B CF                     MOV ECX,EDI
00540B2E  E8 6D 00 1D 00            CALL 0x00710ba0
00540B33  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00540b36:
00540B36  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00540B39  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00540B3C  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00540B3F  50                        PUSH EAX
00540B40  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00540B43  51                        PUSH ECX
00540B44  52                        PUSH EDX
00540B45  6A FF                     PUSH -0x1
00540B47  6A 00                     PUSH 0x0
00540B49  50                        PUSH EAX
00540B4A  8B CF                     MOV ECX,EDI
00540B4C  E8 1F 14 1D 00            CALL 0x00711f70
00540B51  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00540B54  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00540B57  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00540B5C  53                        PUSH EBX
00540B5D  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00540B60  51                        PUSH ECX
00540B61  53                        PUSH EBX
00540B62  52                        PUSH EDX
00540B63  50                        PUSH EAX
00540B64  E8 17 54 17 00            CALL 0x006b5f80
00540B69  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00540B6C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00540B6F  F7 DE                     NEG ESI
00540B71  1B F6                     SBB ESI,ESI
00540B73  56                        PUSH ESI
00540B74  51                        PUSH ECX
00540B75  6A 01                     PUSH 0x1
00540B77  53                        PUSH EBX
00540B78  52                        PUSH EDX
00540B79  E8 56 53 EC FF            CALL 0x00405ed4
00540B7E  83 C4 14                  ADD ESP,0x14
00540B81  8B CF                     MOV ECX,EDI
00540B83  E8 78 03 1D 00            CALL 0x00710f00
00540B88  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00540B8B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00540B90  5F                        POP EDI
00540B91  5E                        POP ESI
00540B92  5B                        POP EBX
00540B93  8B E5                     MOV ESP,EBP
00540B95  5D                        POP EBP
00540B96  C3                        RET
LAB_00540b97:
00540B97  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00540B9A  68 A0 7B 7C 00            PUSH 0x7c7ba0
00540B9F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00540BA4  50                        PUSH EAX
00540BA5  6A 00                     PUSH 0x0
00540BA7  68 95 00 00 00            PUSH 0x95
00540BAC  68 2C 7B 7C 00            PUSH 0x7c7b2c
00540BB1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00540BB7  E8 14 C9 16 00            CALL 0x006ad4d0
00540BBC  83 C4 18                  ADD ESP,0x18
00540BBF  85 C0                     TEST EAX,EAX
00540BC1  74 01                     JZ 0x00540bc4
00540BC3  CC                        INT3
LAB_00540bc4:
00540BC4  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
00540BC7  E8 34 03 1D 00            CALL 0x00710f00
00540BCC  5F                        POP EDI
00540BCD  5E                        POP ESI
00540BCE  5B                        POP EBX
00540BCF  8B E5                     MOV ESP,EBP
00540BD1  5D                        POP EBP
00540BD2  C3                        RET
