FUN_006bac60:
006BAC60  55                        PUSH EBP
006BAC61  8B EC                     MOV EBP,ESP
006BAC63  6A FF                     PUSH -0x1
006BAC65  68 28 D9 79 00            PUSH 0x79d928
006BAC6A  68 64 D9 72 00            PUSH 0x72d964
006BAC6F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006BAC75  50                        PUSH EAX
006BAC76  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006BAC7D  81 EC 88 00 00 00         SUB ESP,0x88
006BAC83  53                        PUSH EBX
006BAC84  56                        PUSH ESI
006BAC85  57                        PUSH EDI
006BAC86  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006BAC89  33 DB                     XOR EBX,EBX
006BAC8B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006BAC8E  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006BAC91  A9 00 00 00 20            TEST EAX,0x20000000
006BAC96  0F 85 4B 06 00 00         JNZ 0x006bb2e7
006BAC9C  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006BAC9F  F6 C5 01                  TEST CH,0x1
006BACA2  0F 85 3F 06 00 00         JNZ 0x006bb2e7
006BACA8  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
006BACAB  85 C9                     TEST ECX,ECX
006BACAD  0F 84 34 06 00 00         JZ 0x006bb2e7
006BACB3  A9 00 00 00 04            TEST EAX,0x4000000
006BACB8  74 0D                     JZ 0x006bacc7
006BACBA  8D 86 F0 04 00 00         LEA EAX,[ESI + 0x4f0]
006BACC0  50                        PUSH EAX
006BACC1  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006bacc7:
006BACC7  F7 46 08 00 00 00 03      TEST dword ptr [ESI + 0x8],0x3000000
006BACCE  0F 85 D0 05 00 00         JNZ 0x006bb2a4
006BACD4  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006BACD7  85 C0                     TEST EAX,EAX
006BACD9  75 06                     JNZ 0x006bace1
006BACDB  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
006BACDE  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_006bace1:
006BACE1  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006BACE4  85 FF                     TEST EDI,EDI
006BACE6  75 03                     JNZ 0x006baceb
006BACE8  8B 7E 1C                  MOV EDI,dword ptr [ESI + 0x1c]
LAB_006baceb:
006BACEB  A1 C8 4E 85 00            MOV EAX,[0x00854ec8]
006BACF0  85 C0                     TEST EAX,EAX
006BACF2  75 33                     JNZ 0x006bad27
006BACF4  C7 05 C8 4E 85 00 01 00 00 00  MOV dword ptr [0x00854ec8],0x1
006BACFE  8B 86 E8 04 00 00         MOV EAX,dword ptr [ESI + 0x4e8]
006BAD04  85 C0                     TEST EAX,EAX
006BAD06  74 15                     JZ 0x006bad1d
006BAD08  6A 01                     PUSH 0x1
006BAD0A  8B 96 EC 04 00 00         MOV EDX,dword ptr [ESI + 0x4ec]
006BAD10  52                        PUSH EDX
006BAD11  FF D0                     CALL EAX
006BAD13  8B D8                     MOV EBX,EAX
006BAD15  85 DB                     TEST EBX,EBX
006BAD17  0F 85 95 05 00 00         JNZ 0x006bb2b2
LAB_006bad1d:
006BAD1D  C7 05 C8 4E 85 00 00 00 00 00  MOV dword ptr [0x00854ec8],0x0
LAB_006bad27:
006BAD27  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006BAD2A  03 45 14                  ADD EAX,dword ptr [EBP + 0x14]
006BAD2D  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006BAD30  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006BAD33  03 4D 18                  ADD ECX,dword ptr [EBP + 0x18]
006BAD36  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006BAD39  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006BAD3C  03 C2                     ADD EAX,EDX
006BAD3E  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006BAD41  03 CF                     ADD ECX,EDI
006BAD43  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
006BAD46  33 C0                     XOR EAX,EAX
006BAD48  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006BAD4B  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006BAD4E  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006BAD51  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006BAD54  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
006BAD57  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006BAD5A  8D 55 D8                  LEA EDX,[EBP + -0x28]
006BAD5D  52                        PUSH EDX
006BAD5E  8D 45 B8                  LEA EAX,[EBP + -0x48]
006BAD61  50                        PUSH EAX
006BAD62  8D 8D 74 FF FF FF         LEA ECX,[EBP + 0xffffff74]
006BAD68  51                        PUSH ECX
006BAD69  FF 15 50 BE 85 00         CALL dword ptr [0x0085be50]
006BAD6F  85 C0                     TEST EAX,EAX
006BAD71  0F 84 3B 05 00 00         JZ 0x006bb2b2
006BAD77  8B 9D 7C FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff7c]
006BAD7D  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
006BAD83  2B D8                     SUB EBX,EAX
006BAD85  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006BAD88  8B 7D 80                  MOV EDI,dword ptr [EBP + -0x80]
006BAD8B  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006BAD91  2B F9                     SUB EDI,ECX
006BAD93  89 7D 20                  MOV dword ptr [EBP + 0x20],EDI
006BAD96  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006BAD99  03 C2                     ADD EAX,EDX
006BAD9B  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
006BAD9E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006BADA1  03 C8                     ADD ECX,EAX
006BADA3  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
006BADA6  8D 4D A8                  LEA ECX,[EBP + -0x58]
006BADA9  51                        PUSH ECX
006BADAA  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006BADAD  52                        PUSH EDX
006BADAE  FF 15 54 BE 85 00         CALL dword ptr [0x0085be54]
006BADB4  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006BADB7  03 C3                     ADD EAX,EBX
006BADB9  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006BADBC  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
006BADBF  03 CF                     ADD ECX,EDI
006BADC1  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
006BADC4  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
006BADC7  3B 56 20                  CMP EDX,dword ptr [ESI + 0x20]
006BADCA  0F 84 67 04 00 00         JZ 0x006bb237
006BADD0  33 FF                     XOR EDI,EDI
006BADD2  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
006BADD5  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
006BADD8  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006BADDB  8B 08                     MOV ECX,dword ptr [EAX]
006BADDD  8D 55 D4                  LEA EDX,[EBP + -0x2c]
006BADE0  52                        PUSH EDX
006BADE1  57                        PUSH EDI
006BADE2  8D 55 A8                  LEA EDX,[EBP + -0x58]
006BADE5  52                        PUSH EDX
006BADE6  50                        PUSH EAX
006BADE7  FF 51 0C                  CALL dword ptr [ECX + 0xc]
006BADEA  3B C7                     CMP EAX,EDI
006BADEC  75 7F                     JNZ 0x006bae6d
006BADEE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006BADF1  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006BADF4  83 C0 03                  ADD EAX,0x3
006BADF7  24 FC                     AND AL,0xfc
006BADF9  E8 42 2C 07 00            CALL 0x0072da40
006BADFE  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006BAE01  8B FC                     MOV EDI,ESP
006BAE03  89 7D 9C                  MOV dword ptr [EBP + -0x64],EDI
006BAE06  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006BAE0D  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006BAE10  8B 08                     MOV ECX,dword ptr [EAX]
006BAE12  8D 55 D4                  LEA EDX,[EBP + -0x2c]
006BAE15  52                        PUSH EDX
006BAE16  57                        PUSH EDI
006BAE17  8D 55 A8                  LEA EDX,[EBP + -0x58]
006BAE1A  52                        PUSH EDX
006BAE1B  50                        PUSH EAX
006BAE1C  FF 51 0C                  CALL dword ptr [ECX + 0xc]
006BAE1F  8B D8                     MOV EBX,EAX
006BAE21  85 DB                     TEST EBX,EBX
006BAE23  75 48                     JNZ 0x006bae6d
006BAE25  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006BAE28  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006BAE2B  85 C0                     TEST EAX,EAX
006BAE2D  0F 8E 7F 04 00 00         JLE 0x006bb2b2
006BAE33  83 C7 20                  ADD EDI,0x20
006BAE36  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
006BAE39  83 F8 01                  CMP EAX,0x1
006BAE3C  75 2F                     JNZ 0x006bae6d
006BAE3E  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006BAE41  8B CF                     MOV ECX,EDI
006BAE43  3B 01                     CMP EAX,dword ptr [ECX]
006BAE45  75 26                     JNZ 0x006bae6d
006BAE47  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006BAE4A  8B C7                     MOV EAX,EDI
006BAE4C  3B 50 08                  CMP EDX,dword ptr [EAX + 0x8]
006BAE4F  75 1C                     JNZ 0x006bae6d
006BAE51  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
006BAE54  8B D7                     MOV EDX,EDI
006BAE56  3B 4A 04                  CMP ECX,dword ptr [EDX + 0x4]
006BAE59  75 12                     JNZ 0x006bae6d
006BAE5B  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006BAE5E  8B CF                     MOV ECX,EDI
006BAE60  3B 41 0C                  CMP EAX,dword ptr [ECX + 0xc]
006BAE63  75 08                     JNZ 0x006bae6d
006BAE65  33 C0                     XOR EAX,EAX
006BAE67  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006BAE6A  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
LAB_006bae6d:
006BAE6D  33 FF                     XOR EDI,EDI
006BAE6F  8D 55 A8                  LEA EDX,[EBP + -0x58]
006BAE72  52                        PUSH EDX
006BAE73  8D 85 70 FF FF FF         LEA EAX,[EBP + 0xffffff70]
006BAE79  50                        PUSH EAX
006BAE7A  8D 8D 6C FF FF FF         LEA ECX,[EBP + 0xffffff6c]
006BAE80  51                        PUSH ECX
006BAE81  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
006BAE84  52                        PUSH EDX
006BAE85  E8 46 10 00 00            CALL 0x006bbed0
006BAE8A  8B D8                     MOV EBX,EAX
006BAE8C  85 DB                     TEST EBX,EBX
006BAE8E  74 6C                     JZ 0x006baefc
LAB_006bae90:
006BAE90  81 FB C2 01 76 88         CMP EBX,0x887601c2
006BAE96  75 25                     JNZ 0x006baebd
006BAE98  56                        PUSH ESI
006BAE99  E8 A2 3D 01 00            CALL 0x006cec40
006BAE9E  EB 35                     JMP 0x006baed5
LAB_006baebd:
006BAEBD  81 FB A0 00 76 88         CMP EBX,0x887600a0
006BAEC3  74 08                     JZ 0x006baecd
006BAEC5  81 FB AE 01 76 88         CMP EBX,0x887601ae
006BAECB  75 2F                     JNZ 0x006baefc
LAB_006baecd:
006BAECD  6A 02                     PUSH 0x2
006BAECF  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006baed5:
006BAED5  47                        INC EDI
006BAED6  83 FF 0A                  CMP EDI,0xa
006BAED9  7D 21                     JGE 0x006baefc
006BAEDB  8D 45 A8                  LEA EAX,[EBP + -0x58]
006BAEDE  50                        PUSH EAX
006BAEDF  8D 8D 70 FF FF FF         LEA ECX,[EBP + 0xffffff70]
006BAEE5  51                        PUSH ECX
006BAEE6  8D 95 6C FF FF FF         LEA EDX,[EBP + 0xffffff6c]
006BAEEC  52                        PUSH EDX
006BAEED  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006BAEF0  50                        PUSH EAX
006BAEF1  E8 DA 0F 00 00            CALL 0x006bbed0
006BAEF6  8B D8                     MOV EBX,EAX
006BAEF8  85 DB                     TEST EBX,EBX
006BAEFA  75 94                     JNZ 0x006bae90
LAB_006baefc:
006BAEFC  81 FB A0 00 76 88         CMP EBX,0x887600a0
006BAF02  0F 84 98 03 00 00         JZ 0x006bb2a0
006BAF08  81 FB AE 01 76 88         CMP EBX,0x887601ae
006BAF0E  0F 84 8C 03 00 00         JZ 0x006bb2a0
006BAF14  85 DB                     TEST EBX,EBX
006BAF16  0F 85 96 03 00 00         JNZ 0x006bb2b2
006BAF1C  56                        PUSH ESI
006BAF1D  E8 8E 09 00 00            CALL 0x006bb8b0
006BAF22  8B D8                     MOV EBX,EAX
006BAF24  89 5D C8                  MOV dword ptr [EBP + -0x38],EBX
006BAF27  85 DB                     TEST EBX,EBX
006BAF29  0F 85 F8 02 00 00         JNZ 0x006bb227
006BAF2F  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
006BAF36  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006BAF39  85 C0                     TEST EAX,EAX
006BAF3B  0F 84 93 01 00 00         JZ 0x006bb0d4
006BAF41  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
006BAF44  89 5D 84                  MOV dword ptr [EBP + -0x7c],EBX
LAB_006baf47:
006BAF47  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
006BAF4A  3B 4D D0                  CMP ECX,dword ptr [EBP + -0x30]
006BAF4D  0F 8D AD 02 00 00         JGE 0x006bb200
006BAF53  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
006BAF56  52                        PUSH EDX
006BAF57  8D 45 A8                  LEA EAX,[EBP + -0x58]
006BAF5A  50                        PUSH EAX
006BAF5B  8D 4D 88                  LEA ECX,[EBP + -0x78]
006BAF5E  51                        PUSH ECX
006BAF5F  FF 15 50 BE 85 00         CALL dword ptr [0x0085be50]
006BAF65  85 C0                     TEST EAX,EAX
006BAF67  0F 84 5B 01 00 00         JZ 0x006bb0c8
006BAF6D  8B 7D 88                  MOV EDI,dword ptr [EBP + -0x78]
006BAF70  8B C7                     MOV EAX,EDI
006BAF72  2B 45 A8                  SUB EAX,dword ptr [EBP + -0x58]
006BAF75  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
006BAF7B  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
006BAF81  03 C2                     ADD EAX,EDX
006BAF83  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
006BAF86  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
006BAF89  8B C2                     MOV EAX,EDX
006BAF8B  2B 45 AC                  SUB EAX,dword ptr [EBP + -0x54]
006BAF8E  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006BAF94  03 C8                     ADD ECX,EAX
006BAF96  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
006BAF99  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
006BAF9C  2B CF                     SUB ECX,EDI
006BAF9E  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006BAFA1  8B 7D 94                  MOV EDI,dword ptr [EBP + -0x6c]
006BAFA4  2B FA                     SUB EDI,EDX
006BAFA6  89 7D 20                  MOV dword ptr [EBP + 0x20],EDI
006BAFA9  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
006BAFAC  83 C2 F8                  ADD EDX,-0x8
006BAFAF  83 FA 18                  CMP EDX,0x18
006BAFB2  0F 87 10 01 00 00         JA 0x006bb0c8
006BAFB8  33 DB                     XOR EBX,EBX
006BAFBA  8A 9A 18 B3 6B 00         MOV BL,byte ptr [EDX + 0x6bb318]
switchD_006bafc0::switchD:
006BAFC0  FF 24 9D 04 B3 6B 00      JMP dword ptr [EBX*0x4 + 0x6bb304]
switchD_006bafc0::caseD_8:
006BAFC7  8B 96 78 04 00 00         MOV EDX,dword ptr [ESI + 0x478]
006BAFCD  57                        PUSH EDI
006BAFCE  51                        PUSH ECX
006BAFCF  52                        PUSH EDX
006BAFD0  0F AF 55 A0               IMUL EDX,dword ptr [EBP + -0x60]
006BAFD4  03 96 74 04 00 00         ADD EDX,dword ptr [ESI + 0x474]
006BAFDA  03 55 A4                  ADD EDX,dword ptr [EBP + -0x5c]
006BAFDD  52                        PUSH EDX
006BAFDE  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006BAFE4  51                        PUSH ECX
006BAFE5  0F AF C1                  IMUL EAX,ECX
006BAFE8  2B 45 A8                  SUB EAX,dword ptr [EBP + -0x58]
006BAFEB  03 45 88                  ADD EAX,dword ptr [EBP + -0x78]
006BAFEE  03 85 6C FF FF FF         ADD EAX,dword ptr [EBP + 0xffffff6c]
006BAFF4  50                        PUSH EAX
006BAFF5  E8 66 3A 01 00            CALL 0x006cea60
006BAFFA  E9 C6 00 00 00            JMP 0x006bb0c5
switchD_006bafc0::caseD_10:
006BAFFF  8B 96 78 04 00 00         MOV EDX,dword ptr [ESI + 0x478]
006BB005  8B 9E C0 04 00 00         MOV EBX,dword ptr [ESI + 0x4c0]
006BB00B  53                        PUSH EBX
006BB00C  57                        PUSH EDI
006BB00D  51                        PUSH ECX
006BB00E  52                        PUSH EDX
006BB00F  0F AF 55 A0               IMUL EDX,dword ptr [EBP + -0x60]
006BB013  03 96 74 04 00 00         ADD EDX,dword ptr [ESI + 0x474]
006BB019  03 55 A4                  ADD EDX,dword ptr [EBP + -0x5c]
006BB01C  52                        PUSH EDX
006BB01D  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006BB023  51                        PUSH ECX
006BB024  0F AF C1                  IMUL EAX,ECX
006BB027  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
006BB02D  03 D0                     ADD EDX,EAX
006BB02F  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
006BB035  8D 0C 42                  LEA ECX,[EDX + EAX*0x2]
006BB038  51                        PUSH ECX
006BB039  E8 72 55 01 00            CALL 0x006d05b0
006BB03E  E9 82 00 00 00            JMP 0x006bb0c5
switchD_006bafc0::caseD_18:
006BB043  8B 96 78 04 00 00         MOV EDX,dword ptr [ESI + 0x478]
006BB049  8B 9E C0 04 00 00         MOV EBX,dword ptr [ESI + 0x4c0]
006BB04F  53                        PUSH EBX
006BB050  57                        PUSH EDI
006BB051  51                        PUSH ECX
006BB052  52                        PUSH EDX
006BB053  0F AF 55 A0               IMUL EDX,dword ptr [EBP + -0x60]
006BB057  03 96 74 04 00 00         ADD EDX,dword ptr [ESI + 0x474]
006BB05D  03 55 A4                  ADD EDX,dword ptr [EBP + -0x5c]
006BB060  52                        PUSH EDX
006BB061  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006BB067  51                        PUSH ECX
006BB068  0F AF C1                  IMUL EAX,ECX
006BB06B  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
006BB071  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
006BB074  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
006BB07A  03 C8                     ADD ECX,EAX
006BB07C  03 D1                     ADD EDX,ECX
006BB07E  52                        PUSH EDX
006BB07F  E8 CC 89 01 00            CALL 0x006d3a50
006BB084  EB 3F                     JMP 0x006bb0c5
switchD_006bafc0::caseD_20:
006BB086  8B 96 78 04 00 00         MOV EDX,dword ptr [ESI + 0x478]
006BB08C  8B 9E C0 04 00 00         MOV EBX,dword ptr [ESI + 0x4c0]
006BB092  53                        PUSH EBX
006BB093  57                        PUSH EDI
006BB094  51                        PUSH ECX
006BB095  52                        PUSH EDX
006BB096  0F AF 55 A0               IMUL EDX,dword ptr [EBP + -0x60]
006BB09A  03 96 74 04 00 00         ADD EDX,dword ptr [ESI + 0x474]
006BB0A0  03 55 A4                  ADD EDX,dword ptr [EBP + -0x5c]
006BB0A3  52                        PUSH EDX
006BB0A4  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006BB0AA  51                        PUSH ECX
006BB0AB  0F AF C1                  IMUL EAX,ECX
006BB0AE  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
006BB0B4  03 D0                     ADD EDX,EAX
006BB0B6  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
006BB0BC  8D 0C 82                  LEA ECX,[EDX + EAX*0x4]
006BB0BF  51                        PUSH ECX
006BB0C0  E8 2B 89 01 00            CALL 0x006d39f0
switchD_006bafc0::caseD_9:
006BB0C5  8B 5D C8                  MOV EBX,dword ptr [EBP + -0x38]
switchD_006bafc0::default:
006BB0C8  FF 45 84                  INC dword ptr [EBP + -0x7c]
006BB0CB  83 45 98 10               ADD dword ptr [EBP + -0x68],0x10
006BB0CF  E9 73 FE FF FF            JMP 0x006baf47
LAB_006bb0d4:
006BB0D4  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
006BB0D7  83 C0 F8                  ADD EAX,-0x8
006BB0DA  83 F8 18                  CMP EAX,0x18
006BB0DD  0F 87 1D 01 00 00         JA 0x006bb200
006BB0E3  33 D2                     XOR EDX,EDX
006BB0E5  8A 90 48 B3 6B 00         MOV DL,byte ptr [EAX + 0x6bb348]
switchD_006bb0eb::switchD:
006BB0EB  FF 24 95 34 B3 6B 00      JMP dword ptr [EDX*0x4 + 0x6bb334]
switchD_006bb0eb::caseD_8:
006BB0F2  8B 86 78 04 00 00         MOV EAX,dword ptr [ESI + 0x478]
006BB0F8  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006BB0FB  51                        PUSH ECX
006BB0FC  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006BB0FF  52                        PUSH EDX
006BB100  50                        PUSH EAX
006BB101  0F AF 85 78 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff78]
006BB108  03 86 74 04 00 00         ADD EAX,dword ptr [ESI + 0x474]
006BB10E  03 85 74 FF FF FF         ADD EAX,dword ptr [EBP + 0xffffff74]
006BB114  50                        PUSH EAX
006BB115  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
006BB11B  50                        PUSH EAX
006BB11C  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
006BB122  51                        PUSH ECX
006BB123  E8 38 39 01 00            CALL 0x006cea60
006BB128  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006BB12F  E9 ED 00 00 00            JMP 0x006bb221
switchD_006bb0eb::caseD_10:
006BB134  8B 86 78 04 00 00         MOV EAX,dword ptr [ESI + 0x478]
006BB13A  8B 96 C0 04 00 00         MOV EDX,dword ptr [ESI + 0x4c0]
006BB140  52                        PUSH EDX
006BB141  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006BB144  51                        PUSH ECX
006BB145  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006BB148  52                        PUSH EDX
006BB149  50                        PUSH EAX
006BB14A  0F AF 85 78 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff78]
006BB151  03 86 74 04 00 00         ADD EAX,dword ptr [ESI + 0x474]
006BB157  03 85 74 FF FF FF         ADD EAX,dword ptr [EBP + 0xffffff74]
006BB15D  50                        PUSH EAX
006BB15E  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
006BB164  50                        PUSH EAX
006BB165  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
006BB16B  51                        PUSH ECX
006BB16C  E8 3F 54 01 00            CALL 0x006d05b0
006BB171  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006BB178  E9 A4 00 00 00            JMP 0x006bb221
switchD_006bb0eb::caseD_18:
006BB17D  8B 86 78 04 00 00         MOV EAX,dword ptr [ESI + 0x478]
006BB183  8B 96 C0 04 00 00         MOV EDX,dword ptr [ESI + 0x4c0]
006BB189  52                        PUSH EDX
006BB18A  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006BB18D  51                        PUSH ECX
006BB18E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006BB191  52                        PUSH EDX
006BB192  50                        PUSH EAX
006BB193  0F AF 85 78 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff78]
006BB19A  03 86 74 04 00 00         ADD EAX,dword ptr [ESI + 0x474]
006BB1A0  03 85 74 FF FF FF         ADD EAX,dword ptr [EBP + 0xffffff74]
006BB1A6  50                        PUSH EAX
006BB1A7  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
006BB1AD  50                        PUSH EAX
006BB1AE  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
006BB1B4  51                        PUSH ECX
006BB1B5  E8 96 88 01 00            CALL 0x006d3a50
006BB1BA  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006BB1C1  EB 5E                     JMP 0x006bb221
switchD_006bb0eb::caseD_20:
006BB1C3  8B 86 78 04 00 00         MOV EAX,dword ptr [ESI + 0x478]
006BB1C9  8B 96 C0 04 00 00         MOV EDX,dword ptr [ESI + 0x4c0]
006BB1CF  52                        PUSH EDX
006BB1D0  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006BB1D3  51                        PUSH ECX
006BB1D4  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006BB1D7  52                        PUSH EDX
006BB1D8  50                        PUSH EAX
006BB1D9  0F AF 85 78 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff78]
006BB1E0  03 86 74 04 00 00         ADD EAX,dword ptr [ESI + 0x474]
006BB1E6  03 85 74 FF FF FF         ADD EAX,dword ptr [EBP + 0xffffff74]
006BB1EC  50                        PUSH EAX
006BB1ED  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
006BB1F3  50                        PUSH EAX
006BB1F4  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
006BB1FA  51                        PUSH ECX
006BB1FB  E8 F0 87 01 00            CALL 0x006d39f0
switchD_006bb0eb::caseD_9:
006BB200  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006BB207  EB 18                     JMP 0x006bb221
LAB_006bb221:
006BB221  56                        PUSH ESI
006BB222  E8 59 07 00 00            CALL 0x006bb980
LAB_006bb227:
006BB227  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006BB22A  8B 10                     MOV EDX,dword ptr [EAX]
006BB22C  6A 00                     PUSH 0x0
006BB22E  50                        PUSH EAX
006BB22F  FF 92 80 00 00 00         CALL dword ptr [EDX + 0x80]
006BB235  EB 59                     JMP 0x006bb290
LAB_006bb237:
006BB237  33 FF                     XOR EDI,EDI
LAB_006bb239:
006BB239  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006BB23C  8B 08                     MOV ECX,dword ptr [EAX]
006BB23E  6A 00                     PUSH 0x0
006BB240  68 00 00 00 01            PUSH 0x1000000
006BB245  8D 95 74 FF FF FF         LEA EDX,[EBP + 0xffffff74]
006BB24B  52                        PUSH EDX
006BB24C  8B 56 40                  MOV EDX,dword ptr [ESI + 0x40]
006BB24F  52                        PUSH EDX
006BB250  8D 55 A8                  LEA EDX,[EBP + -0x58]
006BB253  52                        PUSH EDX
006BB254  50                        PUSH EAX
006BB255  FF 51 14                  CALL dword ptr [ECX + 0x14]
006BB258  8B D8                     MOV EBX,EAX
006BB25A  85 DB                     TEST EBX,EBX
006BB25C  74 32                     JZ 0x006bb290
006BB25E  81 FB C2 01 76 88         CMP EBX,0x887601c2
006BB264  75 08                     JNZ 0x006bb26e
006BB266  56                        PUSH ESI
006BB267  E8 D4 39 01 00            CALL 0x006cec40
006BB26C  EB 1C                     JMP 0x006bb28a
LAB_006bb26e:
006BB26E  81 FB A0 00 76 88         CMP EBX,0x887600a0
006BB274  74 08                     JZ 0x006bb27e
006BB276  81 FB AE 01 76 88         CMP EBX,0x887601ae
006BB27C  75 12                     JNZ 0x006bb290
LAB_006bb27e:
006BB27E  85 FF                     TEST EDI,EDI
006BB280  75 0E                     JNZ 0x006bb290
006BB282  6A 02                     PUSH 0x2
006BB284  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006bb28a:
006BB28A  47                        INC EDI
006BB28B  83 FF 02                  CMP EDI,0x2
006BB28E  7C A9                     JL 0x006bb239
LAB_006bb290:
006BB290  81 FB A0 00 76 88         CMP EBX,0x887600a0
006BB296  74 08                     JZ 0x006bb2a0
006BB298  81 FB AE 01 76 88         CMP EBX,0x887601ae
006BB29E  75 12                     JNZ 0x006bb2b2
LAB_006bb2a0:
006BB2A0  33 DB                     XOR EBX,EBX
006BB2A2  EB 0E                     JMP 0x006bb2b2
LAB_006bb2a4:
006BB2A4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006BB2A7  50                        PUSH EAX
006BB2A8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006BB2AB  51                        PUSH ECX
006BB2AC  56                        PUSH ESI
006BB2AD  E8 BE 00 00 00            CALL 0x006bb370
LAB_006bb2b2:
006BB2B2  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006BB2B9  74 0D                     JZ 0x006bb2c8
006BB2BB  81 C6 F0 04 00 00         ADD ESI,0x4f0
006BB2C1  56                        PUSH ESI
006BB2C2  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006bb2c8:
006BB2C8  85 DB                     TEST EBX,EBX
006BB2CA  74 1B                     JZ 0x006bb2e7
006BB2CC  68 DB 03 00 00            PUSH 0x3db
006BB2D1  68 48 DC 7E 00            PUSH 0x7edc48
006BB2D6  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006BB2DC  52                        PUSH EDX
006BB2DD  53                        PUSH EBX
006BB2DE  E8 5D AB FE FF            CALL 0x006a5e40
006BB2E3  8B C3                     MOV EAX,EBX
006BB2E5  EB 02                     JMP 0x006bb2e9
LAB_006bb2e7:
006BB2E7  33 C0                     XOR EAX,EAX
LAB_006bb2e9:
006BB2E9  8D A5 5C FF FF FF         LEA ESP,[EBP + 0xffffff5c]
006BB2EF  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006BB2F2  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006BB2F9  5F                        POP EDI
006BB2FA  5E                        POP ESI
006BB2FB  5B                        POP EBX
006BB2FC  8B E5                     MOV ESP,EBP
006BB2FE  5D                        POP EBP
006BB2FF  C2 1C 00                  RET 0x1c
