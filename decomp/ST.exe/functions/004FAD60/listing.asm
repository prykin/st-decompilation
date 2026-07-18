FUN_004fad60:
004FAD60  55                        PUSH EBP
004FAD61  8B EC                     MOV EBP,ESP
004FAD63  53                        PUSH EBX
004FAD64  56                        PUSH ESI
004FAD65  8B F1                     MOV ESI,ECX
004FAD67  57                        PUSH EDI
004FAD68  66 83 BE 3F 02 00 00 02   CMP word ptr [ESI + 0x23f],0x2
004FAD70  8B 56 4C                  MOV EDX,dword ptr [ESI + 0x4c]
004FAD73  8B BE A4 00 00 00         MOV EDI,dword ptr [ESI + 0xa4]
004FAD79  8B 5E 78                  MOV EBX,dword ptr [ESI + 0x78]
004FAD7C  0F 84 A4 00 00 00         JZ 0x004fae26
004FAD82  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FAD85  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004FAD88  25 FF FF 00 00            AND EAX,0xffff
004FAD8D  81 E1 FF FF 00 00         AND ECX,0xffff
004FAD93  3B C2                     CMP EAX,EDX
004FAD95  0F 8C 8B 00 00 00         JL 0x004fae26
004FAD9B  03 DA                     ADD EBX,EDX
004FAD9D  3B C3                     CMP EAX,EBX
004FAD9F  0F 8D 81 00 00 00         JGE 0x004fae26
004FADA5  3B CF                     CMP ECX,EDI
004FADA7  7C 7D                     JL 0x004fae26
004FADA9  8B 9E D0 00 00 00         MOV EBX,dword ptr [ESI + 0xd0]
004FADAF  03 DF                     ADD EBX,EDI
004FADB1  3B CB                     CMP ECX,EBX
004FADB3  7D 71                     JGE 0x004fae26
004FADB5  8B 1D 84 87 80 00         MOV EBX,dword ptr [0x00808784]
004FADBB  85 DB                     TEST EBX,EBX
004FADBD  75 67                     JNZ 0x004fae26
004FADBF  8B 1D 88 87 80 00         MOV EBX,dword ptr [0x00808788]
004FADC5  85 DB                     TEST EBX,EBX
004FADC7  75 5D                     JNZ 0x004fae26
004FADC9  8B 1D 8C 87 80 00         MOV EBX,dword ptr [0x0080878c]
004FADCF  85 DB                     TEST EBX,EBX
004FADD1  75 53                     JNZ 0x004fae26
004FADD3  8B 1D 90 87 80 00         MOV EBX,dword ptr [0x00808790]
004FADD9  85 DB                     TEST EBX,EBX
004FADDB  75 49                     JNZ 0x004fae26
004FADDD  8D 5D 0C                  LEA EBX,[EBP + 0xc]
004FADE0  2B CF                     SUB ECX,EDI
004FADE2  53                        PUSH EBX
004FADE3  8D 5D 08                  LEA EBX,[EBP + 0x8]
004FADE6  2B C2                     SUB EAX,EDX
004FADE8  83 E9 07                  SUB ECX,0x7
004FADEB  53                        PUSH EBX
004FADEC  83 E8 05                  SUB EAX,0x5
004FADEF  51                        PUSH ECX
004FADF0  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004FADF6  50                        PUSH EAX
004FADF7  E8 C4 BA 1E 00            CALL 0x006e68c0
004FADFC  85 C0                     TEST EAX,EAX
004FADFE  74 26                     JZ 0x004fae26
004FAE00  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004FAE03  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004FAE06  33 D2                     XOR EDX,EDX
004FAE08  C7 86 3C 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x13c],0x1
004FAE12  8A 15 49 73 80 00         MOV DL,byte ptr [0x00807349]
004FAE18  50                        PUSH EAX
004FAE19  51                        PUSH ECX
004FAE1A  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
004FAE20  52                        PUSH EDX
004FAE21  E8 F3 66 F0 FF            CALL 0x00401519
LAB_004fae26:
004FAE26  5F                        POP EDI
004FAE27  5E                        POP ESI
004FAE28  5B                        POP EBX
004FAE29  5D                        POP EBP
004FAE2A  C2 08 00                  RET 0x8
