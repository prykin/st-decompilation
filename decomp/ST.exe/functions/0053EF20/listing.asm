FUN_0053ef20:
0053EF20  55                        PUSH EBP
0053EF21  8B EC                     MOV EBP,ESP
0053EF23  83 EC 54                  SUB ESP,0x54
0053EF26  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053EF2B  53                        PUSH EBX
0053EF2C  56                        PUSH ESI
0053EF2D  57                        PUSH EDI
0053EF2E  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0053EF31  33 FF                     XOR EDI,EDI
0053EF33  8D 55 B0                  LEA EDX,[EBP + -0x50]
0053EF36  8D 4D AC                  LEA ECX,[EBP + -0x54]
0053EF39  57                        PUSH EDI
0053EF3A  52                        PUSH EDX
0053EF3B  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0053EF3E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053EF44  E8 A7 E8 1E 00            CALL 0x0072d7f0
0053EF49  8B F0                     MOV ESI,EAX
0053EF4B  83 C4 08                  ADD ESP,0x8
0053EF4E  3B F7                     CMP ESI,EDI
0053EF50  0F 85 D5 01 00 00         JNZ 0x0053f12b
0053EF56  A1 28 2A 80 00            MOV EAX,[0x00802a28]
0053EF5B  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
0053EF5E  51                        PUSH ECX
0053EF5F  68 9D 01 00 00            PUSH 0x19d
0053EF64  E8 97 EF 1C 00            CALL 0x0070df00
0053EF69  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0053EF6C  83 C4 08                  ADD ESP,0x8
0053EF6F  57                        PUSH EDI
0053EF70  57                        PUSH EDI
0053EF71  6A 01                     PUSH 0x1
0053EF73  57                        PUSH EDI
0053EF74  6A FF                     PUSH -0x1
0053EF76  57                        PUSH EDI
0053EF77  89 86 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EAX
0053EF7D  68 5C 20 7C 00            PUSH 0x7c205c
0053EF82  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
0053EF85  89 78 5C                  MOV dword ptr [EAX + 0x5c],EDI
0053EF88  E8 EF 67 EC FF            CALL 0x0040577c
0053EF8D  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
0053EF93  83 C4 08                  ADD ESP,0x8
0053EF96  50                        PUSH EAX
0053EF97  6A 0B                     PUSH 0xb
0053EF99  52                        PUSH EDX
0053EF9A  E8 51 AB 1C 00            CALL 0x00709af0
0053EF9F  89 86 90 01 00 00         MOV dword ptr [ESI + 0x190],EAX
0053EFA5  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
0053EFA8  83 C4 20                  ADD ESP,0x20
0053EFAB  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
0053EFAE  3B DF                     CMP EBX,EDI
0053EFB0  75 1A                     JNZ 0x0053efcc
0053EFB2  33 DB                     XOR EBX,EBX
0053EFB4  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
0053EFB8  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
0053EFBC  83 C3 1F                  ADD EBX,0x1f
0053EFBF  C1 EB 03                  SHR EBX,0x3
0053EFC2  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
0053EFC8  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_0053efcc:
0053EFCC  50                        PUSH EAX
0053EFCD  E8 CE 5F 17 00            CALL 0x006b4fa0
0053EFD2  8B CB                     MOV ECX,EBX
0053EFD4  8B F8                     MOV EDI,EAX
0053EFD6  8B D1                     MOV EDX,ECX
0053EFD8  83 C8 FF                  OR EAX,0xffffffff
0053EFDB  C1 E9 02                  SHR ECX,0x2
0053EFDE  F3 AB                     STOSD.REP ES:EDI
0053EFE0  8B CA                     MOV ECX,EDX
0053EFE2  83 E1 03                  AND ECX,0x3
0053EFE5  F3 AA                     STOSB.REP ES:EDI
0053EFE7  8B 86 84 01 00 00         MOV EAX,dword ptr [ESI + 0x184]
0053EFED  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
0053EFF0  50                        PUSH EAX
0053EFF1  6A 01                     PUSH 0x1
0053EFF3  6A 00                     PUSH 0x0
0053EFF5  6A 00                     PUSH 0x0
0053EFF7  51                        PUSH ECX
0053EFF8  E8 2C 42 EC FF            CALL 0x00403229
0053EFFD  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0053F000  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0053F003  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0053F006  83 C4 14                  ADD ESP,0x14
0053F009  52                        PUSH EDX
0053F00A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0053F00D  50                        PUSH EAX
0053F00E  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
0053F011  51                        PUSH ECX
0053F012  8B 8E 7C 01 00 00         MOV ECX,dword ptr [ESI + 0x17c]
0053F018  52                        PUSH EDX
0053F019  6A 00                     PUSH 0x0
0053F01B  50                        PUSH EAX
0053F01C  E8 6F 1A 1D 00            CALL 0x00710a90
0053F021  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0053F027  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0053F02A  6A 00                     PUSH 0x0
0053F02C  6A FF                     PUSH -0x1
0053F02E  6A FE                     PUSH -0x2
0053F030  51                        PUSH ECX
0053F031  52                        PUSH EDX
0053F032  E8 09 11 17 00            CALL 0x006b0140
0053F037  8B 8E 7C 01 00 00         MOV ECX,dword ptr [ESI + 0x17c]
0053F03D  50                        PUSH EAX
0053F03E  E8 7D 29 1D 00            CALL 0x007119c0
0053F043  6A 00                     PUSH 0x0
0053F045  68 94 38 7C 00            PUSH 0x7c3894
0053F04A  E8 2D 67 EC FF            CALL 0x0040577c
0053F04F  83 C4 08                  ADD ESP,0x8
0053F052  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0053F055  6A 00                     PUSH 0x0
0053F057  6A 00                     PUSH 0x0
0053F059  6A 00                     PUSH 0x0
0053F05B  6A 00                     PUSH 0x0
0053F05D  6A 00                     PUSH 0x0
0053F05F  68 00 C0 00 00            PUSH 0xc000
0053F064  68 FF BF 00 00            PUSH 0xbfff
0053F069  50                        PUSH EAX
0053F06A  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0053F06D  6A 01                     PUSH 0x1
0053F06F  6A 01                     PUSH 0x1
0053F071  6A 00                     PUSH 0x0
0053F073  50                        PUSH EAX
0053F074  51                        PUSH ECX
0053F075  6A 01                     PUSH 0x1
0053F077  6A 00                     PUSH 0x0
0053F079  8B CE                     MOV ECX,ESI
0053F07B  E8 8D 3F EC FF            CALL 0x0040300d
0053F080  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0053F083  6A 00                     PUSH 0x0
0053F085  89 86 80 01 00 00         MOV dword ptr [ESI + 0x180],EAX
0053F08B  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0053F08E  6A 00                     PUSH 0x0
0053F090  6A 00                     PUSH 0x0
0053F092  68 A4 C0 00 00            PUSH 0xc0a4
0053F097  50                        PUSH EAX
0053F098  52                        PUSH EDX
0053F099  50                        PUSH EAX
0053F09A  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0053F09D  8B CE                     MOV ECX,ESI
0053F09F  50                        PUSH EAX
0053F0A0  E8 9A 6C EC FF            CALL 0x00405d3f
0053F0A5  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
0053F0A8  8D 96 A1 01 00 00         LEA EDX,[ESI + 0x1a1]
0053F0AE  89 86 9D 01 00 00         MOV dword ptr [ESI + 0x19d],EAX
0053F0B4  BF 9F C0 00 00            MOV EDI,0xc09f
0053F0B9  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053F0BC  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0053F0BF  8D 9E B5 01 00 00         LEA EBX,[ESI + 0x1b5]
0053F0C5  C7 45 F4 05 00 00 00      MOV dword ptr [EBP + -0xc],0x5
LAB_0053f0cc:
0053F0CC  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
0053F0CF  6A 00                     PUSH 0x0
0053F0D1  6A 00                     PUSH 0x0
0053F0D3  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
0053F0D6  53                        PUSH EBX
0053F0D7  6A 00                     PUSH 0x0
0053F0D9  8D 47 10                  LEA EAX,[EDI + 0x10]
0053F0DC  6A 01                     PUSH 0x1
0053F0DE  50                        PUSH EAX
0053F0DF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0053F0E2  57                        PUSH EDI
0053F0E3  51                        PUSH ECX
0053F0E4  6A 01                     PUSH 0x1
0053F0E6  6A 01                     PUSH 0x1
0053F0E8  6A 00                     PUSH 0x0
0053F0EA  52                        PUSH EDX
0053F0EB  50                        PUSH EAX
0053F0EC  6A 00                     PUSH 0x0
0053F0EE  6A 01                     PUSH 0x1
0053F0F0  8B CE                     MOV ECX,ESI
0053F0F2  E8 16 3F EC FF            CALL 0x0040300d
0053F0F7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0053F0FA  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
0053F0FD  83 C3 27                  ADD EBX,0x27
0053F100  47                        INC EDI
0053F101  89 01                     MOV dword ptr [ECX],EAX
0053F103  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0053F106  03 C2                     ADD EAX,EDX
0053F108  83 C1 04                  ADD ECX,0x4
0053F10B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0053F10E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0053F111  48                        DEC EAX
0053F112  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0053F115  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0053F118  75 B2                     JNZ 0x0053f0cc
0053F11A  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0053F11D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053F122  5F                        POP EDI
0053F123  5E                        POP ESI
0053F124  5B                        POP EBX
0053F125  8B E5                     MOV ESP,EBP
0053F127  5D                        POP EBP
0053F128  C2 38 00                  RET 0x38
LAB_0053f12b:
0053F12B  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0053F12E  68 00 7A 7C 00            PUSH 0x7c7a00
0053F133  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053F138  56                        PUSH ESI
0053F139  57                        PUSH EDI
0053F13A  68 93 01 00 00            PUSH 0x193
0053F13F  68 70 78 7C 00            PUSH 0x7c7870
0053F144  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053F14A  E8 81 E3 16 00            CALL 0x006ad4d0
0053F14F  83 C4 18                  ADD ESP,0x18
0053F152  85 C0                     TEST EAX,EAX
0053F154  74 01                     JZ 0x0053f157
0053F156  CC                        INT3
LAB_0053f157:
0053F157  68 93 01 00 00            PUSH 0x193
0053F15C  68 70 78 7C 00            PUSH 0x7c7870
0053F161  57                        PUSH EDI
0053F162  56                        PUSH ESI
0053F163  E8 D8 6C 16 00            CALL 0x006a5e40
0053F168  5F                        POP EDI
0053F169  5E                        POP ESI
0053F16A  5B                        POP EBX
0053F16B  8B E5                     MOV ESP,EBP
0053F16D  5D                        POP EBP
0053F16E  C2 38 00                  RET 0x38
