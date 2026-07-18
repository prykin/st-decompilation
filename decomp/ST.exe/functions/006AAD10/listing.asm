FUN_006aad10:
006AAD10  55                        PUSH EBP
006AAD11  8B EC                     MOV EBP,ESP
006AAD13  83 EC 08                  SUB ESP,0x8
006AAD16  33 C0                     XOR EAX,EAX
006AAD18  53                        PUSH EBX
006AAD19  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006AAD1C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006AAD1F  A3 E0 8D 85 00            MOV [0x00858de0],EAX
006AAD24  A3 24 8E 85 00            MOV [0x00858e24],EAX
006AAD29  A3 28 8E 85 00            MOV [0x00858e28],EAX
006AAD2E  9C                        PUSHFD
006AAD2F  58                        POP EAX
006AAD30  35 00 00 20 00            XOR EAX,0x200000
006AAD35  50                        PUSH EAX
006AAD36  9D                        POPFD
006AAD37  9C                        PUSHFD
006AAD38  5A                        POP EDX
006AAD39  33 C2                     XOR EAX,EDX
006AAD3B  A9 00 00 20 00            TEST EAX,0x200000
006AAD40  75 31                     JNZ 0x006aad73
006AAD42  B8 00 00 00 00            MOV EAX,0x0
006AAD47  0F A2                     CPUID
006AAD49  83 F8 01                  CMP EAX,0x1
006AAD4C  72 25                     JC 0x006aad73
006AAD4E  81 FB 47 65 6E 75         CMP EBX,0x756e6547
006AAD54  75 1D                     JNZ 0x006aad73
006AAD56  81 FA 69 6E 65 49         CMP EDX,0x49656e69
006AAD5C  75 15                     JNZ 0x006aad73
006AAD5E  81 F9 6E 74 65 6C         CMP ECX,0x6c65746e
006AAD64  75 0D                     JNZ 0x006aad73
006AAD66  B8 01 00 00 00            MOV EAX,0x1
006AAD6B  0F A2                     CPUID
006AAD6D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006AAD70  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_006aad73:
006AAD73  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AAD76  8B C8                     MOV ECX,EAX
006AAD78  C1 F9 08                  SAR ECX,0x8
006AAD7B  C1 F8 04                  SAR EAX,0x4
006AAD7E  83 E1 0F                  AND ECX,0xf
006AAD81  83 E0 0F                  AND EAX,0xf
006AAD84  83 F9 06                  CMP ECX,0x6
006AAD87  89 0D 24 8E 85 00         MOV dword ptr [0x00858e24],ECX
006AAD8D  A3 28 8E 85 00            MOV [0x00858e28],EAX
006AAD92  75 1D                     JNZ 0x006aadb1
006AAD94  83 F8 03                  CMP EAX,0x3
006AAD97  7C 07                     JL 0x006aada0
006AAD99  83 0D E0 8D 85 00 02      OR dword ptr [0x00858de0],0x2
LAB_006aada0:
006AADA0  83 F8 07                  CMP EAX,0x7
006AADA3  75 0C                     JNZ 0x006aadb1
006AADA5  A1 E0 8D 85 00            MOV EAX,[0x00858de0]
006AADAA  0C 04                     OR AL,0x4
006AADAC  A3 E0 8D 85 00            MOV [0x00858de0],EAX
LAB_006aadb1:
006AADB1  F7 45 F8 00 00 80 00      TEST dword ptr [EBP + -0x8],0x800000
006AADB8  74 0C                     JZ 0x006aadc6
006AADBA  A1 E0 8D 85 00            MOV EAX,[0x00858de0]
006AADBF  0C 01                     OR AL,0x1
006AADC1  A3 E0 8D 85 00            MOV [0x00858de0],EAX
LAB_006aadc6:
006AADC6  5B                        POP EBX
006AADC7  8B E5                     MOV ESP,EBP
006AADC9  5D                        POP EBP
006AADCA  C3                        RET
