FUN_006a5990:
006A5990  55                        PUSH EBP
006A5991  8B EC                     MOV EBP,ESP
006A5993  53                        PUSH EBX
006A5994  56                        PUSH ESI
006A5995  57                        PUSH EDI
006A5996  33 DB                     XOR EBX,EBX
006A5998  68 5C CA 7E 00            PUSH 0x7eca5c
006A599D  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A59A2  53                        PUSH EBX
006A59A3  53                        PUSH EBX
006A59A4  53                        PUSH EBX
006A59A5  53                        PUSH EBX
006A59A6  E8 F5 B5 08 00            CALL 0x00730fa0
006A59AB  83 C4 18                  ADD ESP,0x18
006A59AE  83 F8 01                  CMP EAX,0x1
006A59B1  75 01                     JNZ 0x006a59b4
006A59B3  CC                        INT3
LAB_006a59b4:
006A59B4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A59B7  85 C0                     TEST EAX,EAX
006A59B9  74 02                     JZ 0x006a59bd
006A59BB  8B 18                     MOV EBX,dword ptr [EAX]
LAB_006a59bd:
006A59BD  8B 35 6C 49 85 00         MOV ESI,dword ptr [0x0085496c]
006A59C3  85 F6                     TEST ESI,ESI
006A59C5  0F 84 6D 01 00 00         JZ 0x006a5b38
LAB_006a59cb:
006A59CB  3B F3                     CMP ESI,EBX
006A59CD  0F 84 65 01 00 00         JZ 0x006a5b38
006A59D3  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006A59D6  25 FF FF 00 00            AND EAX,0xffff
006A59DB  83 F8 03                  CMP EAX,0x3
006A59DE  0F 84 4A 01 00 00         JZ 0x006a5b2e
006A59E4  85 C0                     TEST EAX,EAX
006A59E6  0F 84 42 01 00 00         JZ 0x006a5b2e
006A59EC  83 F8 02                  CMP EAX,0x2
006A59EF  75 0D                     JNZ 0x006a59fe
006A59F1  F6 05 78 C1 7E 00 10      TEST byte ptr [0x007ec178],0x10
006A59F8  0F 84 30 01 00 00         JZ 0x006a5b2e
LAB_006a59fe:
006A59FE  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006A5A01  85 C0                     TEST EAX,EAX
006A5A03  74 55                     JZ 0x006a5a5a
006A5A05  6A 00                     PUSH 0x0
006A5A07  6A 01                     PUSH 0x1
006A5A09  50                        PUSH EAX
006A5A0A  E8 D3 D3 D5 FF            CALL 0x00402de2
006A5A0F  83 C4 0C                  ADD ESP,0xc
006A5A12  85 C0                     TEST EAX,EAX
006A5A14  75 21                     JNZ 0x006a5a37
006A5A16  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006A5A19  50                        PUSH EAX
006A5A1A  68 44 CA 7E 00            PUSH 0x7eca44
006A5A1F  6A 00                     PUSH 0x0
006A5A21  6A 00                     PUSH 0x0
006A5A23  6A 00                     PUSH 0x0
006A5A25  6A 00                     PUSH 0x0
006A5A27  E8 74 B5 08 00            CALL 0x00730fa0
006A5A2C  83 C4 18                  ADD ESP,0x18
006A5A2F  83 F8 01                  CMP EAX,0x1
006A5A32  75 26                     JNZ 0x006a5a5a
006A5A34  CC                        INT3
LAB_006a5a37:
006A5A37  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006A5A3A  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006A5A3D  51                        PUSH ECX
006A5A3E  52                        PUSH EDX
006A5A3F  68 34 CA 7E 00            PUSH 0x7eca34
006A5A44  6A 00                     PUSH 0x0
006A5A46  6A 00                     PUSH 0x0
006A5A48  6A 00                     PUSH 0x0
006A5A4A  6A 00                     PUSH 0x0
006A5A4C  E8 4F B5 08 00            CALL 0x00730fa0
006A5A51  83 C4 1C                  ADD ESP,0x1c
006A5A54  83 F8 01                  CMP EAX,0x1
006A5A57  75 01                     JNZ 0x006a5a5a
006A5A59  CC                        INT3
LAB_006a5a5a:
006A5A5A  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006A5A5D  50                        PUSH EAX
006A5A5E  68 2C CA 7E 00            PUSH 0x7eca2c
006A5A63  6A 00                     PUSH 0x0
006A5A65  6A 00                     PUSH 0x0
006A5A67  6A 00                     PUSH 0x0
006A5A69  6A 00                     PUSH 0x0
006A5A6B  E8 30 B5 08 00            CALL 0x00730fa0
006A5A70  83 C4 18                  ADD ESP,0x18
006A5A73  83 F8 01                  CMP EAX,0x1
006A5A76  75 01                     JNZ 0x006a5a79
006A5A78  CC                        INT3
LAB_006a5a79:
006A5A79  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006A5A7C  8B C8                     MOV ECX,EAX
006A5A7E  81 E1 FF FF 00 00         AND ECX,0xffff
006A5A84  83 F9 04                  CMP ECX,0x4
006A5A87  75 41                     JNZ 0x006a5aca
006A5A89  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006A5A8C  8D 7E 20                  LEA EDI,[ESI + 0x20]
006A5A8F  C1 F8 10                  SAR EAX,0x10
006A5A92  25 FF FF 00 00            AND EAX,0xffff
006A5A97  51                        PUSH ECX
006A5A98  50                        PUSH EAX
006A5A99  57                        PUSH EDI
006A5A9A  68 EC C9 7E 00            PUSH 0x7ec9ec
006A5A9F  6A 00                     PUSH 0x0
006A5AA1  6A 00                     PUSH 0x0
006A5AA3  6A 00                     PUSH 0x0
006A5AA5  6A 00                     PUSH 0x0
006A5AA7  E8 F4 B4 08 00            CALL 0x00730fa0
006A5AAC  83 C4 20                  ADD ESP,0x20
006A5AAF  83 F8 01                  CMP EAX,0x1
006A5AB2  75 01                     JNZ 0x006a5ab5
006A5AB4  CC                        INT3
LAB_006a5ab5:
006A5AB5  A1 1C 75 85 00            MOV EAX,[0x0085751c]
006A5ABA  85 C0                     TEST EAX,EAX
006A5ABC  74 67                     JZ 0x006a5b25
006A5ABE  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006A5AC1  52                        PUSH EDX
006A5AC2  57                        PUSH EDI
006A5AC3  FF D0                     CALL EAX
006A5AC5  83 C4 08                  ADD ESP,0x8
006A5AC8  EB 64                     JMP 0x006a5b2e
LAB_006a5aca:
006A5ACA  83 F8 01                  CMP EAX,0x1
006A5ACD  75 25                     JNZ 0x006a5af4
006A5ACF  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006A5AD2  8D 4E 20                  LEA ECX,[ESI + 0x20]
006A5AD5  50                        PUSH EAX
006A5AD6  51                        PUSH ECX
006A5AD7  68 BC C9 7E 00            PUSH 0x7ec9bc
006A5ADC  6A 00                     PUSH 0x0
006A5ADE  6A 00                     PUSH 0x0
006A5AE0  6A 00                     PUSH 0x0
006A5AE2  6A 00                     PUSH 0x0
006A5AE4  E8 B7 B4 08 00            CALL 0x00730fa0
006A5AE9  83 C4 1C                  ADD ESP,0x1c
006A5AEC  83 F8 01                  CMP EAX,0x1
006A5AEF  75 34                     JNZ 0x006a5b25
006A5AF1  CC                        INT3
LAB_006a5af4:
006A5AF4  83 F9 02                  CMP ECX,0x2
006A5AF7  75 35                     JNZ 0x006a5b2e
006A5AF9  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006A5AFC  C1 F8 10                  SAR EAX,0x10
006A5AFF  25 FF FF 00 00            AND EAX,0xffff
006A5B04  52                        PUSH EDX
006A5B05  50                        PUSH EAX
006A5B06  8D 46 20                  LEA EAX,[ESI + 0x20]
006A5B09  50                        PUSH EAX
006A5B0A  68 80 C9 7E 00            PUSH 0x7ec980
006A5B0F  6A 00                     PUSH 0x0
006A5B11  6A 00                     PUSH 0x0
006A5B13  6A 00                     PUSH 0x0
006A5B15  6A 00                     PUSH 0x0
006A5B17  E8 84 B4 08 00            CALL 0x00730fa0
006A5B1C  83 C4 20                  ADD ESP,0x20
006A5B1F  83 F8 01                  CMP EAX,0x1
006A5B22  75 01                     JNZ 0x006a5b25
006A5B24  CC                        INT3
LAB_006a5b25:
006A5B25  56                        PUSH ESI
006A5B26  E8 B5 00 00 00            CALL 0x006a5be0
006A5B2B  83 C4 04                  ADD ESP,0x4
FUN_006a5990::cf_continue_loop_006A5B2E:
006A5B2E  8B 36                     MOV ESI,dword ptr [ESI]
006A5B30  85 F6                     TEST ESI,ESI
006A5B32  0F 85 93 FE FF FF         JNZ 0x006a59cb
LAB_006a5b38:
006A5B38  68 64 C9 7E 00            PUSH 0x7ec964
006A5B3D  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A5B42  6A 00                     PUSH 0x0
006A5B44  6A 00                     PUSH 0x0
006A5B46  6A 00                     PUSH 0x0
006A5B48  6A 00                     PUSH 0x0
006A5B4A  E8 51 B4 08 00            CALL 0x00730fa0
006A5B4F  83 C4 18                  ADD ESP,0x18
006A5B52  83 F8 01                  CMP EAX,0x1
006A5B55  5F                        POP EDI
006A5B56  5E                        POP ESI
006A5B57  5B                        POP EBX
006A5B58  75 01                     JNZ 0x006a5b5b
006A5B5A  CC                        INT3
LAB_006a5b5b:
006A5B5B  5D                        POP EBP
006A5B5C  C3                        RET
