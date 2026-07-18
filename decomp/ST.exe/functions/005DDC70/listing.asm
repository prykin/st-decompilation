StartSystemTy::CreateBinDesc:
005DDC70  55                        PUSH EBP
005DDC71  8B EC                     MOV EBP,ESP
005DDC73  81 EC C0 08 00 00         SUB ESP,0x8c0
005DDC79  53                        PUSH EBX
005DDC7A  56                        PUSH ESI
005DDC7B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005DDC7E  57                        PUSH EDI
005DDC7F  B9 1E 02 00 00            MOV ECX,0x21e
005DDC84  33 C0                     XOR EAX,EAX
005DDC86  8D BD 40 F7 FF FF         LEA EDI,[EBP + 0xfffff740]
005DDC8C  33 F6                     XOR ESI,ESI
005DDC8E  F3 AB                     STOSD.REP ES:EDI
005DDC90  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DDC95  8D 55 BC                  LEA EDX,[EBP + -0x44]
005DDC98  8D 4D B8                  LEA ECX,[EBP + -0x48]
005DDC9B  56                        PUSH ESI
005DDC9C  52                        PUSH EDX
005DDC9D  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005DDCA0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DDCA6  E8 45 FB 14 00            CALL 0x0072d7f0
005DDCAB  8B F8                     MOV EDI,EAX
005DDCAD  83 C4 08                  ADD ESP,0x8
005DDCB0  3B FE                     CMP EDI,ESI
005DDCB2  0F 85 84 02 00 00         JNZ 0x005ddf3c
005DDCB8  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005DDCBB  B9 02 00 00 00            MOV ECX,0x2
005DDCC0  89 B5 40 F7 FF FF         MOV dword ptr [EBP + 0xfffff740],ESI
005DDCC6  89 8D 44 F7 FF FF         MOV dword ptr [EBP + 0xfffff744],ECX
005DDCCC  8B 7B 34                  MOV EDI,dword ptr [EBX + 0x34]
005DDCCF  C7 85 60 F7 FF FF 0D 00 00 00  MOV dword ptr [EBP + 0xfffff760],0xd
005DDCD9  C7 85 64 F7 FF FF B9 00 00 00  MOV dword ptr [EBP + 0xfffff764],0xb9
005DDCE3  C7 85 48 F7 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff748],0x1
005DDCED  89 B5 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],ESI
005DDCF3  C7 85 50 F7 FF FF D5 00 00 00  MOV dword ptr [EBP + 0xfffff750],0xd5
005DDCFD  39 B7 A0 00 00 00         CMP dword ptr [EDI + 0xa0],ESI
005DDD03  74 0E                     JZ 0x005ddd13
005DDD05  57                        PUSH EDI
005DDD06  E8 85 2A 13 00            CALL 0x00710790
005DDD0B  83 C4 04                  ADD ESP,0x4
005DDD0E  B9 02 00 00 00            MOV ECX,0x2
LAB_005ddd13:
005DDD13  8B BF 8A 00 00 00         MOV EDI,dword ptr [EDI + 0x8a]
005DDD19  B8 19 01 00 00            MOV EAX,0x119
005DDD1E  99                        CDQ
005DDD1F  F7 FF                     IDIV EDI
005DDD21  8B 93 3A 04 00 00         MOV EDX,dword ptr [EBX + 0x43a]
005DDD27  89 BD 54 F7 FF FF         MOV dword ptr [EBP + 0xfffff754],EDI
005DDD2D  89 95 04 F8 FF FF         MOV dword ptr [EBP + 0xfffff804],EDX
005DDD33  8B 93 3E 04 00 00         MOV EDX,dword ptr [EBX + 0x43e]
005DDD39  89 95 08 F8 FF FF         MOV dword ptr [EBP + 0xfffff808],EDX
005DDD3F  8B 93 42 04 00 00         MOV EDX,dword ptr [EBX + 0x442]
005DDD45  89 95 0C F8 FF FF         MOV dword ptr [EBP + 0xfffff80c],EDX
005DDD4B  8B 93 46 04 00 00         MOV EDX,dword ptr [EBX + 0x446]
005DDD51  89 B5 7C F7 FF FF         MOV dword ptr [EBP + 0xfffff77c],ESI
005DDD57  89 B5 F4 F7 FF FF         MOV dword ptr [EBP + 0xfffff7f4],ESI
005DDD5D  89 8D F8 F7 FF FF         MOV dword ptr [EBP + 0xfffff7f8],ECX
005DDD63  89 B5 FC F7 FF FF         MOV dword ptr [EBP + 0xfffff7fc],ESI
005DDD69  89 8D 00 F8 FF FF         MOV dword ptr [EBP + 0xfffff800],ECX
005DDD6F  89 B5 60 F8 FF FF         MOV dword ptr [EBP + 0xfffff860],ESI
005DDD75  89 8D 78 F9 FF FF         MOV dword ptr [EBP + 0xfffff978],ECX
005DDD7B  89 95 10 F8 FF FF         MOV dword ptr [EBP + 0xfffff810],EDX
005DDD81  8B 93 AD 03 00 00         MOV EDX,dword ptr [EBX + 0x3ad]
005DDD87  B9 5F 00 00 00            MOV ECX,0x5f
005DDD8C  8D B5 FC F7 FF FF         LEA ESI,[EBP + 0xfffff7fc]
005DDD92  8D BD 7C F9 FF FF         LEA EDI,[EBP + 0xfffff97c]
005DDD98  C7 85 58 F7 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff758],0x1
005DDDA2  C7 85 80 F7 FF FF 32 63 00 00  MOV dword ptr [EBP + 0xfffff780],0x6332
005DDDAC  C7 85 F0 F7 FF FF 04 00 00 00  MOV dword ptr [EBP + 0xfffff7f0],0x4
005DDDB6  C7 85 0C F9 FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffff90c],0x1f4
005DDDC0  C7 85 10 F9 FF FF 32 00 00 00  MOV dword ptr [EBP + 0xfffff910],0x32
005DDDCA  C7 85 64 F8 FF FF 34 63 00 00  MOV dword ptr [EBP + 0xfffff864],0x6334
005DDDD4  89 85 5C F7 FF FF         MOV dword ptr [EBP + 0xfffff75c],EAX
005DDDDA  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
005DDDDD  89 85 78 F7 FF FF         MOV dword ptr [EBP + 0xfffff778],EAX
005DDDE3  89 85 5C F8 FF FF         MOV dword ptr [EBP + 0xfffff85c],EAX
005DDDE9  F3 A5                     MOVSD.REP ES:EDI,ESI
005DDDEB  8B 8B A9 03 00 00         MOV ECX,dword ptr [EBX + 0x3a9]
005DDDF1  89 95 88 F9 FF FF         MOV dword ptr [EBP + 0xfffff988],EDX
005DDDF7  8B 93 B5 03 00 00         MOV EDX,dword ptr [EBX + 0x3b5]
005DDDFD  89 8D 84 F9 FF FF         MOV dword ptr [EBP + 0xfffff984],ECX
005DDE03  8B 8B B1 03 00 00         MOV ECX,dword ptr [EBX + 0x3b1]
005DDE09  89 95 90 F9 FF FF         MOV dword ptr [EBP + 0xfffff990],EDX
005DDE0F  8B 93 CB 04 00 00         MOV EDX,dword ptr [EBX + 0x4cb]
005DDE15  89 8D 8C F9 FF FF         MOV dword ptr [EBP + 0xfffff98c],ECX
005DDE1B  89 95 08 FB FF FF         MOV dword ptr [EBP + 0xfffffb08],EDX
005DDE21  8B 93 CF 04 00 00         MOV EDX,dword ptr [EBX + 0x4cf]
005DDE27  89 95 0C FB FF FF         MOV dword ptr [EBP + 0xfffffb0c],EDX
005DDE2D  8B 93 D3 04 00 00         MOV EDX,dword ptr [EBX + 0x4d3]
005DDE33  33 C9                     XOR ECX,ECX
005DDE35  89 95 10 FB FF FF         MOV dword ptr [EBP + 0xfffffb10],EDX
005DDE3B  8D 95 40 F7 FF FF         LEA EDX,[EBP + 0xfffff740]
005DDE41  51                        PUSH ECX
005DDE42  52                        PUSH EDX
005DDE43  89 8D 04 FB FF FF         MOV dword ptr [EBP + 0xfffffb04],ECX
005DDE49  89 8D 50 FB FF FF         MOV dword ptr [EBP + 0xfffffb50],ECX
005DDE4F  51                        PUSH ECX
005DDE50  8D 8B 89 03 00 00         LEA ECX,[EBX + 0x389]
005DDE56  89 85 4C FB FF FF         MOV dword ptr [EBP + 0xfffffb4c],EAX
005DDE5C  8B 03                     MOV EAX,dword ptr [EBX]
005DDE5E  51                        PUSH ECX
005DDE5F  6A 08                     PUSH 0x8
005DDE61  8B CB                     MOV ECX,EBX
005DDE63  C7 85 E4 F9 FF FF 33 63 00 00  MOV dword ptr [EBP + 0xfffff9e4],0x6333
005DDE6D  C7 85 F8 FA FF FF 03 00 00 00  MOV dword ptr [EBP + 0xfffffaf8],0x3
005DDE77  C7 85 FC FA FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffafc],0x1
005DDE81  C7 85 14 FB FF FF DB 00 00 00  MOV dword ptr [EBP + 0xfffffb14],0xdb
005DDE8B  C7 85 18 FB FF FF 0E 00 00 00  MOV dword ptr [EBP + 0xfffffb18],0xe
005DDE95  C7 85 54 FB FF FF 35 63 00 00  MOV dword ptr [EBP + 0xfffffb54],0x6335
005DDE9F  FF 50 08                  CALL dword ptr [EAX + 0x8]
005DDEA2  8B 93 40 05 00 00         MOV EDX,dword ptr [EBX + 0x540]
005DDEA8  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005DDEAD  52                        PUSH EDX
005DDEAE  50                        PUSH EAX
005DDEAF  E8 7C 55 0D 00            CALL 0x006b3430
005DDEB4  8B 83 91 03 00 00         MOV EAX,dword ptr [EBX + 0x391]
005DDEBA  83 F8 FF                  CMP EAX,-0x1
005DDEBD  74 1D                     JZ 0x005ddedc
005DDEBF  8B 8B AD 03 00 00         MOV ECX,dword ptr [EBX + 0x3ad]
005DDEC5  8B 93 A9 03 00 00         MOV EDX,dword ptr [EBX + 0x3a9]
005DDECB  51                        PUSH ECX
005DDECC  52                        PUSH EDX
005DDECD  6A FE                     PUSH -0x2
005DDECF  50                        PUSH EAX
005DDED0  8B 83 D5 03 00 00         MOV EAX,dword ptr [EBX + 0x3d5]
005DDED6  50                        PUSH EAX
005DDED7  E8 F4 55 0D 00            CALL 0x006b34d0
LAB_005ddedc:
005DDEDC  8B 83 22 04 00 00         MOV EAX,dword ptr [EBX + 0x422]
005DDEE2  83 F8 FF                  CMP EAX,-0x1
005DDEE5  74 1D                     JZ 0x005ddf04
005DDEE7  8B 8B 3E 04 00 00         MOV ECX,dword ptr [EBX + 0x43e]
005DDEED  8B 93 3A 04 00 00         MOV EDX,dword ptr [EBX + 0x43a]
005DDEF3  51                        PUSH ECX
005DDEF4  52                        PUSH EDX
005DDEF5  6A FE                     PUSH -0x2
005DDEF7  50                        PUSH EAX
005DDEF8  8B 83 66 04 00 00         MOV EAX,dword ptr [EBX + 0x466]
005DDEFE  50                        PUSH EAX
005DDEFF  E8 CC 55 0D 00            CALL 0x006b34d0
LAB_005ddf04:
005DDF04  8B 83 B3 04 00 00         MOV EAX,dword ptr [EBX + 0x4b3]
005DDF0A  83 F8 FF                  CMP EAX,-0x1
005DDF0D  74 1D                     JZ 0x005ddf2c
005DDF0F  8B 8B CF 04 00 00         MOV ECX,dword ptr [EBX + 0x4cf]
005DDF15  8B 93 CB 04 00 00         MOV EDX,dword ptr [EBX + 0x4cb]
005DDF1B  51                        PUSH ECX
005DDF1C  52                        PUSH EDX
005DDF1D  6A FE                     PUSH -0x2
005DDF1F  50                        PUSH EAX
005DDF20  8B 83 F7 04 00 00         MOV EAX,dword ptr [EBX + 0x4f7]
005DDF26  50                        PUSH EAX
005DDF27  E8 A4 55 0D 00            CALL 0x006b34d0
LAB_005ddf2c:
005DDF2C  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005DDF2F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DDF35  5F                        POP EDI
005DDF36  5E                        POP ESI
005DDF37  5B                        POP EBX
005DDF38  8B E5                     MOV ESP,EBP
005DDF3A  5D                        POP EBP
005DDF3B  C3                        RET
LAB_005ddf3c:
005DDF3C  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005DDF3F  68 BC D8 7C 00            PUSH 0x7cd8bc
005DDF44  68 CC 4C 7A 00            PUSH 0x7a4ccc
005DDF49  57                        PUSH EDI
005DDF4A  56                        PUSH ESI
005DDF4B  68 B8 03 00 00            PUSH 0x3b8
005DDF50  68 18 D7 7C 00            PUSH 0x7cd718
005DDF55  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DDF5B  E8 70 F5 0C 00            CALL 0x006ad4d0
005DDF60  83 C4 18                  ADD ESP,0x18
005DDF63  85 C0                     TEST EAX,EAX
005DDF65  74 01                     JZ 0x005ddf68
005DDF67  CC                        INT3
LAB_005ddf68:
005DDF68  68 B8 03 00 00            PUSH 0x3b8
005DDF6D  68 18 D7 7C 00            PUSH 0x7cd718
005DDF72  56                        PUSH ESI
005DDF73  57                        PUSH EDI
005DDF74  E8 C7 7E 0C 00            CALL 0x006a5e40
005DDF79  5F                        POP EDI
005DDF7A  5E                        POP ESI
005DDF7B  5B                        POP EBX
005DDF7C  8B E5                     MOV ESP,EBP
005DDF7E  5D                        POP EBP
005DDF7F  C3                        RET
