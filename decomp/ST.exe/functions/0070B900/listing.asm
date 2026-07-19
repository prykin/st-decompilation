imgGetDibFromFile:
0070B900  55                        PUSH EBP
0070B901  8B EC                     MOV EBP,ESP
0070B903  81 EC F4 00 00 00         SUB ESP,0xf4
0070B909  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0070B90C  33 D2                     XOR EDX,EDX
0070B90E  8B C1                     MOV EAX,ECX
0070B910  53                        PUSH EBX
0070B911  C1 E8 10                  SHR EAX,0x10
0070B914  8A D4                     MOV DL,AH
0070B916  25 FF 00 00 00            AND EAX,0xff
0070B91B  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0070B91E  33 C0                     XOR EAX,EAX
0070B920  8A C5                     MOV AL,CH
0070B922  56                        PUSH ESI
0070B923  25 FF 00 00 00            AND EAX,0xff
0070B928  57                        PUSH EDI
0070B929  81 E2 FF 00 00 00         AND EDX,0xff
0070B92F  81 E1 FF 00 00 00         AND ECX,0xff
0070B935  33 FF                     XOR EDI,EDI
0070B937  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0070B93A  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0070B93D  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0070B940  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0070B946  8D 45 98                  LEA EAX,[EBP + -0x68]
0070B949  83 CB FF                  OR EBX,0xffffffff
0070B94C  8D 55 94                  LEA EDX,[EBP + -0x6c]
0070B94F  57                        PUSH EDI
0070B950  50                        PUSH EAX
0070B951  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0070B954  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0070B957  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0070B95A  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0070B95D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0070B960  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0070B963  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
0070B966  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070B96C  E8 7F 1E 02 00            CALL 0x0072d7f0
0070B971  8B F0                     MOV ESI,EAX
0070B973  83 C4 08                  ADD ESP,0x8
0070B976  3B F7                     CMP ESI,EDI
0070B978  0F 85 BA 03 00 00         JNZ 0x0070bd38
0070B97E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070B981  56                        PUSH ESI
0070B982  E8 49 FD FF FF            CALL 0x0070b6d0
0070B987  83 C4 04                  ADD ESP,0x4
0070B98A  83 F8 03                  CMP EAX,0x3
0070B98D  77 66                     JA 0x0070b9f5
switchD_0070b98f::switchD:
0070B98F  FF 24 85 E4 BD 70 00      JMP dword ptr [EAX*0x4 + 0x70bde4]
switchD_0070b98f::caseD_0:
0070B996  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0070B999  3B CF                     CMP ECX,EDI
0070B99B  7E 19                     JLE 0x0070b9b6
0070B99D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0070B9A0  3B C7                     CMP EAX,EDI
0070B9A2  7E 12                     JLE 0x0070b9b6
0070B9A4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070B9A7  50                        PUSH EAX
0070B9A8  51                        PUSH ECX
0070B9A9  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070B9AC  51                        PUSH ECX
0070B9AD  52                        PUSH EDX
0070B9AE  56                        PUSH ESI
0070B9AF  E8 EC 66 04 00            CALL 0x007520a0
0070B9B4  EB 06                     JMP 0x0070b9bc
LAB_0070b9b6:
0070B9B6  56                        PUSH ESI
0070B9B7  E8 A4 08 FB FF            CALL 0x006bc260
LAB_0070b9bc:
0070B9BC  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
0070B9BF  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
0070B9C2  51                        PUSH ECX
0070B9C3  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0070B9C6  52                        PUSH EDX
0070B9C7  51                        PUSH ECX
0070B9C8  50                        PUSH EAX
0070B9C9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070B9CC  E8 9F FD FF FF            CALL 0x0070b770
0070B9D1  8B C8                     MOV ECX,EAX
0070B9D3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070B9D6  83 C4 10                  ADD ESP,0x10
0070B9D9  3B C7                     CMP EAX,EDI
0070B9DB  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0070B9DE  0F 84 14 01 00 00         JZ 0x0070baf8
0070B9E4  3B C8                     CMP ECX,EAX
0070B9E6  0F 84 0C 01 00 00         JZ 0x0070baf8
0070B9EC  8D 55 FC                  LEA EDX,[EBP + -0x4]
0070B9EF  52                        PUSH EDX
0070B9F0  E8 6B F6 F9 FF            CALL 0x006ab060
LAB_0070b9f5:
0070B9F5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0070B9F8  E9 FB 00 00 00            JMP 0x0070baf8
switchD_0070b98f::caseD_2:
0070B9FD  8D 85 0C FF FF FF         LEA EAX,[EBP + 0xffffff0c]
0070BA03  57                        PUSH EDI
0070BA04  50                        PUSH EAX
0070BA05  56                        PUSH ESI
0070BA06  FF 15 30 BB 85 00         CALL dword ptr [0x0085bb30]
0070BA0C  8B F0                     MOV ESI,EAX
0070BA0E  3B F3                     CMP ESI,EBX
0070BA10  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0070BA13  75 18                     JNZ 0x0070ba2d
0070BA15  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0070BA1B  68 4D 03 00 00            PUSH 0x34d
0070BA20  68 E0 FF 7E 00            PUSH 0x7effe0
0070BA25  51                        PUSH ECX
0070BA26  6A F6                     PUSH -0xa
0070BA28  E8 13 A4 F9 FF            CALL 0x006a5e40
LAB_0070ba2d:
0070BA2D  56                        PUSH ESI
0070BA2E  E8 8D 65 04 00            CALL 0x00751fc0
0070BA33  8B F8                     MOV EDI,EAX
0070BA35  6A 00                     PUSH 0x0
0070BA37  6A 00                     PUSH 0x0
0070BA39  57                        PUSH EDI
0070BA3A  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0070BA3D  E8 2E B6 FB FF            CALL 0x006c7070
0070BA42  57                        PUSH EDI
0070BA43  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070BA46  E8 75 B5 FB FF            CALL 0x006c6fc0
0070BA4B  56                        PUSH ESI
0070BA4C  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
0070BA53  FF 15 38 BB 85 00         CALL dword ptr [0x0085bb38]
0070BA59  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070BA5C  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0070BA5F  85 C0                     TEST EAX,EAX
0070BA61  7E 59                     JLE 0x0070babc
0070BA63  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0070BA66  85 C9                     TEST ECX,ECX
0070BA68  7E 52                     JLE 0x0070babc
0070BA6A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0070BA6D  51                        PUSH ECX
0070BA6E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070BA71  50                        PUSH EAX
0070BA72  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0070BA75  52                        PUSH EDX
0070BA76  50                        PUSH EAX
0070BA77  51                        PUSH ECX
0070BA78  E8 23 95 FA FF            CALL 0x006b4fa0
0070BA7D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070BA80  50                        PUSH EAX
0070BA81  52                        PUSH EDX
0070BA82  6A 00                     PUSH 0x0
0070BA84  6A 00                     PUSH 0x0
0070BA86  6A 00                     PUSH 0x0
0070BA88  6A 00                     PUSH 0x0
0070BA8A  E8 61 9B FA FF            CALL 0x006b55f0
0070BA8F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070BA92  8D 45 FC                  LEA EAX,[EBP + -0x4]
0070BA95  50                        PUSH EAX
0070BA96  E8 C5 F5 F9 FF            CALL 0x006ab060
0070BA9B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070BA9E  85 C0                     TEST EAX,EAX
0070BAA0  75 20                     JNZ 0x0070bac2
0070BAA2  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0070BAA8  68 58 03 00 00            PUSH 0x358
0070BAAD  68 E0 FF 7E 00            PUSH 0x7effe0
0070BAB2  51                        PUSH ECX
0070BAB3  6A CC                     PUSH -0x34
0070BAB5  E8 86 A3 F9 FF            CALL 0x006a5e40
0070BABA  EB 06                     JMP 0x0070bac2
LAB_0070babc:
0070BABC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070BABF  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0070bac2:
0070BAC2  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0070BAC5  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0070BAC8  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0070BACB  50                        PUSH EAX
0070BACC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070BACF  51                        PUSH ECX
0070BAD0  52                        PUSH EDX
0070BAD1  50                        PUSH EAX
0070BAD2  E8 99 FC FF FF            CALL 0x0070b770
0070BAD7  8B C8                     MOV ECX,EAX
0070BAD9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070BADC  83 C4 10                  ADD ESP,0x10
0070BADF  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0070BAE2  85 C0                     TEST EAX,EAX
0070BAE4  74 10                     JZ 0x0070baf6
0070BAE6  3B C8                     CMP ECX,EAX
0070BAE8  74 0C                     JZ 0x0070baf6
0070BAEA  8D 4D F8                  LEA ECX,[EBP + -0x8]
0070BAED  51                        PUSH ECX
LAB_0070baee:
0070BAEE  E8 6D F5 F9 FF            CALL 0x006ab060
0070BAF3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_0070baf6:
0070BAF6  33 FF                     XOR EDI,EDI
switchD_0070b98f::default:
0070BAF8  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
0070BAFB  3B DF                     CMP EBX,EDI
0070BAFD  75 08                     JNZ 0x0070bb07
0070BAFF  BB 01 00 00 00            MOV EBX,0x1
0070BB04  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
LAB_0070bb07:
0070BB07  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
0070BB0A  85 FF                     TEST EDI,EDI
0070BB0C  75 08                     JNZ 0x0070bb16
0070BB0E  BF 01 00 00 00            MOV EDI,0x1
0070BB13  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
LAB_0070bb16:
0070BB16  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0070BB19  85 D2                     TEST EDX,EDX
0070BB1B  75 08                     JNZ 0x0070bb25
0070BB1D  BA 01 00 00 00            MOV EDX,0x1
0070BB22  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
LAB_0070bb25:
0070BB25  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
0070BB28  85 F6                     TEST ESI,ESI
0070BB2A  75 08                     JNZ 0x0070bb34
0070BB2C  BE 01 00 00 00            MOV ESI,0x1
0070BB31  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
LAB_0070bb34:
0070BB34  83 FB 01                  CMP EBX,0x1
0070BB37  0F 85 B5 01 00 00         JNZ 0x0070bcf2
0070BB3D  3B FB                     CMP EDI,EBX
0070BB3F  0F 85 AD 01 00 00         JNZ 0x0070bcf2
0070BB45  3B D3                     CMP EDX,EBX
0070BB47  0F 85 A5 01 00 00         JNZ 0x0070bcf2
0070BB4D  3B F3                     CMP ESI,EBX
0070BB4F  0F 85 9D 01 00 00         JNZ 0x0070bcf2
0070BB55  8B F1                     MOV ESI,ECX
0070BB57  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
0070BB5A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070BB60  8B C6                     MOV EAX,ESI
0070BB62  5F                        POP EDI
0070BB63  5E                        POP ESI
0070BB64  5B                        POP EBX
0070BB65  8B E5                     MOV ESP,EBP
0070BB67  5D                        POP EBP
0070BB68  C3                        RET
switchD_0070b98f::caseD_1:
0070BB69  8D 95 0C FF FF FF         LEA EDX,[EBP + 0xffffff0c]
0070BB6F  57                        PUSH EDI
0070BB70  52                        PUSH EDX
0070BB71  56                        PUSH ESI
0070BB72  FF 15 30 BB 85 00         CALL dword ptr [0x0085bb30]
0070BB78  8B F0                     MOV ESI,EAX
0070BB7A  3B F3                     CMP ESI,EBX
0070BB7C  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0070BB7F  75 17                     JNZ 0x0070bb98
0070BB81  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0070BB86  68 5F 03 00 00            PUSH 0x35f
0070BB8B  68 E0 FF 7E 00            PUSH 0x7effe0
0070BB90  50                        PUSH EAX
0070BB91  6A F6                     PUSH -0xa
0070BB93  E8 A8 A2 F9 FF            CALL 0x006a5e40
LAB_0070bb98:
0070BB98  57                        PUSH EDI
0070BB99  56                        PUSH ESI
0070BB9A  E8 91 63 04 00            CALL 0x00751f30
0070BB9F  8B F8                     MOV EDI,EAX
0070BBA1  6A 00                     PUSH 0x0
0070BBA3  6A 00                     PUSH 0x0
0070BBA5  57                        PUSH EDI
0070BBA6  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0070BBA9  E8 F2 BD FB FF            CALL 0x006c79a0
0070BBAE  57                        PUSH EDI
0070BBAF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070BBB2  E8 C9 BD FB FF            CALL 0x006c7980
0070BBB7  56                        PUSH ESI
0070BBB8  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0070BBBF  FF 15 38 BB 85 00         CALL dword ptr [0x0085bb38]
0070BBC5  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070BBC8  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0070BBCB  85 C0                     TEST EAX,EAX
0070BBCD  7E 58                     JLE 0x0070bc27
0070BBCF  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0070BBD2  85 C9                     TEST ECX,ECX
0070BBD4  7E 51                     JLE 0x0070bc27
0070BBD6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070BBD9  51                        PUSH ECX
0070BBDA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070BBDD  50                        PUSH EAX
0070BBDE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070BBE1  51                        PUSH ECX
0070BBE2  52                        PUSH EDX
0070BBE3  50                        PUSH EAX
0070BBE4  E8 B7 93 FA FF            CALL 0x006b4fa0
0070BBE9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070BBEC  50                        PUSH EAX
0070BBED  51                        PUSH ECX
0070BBEE  6A 00                     PUSH 0x0
0070BBF0  6A 00                     PUSH 0x0
0070BBF2  6A 00                     PUSH 0x0
0070BBF4  6A 00                     PUSH 0x0
0070BBF6  E8 F5 99 FA FF            CALL 0x006b55f0
0070BBFB  8D 55 FC                  LEA EDX,[EBP + -0x4]
0070BBFE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070BC01  52                        PUSH EDX
0070BC02  E8 59 F4 F9 FF            CALL 0x006ab060
0070BC07  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070BC0A  85 C0                     TEST EAX,EAX
0070BC0C  75 1F                     JNZ 0x0070bc2d
0070BC0E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0070BC13  68 6A 03 00 00            PUSH 0x36a
0070BC18  68 E0 FF 7E 00            PUSH 0x7effe0
0070BC1D  50                        PUSH EAX
0070BC1E  6A CC                     PUSH -0x34
0070BC20  E8 1B A2 F9 FF            CALL 0x006a5e40
0070BC25  EB 06                     JMP 0x0070bc2d
LAB_0070bc27:
0070BC27  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070BC2A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0070bc2d:
0070BC2D  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0070BC30  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0070BC33  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0070BC36  52                        PUSH EDX
0070BC37  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0070BC3A  50                        PUSH EAX
0070BC3B  51                        PUSH ECX
0070BC3C  52                        PUSH EDX
0070BC3D  E8 2E FB FF FF            CALL 0x0070b770
0070BC42  8B C8                     MOV ECX,EAX
0070BC44  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070BC47  83 C4 10                  ADD ESP,0x10
0070BC4A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0070BC4D  85 C0                     TEST EAX,EAX
0070BC4F  0F 84 A1 FE FF FF         JZ 0x0070baf6
0070BC55  3B C8                     CMP ECX,EAX
0070BC57  0F 84 99 FE FF FF         JZ 0x0070baf6
0070BC5D  8D 45 F8                  LEA EAX,[EBP + -0x8]
0070BC60  50                        PUSH EAX
0070BC61  E9 88 FE FF FF            JMP 0x0070baee
switchD_0070b98f::caseD_3:
0070BC66  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
0070BC69  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
0070BC6C  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0070BC6F  51                        PUSH ECX
0070BC70  52                        PUSH EDX
0070BC71  50                        PUSH EAX
0070BC72  57                        PUSH EDI
0070BC73  56                        PUSH ESI
0070BC74  E8 F7 61 04 00            CALL 0x00751e70
0070BC79  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0070BC7C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070BC7F  3B CF                     CMP ECX,EDI
0070BC81  7E 65                     JLE 0x0070bce8
0070BC83  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0070BC86  3B D7                     CMP EDX,EDI
0070BC88  7E 5E                     JLE 0x0070bce8
0070BC8A  52                        PUSH EDX
0070BC8B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070BC8E  51                        PUSH ECX
0070BC8F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070BC92  51                        PUSH ECX
0070BC93  52                        PUSH EDX
0070BC94  50                        PUSH EAX
0070BC95  E8 06 93 FA FF            CALL 0x006b4fa0
0070BC9A  50                        PUSH EAX
0070BC9B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070BC9E  50                        PUSH EAX
0070BC9F  57                        PUSH EDI
0070BCA0  57                        PUSH EDI
0070BCA1  57                        PUSH EDI
0070BCA2  57                        PUSH EDI
0070BCA3  E8 48 99 FA FF            CALL 0x006b55f0
0070BCA8  8B C8                     MOV ECX,EAX
0070BCAA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070BCAD  3B C7                     CMP EAX,EDI
0070BCAF  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0070BCB2  74 0C                     JZ 0x0070bcc0
0070BCB4  8D 4D FC                  LEA ECX,[EBP + -0x4]
0070BCB7  51                        PUSH ECX
0070BCB8  E8 A3 F3 F9 FF            CALL 0x006ab060
0070BCBD  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_0070bcc0:
0070BCC0  3B CF                     CMP ECX,EDI
0070BCC2  0F 85 30 FE FF FF         JNZ 0x0070baf8
0070BCC8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0070BCCE  68 78 03 00 00            PUSH 0x378
0070BCD3  68 E0 FF 7E 00            PUSH 0x7effe0
0070BCD8  52                        PUSH EDX
0070BCD9  6A CC                     PUSH -0x34
0070BCDB  E8 60 A1 F9 FF            CALL 0x006a5e40
0070BCE0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0070BCE3  E9 10 FE FF FF            JMP 0x0070baf8
LAB_0070bce8:
0070BCE8  8B C8                     MOV ECX,EAX
0070BCEA  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0070BCED  E9 06 FE FF FF            JMP 0x0070baf8
LAB_0070bcf2:
0070BCF2  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0070BCF5  0F AF C2                  IMUL EAX,EDX
0070BCF8  33 D2                     XOR EDX,EDX
0070BCFA  F7 F6                     DIV ESI
0070BCFC  33 D2                     XOR EDX,EDX
0070BCFE  50                        PUSH EAX
0070BCFF  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0070BD02  0F AF C3                  IMUL EAX,EBX
0070BD05  F7 F7                     DIV EDI
0070BD07  50                        PUSH EAX
0070BD08  6A 00                     PUSH 0x0
0070BD0A  51                        PUSH ECX
0070BD0B  6A 00                     PUSH 0x0
0070BD0D  6A 00                     PUSH 0x0
0070BD0F  E8 9C 5F 04 00            CALL 0x00751cb0
0070BD14  8B F0                     MOV ESI,EAX
0070BD16  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0070BD19  85 C0                     TEST EAX,EAX
0070BD1B  74 09                     JZ 0x0070bd26
0070BD1D  8D 45 F4                  LEA EAX,[EBP + -0xc]
0070BD20  50                        PUSH EAX
0070BD21  E8 3A F3 F9 FF            CALL 0x006ab060
LAB_0070bd26:
0070BD26  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
0070BD29  8B C6                     MOV EAX,ESI
0070BD2B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070BD31  5F                        POP EDI
0070BD32  5E                        POP ESI
0070BD33  5B                        POP EBX
0070BD34  8B E5                     MOV ESP,EBP
0070BD36  5D                        POP EBP
0070BD37  C3                        RET
LAB_0070bd38:
0070BD38  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0070BD3B  68 D8 00 7F 00            PUSH 0x7f00d8
0070BD40  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070BD45  56                        PUSH ESI
0070BD46  57                        PUSH EDI
0070BD47  68 87 03 00 00            PUSH 0x387
0070BD4C  68 E0 FF 7E 00            PUSH 0x7effe0
0070BD51  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070BD57  E8 74 17 FA FF            CALL 0x006ad4d0
0070BD5C  83 C4 18                  ADD ESP,0x18
0070BD5F  85 C0                     TEST EAX,EAX
0070BD61  74 01                     JZ 0x0070bd64
0070BD63  CC                        INT3
LAB_0070bd64:
0070BD64  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0070BD67  3B C7                     CMP EAX,EDI
0070BD69  74 13                     JZ 0x0070bd7e
0070BD6B  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
0070BD6E  74 0E                     JZ 0x0070bd7e
0070BD70  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
0070BD73  74 09                     JZ 0x0070bd7e
0070BD75  8D 45 F4                  LEA EAX,[EBP + -0xc]
0070BD78  50                        PUSH EAX
0070BD79  E8 E2 F2 F9 FF            CALL 0x006ab060
LAB_0070bd7e:
0070BD7E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070BD81  3B C3                     CMP EAX,EBX
0070BD83  74 07                     JZ 0x0070bd8c
0070BD85  50                        PUSH EAX
0070BD86  FF 15 38 BB 85 00         CALL dword ptr [0x0085bb38]
LAB_0070bd8c:
0070BD8C  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070BD8F  3B C7                     CMP EAX,EDI
0070BD91  74 06                     JZ 0x0070bd99
0070BD93  50                        PUSH EAX
0070BD94  E8 27 B2 FB FF            CALL 0x006c6fc0
LAB_0070bd99:
0070BD99  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0070BD9C  3B C7                     CMP EAX,EDI
0070BD9E  74 06                     JZ 0x0070bda6
0070BDA0  50                        PUSH EAX
0070BDA1  E8 DA BB FB FF            CALL 0x006c7980
LAB_0070bda6:
0070BDA6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070BDA9  3B C7                     CMP EAX,EDI
0070BDAB  74 0E                     JZ 0x0070bdbb
0070BDAD  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
0070BDB0  74 09                     JZ 0x0070bdbb
0070BDB2  8D 4D FC                  LEA ECX,[EBP + -0x4]
0070BDB5  51                        PUSH ECX
0070BDB6  E8 A5 F2 F9 FF            CALL 0x006ab060
LAB_0070bdbb:
0070BDBB  39 7D F8                  CMP dword ptr [EBP + -0x8],EDI
0070BDBE  74 09                     JZ 0x0070bdc9
0070BDC0  8D 55 F8                  LEA EDX,[EBP + -0x8]
0070BDC3  52                        PUSH EDX
0070BDC4  E8 97 F2 F9 FF            CALL 0x006ab060
LAB_0070bdc9:
0070BDC9  68 90 03 00 00            PUSH 0x390
0070BDCE  68 E0 FF 7E 00            PUSH 0x7effe0
0070BDD3  57                        PUSH EDI
0070BDD4  56                        PUSH ESI
0070BDD5  E8 66 A0 F9 FF            CALL 0x006a5e40
0070BDDA  5F                        POP EDI
0070BDDB  5E                        POP ESI
0070BDDC  33 C0                     XOR EAX,EAX
0070BDDE  5B                        POP EBX
0070BDDF  8B E5                     MOV ESP,EBP
0070BDE1  5D                        POP EBP
0070BDE2  C3                        RET
