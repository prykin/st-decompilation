FUN_006ddd50:
006DDD50  55                        PUSH EBP
006DDD51  8B EC                     MOV EBP,ESP
006DDD53  6A FF                     PUSH -0x1
006DDD55  68 F8 DF 79 00            PUSH 0x79dff8
006DDD5A  68 64 D9 72 00            PUSH 0x72d964
006DDD5F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006DDD65  50                        PUSH EAX
006DDD66  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006DDD6D  81 EC 0C 01 00 00         SUB ESP,0x10c
006DDD73  53                        PUSH EBX
006DDD74  56                        PUSH ESI
006DDD75  57                        PUSH EDI
006DDD76  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DDD79  8B F1                     MOV ESI,ECX
006DDD7B  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006DDD7E  85 C0                     TEST EAX,EAX
006DDD80  74 13                     JZ 0x006ddd95
006DDD82  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006DDD85  25 00 11 00 00            AND EAX,0x1100
006DDD8A  3D 00 01 00 00            CMP EAX,0x100
006DDD8F  0F 84 BB 07 00 00         JZ 0x006de550
LAB_006ddd95:
006DDD95  8B 86 DC 02 00 00         MOV EAX,dword ptr [ESI + 0x2dc]
006DDD9B  85 C0                     TEST EAX,EAX
006DDD9D  74 0E                     JZ 0x006dddad
006DDD9F  8B 86 D8 02 00 00         MOV EAX,dword ptr [ESI + 0x2d8]
006DDDA5  85 C0                     TEST EAX,EAX
006DDDA7  0F 84 A3 07 00 00         JZ 0x006de550
LAB_006dddad:
006DDDAD  C7 86 D8 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x2d8],0x1
006DDDB7  9B                        WAIT
006DDDB8  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006DDDBF  B8 00 10 00 00            MOV EAX,0x1000
006DDDC4  E8 77 FC 04 00            CALL 0x0072da40
006DDDC9  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DDDCC  8B C4                     MOV EAX,ESP
006DDDCE  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006DDDD1  B8 00 01 00 00            MOV EAX,0x100
006DDDD6  E8 65 FC 04 00            CALL 0x0072da40
006DDDDB  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DDDDE  8B C4                     MOV EAX,ESP
006DDDE0  89 85 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EAX
006DDDE6  9B                        WAIT
006DDDE7  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DDDEE  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
006DDDF4  85 C0                     TEST EAX,EAX
006DDDF6  0F 8C 38 01 00 00         JL 0x006ddf34
006DDDFC  83 F8 03                  CMP EAX,0x3
006DDDFF  0F 8F 2F 01 00 00         JG 0x006ddf34
006DDE05  8D 86 40 01 00 00         LEA EAX,[ESI + 0x140]
006DDE0B  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006DDE0E  8B 00                     MOV EAX,dword ptr [EAX]
006DDE10  85 C0                     TEST EAX,EAX
006DDE12  74 16                     JZ 0x006dde2a
LAB_006dde14:
006DDE14  66 83 78 08 00            CMP word ptr [EAX + 0x8],0x0
006DDE19  75 0F                     JNZ 0x006dde2a
006DDE1B  83 78 24 02               CMP dword ptr [EAX + 0x24],0x2
006DDE1F  7F 09                     JG 0x006dde2a
006DDE21  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006DDE24  8B 00                     MOV EAX,dword ptr [EAX]
006DDE26  85 C0                     TEST EAX,EAX
006DDE28  75 EA                     JNZ 0x006dde14
LAB_006dde2a:
006DDE2A  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
006DDE2D  8B 19                     MOV EBX,dword ptr [ECX]
006DDE2F  89 5D 9C                  MOV dword ptr [EBP + -0x64],EBX
006DDE32  C7 85 7C FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff7c],0x0
006DDE3C  C7 45 80 00 00 00 00      MOV dword ptr [EBP + -0x80],0x0
006DDE43  C7 45 84 00 00 00 00      MOV dword ptr [EBP + -0x7c],0x0
006DDE4A  8B FB                     MOV EDI,EBX
006DDE4C  85 DB                     TEST EBX,EBX
006DDE4E  74 7B                     JZ 0x006ddecb
LAB_006dde50:
006DDE50  6A 01                     PUSH 0x1
006DDE52  33 D2                     XOR EDX,EDX
006DDE54  8A 57 48                  MOV DL,byte ptr [EDI + 0x48]
006DDE57  0F BF 47 08               MOVSX EAX,word ptr [EDI + 0x8]
006DDE5B  2B C2                     SUB EAX,EDX
006DDE5D  89 85 F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],EAX
006DDE63  DB 85 F4 FE FF FF         FILD dword ptr [EBP + 0xfffffef4]
006DDE69  DC 8E D0 00 00 00         FMUL double ptr [ESI + 0xd0]
006DDE6F  83 EC 08                  SUB ESP,0x8
006DDE72  DD 1C 24                  FSTP double ptr [ESP]
006DDE75  0F BF 4F 06               MOVSX ECX,word ptr [EDI + 0x6]
006DDE79  89 8D F0 FE FF FF         MOV dword ptr [EBP + 0xfffffef0],ECX
006DDE7F  DB 85 F0 FE FF FF         FILD dword ptr [EBP + 0xfffffef0]
006DDE85  DC 8E C8 00 00 00         FMUL double ptr [ESI + 0xc8]
006DDE8B  83 EC 08                  SUB ESP,0x8
006DDE8E  DD 1C 24                  FSTP double ptr [ESP]
006DDE91  0F BF 57 04               MOVSX EDX,word ptr [EDI + 0x4]
006DDE95  89 95 EC FE FF FF         MOV dword ptr [EBP + 0xfffffeec],EDX
006DDE9B  DB 85 EC FE FF FF         FILD dword ptr [EBP + 0xfffffeec]
006DDEA1  DC 8E C8 00 00 00         FMUL double ptr [ESI + 0xc8]
006DDEA7  83 EC 08                  SUB ESP,0x8
006DDEAA  DD 1C 24                  FSTP double ptr [ESP]
006DDEAD  8D 85 7C FF FF FF         LEA EAX,[EBP + 0xffffff7c]
006DDEB3  50                        PUSH EAX
006DDEB4  8D 4D 88                  LEA ECX,[EBP + -0x78]
006DDEB7  51                        PUSH ECX
006DDEB8  8B CE                     MOV ECX,ESI
006DDEBA  E8 11 47 00 00            CALL 0x006e25d0
006DDEBF  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006DDEC2  89 57 44                  MOV dword ptr [EDI + 0x44],EDX
006DDEC5  8B 3F                     MOV EDI,dword ptr [EDI]
006DDEC7  85 FF                     TEST EDI,EDI
006DDEC9  75 85                     JNZ 0x006dde50
LAB_006ddecb:
006DDECB  8D 45 AC                  LEA EAX,[EBP + -0x54]
006DDECE  50                        PUSH EAX
006DDECF  8D 4D C4                  LEA ECX,[EBP + -0x3c]
006DDED2  51                        PUSH ECX
006DDED3  8D 95 18 FF FF FF         LEA EDX,[EBP + 0xffffff18]
006DDED9  52                        PUSH EDX
006DDEDA  8B CE                     MOV ECX,ESI
006DDEDC  E8 4F F6 FF FF            CALL 0x006dd530
006DDEE1  85 DB                     TEST EBX,EBX
006DDEE3  0F 84 AE 00 00 00         JZ 0x006ddf97
LAB_006ddee9:
006DDEE9  8D 7D 9C                  LEA EDI,[EBP + -0x64]
006DDEEC  8B C3                     MOV EAX,EBX
006DDEEE  85 DB                     TEST EBX,EBX
006DDEF0  74 1C                     JZ 0x006ddf0e
LAB_006ddef2:
006DDEF2  8B CB                     MOV ECX,EBX
006DDEF4  8B 50 44                  MOV EDX,dword ptr [EAX + 0x44]
LAB_006ddef7:
006DDEF7  3B 51 44                  CMP EDX,dword ptr [ECX + 0x44]
006DDEFA  7C 06                     JL 0x006ddf02
006DDEFC  8B 09                     MOV ECX,dword ptr [ECX]
006DDEFE  85 C9                     TEST ECX,ECX
006DDF00  75 F5                     JNZ 0x006ddef7
LAB_006ddf02:
006DDF02  85 C9                     TEST ECX,ECX
006DDF04  74 08                     JZ 0x006ddf0e
006DDF06  8B F8                     MOV EDI,EAX
006DDF08  8B 00                     MOV EAX,dword ptr [EAX]
006DDF0A  85 C0                     TEST EAX,EAX
006DDF0C  75 E4                     JNZ 0x006ddef2
LAB_006ddf0e:
006DDF0E  85 C0                     TEST EAX,EAX
006DDF10  74 17                     JZ 0x006ddf29
006DDF12  8B 08                     MOV ECX,dword ptr [EAX]
006DDF14  89 0F                     MOV dword ptr [EDI],ECX
006DDF16  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006DDF1C  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006DDF1F  89 02                     MOV dword ptr [EDX],EAX
006DDF21  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006DDF24  8B 5D 9C                  MOV EBX,dword ptr [EBP + -0x64]
006DDF27  EB 05                     JMP 0x006ddf2e
LAB_006ddf29:
006DDF29  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006DDF2C  89 18                     MOV dword ptr [EAX],EBX
LAB_006ddf2e:
006DDF2E  85 DB                     TEST EBX,EBX
006DDF30  75 B7                     JNZ 0x006ddee9
006DDF32  EB 63                     JMP 0x006ddf97
LAB_006ddf34:
006DDF34  8B 86 3C 01 00 00         MOV EAX,dword ptr [ESI + 0x13c]
006DDF3A  48                        DEC EAX
006DDF3B  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
006DDF41  85 C0                     TEST EAX,EAX
006DDF43  7E 52                     JLE 0x006ddf97
LAB_006ddf45:
006DDF45  8D BE 40 01 00 00         LEA EDI,[ESI + 0x140]
006DDF4B  8B 0F                     MOV ECX,dword ptr [EDI]
006DDF4D  85 C0                     TEST EAX,EAX
006DDF4F  7E 3B                     JLE 0x006ddf8c
006DDF51  89 85 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EAX
LAB_006ddf57:
006DDF57  8B 01                     MOV EAX,dword ptr [ECX]
006DDF59  BA 01 00 00 00            MOV EDX,0x1
006DDF5E  66 8B 58 08               MOV BX,word ptr [EAX + 0x8]
006DDF62  66 3B 59 08               CMP BX,word ptr [ECX + 0x8]
006DDF66  7E 02                     JLE 0x006ddf6a
006DDF68  33 D2                     XOR EDX,EDX
LAB_006ddf6a:
006DDF6A  85 D2                     TEST EDX,EDX
006DDF6C  74 0C                     JZ 0x006ddf7a
006DDF6E  89 07                     MOV dword ptr [EDI],EAX
006DDF70  8B 10                     MOV EDX,dword ptr [EAX]
006DDF72  89 11                     MOV dword ptr [ECX],EDX
006DDF74  89 08                     MOV dword ptr [EAX],ECX
006DDF76  8B F8                     MOV EDI,EAX
006DDF78  EB 04                     JMP 0x006ddf7e
LAB_006ddf7a:
006DDF7A  8B F9                     MOV EDI,ECX
006DDF7C  8B C8                     MOV ECX,EAX
LAB_006ddf7e:
006DDF7E  FF 8D E8 FE FF FF         DEC dword ptr [EBP + 0xfffffee8]
006DDF84  75 D1                     JNZ 0x006ddf57
006DDF86  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
LAB_006ddf8c:
006DDF8C  48                        DEC EAX
006DDF8D  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
006DDF93  85 C0                     TEST EAX,EAX
006DDF95  7F AE                     JG 0x006ddf45
LAB_006ddf97:
006DDF97  8B 86 24 01 00 00         MOV EAX,dword ptr [ESI + 0x124]
006DDF9D  85 C0                     TEST EAX,EAX
006DDF9F  75 68                     JNZ 0x006de009
006DDFA1  8B 9E 40 01 00 00         MOV EBX,dword ptr [ESI + 0x140]
006DDFA7  85 DB                     TEST EBX,EBX
006DDFA9  0F 84 B2 02 00 00         JZ 0x006de261
LAB_006ddfaf:
006DDFAF  8D 85 64 FF FF FF         LEA EAX,[EBP + 0xffffff64]
006DDFB5  50                        PUSH EAX
006DDFB6  8B 8D 38 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff38]
006DDFBC  51                        PUSH ECX
006DDFBD  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006DDFC0  52                        PUSH EDX
006DDFC1  53                        PUSH EBX
006DDFC2  8B CE                     MOV ECX,ESI
006DDFC4  E8 17 3F 00 00            CALL 0x006e1ee0
006DDFC9  53                        PUSH EBX
006DDFCA  8B CE                     MOV ECX,ESI
006DDFCC  E8 0F 8D 04 00            CALL 0x00726ce0
006DDFD1  33 FF                     XOR EDI,EDI
006DDFD3  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
006DDFD9  85 C0                     TEST EAX,EAX
006DDFDB  7E 21                     JLE 0x006ddffe
LAB_006ddfdd:
006DDFDD  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006DDFE0  50                        PUSH EAX
006DDFE1  33 C9                     XOR ECX,ECX
006DDFE3  8B 95 38 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff38]
006DDFE9  8A 0C 17                  MOV CL,byte ptr [EDI + EDX*0x1]
006DDFEC  51                        PUSH ECX
006DDFED  53                        PUSH EBX
006DDFEE  8B CE                     MOV ECX,ESI
006DDFF0  E8 BB 99 04 00            CALL 0x007279b0
006DDFF5  47                        INC EDI
006DDFF6  3B BD 64 FF FF FF         CMP EDI,dword ptr [EBP + 0xffffff64]
006DDFFC  7C DF                     JL 0x006ddfdd
LAB_006ddffe:
006DDFFE  8B 1B                     MOV EBX,dword ptr [EBX]
006DE000  85 DB                     TEST EBX,EBX
006DE002  75 AB                     JNZ 0x006ddfaf
006DE004  E9 58 02 00 00            JMP 0x006de261
LAB_006de009:
006DE009  83 F8 01                  CMP EAX,0x1
006DE00C  0F 85 E0 01 00 00         JNZ 0x006de1f2
006DE012  8B 86 74 03 00 00         MOV EAX,dword ptr [ESI + 0x374]
006DE018  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006DE01B  8B 8E 78 03 00 00         MOV ECX,dword ptr [ESI + 0x378]
006DE021  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006DE024  8B 86 70 03 00 00         MOV EAX,dword ptr [ESI + 0x370]
006DE02A  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006DE02D  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006DE030  8B 9E 40 01 00 00         MOV EBX,dword ptr [ESI + 0x140]
006DE036  85 DB                     TEST EBX,EBX
006DE038  0F 84 23 02 00 00         JZ 0x006de261
LAB_006de03e:
006DE03E  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
006DE044  52                        PUSH EDX
006DE045  8B 85 38 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff38]
006DE04B  50                        PUSH EAX
006DE04C  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006DE04F  51                        PUSH ECX
006DE050  53                        PUSH EBX
006DE051  8B CE                     MOV ECX,ESI
006DE053  E8 88 3E 00 00            CALL 0x006e1ee0
006DE058  53                        PUSH EBX
006DE059  8B CE                     MOV ECX,ESI
006DE05B  E8 80 8C 04 00            CALL 0x00726ce0
006DE060  33 FF                     XOR EDI,EDI
006DE062  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
006DE068  85 C0                     TEST EAX,EAX
006DE06A  7E 21                     JLE 0x006de08d
LAB_006de06c:
006DE06C  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006DE06F  52                        PUSH EDX
006DE070  33 C0                     XOR EAX,EAX
006DE072  8B 8D 38 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff38]
006DE078  8A 04 0F                  MOV AL,byte ptr [EDI + ECX*0x1]
006DE07B  50                        PUSH EAX
006DE07C  53                        PUSH EBX
006DE07D  8B CE                     MOV ECX,ESI
006DE07F  E8 2C A2 04 00            CALL 0x007282b0
006DE084  47                        INC EDI
006DE085  3B BD 64 FF FF FF         CMP EDI,dword ptr [EBP + 0xffffff64]
006DE08B  7C DF                     JL 0x006de06c
LAB_006de08d:
006DE08D  66 8B 43 08               MOV AX,word ptr [EBX + 0x8]
006DE091  66 85 C0                  TEST AX,AX
006DE094  75 0C                     JNZ 0x006de0a2
006DE096  C7 85 20 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff20],0x0
006DE0A0  EB 17                     JMP 0x006de0b9
LAB_006de0a2:
006DE0A2  33 D2                     XOR EDX,EDX
006DE0A4  8A 53 48                  MOV DL,byte ptr [EBX + 0x48]
006DE0A7  0F BF C0                  MOVSX EAX,AX
006DE0AA  2B C2                     SUB EAX,EDX
006DE0AC  0F AF 86 84 03 00 00      IMUL EAX,dword ptr [ESI + 0x384]
006DE0B3  89 85 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EAX
LAB_006de0b9:
006DE0B9  8B 86 80 03 00 00         MOV EAX,dword ptr [ESI + 0x380]
006DE0BF  0F BF 4B 04               MOVSX ECX,word ptr [EBX + 0x4]
006DE0C3  0F AF C8                  IMUL ECX,EAX
006DE0C6  89 8D 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],ECX
006DE0CC  0F BF 53 06               MOVSX EDX,word ptr [EBX + 0x6]
006DE0D0  0F AF D0                  IMUL EDX,EAX
006DE0D3  89 95 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EDX
006DE0D9  03 C0                     ADD EAX,EAX
006DE0DB  89 85 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EAX
006DE0E1  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
006DE0E7  8D 45 CC                  LEA EAX,[EBP + -0x34]
006DE0EA  50                        PUSH EAX
006DE0EB  8D 95 40 FF FF FF         LEA EDX,[EBP + 0xffffff40]
006DE0F1  8D 8D 50 FF FF FF         LEA ECX,[EBP + 0xffffff50]
006DE0F7  E8 64 23 FD FF            CALL 0x006b0460
006DE0FC  85 C0                     TEST EAX,EAX
006DE0FE  0F 84 E2 00 00 00         JZ 0x006de1e6
006DE104  8B 95 20 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff20]
006DE10A  85 D2                     TEST EDX,EDX
006DE10C  75 52                     JNZ 0x006de160
006DE10E  52                        PUSH EDX
006DE10F  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
006DE115  51                        PUSH ECX
006DE116  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
006DE11C  52                        PUSH EDX
006DE11D  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
006DE123  8B C8                     MOV ECX,EAX
006DE125  2B 8D 44 FF FF FF         SUB ECX,dword ptr [EBP + 0xffffff44]
006DE12B  51                        PUSH ECX
006DE12C  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
006DE132  8B D1                     MOV EDX,ECX
006DE134  2B 95 40 FF FF FF         SUB EDX,dword ptr [EBP + 0xffffff40]
006DE13A  52                        PUSH EDX
006DE13B  8B 95 48 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff48]
006DE141  52                        PUSH EDX
006DE142  8B 53 40                  MOV EDX,dword ptr [EBX + 0x40]
006DE145  52                        PUSH EDX
006DE146  2B 45 D0                  SUB EAX,dword ptr [EBP + -0x30]
006DE149  50                        PUSH EAX
006DE14A  2B 4D CC                  SUB ECX,dword ptr [EBP + -0x34]
006DE14D  51                        PUSH ECX
006DE14E  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006DE151  50                        PUSH EAX
006DE152  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006DE155  51                        PUSH ECX
006DE156  E8 D5 21 FD FF            CALL 0x006b0330
006DE15B  E9 86 00 00 00            JMP 0x006de1e6
LAB_006de160:
006DE160  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
006DE166  8B C1                     MOV EAX,ECX
006DE168  2B 45 D0                  SUB EAX,dword ptr [EBP + -0x30]
006DE16B  0F AF 46 28               IMUL EAX,dword ptr [ESI + 0x28]
006DE16F  03 46 14                  ADD EAX,dword ptr [ESI + 0x14]
006DE172  2B 45 CC                  SUB EAX,dword ptr [EBP + -0x34]
006DE175  8B BD 50 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff50]
006DE17B  03 C7                     ADD EAX,EDI
006DE17D  2B 8D 44 FF FF FF         SUB ECX,dword ptr [EBP + 0xffffff44]
006DE183  0F AF 8D 48 FF FF FF      IMUL ECX,dword ptr [EBP + 0xffffff48]
006DE18A  03 4B 40                  ADD ECX,dword ptr [EBX + 0x40]
006DE18D  2B 8D 40 FF FF FF         SUB ECX,dword ptr [EBP + 0xffffff40]
006DE193  03 CF                     ADD ECX,EDI
006DE195  8B F9                     MOV EDI,ECX
006DE197  FF 8D 5C FF FF FF         DEC dword ptr [EBP + 0xffffff5c]
006DE19D  78 47                     JS 0x006de1e6
LAB_006de19f:
006DE19F  8B 8D 58 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff58]
006DE1A5  49                        DEC ECX
006DE1A6  85 C9                     TEST ECX,ECX
006DE1A8  7C 1B                     JL 0x006de1c5
006DE1AA  41                        INC ECX
006DE1AB  89 8D E4 FE FF FF         MOV dword ptr [EBP + 0xfffffee4],ECX
LAB_006de1b1:
006DE1B1  8A 0F                     MOV CL,byte ptr [EDI]
006DE1B3  84 C9                     TEST CL,CL
006DE1B5  74 04                     JZ 0x006de1bb
006DE1B7  02 CA                     ADD CL,DL
006DE1B9  88 08                     MOV byte ptr [EAX],CL
LAB_006de1bb:
006DE1BB  47                        INC EDI
006DE1BC  40                        INC EAX
006DE1BD  FF 8D E4 FE FF FF         DEC dword ptr [EBP + 0xfffffee4]
006DE1C3  75 EC                     JNZ 0x006de1b1
LAB_006de1c5:
006DE1C5  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
006DE1C8  2B 8D 58 FF FF FF         SUB ECX,dword ptr [EBP + 0xffffff58]
006DE1CE  03 C1                     ADD EAX,ECX
006DE1D0  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
006DE1D6  2B 8D 58 FF FF FF         SUB ECX,dword ptr [EBP + 0xffffff58]
006DE1DC  03 F9                     ADD EDI,ECX
006DE1DE  FF 8D 5C FF FF FF         DEC dword ptr [EBP + 0xffffff5c]
006DE1E4  79 B9                     JNS 0x006de19f
LAB_006de1e6:
006DE1E6  8B 1B                     MOV EBX,dword ptr [EBX]
006DE1E8  85 DB                     TEST EBX,EBX
006DE1EA  0F 85 4E FE FF FF         JNZ 0x006de03e
006DE1F0  EB 6F                     JMP 0x006de261
LAB_006de1f2:
006DE1F2  8B 9E 40 01 00 00         MOV EBX,dword ptr [ESI + 0x140]
006DE1F8  85 DB                     TEST EBX,EBX
006DE1FA  74 65                     JZ 0x006de261
LAB_006de1fc:
006DE1FC  83 BE 24 01 00 00 03      CMP dword ptr [ESI + 0x124],0x3
006DE203  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
006DE209  52                        PUSH EDX
006DE20A  8B 85 38 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff38]
006DE210  50                        PUSH EAX
006DE211  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006DE214  51                        PUSH ECX
006DE215  53                        PUSH EBX
006DE216  8B CE                     MOV ECX,ESI
006DE218  74 07                     JZ 0x006de221
006DE21A  E8 C1 3C 00 00            CALL 0x006e1ee0
006DE21F  EB 05                     JMP 0x006de226
LAB_006de221:
006DE221  E8 3A 49 00 00            CALL 0x006e2b60
LAB_006de226:
006DE226  53                        PUSH EBX
006DE227  8B CE                     MOV ECX,ESI
006DE229  E8 B2 8A 04 00            CALL 0x00726ce0
006DE22E  33 FF                     XOR EDI,EDI
006DE230  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
006DE236  85 C0                     TEST EAX,EAX
006DE238  7E 21                     JLE 0x006de25b
LAB_006de23a:
006DE23A  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006DE23D  52                        PUSH EDX
006DE23E  33 C0                     XOR EAX,EAX
006DE240  8B 8D 38 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff38]
006DE246  8A 04 0F                  MOV AL,byte ptr [EDI + ECX*0x1]
006DE249  50                        PUSH EAX
006DE24A  53                        PUSH EBX
006DE24B  8B CE                     MOV ECX,ESI
006DE24D  E8 4E 9B 04 00            CALL 0x00727da0
006DE252  47                        INC EDI
006DE253  3B BD 64 FF FF FF         CMP EDI,dword ptr [EBP + 0xffffff64]
006DE259  7C DF                     JL 0x006de23a
LAB_006de25b:
006DE25B  8B 1B                     MOV EBX,dword ptr [EBX]
006DE25D  85 DB                     TEST EBX,EBX
006DE25F  75 9B                     JNZ 0x006de1fc
LAB_006de261:
006DE261  8B 86 24 01 00 00         MOV EAX,dword ptr [ESI + 0x124]
006DE267  83 F8 05                  CMP EAX,0x5
006DE26A  0F 85 8A 00 00 00         JNZ 0x006de2fa
006DE270  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006DE273  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
006DE276  8B 7E 14                  MOV EDI,dword ptr [ESI + 0x14]
006DE279  C7 85 78 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x0
006DE283  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
006DE286  85 C0                     TEST EAX,EAX
006DE288  0F 8E C2 02 00 00         JLE 0x006de550
LAB_006de28e:
006DE28E  33 DB                     XOR EBX,EBX
006DE290  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006DE293  85 C0                     TEST EAX,EAX
006DE295  7E 4C                     JLE 0x006de2e3
LAB_006de297:
006DE297  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006DE29A  80 38 FF                  CMP byte ptr [EAX],0xff
006DE29D  75 38                     JNZ 0x006de2d7
006DE29F  33 C9                     XOR ECX,ECX
006DE2A1  66 8B 0F                  MOV CX,word ptr [EDI]
006DE2A4  8B D1                     MOV EDX,ECX
006DE2A6  B9 30 75 00 00            MOV ECX,0x7530
006DE2AB  2B CA                     SUB ECX,EDX
006DE2AD  C1 E1 08                  SHL ECX,0x8
006DE2B0  B8 73 B2 E7 45            MOV EAX,0x45e7b273
006DE2B5  F7 E9                     IMUL ECX
006DE2B7  C1 FA 0D                  SAR EDX,0xd
006DE2BA  8B C2                     MOV EAX,EDX
006DE2BC  C1 E8 1F                  SHR EAX,0x1f
006DE2BF  03 D0                     ADD EDX,EAX
006DE2C1  79 02                     JNS 0x006de2c5
006DE2C3  33 D2                     XOR EDX,EDX
LAB_006de2c5:
006DE2C5  81 FA FF 00 00 00         CMP EDX,0xff
006DE2CB  7E 05                     JLE 0x006de2d2
006DE2CD  BA FF 00 00 00            MOV EDX,0xff
LAB_006de2d2:
006DE2D2  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
006DE2D5  88 11                     MOV byte ptr [ECX],DL
LAB_006de2d7:
006DE2D7  FF 45 B4                  INC dword ptr [EBP + -0x4c]
006DE2DA  83 C7 02                  ADD EDI,0x2
006DE2DD  43                        INC EBX
006DE2DE  3B 5E 28                  CMP EBX,dword ptr [ESI + 0x28]
006DE2E1  7C B4                     JL 0x006de297
LAB_006de2e3:
006DE2E3  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
006DE2E9  40                        INC EAX
006DE2EA  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
006DE2F0  3B 46 2C                  CMP EAX,dword ptr [ESI + 0x2c]
006DE2F3  7C 99                     JL 0x006de28e
006DE2F5  E9 56 02 00 00            JMP 0x006de550
LAB_006de2fa:
006DE2FA  83 F8 02                  CMP EAX,0x2
006DE2FD  0F 85 4D 02 00 00         JNZ 0x006de550
006DE303  C7 85 7C FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff7c],0x0
006DE30D  C7 45 80 00 00 00 00      MOV dword ptr [EBP + -0x80],0x0
006DE314  C7 45 84 00 00 00 00      MOV dword ptr [EBP + -0x7c],0x0
006DE31B  6A 00                     PUSH 0x0
006DE31D  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DE323  DC 0D F0 DF 79 00         FMUL double ptr [0x0079dff0]
006DE329  83 EC 08                  SUB ESP,0x8
006DE32C  DD 1C 24                  FSTP double ptr [ESP]
006DE32F  6A 00                     PUSH 0x0
006DE331  6A 00                     PUSH 0x0
006DE333  6A 00                     PUSH 0x0
006DE335  6A 00                     PUSH 0x0
006DE337  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
006DE33D  52                        PUSH EDX
006DE33E  8D 45 88                  LEA EAX,[EBP + -0x78]
006DE341  50                        PUSH EAX
006DE342  8B CE                     MOV ECX,ESI
006DE344  E8 87 42 00 00            CALL 0x006e25d0
006DE349  8B 5D 90                  MOV EBX,dword ptr [EBP + -0x70]
006DE34C  6A 00                     PUSH 0x0
006DE34E  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DE354  DC 0D 68 DF 79 00         FMUL double ptr [0x0079df68]
006DE35A  83 EC 08                  SUB ESP,0x8
006DE35D  DD 1C 24                  FSTP double ptr [ESP]
006DE360  6A 00                     PUSH 0x0
006DE362  6A 00                     PUSH 0x0
006DE364  6A 00                     PUSH 0x0
006DE366  6A 00                     PUSH 0x0
006DE368  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
006DE36E  51                        PUSH ECX
006DE36F  8D 55 88                  LEA EDX,[EBP + -0x78]
006DE372  52                        PUSH EDX
006DE373  8B CE                     MOV ECX,ESI
006DE375  E8 56 42 00 00            CALL 0x006e25d0
006DE37A  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006DE37D  89 85 04 FF FF FF         MOV dword ptr [EBP + 0xffffff04],EAX
006DE383  6A 00                     PUSH 0x0
006DE385  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DE38B  DC 0D 28 B1 79 00         FMUL double ptr [0x0079b128]
006DE391  83 EC 08                  SUB ESP,0x8
006DE394  DD 1C 24                  FSTP double ptr [ESP]
006DE397  6A 00                     PUSH 0x0
006DE399  6A 00                     PUSH 0x0
006DE39B  6A 00                     PUSH 0x0
006DE39D  6A 00                     PUSH 0x0
006DE39F  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
006DE3A5  51                        PUSH ECX
006DE3A6  8D 55 88                  LEA EDX,[EBP + -0x78]
006DE3A9  52                        PUSH EDX
006DE3AA  8B CE                     MOV ECX,ESI
006DE3AC  E8 1F 42 00 00            CALL 0x006e25d0
006DE3B1  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006DE3B4  89 85 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],EAX
006DE3BA  6A 00                     PUSH 0x0
006DE3BC  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DE3C2  DC C0                     FADD ST0,ST0
006DE3C4  83 EC 08                  SUB ESP,0x8
006DE3C7  DD 1C 24                  FSTP double ptr [ESP]
006DE3CA  6A 00                     PUSH 0x0
006DE3CC  6A 00                     PUSH 0x0
006DE3CE  6A 00                     PUSH 0x0
006DE3D0  6A 00                     PUSH 0x0
006DE3D2  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
006DE3D8  51                        PUSH ECX
006DE3D9  8D 55 88                  LEA EDX,[EBP + -0x78]
006DE3DC  52                        PUSH EDX
006DE3DD  8B CE                     MOV ECX,ESI
006DE3DF  E8 EC 41 00 00            CALL 0x006e25d0
006DE3E4  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006DE3E7  89 85 0C FF FF FF         MOV dword ptr [EBP + 0xffffff0c],EAX
006DE3ED  6A 00                     PUSH 0x0
006DE3EF  8B 8E D4 00 00 00         MOV ECX,dword ptr [ESI + 0xd4]
006DE3F5  51                        PUSH ECX
006DE3F6  8B 96 D0 00 00 00         MOV EDX,dword ptr [ESI + 0xd0]
006DE3FC  52                        PUSH EDX
006DE3FD  6A 00                     PUSH 0x0
006DE3FF  6A 00                     PUSH 0x0
006DE401  6A 00                     PUSH 0x0
006DE403  6A 00                     PUSH 0x0
006DE405  8D 85 7C FF FF FF         LEA EAX,[EBP + 0xffffff7c]
006DE40B  50                        PUSH EAX
006DE40C  8D 4D 88                  LEA ECX,[EBP + -0x78]
006DE40F  51                        PUSH ECX
006DE410  8B CE                     MOV ECX,ESI
006DE412  E8 B9 41 00 00            CALL 0x006e25d0
006DE417  8B 7D 90                  MOV EDI,dword ptr [EBP + -0x70]
006DE41A  6A 00                     PUSH 0x0
006DE41C  6A 00                     PUSH 0x0
006DE41E  6A 00                     PUSH 0x0
006DE420  6A 00                     PUSH 0x0
006DE422  6A 00                     PUSH 0x0
006DE424  6A 00                     PUSH 0x0
006DE426  6A 00                     PUSH 0x0
006DE428  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
006DE42E  52                        PUSH EDX
006DE42F  8D 45 88                  LEA EAX,[EBP + -0x78]
006DE432  50                        PUSH EAX
006DE433  8B CE                     MOV ECX,ESI
006DE435  E8 96 41 00 00            CALL 0x006e25d0
006DE43A  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
006DE43D  8B D1                     MOV EDX,ECX
006DE43F  2B D7                     SUB EDX,EDI
006DE441  B8 67 66 66 66            MOV EAX,0x66666667
006DE446  F7 EA                     IMUL EDX
006DE448  C1 FA 02                  SAR EDX,0x2
006DE44B  8B C2                     MOV EAX,EDX
006DE44D  C1 E8 1F                  SHR EAX,0x1f
006DE450  03 D0                     ADD EDX,EAX
006DE452  2B DA                     SUB EBX,EDX
006DE454  89 9D 00 FF FF FF         MOV dword ptr [EBP + 0xffffff00],EBX
006DE45A  29 95 04 FF FF FF         SUB dword ptr [EBP + 0xffffff04],EDX
006DE460  29 95 08 FF FF FF         SUB dword ptr [EBP + 0xffffff08],EDX
006DE466  29 95 0C FF FF FF         SUB dword ptr [EBP + 0xffffff0c],EDX
006DE46C  2B FA                     SUB EDI,EDX
006DE46E  89 BD 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EDI
006DE474  2B CA                     SUB ECX,EDX
006DE476  89 8D FC FE FF FF         MOV dword ptr [EBP + 0xfffffefc],ECX
006DE47C  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006DE47F  8B 7E 14                  MOV EDI,dword ptr [ESI + 0x14]
006DE482  C7 85 78 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x0
006DE48C  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
006DE48F  85 C0                     TEST EAX,EAX
006DE491  0F 8E B9 00 00 00         JLE 0x006de550
LAB_006de497:
006DE497  33 C9                     XOR ECX,ECX
006DE499  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006DE49C  85 C0                     TEST EAX,EAX
006DE49E  7E 6F                     JLE 0x006de50f
LAB_006de4a0:
006DE4A0  33 C0                     XOR EAX,EAX
006DE4A2  66 8B 07                  MOV AX,word ptr [EDI]
006DE4A5  3B 85 FC FE FF FF         CMP EAX,dword ptr [EBP + 0xfffffefc]
006DE4AB  7C 08                     JL 0x006de4b5
006DE4AD  8A 86 38 04 00 00         MOV AL,byte ptr [ESI + 0x438]
006DE4B3  EB 4E                     JMP 0x006de503
LAB_006de4b5:
006DE4B5  3B 85 10 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff10]
006DE4BB  7C 08                     JL 0x006de4c5
006DE4BD  8A 86 39 04 00 00         MOV AL,byte ptr [ESI + 0x439]
006DE4C3  EB 3E                     JMP 0x006de503
LAB_006de4c5:
006DE4C5  3B 85 0C FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff0c]
006DE4CB  7C 08                     JL 0x006de4d5
006DE4CD  8A 86 3A 04 00 00         MOV AL,byte ptr [ESI + 0x43a]
006DE4D3  EB 2E                     JMP 0x006de503
LAB_006de4d5:
006DE4D5  3B 85 08 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff08]
006DE4DB  7C 08                     JL 0x006de4e5
006DE4DD  8A 86 3B 04 00 00         MOV AL,byte ptr [ESI + 0x43b]
006DE4E3  EB 1E                     JMP 0x006de503
LAB_006de4e5:
006DE4E5  3B 85 04 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff04]
006DE4EB  7C 08                     JL 0x006de4f5
006DE4ED  8A 86 3C 04 00 00         MOV AL,byte ptr [ESI + 0x43c]
006DE4F3  EB 0E                     JMP 0x006de503
LAB_006de4f5:
006DE4F5  3B 85 00 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff00]
006DE4FB  7C 08                     JL 0x006de505
006DE4FD  8A 86 3D 04 00 00         MOV AL,byte ptr [ESI + 0x43d]
FUN_006ddd50::cf_common_join_006DE503:
006DE503  88 02                     MOV byte ptr [EDX],AL
LAB_006de505:
006DE505  42                        INC EDX
006DE506  83 C7 02                  ADD EDI,0x2
006DE509  41                        INC ECX
006DE50A  3B 4E 28                  CMP ECX,dword ptr [ESI + 0x28]
006DE50D  7C 91                     JL 0x006de4a0
LAB_006de50f:
006DE50F  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
006DE515  40                        INC EAX
006DE516  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
006DE51C  3B 46 2C                  CMP EAX,dword ptr [ESI + 0x2c]
006DE51F  0F 8C 72 FF FF FF         JL 0x006de497
006DE525  EB 29                     JMP 0x006de550
LAB_006de550:
006DE550  8D A5 D8 FE FF FF         LEA ESP,[EBP + 0xfffffed8]
006DE556  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006DE559  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006DE560  5F                        POP EDI
006DE561  5E                        POP ESI
006DE562  5B                        POP EBX
006DE563  8B E5                     MOV ESP,EBP
006DE565  5D                        POP EBP
006DE566  C3                        RET
